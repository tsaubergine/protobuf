// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/source_context.proto

#include "google/protobuf/source_context.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace google {
namespace protobuf {
PROTOBUF_CONSTEXPR SourceContext::SourceContext(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.file_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SourceContextDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SourceContextDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SourceContextDefaultTypeInternal() {}
  union {
    SourceContext _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SourceContextDefaultTypeInternal _SourceContext_default_instance_;
}  // namespace protobuf
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto = nullptr;
const ::uint32_t TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::google::protobuf::SourceContext, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::google::protobuf::SourceContext, _impl_.file_name_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::google::protobuf::SourceContext)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::google::protobuf::_SourceContext_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2fsource_5fcontext_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$google/protobuf/source_context.proto\022\017"
    "google.protobuf\"\"\n\rSourceContext\022\021\n\tfile"
    "_name\030\001 \001(\tB\212\001\n\023com.google.protobufB\022Sou"
    "rceContextProtoP\001Z6google.golang.org/pro"
    "tobuf/types/known/sourcecontextpb\242\002\003GPB\252"
    "\002\036Google.Protobuf.WellKnownTypesb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto = {
    false,
    false,
    240,
    descriptor_table_protodef_google_2fprotobuf_2fsource_5fcontext_2eproto,
    "google/protobuf/source_context.proto",
    &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto::offsets,
    file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto,
    file_level_enum_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fsource_5fcontext_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2fsource_5fcontext_2eproto(&descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto);
namespace google {
namespace protobuf {
// ===================================================================

class SourceContext::_Internal {
 public:
};

SourceContext::SourceContext(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.SourceContext)
}
SourceContext::SourceContext(const SourceContext& from)
  : ::google::protobuf::Message() {
  SourceContext* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.file_name_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_file_name().empty()) {
    _this->_impl_.file_name_.Set(from._internal_file_name(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SourceContext)
}

inline void SourceContext::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.file_name_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SourceContext::~SourceContext() {
  // @@protoc_insertion_point(destructor:google.protobuf.SourceContext)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::google::protobuf::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SourceContext::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.file_name_.Destroy();
}

void SourceContext::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void SourceContext::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.SourceContext)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.file_name_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* SourceContext::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string file_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_file_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.protobuf.SourceContext.file_name"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* SourceContext::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SourceContext)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string file_name = 1;
  if (!this->_internal_file_name().empty()) {
    const std::string& _s = this->_internal_file_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.SourceContext.file_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SourceContext)
  return target;
}

::size_t SourceContext::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.SourceContext)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string file_name = 1;
  if (!this->_internal_file_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_file_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData SourceContext::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    SourceContext::MergeImpl
};
const ::google::protobuf::Message::ClassData*SourceContext::GetClassData() const { return &_class_data_; }


void SourceContext::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<SourceContext*>(&to_msg);
  auto& from = static_cast<const SourceContext&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.SourceContext)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_file_name().empty()) {
    _this->_internal_set_file_name(from._internal_file_name());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void SourceContext::CopyFrom(const SourceContext& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.SourceContext)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool SourceContext::IsInitialized() const {
  return true;
}

void SourceContext::InternalSwap(SourceContext* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.file_name_, lhs_arena,
                                       &other->_impl_.file_name_, rhs_arena);
}

::google::protobuf::Metadata SourceContext::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_getter, &descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto_once,
      file_level_metadata_google_2fprotobuf_2fsource_5fcontext_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::google::protobuf::SourceContext*
Arena::CreateMaybeMessage< ::google::protobuf::SourceContext >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::protobuf::SourceContext >(arena);
}
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
