// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_stream_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pb_stream_info.pb.h"

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

const ::google::protobuf::Descriptor* ProtoStreamInfoMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProtoStreamInfoMsg_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ProtoSourceStreamState_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_pb_5fstream_5finfo_2eproto() {
  protobuf_AddDesc_pb_5fstream_5finfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pb_stream_info.proto");
  GOOGLE_CHECK(file != NULL);
  ProtoStreamInfoMsg_descriptor_ = file->message_type(0);
  static const int ProtoStreamInfoMsg_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, play_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, source_proto_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, ssrc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, bps_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, last_frame_sec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, last_frame_usec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, clients_),
  };
  ProtoStreamInfoMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProtoStreamInfoMsg_descriptor_,
      ProtoStreamInfoMsg::default_instance_,
      ProtoStreamInfoMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoStreamInfoMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProtoStreamInfoMsg));
  ProtoSourceStreamState_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pb_5fstream_5finfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProtoStreamInfoMsg_descriptor_, &ProtoStreamInfoMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pb_5fstream_5finfo_2eproto() {
  delete ProtoStreamInfoMsg::default_instance_;
  delete ProtoStreamInfoMsg_reflection_;
}

void protobuf_AddDesc_pb_5fstream_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::stream_switch::protobuf_AddDesc_pb_5fclient_5fheartbeat_2eproto();
  ::stream_switch::protobuf_AddDesc_pb_5fmetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024pb_stream_info.proto\022\rstream_switch\032\031p"
    "b_client_heartbeat.proto\032\021pb_metadata.pr"
    "oto\"\226\002\n\022ProtoStreamInfoMsg\0224\n\005state\030\001 \001("
    "\0162%.stream_switch.ProtoSourceStreamState"
    "\022/\n\tplay_type\030\002 \001(\0162\034.stream_switch.Prot"
    "oPlayType\022\024\n\014source_proto\030\003 \001(\t\022\014\n\004ssrc\030"
    "\004 \001(\r\022\013\n\003bps\030\005 \001(\r\022\026\n\016last_frame_sec\030\006 \001"
    "(\003\022\027\n\017last_frame_usec\030\007 \001(\005\0227\n\007clients\030@"
    " \003(\0132&.stream_switch.ProtoClientHeartbea"
    "tReq*\261\002\n\026ProtoSourceStreamState\022(\n$PROTO"
    "_SOURCE_STREAM_STATE_CONNECTING\020\001\022 \n\034PRO"
    "TO_SOURCE_STREAM_STATE_OK\020\000\022*\n\035PROTO_SOU"
    "RCE_STREAM_STATE_ERR\020\377\377\377\377\377\377\377\377\377\001\0227\n*PROTO"
    "_SOURCE_STREAM_STATE_ERR_CONNECT_FAIL\020\376\377"
    "\377\377\377\377\377\377\377\001\0225\n(PROTO_SOURCE_STREAM_STATE_ER"
    "R_MEIDA_STOP\020\375\377\377\377\377\377\377\377\377\001\022/\n\"PROTO_SOURCE_"
    "STREAM_STATE_ERR_TIME\020\374\377\377\377\377\377\377\377\377\001", 672);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pb_stream_info.proto", &protobuf_RegisterTypes);
  ProtoStreamInfoMsg::default_instance_ = new ProtoStreamInfoMsg();
  ProtoStreamInfoMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pb_5fstream_5finfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pb_5fstream_5finfo_2eproto {
  StaticDescriptorInitializer_pb_5fstream_5finfo_2eproto() {
    protobuf_AddDesc_pb_5fstream_5finfo_2eproto();
  }
} static_descriptor_initializer_pb_5fstream_5finfo_2eproto_;
const ::google::protobuf::EnumDescriptor* ProtoSourceStreamState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProtoSourceStreamState_descriptor_;
}
bool ProtoSourceStreamState_IsValid(int value) {
  switch(value) {
    case -4:
    case -3:
    case -2:
    case -1:
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ProtoStreamInfoMsg::kStateFieldNumber;
const int ProtoStreamInfoMsg::kPlayTypeFieldNumber;
const int ProtoStreamInfoMsg::kSourceProtoFieldNumber;
const int ProtoStreamInfoMsg::kSsrcFieldNumber;
const int ProtoStreamInfoMsg::kBpsFieldNumber;
const int ProtoStreamInfoMsg::kLastFrameSecFieldNumber;
const int ProtoStreamInfoMsg::kLastFrameUsecFieldNumber;
const int ProtoStreamInfoMsg::kClientsFieldNumber;
#endif  // !_MSC_VER

ProtoStreamInfoMsg::ProtoStreamInfoMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:stream_switch.ProtoStreamInfoMsg)
}

