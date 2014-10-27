// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_media.proto

#ifndef PROTOBUF_pb_5fmedia_2eproto__INCLUDED
#define PROTOBUF_pb_5fmedia_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace stream_switch {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pb_5fmedia_2eproto();
void protobuf_AssignDesc_pb_5fmedia_2eproto();
void protobuf_ShutdownFile_pb_5fmedia_2eproto();

class ProtoMediaFrameReq;
class ProtoMediaFrameMsg;

enum ProtoMediaFrameType {
  PROTO_MEDIA_FRAME_KEY_FRAME = 0,
  PROTO_MEDIA_FRAME_DATA_FRAME = 1,
  PROTO_MEDIA_FRAME_PARAM_FRAME = 2,
  PROTO_MEDIA_FRAME_EOF_FRAME = 256
};
bool ProtoMediaFrameType_IsValid(int value);
const ProtoMediaFrameType ProtoMediaFrameType_MIN = PROTO_MEDIA_FRAME_KEY_FRAME;
const ProtoMediaFrameType ProtoMediaFrameType_MAX = PROTO_MEDIA_FRAME_EOF_FRAME;
const int ProtoMediaFrameType_ARRAYSIZE = ProtoMediaFrameType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ProtoMediaFrameType_descriptor();
inline const ::std::string& ProtoMediaFrameType_Name(ProtoMediaFrameType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ProtoMediaFrameType_descriptor(), value);
}
inline bool ProtoMediaFrameType_Parse(
    const ::std::string& name, ProtoMediaFrameType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ProtoMediaFrameType>(
    ProtoMediaFrameType_descriptor(), name, value);
}
// ===================================================================

class ProtoMediaFrameReq : public ::google::protobuf::Message {
 public:
  ProtoMediaFrameReq();
  virtual ~ProtoMediaFrameReq();

  ProtoMediaFrameReq(const ProtoMediaFrameReq& from);

  inline ProtoMediaFrameReq& operator=(const ProtoMediaFrameReq& from) {
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
  static const ProtoMediaFrameReq& default_instance();

  void Swap(ProtoMediaFrameReq* other);

  // implements Message ----------------------------------------------

  ProtoMediaFrameReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProtoMediaFrameReq& from);
  void MergeFrom(const ProtoMediaFrameReq& from);
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

  // @@protoc_insertion_point(class_scope:stream_switch.ProtoMediaFrameReq)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_pb_5fmedia_2eproto();
  friend void protobuf_AssignDesc_pb_5fmedia_2eproto();
  friend void protobuf_ShutdownFile_pb_5fmedia_2eproto();

  void InitAsDefaultInstance();
  static ProtoMediaFrameReq* default_instance_;
};
// -------------------------------------------------------------------

class ProtoMediaFrameMsg : public ::google::protobuf::Message {
 public:
  ProtoMediaFrameMsg();
  virtual ~ProtoMediaFrameMsg();

  ProtoMediaFrameMsg(const ProtoMediaFrameMsg& from);

  inline ProtoMediaFrameMsg& operator=(const ProtoMediaFrameMsg& from) {
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
  static const ProtoMediaFrameMsg& default_instance();

  void Swap(ProtoMediaFrameMsg* other);

  // implements Message ----------------------------------------------

  ProtoMediaFrameMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProtoMediaFrameMsg& from);
  void MergeFrom(const ProtoMediaFrameMsg& from);
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

  // optional int32 stream_index = 1;
  inline bool has_stream_index() const;
  inline void clear_stream_index();
  static const int kStreamIndexFieldNumber = 1;
  inline ::google::protobuf::int32 stream_index() const;
  inline void set_stream_index(::google::protobuf::int32 value);

  // optional int64 sec = 2;
  inline bool has_sec() const;
  inline void clear_sec();
  static const int kSecFieldNumber = 2;
  inline ::google::protobuf::int64 sec() const;
  inline void set_sec(::google::protobuf::int64 value);

  // optional int32 usec = 3;
  inline bool has_usec() const;
  inline void clear_usec();
  static const int kUsecFieldNumber = 3;
  inline ::google::protobuf::int32 usec() const;
  inline void set_usec(::google::protobuf::int32 value);

  // optional .stream_switch.ProtoMediaFrameType frame_type = 4;
  inline bool has_frame_type() const;
  inline void clear_frame_type();
  static const int kFrameTypeFieldNumber = 4;
  inline ::stream_switch::ProtoMediaFrameType frame_type() const;
  inline void set_frame_type(::stream_switch::ProtoMediaFrameType value);

  // optional uint32 ssrc = 5;
  inline bool has_ssrc() const;
  inline void clear_ssrc();
  static const int kSsrcFieldNumber = 5;
  inline ::google::protobuf::uint32 ssrc() const;
  inline void set_ssrc(::google::protobuf::uint32 value);

  // optional uint64 seq = 6;
  inline bool has_seq() const;
  inline void clear_seq();
  static const int kSeqFieldNumber = 6;
  inline ::google::protobuf::uint64 seq() const;
  inline void set_seq(::google::protobuf::uint64 value);

