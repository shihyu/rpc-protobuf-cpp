// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RpcMessage.proto

#include "RpcMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace rpc {
namespace codec {
class RpcMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RpcMessage> _instance;
} _RpcMessage_default_instance_;
}  // namespace codec
}  // namespace rpc
static void InitDefaultsRpcMessage_RpcMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::rpc::codec::_RpcMessage_default_instance_;
    new (ptr) ::rpc::codec::RpcMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpc::codec::RpcMessage::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RpcMessage_RpcMessage_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRpcMessage_RpcMessage_2eproto}, {}};

void InitDefaults_RpcMessage_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_RpcMessage_RpcMessage_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_RpcMessage_2eproto[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_RpcMessage_2eproto[2];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_RpcMessage_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_RpcMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, type_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, id_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, serviceid_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, methodid_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, request_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, response_),
  PROTOBUF_FIELD_OFFSET(::rpc::codec::RpcMessage, error_),
  6,
  2,
  3,
  4,
  0,
  1,
  5,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::rpc::codec::RpcMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::rpc::codec::_RpcMessage_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_RpcMessage_2eproto = {
  {}, AddDescriptors_RpcMessage_2eproto, "RpcMessage.proto", schemas,
  file_default_instances, TableStruct_RpcMessage_2eproto::offsets,
  file_level_metadata_RpcMessage_2eproto, 1, file_level_enum_descriptors_RpcMessage_2eproto, file_level_service_descriptors_RpcMessage_2eproto,
};

const char descriptor_table_protodef_RpcMessage_2eproto[] =
  "\n\020RpcMessage.proto\022\trpc.codec\"\247\001\n\nRpcMes"
  "sage\022 \n\004type\030\001 \002(\0162\022.rpc.codec.MsgType\022\n"
  "\n\002id\030\002 \002(\003\022\021\n\tserviceId\030\003 \002(\r\022\020\n\010methodI"
  "d\030\004 \002(\r\022\017\n\007request\030\005 \001(\014\022\020\n\010response\030\006 \001"
  "(\014\022#\n\005error\030\007 \001(\0162\024.rpc.codec.ErrorCode*"
  "/\n\007MsgType\022\013\n\007REQUEST\020\001\022\014\n\010RESPONSE\020\002\022\t\n"
  "\005ERROR\020\003*\225\001\n\tErrorCode\022\014\n\010NO_ERROR\020\000\022\017\n\013"
  "WRONG_PROTO\020\001\022\016\n\nNO_SERVICE\020\002\022\r\n\tNO_METH"
  "OD\020\003\022\023\n\017INVALID_REQUEST\020\004\022\024\n\020INVALID_RES"
  "PONSE\020\005\022\013\n\007TIMEOUT\020\006\022\022\n\016PENDDING_LIMIT\020\007"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_RpcMessage_2eproto = {
  false, InitDefaults_RpcMessage_2eproto, 
  descriptor_table_protodef_RpcMessage_2eproto,
  "RpcMessage.proto", &assign_descriptors_table_RpcMessage_2eproto, 400,
};

void AddDescriptors_RpcMessage_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_RpcMessage_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_RpcMessage_2eproto = []() { AddDescriptors_RpcMessage_2eproto(); return true; }();
namespace rpc {
namespace codec {
const ::google::protobuf::EnumDescriptor* MsgType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_RpcMessage_2eproto);
  return file_level_enum_descriptors_RpcMessage_2eproto[0];
}
bool MsgType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_RpcMessage_2eproto);
  return file_level_enum_descriptors_RpcMessage_2eproto[1];
}
bool ErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RpcMessage::InitAsDefaultInstance() {
}
class RpcMessage::HasBitSetters {
 public:
  static void set_has_type(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000040u;
  }
  static void set_has_id(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000004u;
  }
  static void set_has_serviceid(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000008u;
  }
  static void set_has_methodid(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000010u;
  }
  static void set_has_request(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_response(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_error(RpcMessage* msg) {
    msg->_has_bits_[0] |= 0x00000020u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcMessage::kTypeFieldNumber;
const int RpcMessage::kIdFieldNumber;
const int RpcMessage::kServiceIdFieldNumber;
const int RpcMessage::kMethodIdFieldNumber;
const int RpcMessage::kRequestFieldNumber;
const int RpcMessage::kResponseFieldNumber;
const int RpcMessage::kErrorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcMessage::RpcMessage()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:rpc.codec.RpcMessage)
}
RpcMessage::RpcMessage(const RpcMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  request_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_request()) {
    request_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_);
  }
  response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_response()) {
    response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:rpc.codec.RpcMessage)
}

void RpcMessage::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_RpcMessage_RpcMessage_2eproto.base);
  request_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&error_) -
      reinterpret_cast<char*>(&id_)) + sizeof(error_));
  type_ = 1;
}

RpcMessage::~RpcMessage() {
  // @@protoc_insertion_point(destructor:rpc.codec.RpcMessage)
  SharedDtor();
}

void RpcMessage::SharedDtor() {
  request_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RpcMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RpcMessage& RpcMessage::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_RpcMessage_RpcMessage_2eproto.base);
  return *internal_default_instance();
}


void RpcMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:rpc.codec.RpcMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      request_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      response_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x0000007cu) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&error_) -
        reinterpret_cast<char*>(&id_)) + sizeof(error_));
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* RpcMessage::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<RpcMessage*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required .rpc.codec.MsgType type = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        if (!::rpc::codec::MsgType_IsValid(val)) {
          ::google::protobuf::internal::WriteVarint(1, val, msg->mutable_unknown_fields());
          break;
        }
        msg->set_type(static_cast<::rpc::codec::MsgType>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required int64 id = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_id(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required uint32 serviceId = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_serviceid(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required uint32 methodId = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 32) goto handle_unusual;
        msg->set_methodid(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // optional bytes request = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 42) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_request();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // optional bytes response = 6;
      case 6: {
        if (static_cast<::google::protobuf::uint8>(tag) != 50) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_response();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // optional .rpc.codec.ErrorCode error = 7;
      case 7: {
        if (static_cast<::google::protobuf::uint8>(tag) != 56) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        if (!::rpc::codec::ErrorCode_IsValid(val)) {
          ::google::protobuf::internal::WriteVarint(7, val, msg->mutable_unknown_fields());
          break;
        }
        msg->set_error(static_cast<::rpc::codec::ErrorCode>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool RpcMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rpc.codec.RpcMessage)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .rpc.codec.MsgType type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::rpc::codec::MsgType_IsValid(value)) {
            set_type(static_cast< ::rpc::codec::MsgType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast<::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_id(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 serviceId = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {
          HasBitSetters::set_has_serviceid(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &serviceid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 methodId = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (32 & 0xFF)) {
          HasBitSetters::set_has_methodid(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &methodid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes request = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (42 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_request()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes response = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (50 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_response()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .rpc.codec.ErrorCode error = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (56 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::rpc::codec::ErrorCode_IsValid(value)) {
            set_error(static_cast< ::rpc::codec::ErrorCode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                7, static_cast<::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:rpc.codec.RpcMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rpc.codec.RpcMessage)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void RpcMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rpc.codec.RpcMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .rpc.codec.MsgType type = 1;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required int64 id = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->id(), output);
  }

  // required uint32 serviceId = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->serviceid(), output);
  }

  // required uint32 methodId = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->methodid(), output);
  }

  // optional bytes request = 5;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->request(), output);
  }

  // optional bytes response = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->response(), output);
  }

  // optional .rpc.codec.ErrorCode error = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->error(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:rpc.codec.RpcMessage)
}

::google::protobuf::uint8* RpcMessage::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpc.codec.RpcMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .rpc.codec.MsgType type = 1;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required int64 id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->id(), target);
  }

  // required uint32 serviceId = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->serviceid(), target);
  }

  // required uint32 methodId = 4;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->methodid(), target);
  }

  // optional bytes request = 5;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->request(), target);
  }

  // optional bytes response = 6;
  if (cached_has_bits & 0x00000002u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->response(), target);
  }

  // optional .rpc.codec.ErrorCode error = 7;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->error(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpc.codec.RpcMessage)
  return target;
}

size_t RpcMessage::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:rpc.codec.RpcMessage)
  size_t total_size = 0;

  if (has_id()) {
    // required int64 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  if (has_serviceid()) {
    // required uint32 serviceId = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->serviceid());
  }

  if (has_methodid()) {
    // required uint32 methodId = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->methodid());
  }

  if (has_type()) {
    // required .rpc.codec.MsgType type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  return total_size;
}
size_t RpcMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpc.codec.RpcMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000005c) ^ 0x0000005c) == 0) {  // All required fields are present.
    // required int64 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());

    // required uint32 serviceId = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->serviceid());

    // required uint32 methodId = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->methodid());

    // required .rpc.codec.MsgType type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes request = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->request());
    }

    // optional bytes response = 6;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->response());
    }

  }
  // optional .rpc.codec.ErrorCode error = 7;
  if (cached_has_bits & 0x00000020u) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->error());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RpcMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpc.codec.RpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcMessage* source =
      ::google::protobuf::DynamicCastToGenerated<RpcMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpc.codec.RpcMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpc.codec.RpcMessage)
    MergeFrom(*source);
  }
}

void RpcMessage::MergeFrom(const RpcMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpc.codec.RpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      request_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      response_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_);
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000008u) {
      serviceid_ = from.serviceid_;
    }
    if (cached_has_bits & 0x00000010u) {
      methodid_ = from.methodid_;
    }
    if (cached_has_bits & 0x00000020u) {
      error_ = from.error_;
    }
    if (cached_has_bits & 0x00000040u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RpcMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpc.codec.RpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMessage::CopyFrom(const RpcMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpc.codec.RpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000005c) != 0x0000005c) return false;
  return true;
}

void RpcMessage::Swap(RpcMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcMessage::InternalSwap(RpcMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  request_.Swap(&other->request_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  response_.Swap(&other->response_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(serviceid_, other->serviceid_);
  swap(methodid_, other->methodid_);
  swap(error_, other->error_);
  swap(type_, other->type_);
}

::google::protobuf::Metadata RpcMessage::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_RpcMessage_2eproto);
  return ::file_level_metadata_RpcMessage_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace codec
}  // namespace rpc
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::rpc::codec::RpcMessage* Arena::CreateMaybeMessage< ::rpc::codec::RpcMessage >(Arena* arena) {
  return Arena::CreateInternal< ::rpc::codec::RpcMessage >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
