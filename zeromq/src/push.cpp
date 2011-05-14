/*
    Copyright (c) 2007-2011 iMatix Corporation
    Copyright (c) 2007-2011 Other contributors as noted in the AUTHORS file

    This file is part of 0MQ.

    0MQ is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    0MQ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "../include/zmq.h"

#include "push.hpp"
#include "err.hpp"
#include "pipe.hpp"

zmq::push_t::push_t (class ctx_t *parent_, uint32_t tid_) :
    socket_base_t (parent_, tid_),
    lb (this)
{
    options.type = ZMQ_PUSH;
    options.requires_in = false;
    options.requires_out = true;
}

zmq::push_t::~push_t ()
{
}

void zmq::push_t::xattach_pipes (class reader_t *inpipe_,
    class writer_t *outpipe_, const blob_t &peer_identity_)
{
    zmq_assert (!inpipe_ && outpipe_);
    lb.attach (outpipe_);
}

void zmq::push_t::process_term (int linger_)
{
    lb.terminate ();
    socket_base_t::process_term (linger_);
}

int zmq::push_t::xsend (zmq_msg_t *msg_, int flags_)
{
    return lb.send (msg_, flags_);
}

bool zmq::push_t::xhas_out ()
{
    return lb.has_out ();
}

