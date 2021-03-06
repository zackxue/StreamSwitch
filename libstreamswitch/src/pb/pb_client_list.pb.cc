// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_client_list.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pb_client_list.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace stream_switch {

namespace {

const ::google::protobuf::Descriptor* ProtoClientListReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProtoClientListReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* ProtoClientListRep_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProtoClientListRep_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pb_5fclient_5flist_2eproto() {
  protobuf_AddDesc_pb_5fclient_5flist_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pb_client_list.proto");
  GOOGLE_CHECK(file != NULL);
  ProtoClientListReq_descriptor_ = file->message_type(0);
  static const int ProtoClientListReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListReq, start_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListReq, client_num_),
  };
  ProtoClientListReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProtoClientListReq_descriptor_,
      ProtoClientListReq::default_instance_,
      ProtoClientListReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProtoClientListReq));
  ProtoClientListRep_descriptor_ = file->message_type(1);
  static const int ProtoClientListRep_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListRep, total_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListRep, start_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListRep, client_list_),
  };
  ProtoClientListRep_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProtoClientListRep_descriptor_,
      ProtoClientListRep::default_instance_,
      ProtoClientListRep_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListRep, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoClientListRep, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProtoClientListRep));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pb_5fclient_5flist_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProtoClientListReq_descriptor_, &ProtoClientListReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProtoClientListRep_descriptor_, &ProtoClientListRep::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pb_5fclient_5flist_2eproto() {
  delete ProtoClientListReq::default_instance_;
  delete ProtoClientListReq_reflection_;
  delete ProtoClientListRep::default_instance_;
  delete ProtoClientListRep_reflection_;
}

void protobuf_AddDesc_pb_5fclient_5flist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::stream_switch::protobuf_AddDesc_pb_5fclient_5fheartbeat_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024pb_client_list.proto\022\rstream_switch\032\031p"
    "b_client_heartbeat.proto\"=\n\022ProtoClientL"
    "istReq\022\023\n\013start_index\030\001 \001(\r\022\022\n\nclient_nu"
    "m\030\002 \001(\r\"y\n\022ProtoClientListRep\022\021\n\ttotal_n"
    "um\030\001 \001(\r\022\023\n\013start_index\030\002 \001(\r\022;\n\013client_"
    "list\030@ \003(\0132&.stream_switch.ProtoClientHe"
    "artbeatReq", 250);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pb_client_list.proto", &protobuf_RegisterTypes);
  ProtoClientListReq::default_instance_ = new ProtoClientListReq();
  ProtoClientListRep::default_instance_ = new ProtoClientListRep();
  ProtoClientListReq::default_instance_->InitAsDefaultInstance();
  ProtoClientListRep::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pb_5fclient_5flist_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pb_5fclient_5flist_2eproto {
  StaticDescriptorInitializer_pb_5fclient_5flist_2eproto() {
    protobuf_AddDesc_pb_5fclient_5flist_2eproto();
  }
} static_descriptor_initializer_pb_5fclient_5flist_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProtoClientListReq::kStartIndexFieldNumber;
const int ProtoClientListReq::kClientNumFieldNumber;
#endif  // !_MSC_VER

ProtoClientListReq::ProtoClientListReq()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:stream_switch.ProtoClientListReq)
}

void ProtoClientListReq::InitAsDefaultInstance() {
}

ProtoClientListReq::ProtoClientListReq(const ProtoClientListReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:stream_switch.ProtoClientListReq)
}

void ProtoClientListReq::SharedCtor() {
  _cached_size_ = 0;
  start_index_ = 0u;
  client_num_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProtoClientListReq::~ProtoClientListReq() {
  // @@protoc_insertion_point(destructor:stream_switch.ProtoClientListReq)
  SharedDtor();
}

void ProtoClientListReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProtoClientListReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoClientListReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProtoClientListReq_descriptor_;
}

const ProtoClientListReq& ProtoClientListReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pb_5fclient_5flist_2eproto();
  return *default_instance_;
}

ProtoClientListReq* ProtoClientListReq::default_instance_ = NULL;

ProtoClientListReq* ProtoClientListReq::New() const {
  return new ProtoClientListReq;
}

void ProtoClientListReq::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ProtoClientListReq*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(start_index_, client_num_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProtoClientListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:stream_switch.ProtoClientListReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 start_index = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &start_index_)));
          set_has_start_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_client_num;
        break;
      }

      // optional uint32 client_num = 2;
      case 2: {
        if (tag == 16) {
         parse_client_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_num_)));
          set_has_client_num();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:stream_switch.ProtoClientListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:stream_switch.ProtoClientListReq)
  return false;
#undef DO_
}

void ProtoClientListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:stream_switch.ProtoClientListReq)
  // optional uint32 start_index = 1;
  if (has_start_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->start_index(), output);
  }

  // optional uint32 client_num = 2;
  if (has_client_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->client_num(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:stream_switch.ProtoClientListReq)
}

::google::protobuf::uint8* ProtoClientListReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:stream_switch.ProtoClientListReq)
  // optional uint32 start_index = 1;
  if (has_start_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->start_index(), target);
  }

  // optional uint32 client_num = 2;
  if (has_client_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->client_num(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:stream_switch.ProtoClientListReq)
  return target;
}

int ProtoClientListReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 start_index = 1;
    if (has_start_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->start_index());
    }

    // optional uint32 client_num = 2;
    if (has_client_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->client_num());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoClientListReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProtoClientListReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProtoClientListReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProtoClientListReq::MergeFrom(const ProtoClientListReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start_index()) {
      set_start_index(from.start_index());
    }
    if (from.has_client_num()) {
      set_client_num(from.client_num());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProtoClientListReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoClientListReq::CopyFrom(const ProtoClientListReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoClientListReq::IsInitialized() const {

  return true;
}

void ProtoClientListReq::Swap(ProtoClientListReq* other) {
  if (other != this) {
    std::swap(start_index_, other->start_index_);
    std::swap(client_num_, other->client_num_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProtoClientListReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProtoClientListReq_descriptor_;
  metadata.reflection = ProtoClientListReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ProtoClientListRep::kTotalNumFieldNumber;
const int ProtoClientListRep::kStartIndexFieldNumber;
const int ProtoClientListRep::kClientListFieldNumber;
#endif  // !_MSC_VER

ProtoClientListRep::ProtoClientListRep()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:stream_switch.ProtoClientListRep)
}

void ProtoClientListRep::InitAsDefaultInstance() {
}

ProtoClientListRep::ProtoClientListRep(const ProtoClientListRep& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:stream_switch.ProtoClientListRep)
}

void ProtoClientListRep::SharedCtor() {
  _cached_size_ = 0;
  total_num_ = 0u;
  start_index_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProtoClientListRep::~ProtoClientListRep() {
  // @@protoc_insertion_point(destructor:stream_switch.ProtoClientListRep)
  SharedDtor();
}

void ProtoClientListRep::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProtoClientListRep::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoClientListRep::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProtoClientListRep_descriptor_;
}

const ProtoClientListRep& ProtoClientListRep::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pb_5fclient_5flist_2eproto();
  return *default_instance_;
}

ProtoClientListRep* ProtoClientListRep::default_instance_ = NULL;

ProtoClientListRep* ProtoClientListRep::New() const {
  return new ProtoClientListRep;
}

void ProtoClientListRep::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ProtoClientListRep*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(total_num_, start_index_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  client_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProtoClientListRep::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:stream_switch.ProtoClientListRep)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 total_num = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &total_num_)));
          set_has_total_num();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_start_index;
        break;
      }

      // optional uint32 start_index = 2;
      case 2: {
        if (tag == 16) {
         parse_start_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &start_index_)));
          set_has_start_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(514)) goto parse_client_list;
        break;
      }

      // repeated .stream_switch.ProtoClientHeartbeatReq client_list = 64;
      case 64: {
        if (tag == 514) {
         parse_client_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_client_list()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(514)) goto parse_client_list;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:stream_switch.ProtoClientListRep)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:stream_switch.ProtoClientListRep)
  return false;
#undef DO_
}

void ProtoClientListRep::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:stream_switch.ProtoClientListRep)
  // optional uint32 total_num = 1;
  if (has_total_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->total_num(), output);
  }

  // optional uint32 start_index = 2;
  if (has_start_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->start_index(), output);
  }

  // repeated .stream_switch.ProtoClientHeartbeatReq client_list = 64;
  for (int i = 0; i < this->client_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      64, this->client_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:stream_switch.ProtoClientListRep)
}

::google::protobuf::uint8* ProtoClientListRep::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:stream_switch.ProtoClientListRep)
  // optional uint32 total_num = 1;
  if (has_total_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->total_num(), target);
  }

  // optional uint32 start_index = 2;
  if (has_start_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->start_index(), target);
  }

  // repeated .stream_switch.ProtoClientHeartbeatReq client_list = 64;
  for (int i = 0; i < this->client_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        64, this->client_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:stream_switch.ProtoClientListRep)
  return target;
}

int ProtoClientListRep::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 total_num = 1;
    if (has_total_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->total_num());
    }

    // optional uint32 start_index = 2;
    if (has_start_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->start_index());
    }

  }
  // repeated .stream_switch.ProtoClientHeartbeatReq client_list = 64;
  total_size += 2 * this->client_list_size();
  for (int i = 0; i < this->client_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->client_list(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoClientListRep::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProtoClientListRep* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProtoClientListRep*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProtoClientListRep::MergeFrom(const ProtoClientListRep& from) {
  GOOGLE_CHECK_NE(&from, this);
  client_list_.MergeFrom(from.client_list_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_total_num()) {
      set_total_num(from.total_num());
    }
    if (from.has_start_index()) {
      set_start_index(from.start_index());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProtoClientListRep::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoClientListRep::CopyFrom(const ProtoClientListRep& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoClientListRep::IsInitialized() const {

  return true;
}

void ProtoClientListRep::Swap(ProtoClientListRep* other) {
  if (other != this) {
    std::swap(total_num_, other->total_num_);
    std::swap(start_index_, other->start_index_);
    client_list_.Swap(&other->client_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProtoClientListRep::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProtoClientListRep_descriptor_;
  metadata.reflection = ProtoClientListRep_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace stream_switch

// @@protoc_insertion_point(global_scope)