void ProtoStreamInfoMsg::InitAsDefaultInstance() {
}

ProtoStreamInfoMsg::ProtoStreamInfoMsg(const ProtoStreamInfoMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:stream_switch.ProtoStreamInfoMsg)
}

void ProtoStreamInfoMsg::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  state_ = 1;
  play_type_ = 0;
  source_proto_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ssrc_ = 0u;
  bps_ = 0u;
  last_frame_sec_ = GOOGLE_LONGLONG(0);
  last_frame_usec_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProtoStreamInfoMsg::~ProtoStreamInfoMsg() {
  // @@protoc_insertion_point(destructor:stream_switch.ProtoStreamInfoMsg)
  SharedDtor();
}

void ProtoStreamInfoMsg::SharedDtor() {
  if (source_proto_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete source_proto_;
  }
  if (this != default_instance_) {
  }
}

void ProtoStreamInfoMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoStreamInfoMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProtoStreamInfoMsg_descriptor_;
}

const ProtoStreamInfoMsg& ProtoStreamInfoMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pb_5fstream_5finfo_2eproto();
  return *default_instance_;
}

ProtoStreamInfoMsg* ProtoStreamInfoMsg::default_instance_ = NULL;

ProtoStreamInfoMsg* ProtoStreamInfoMsg::New() const {
  return new ProtoStreamInfoMsg;
}

void ProtoStreamInfoMsg::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ProtoStreamInfoMsg*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(ssrc_, last_frame_sec_);
    state_ = 1;
    play_type_ = 0;
    if (has_source_proto()) {
      if (source_proto_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        source_proto_->clear();
      }
    }
    last_frame_usec_ = 0;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  clients_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProtoStreamInfoMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:stream_switch.ProtoStreamInfoMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .stream_switch.ProtoSourceStreamState state = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::stream_switch::ProtoSourceStreamState_IsValid(value)) {
            set_state(static_cast< ::stream_switch::ProtoSourceStreamState >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_play_type;
        break;
      }

      // optional .stream_switch.ProtoPlayType play_type = 2;
      case 2: {
        if (tag == 16) {
         parse_play_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::stream_switch::ProtoPlayType_IsValid(value)) {
            set_play_type(static_cast< ::stream_switch::ProtoPlayType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_source_proto;
        break;
      }

      // optional string source_proto = 3;
      case 3: {
        if (tag == 26) {
         parse_source_proto:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source_proto()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->source_proto().data(), this->source_proto().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "source_proto");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ssrc;
        break;
      }

      // optional uint32 ssrc = 4;
      case 4: {
        if (tag == 32) {
         parse_ssrc:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ssrc_)));
          set_has_ssrc();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_bps;
        break;
      }

      // optional uint32 bps = 5;
      case 5: {
        if (tag == 40) {
         parse_bps:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bps_)));
          set_has_bps();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_last_frame_sec;
        break;
      }

      // optional int64 last_frame_sec = 6;
      case 6: {
        if (tag == 48) {
         parse_last_frame_sec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_frame_sec_)));
          set_has_last_frame_sec();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_last_frame_usec;
        break;
      }

      // optional int32 last_frame_usec = 7;
      case 7: {
        if (tag == 56) {
         parse_last_frame_usec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_frame_usec_)));
          set_has_last_frame_usec();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(514)) goto parse_clients;
        break;
      }

      // repeated .stream_switch.ProtoClientHeartbeatReq clients = 64;
      case 64: {
        if (tag == 514) {
         parse_clients:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_clients()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(514)) goto parse_clients;
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
  // @@protoc_insertion_point(parse_success:stream_switch.ProtoStreamInfoMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:stream_switch.ProtoStreamInfoMsg)
  return false;
#undef DO_
}

void ProtoStreamInfoMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:stream_switch.ProtoStreamInfoMsg)
  // optional .stream_switch.ProtoSourceStreamState state = 1;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->state(), output);
  }

  // optional .stream_switch.ProtoPlayType play_type = 2;
  if (has_play_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->play_type(), output);
  }

  // optional string source_proto = 3;
  if (has_source_proto()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source_proto().data(), this->source_proto().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "source_proto");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->source_proto(), output);
  }

  // optional uint32 ssrc = 4;
  if (has_ssrc()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->ssrc(), output);
  }

  // optional uint32 bps = 5;
  if (has_bps()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->bps(), output);
  }

  // optional int64 last_frame_sec = 6;
  if (has_last_frame_sec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->last_frame_sec(), output);
  }

  // optional int32 last_frame_usec = 7;
  if (has_last_frame_usec()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->last_frame_usec(), output);
  }

  // repeated .stream_switch.ProtoClientHeartbeatReq clients = 64;
  for (int i = 0; i < this->clients_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      64, this->clients(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:stream_switch.ProtoStreamInfoMsg)
}

::google::protobuf::uint8* ProtoStreamInfoMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:stream_switch.ProtoStreamInfoMsg)
  // optional .stream_switch.ProtoSourceStreamState state = 1;
  if (has_state()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->state(), target);
  }

  // optional .stream_switch.ProtoPlayType play_type = 2;
  if (has_play_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->play_type(), target);
  }

  // optional string source_proto = 3;
  if (has_source_proto()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->source_proto().data(), this->source_proto().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "source_proto");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->source_proto(), target);
  }

  // optional uint32 ssrc = 4;
  if (has_ssrc()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->ssrc(), target);
  }

  // optional uint32 bps = 5;
  if (has_bps()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->bps(), target);
  }

  // optional int64 last_frame_sec = 6;
  if (has_last_frame_sec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->last_frame_sec(), target);
  }

  // optional int32 last_frame_usec = 7;
  if (has_last_frame_usec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->last_frame_usec(), target);
  }

  // repeated .stream_switch.ProtoClientHeartbeatReq clients = 64;
  for (int i = 0; i < this->clients_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        64, this->clients(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:stream_switch.ProtoStreamInfoMsg)
  return target;
}

int ProtoStreamInfoMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .stream_switch.ProtoSourceStreamState state = 1;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
    }

    // optional .stream_switch.ProtoPlayType play_type = 2;
    if (has_play_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->play_type());
    }

    // optional string source_proto = 3;
    if (has_source_proto()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->source_proto());
    }

    // optional uint32 ssrc = 4;
    if (has_ssrc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ssrc());
    }

    // optional uint32 bps = 5;
    if (has_bps()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->bps());
    }

    // optional int64 last_frame_sec = 6;
    if (has_last_frame_sec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_frame_sec());
    }

    // optional int32 last_frame_usec = 7;
    if (has_last_frame_usec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_frame_usec());
    }

  }
  // repeated .stream_switch.ProtoClientHeartbeatReq clients = 64;
  total_size += 2 * this->clients_size();
  for (int i = 0; i < this->clients_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->clients(i));
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

void ProtoStreamInfoMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProtoStreamInfoMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProtoStreamInfoMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProtoStreamInfoMsg::MergeFrom(const ProtoStreamInfoMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  clients_.MergeFrom(from.clients_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_state()) {
      set_state(from.state());
    }
    if (from.has_play_type()) {
      set_play_type(from.play_type());
    }
    if (from.has_source_proto()) {
      set_source_proto(from.source_proto());
    }
    if (from.has_ssrc()) {
      set_ssrc(from.ssrc());
    }
    if (from.has_bps()) {
      set_bps(from.bps());
    }
    if (from.has_last_frame_sec()) {
      set_last_frame_sec(from.last_frame_sec());
    }
    if (from.has_last_frame_usec()) {
      set_last_frame_usec(from.last_frame_usec());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProtoStreamInfoMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoStreamInfoMsg::CopyFrom(const ProtoStreamInfoMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoStreamInfoMsg::IsInitialized() const {

  return true;
}

void ProtoStreamInfoMsg::Swap(ProtoStreamInfoMsg* other) {
  if (other != this) {
    std::swap(state_, other->state_);
    std::swap(play_type_, other->play_type_);
    std::swap(source_proto_, other->source_proto_);
    std::swap(ssrc_, other->ssrc_);
    std::swap(bps_, other->bps_);
    std::swap(last_frame_sec_, other->last_frame_sec_);
    std::swap(last_frame_usec_, other->last_frame_usec_);
    clients_.Swap(&other->clients_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProtoStreamInfoMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProtoStreamInfoMsg_descriptor_;
  metadata.reflection = ProtoStreamInfoMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace stream_switch

// @@protoc_insertion_point(global_scope)
