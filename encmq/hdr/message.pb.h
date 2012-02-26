// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class envelope;

// ===================================================================

class envelope : public ::google::protobuf::Message {
 public:
  envelope();
  virtual ~envelope();
  
  envelope(const envelope& from);
  
  inline envelope& operator=(const envelope& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const envelope& default_instance();
  
  void Swap(envelope* other);
  
  // implements Message ----------------------------------------------
  
  envelope* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const envelope& from);
  void MergeFrom(const envelope& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string msg_type = 1;
  inline bool has_msg_type() const;
  inline void clear_msg_type();
  static const int kMsgTypeFieldNumber = 1;
  inline const ::std::string& msg_type() const;
  inline void set_msg_type(const ::std::string& value);
  inline void set_msg_type(const char* value);
  inline void set_msg_type(const char* value, size_t size);
  inline ::std::string* mutable_msg_type();
  inline ::std::string* release_msg_type();
  
  // required uint32 msg_size = 2;
  inline bool has_msg_size() const;
  inline void clear_msg_size();
  static const int kMsgSizeFieldNumber = 2;
  inline ::google::protobuf::uint32 msg_size() const;
  inline void set_msg_size(::google::protobuf::uint32 value);
  
  // optional bytes msg_data = 3;
  inline bool has_msg_data() const;
  inline void clear_msg_data();
  static const int kMsgDataFieldNumber = 3;
  inline const ::std::string& msg_data() const;
  inline void set_msg_data(const ::std::string& value);
  inline void set_msg_data(const char* value);
  inline void set_msg_data(const void* value, size_t size);
  inline ::std::string* mutable_msg_data();
  inline ::std::string* release_msg_data();
  
  // optional bytes mac = 4;
  inline bool has_mac() const;
  inline void clear_mac();
  static const int kMacFieldNumber = 4;
  inline const ::std::string& mac() const;
  inline void set_mac(const ::std::string& value);
  inline void set_mac(const char* value);
  inline void set_mac(const void* value, size_t size);
  inline ::std::string* mutable_mac();
  inline ::std::string* release_mac();
  
  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(envelope)
  // @@protoc_insertion_point(class_scope:message.envelope)
 private:
  inline void set_has_msg_type();
  inline void clear_has_msg_type();
  inline void set_has_msg_size();
  inline void clear_has_msg_size();
  inline void set_has_msg_data();
  inline void clear_has_msg_data();
  inline void set_has_mac();
  inline void clear_has_mac();
  
  ::google::protobuf::internal::ExtensionSet _extensions_;
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* msg_type_;
  ::std::string* msg_data_;
  ::std::string* mac_;
  ::google::protobuf::uint32 msg_size_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_message_2eproto();
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();
  
  void InitAsDefaultInstance();
  static envelope* default_instance_;
};
// ===================================================================

static const int kKeyFieldNumber = 100;
extern ::google::protobuf::internal::ExtensionIdentifier< ::message::envelope,
    ::google::protobuf::internal::StringTypeTraits, 12, false >
  key;

// ===================================================================

// envelope

// required string msg_type = 1;
inline bool envelope::has_msg_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void envelope::set_has_msg_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void envelope::clear_has_msg_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void envelope::clear_msg_type() {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    msg_type_->clear();
  }
  clear_has_msg_type();
}
inline const ::std::string& envelope::msg_type() const {
  return *msg_type_;
}
inline void envelope::set_msg_type(const ::std::string& value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void envelope::set_msg_type(const char* value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void envelope::set_msg_type(const char* value, size_t size) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* envelope::mutable_msg_type() {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  return msg_type_;
}
inline ::std::string* envelope::release_msg_type() {
  clear_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_type_;
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 msg_size = 2;
inline bool envelope::has_msg_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void envelope::set_has_msg_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void envelope::clear_has_msg_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void envelope::clear_msg_size() {
  msg_size_ = 0u;
  clear_has_msg_size();
}
inline ::google::protobuf::uint32 envelope::msg_size() const {
  return msg_size_;
}
inline void envelope::set_msg_size(::google::protobuf::uint32 value) {
  set_has_msg_size();
  msg_size_ = value;
}

// optional bytes msg_data = 3;
inline bool envelope::has_msg_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void envelope::set_has_msg_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void envelope::clear_has_msg_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void envelope::clear_msg_data() {
  if (msg_data_ != &::google::protobuf::internal::kEmptyString) {
    msg_data_->clear();
  }
  clear_has_msg_data();
}
inline const ::std::string& envelope::msg_data() const {
  return *msg_data_;
}
inline void envelope::set_msg_data(const ::std::string& value) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(value);
}
inline void envelope::set_msg_data(const char* value) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(value);
}
inline void envelope::set_msg_data(const void* value, size_t size) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* envelope::mutable_msg_data() {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  return msg_data_;
}
inline ::std::string* envelope::release_msg_data() {
  clear_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_data_;
    msg_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bytes mac = 4;
inline bool envelope::has_mac() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void envelope::set_has_mac() {
  _has_bits_[0] |= 0x00000008u;
}
inline void envelope::clear_has_mac() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void envelope::clear_mac() {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    mac_->clear();
  }
  clear_has_mac();
}
inline const ::std::string& envelope::mac() const {
  return *mac_;
}
inline void envelope::set_mac(const ::std::string& value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void envelope::set_mac(const char* value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void envelope::set_mac(const void* value, size_t size) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* envelope::mutable_mac() {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  return mac_;
}
inline ::std::string* envelope::release_mac() {
  clear_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mac_;
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