  // optional bytes data = 64;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 64;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:stream_switch.ProtoMediaFrameMsg)
 private:
  inline void set_has_stream_index();
  inline void clear_has_stream_index();
  inline void set_has_sec();
  inline void clear_has_sec();
  inline void set_has_usec();
  inline void clear_has_usec();
  inline void set_has_frame_type();
  inline void clear_has_frame_type();
  inline void set_has_ssrc();
  inline void clear_has_ssrc();
  inline void set_has_seq();
  inline void clear_has_seq();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 sec_;
  ::google::protobuf::int32 stream_index_;
  ::google::protobuf::int32 usec_;
  int frame_type_;
  ::google::protobuf::uint32 ssrc_;
  ::google::protobuf::uint64 seq_;
  ::std::string* data_;
  friend void  protobuf_AddDesc_pb_5fmedia_2eproto();
  friend void protobuf_AssignDesc_pb_5fmedia_2eproto();
  friend void protobuf_ShutdownFile_pb_5fmedia_2eproto();

  void InitAsDefaultInstance();
  static ProtoMediaFrameMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// ProtoMediaFrameReq

// -------------------------------------------------------------------

// ProtoMediaFrameMsg

// optional int32 stream_index = 1;
inline bool ProtoMediaFrameMsg::has_stream_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_stream_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProtoMediaFrameMsg::clear_has_stream_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProtoMediaFrameMsg::clear_stream_index() {
  stream_index_ = 0;
  clear_has_stream_index();
}
inline ::google::protobuf::int32 ProtoMediaFrameMsg::stream_index() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.stream_index)
  return stream_index_;
}
inline void ProtoMediaFrameMsg::set_stream_index(::google::protobuf::int32 value) {
  set_has_stream_index();
  stream_index_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.stream_index)
}

// optional int64 sec = 2;
inline bool ProtoMediaFrameMsg::has_sec() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_sec() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProtoMediaFrameMsg::clear_has_sec() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProtoMediaFrameMsg::clear_sec() {
  sec_ = GOOGLE_LONGLONG(0);
  clear_has_sec();
}
inline ::google::protobuf::int64 ProtoMediaFrameMsg::sec() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.sec)
  return sec_;
}
inline void ProtoMediaFrameMsg::set_sec(::google::protobuf::int64 value) {
  set_has_sec();
  sec_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.sec)
}

// optional int32 usec = 3;
inline bool ProtoMediaFrameMsg::has_usec() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_usec() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProtoMediaFrameMsg::clear_has_usec() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProtoMediaFrameMsg::clear_usec() {
  usec_ = 0;
  clear_has_usec();
}
inline ::google::protobuf::int32 ProtoMediaFrameMsg::usec() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.usec)
  return usec_;
}
inline void ProtoMediaFrameMsg::set_usec(::google::protobuf::int32 value) {
  set_has_usec();
  usec_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.usec)
}

// optional .stream_switch.ProtoMediaFrameType frame_type = 4;
inline bool ProtoMediaFrameMsg::has_frame_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_frame_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProtoMediaFrameMsg::clear_has_frame_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProtoMediaFrameMsg::clear_frame_type() {
  frame_type_ = 0;
  clear_has_frame_type();
}
inline ::stream_switch::ProtoMediaFrameType ProtoMediaFrameMsg::frame_type() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.frame_type)
  return static_cast< ::stream_switch::ProtoMediaFrameType >(frame_type_);
}
inline void ProtoMediaFrameMsg::set_frame_type(::stream_switch::ProtoMediaFrameType value) {
  assert(::stream_switch::ProtoMediaFrameType_IsValid(value));
  set_has_frame_type();
  frame_type_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.frame_type)
}

// optional uint32 ssrc = 5;
inline bool ProtoMediaFrameMsg::has_ssrc() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_ssrc() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProtoMediaFrameMsg::clear_has_ssrc() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProtoMediaFrameMsg::clear_ssrc() {
  ssrc_ = 0u;
  clear_has_ssrc();
}
inline ::google::protobuf::uint32 ProtoMediaFrameMsg::ssrc() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.ssrc)
  return ssrc_;
}
inline void ProtoMediaFrameMsg::set_ssrc(::google::protobuf::uint32 value) {
  set_has_ssrc();
  ssrc_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.ssrc)
}

// optional uint64 seq = 6;
inline bool ProtoMediaFrameMsg::has_seq() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_seq() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ProtoMediaFrameMsg::clear_has_seq() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ProtoMediaFrameMsg::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::uint64 ProtoMediaFrameMsg::seq() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.seq)
  return seq_;
}
inline void ProtoMediaFrameMsg::set_seq(::google::protobuf::uint64 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.seq)
}

// optional bytes data = 64;
inline bool ProtoMediaFrameMsg::has_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ProtoMediaFrameMsg::set_has_data() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ProtoMediaFrameMsg::clear_has_data() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ProtoMediaFrameMsg::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& ProtoMediaFrameMsg::data() const {
  // @@protoc_insertion_point(field_get:stream_switch.ProtoMediaFrameMsg.data)
  return *data_;
}
inline void ProtoMediaFrameMsg::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:stream_switch.ProtoMediaFrameMsg.data)
}
inline void ProtoMediaFrameMsg::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:stream_switch.ProtoMediaFrameMsg.data)
}
inline void ProtoMediaFrameMsg::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:stream_switch.ProtoMediaFrameMsg.data)
}
inline ::std::string* ProtoMediaFrameMsg::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:stream_switch.ProtoMediaFrameMsg.data)
  return data_;
}
inline ::std::string* ProtoMediaFrameMsg::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ProtoMediaFrameMsg::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:stream_switch.ProtoMediaFrameMsg.data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace stream_switch

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::stream_switch::ProtoMediaFrameType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::stream_switch::ProtoMediaFrameType>() {
  return ::stream_switch::ProtoMediaFrameType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pb_5fmedia_2eproto__INCLUDED