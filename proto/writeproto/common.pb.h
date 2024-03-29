// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2eproto;
class RecoSystem;
struct RecoSystemDefaultTypeInternal;
extern RecoSystemDefaultTypeInternal _RecoSystem_default_instance_;
class RecoSystem_UserEmbedding;
struct RecoSystem_UserEmbeddingDefaultTypeInternal;
extern RecoSystem_UserEmbeddingDefaultTypeInternal _RecoSystem_UserEmbedding_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::RecoSystem* Arena::CreateMaybeMessage<::RecoSystem>(Arena*);
template<> ::RecoSystem_UserEmbedding* Arena::CreateMaybeMessage<::RecoSystem_UserEmbedding>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class RecoSystem_UserEmbedding final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RecoSystem.UserEmbedding) */ {
 public:
  inline RecoSystem_UserEmbedding() : RecoSystem_UserEmbedding(nullptr) {}
  ~RecoSystem_UserEmbedding() override;
  explicit constexpr RecoSystem_UserEmbedding(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RecoSystem_UserEmbedding(const RecoSystem_UserEmbedding& from);
  RecoSystem_UserEmbedding(RecoSystem_UserEmbedding&& from) noexcept
    : RecoSystem_UserEmbedding() {
    *this = ::std::move(from);
  }

  inline RecoSystem_UserEmbedding& operator=(const RecoSystem_UserEmbedding& from) {
    CopyFrom(from);
    return *this;
  }
  inline RecoSystem_UserEmbedding& operator=(RecoSystem_UserEmbedding&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RecoSystem_UserEmbedding& default_instance() {
    return *internal_default_instance();
  }
  static inline const RecoSystem_UserEmbedding* internal_default_instance() {
    return reinterpret_cast<const RecoSystem_UserEmbedding*>(
               &_RecoSystem_UserEmbedding_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RecoSystem_UserEmbedding& a, RecoSystem_UserEmbedding& b) {
    a.Swap(&b);
  }
  inline void Swap(RecoSystem_UserEmbedding* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RecoSystem_UserEmbedding* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RecoSystem_UserEmbedding* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RecoSystem_UserEmbedding>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RecoSystem_UserEmbedding& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RecoSystem_UserEmbedding& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RecoSystem_UserEmbedding* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RecoSystem.UserEmbedding";
  }
  protected:
  explicit RecoSystem_UserEmbedding(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStringValFieldNumber = 2,
    kInt32ValFieldNumber = 1,
  };
  // string stringVal = 2;
  void clear_stringval();
  const std::string& stringval() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_stringval(ArgT0&& arg0, ArgT... args);
  std::string* mutable_stringval();
  PROTOBUF_NODISCARD std::string* release_stringval();
  void set_allocated_stringval(std::string* stringval);
  private:
  const std::string& _internal_stringval() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_stringval(const std::string& value);
  std::string* _internal_mutable_stringval();
  public:

  // int32 int32Val = 1;
  void clear_int32val();
  int32_t int32val() const;
  void set_int32val(int32_t value);
  private:
  int32_t _internal_int32val() const;
  void _internal_set_int32val(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:RecoSystem.UserEmbedding)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stringval_;
  int32_t int32val_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2eproto;
};
// -------------------------------------------------------------------

class RecoSystem final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RecoSystem) */ {
 public:
  inline RecoSystem() : RecoSystem(nullptr) {}
  ~RecoSystem() override;
  explicit constexpr RecoSystem(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RecoSystem(const RecoSystem& from);
  RecoSystem(RecoSystem&& from) noexcept
    : RecoSystem() {
    *this = ::std::move(from);
  }

  inline RecoSystem& operator=(const RecoSystem& from) {
    CopyFrom(from);
    return *this;
  }
  inline RecoSystem& operator=(RecoSystem&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RecoSystem& default_instance() {
    return *internal_default_instance();
  }
  static inline const RecoSystem* internal_default_instance() {
    return reinterpret_cast<const RecoSystem*>(
               &_RecoSystem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RecoSystem& a, RecoSystem& b) {
    a.Swap(&b);
  }
  inline void Swap(RecoSystem* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RecoSystem* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RecoSystem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RecoSystem>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RecoSystem& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RecoSystem& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RecoSystem* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RecoSystem";
  }
  protected:
  explicit RecoSystem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef RecoSystem_UserEmbedding UserEmbedding;

  // accessors -------------------------------------------------------

  enum : int {
    kRepeatedInt32ValFieldNumber = 4,
    kRepeatedStringValFieldNumber = 5,
    kUserIdFieldNumber = 1,
    kBytesValFieldNumber = 2,
    kUserEmbeddingFieldNumber = 3,
  };
  // repeated int32 repeatedInt32Val = 4;
  int repeatedint32val_size() const;
  private:
  int _internal_repeatedint32val_size() const;
  public:
  void clear_repeatedint32val();
  private:
  int32_t _internal_repeatedint32val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_repeatedint32val() const;
  void _internal_add_repeatedint32val(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_repeatedint32val();
  public:
  int32_t repeatedint32val(int index) const;
  void set_repeatedint32val(int index, int32_t value);
  void add_repeatedint32val(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      repeatedint32val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_repeatedint32val();

  // repeated string repeatedStringVal = 5;
  int repeatedstringval_size() const;
  private:
  int _internal_repeatedstringval_size() const;
  public:
  void clear_repeatedstringval();
  const std::string& repeatedstringval(int index) const;
  std::string* mutable_repeatedstringval(int index);
  void set_repeatedstringval(int index, const std::string& value);
  void set_repeatedstringval(int index, std::string&& value);
  void set_repeatedstringval(int index, const char* value);
  void set_repeatedstringval(int index, const char* value, size_t size);
  std::string* add_repeatedstringval();
  void add_repeatedstringval(const std::string& value);
  void add_repeatedstringval(std::string&& value);
  void add_repeatedstringval(const char* value);
  void add_repeatedstringval(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& repeatedstringval() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_repeatedstringval();
  private:
  const std::string& _internal_repeatedstringval(int index) const;
  std::string* _internal_add_repeatedstringval();
  public:

  // optional string userId = 1;
  bool has_userid() const;
  private:
  bool _internal_has_userid() const;
  public:
  void clear_userid();
  const std::string& userid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_userid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_userid();
  PROTOBUF_NODISCARD std::string* release_userid();
  void set_allocated_userid(std::string* userid);
  private:
  const std::string& _internal_userid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_userid(const std::string& value);
  std::string* _internal_mutable_userid();
  public:

  // optional bytes bytesVal = 2;
  bool has_bytesval() const;
  private:
  bool _internal_has_bytesval() const;
  public:
  void clear_bytesval();
  const std::string& bytesval() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_bytesval(ArgT0&& arg0, ArgT... args);
  std::string* mutable_bytesval();
  PROTOBUF_NODISCARD std::string* release_bytesval();
  void set_allocated_bytesval(std::string* bytesval);
  private:
  const std::string& _internal_bytesval() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_bytesval(const std::string& value);
  std::string* _internal_mutable_bytesval();
  public:

  // optional .RecoSystem.UserEmbedding userEmbedding = 3;
  bool has_userembedding() const;
  private:
  bool _internal_has_userembedding() const;
  public:
  void clear_userembedding();
  const ::RecoSystem_UserEmbedding& userembedding() const;
  PROTOBUF_NODISCARD ::RecoSystem_UserEmbedding* release_userembedding();
  ::RecoSystem_UserEmbedding* mutable_userembedding();
  void set_allocated_userembedding(::RecoSystem_UserEmbedding* userembedding);
  private:
  const ::RecoSystem_UserEmbedding& _internal_userembedding() const;
  ::RecoSystem_UserEmbedding* _internal_mutable_userembedding();
  public:
  void unsafe_arena_set_allocated_userembedding(
      ::RecoSystem_UserEmbedding* userembedding);
  ::RecoSystem_UserEmbedding* unsafe_arena_release_userembedding();

  // @@protoc_insertion_point(class_scope:RecoSystem)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > repeatedint32val_;
  mutable std::atomic<int> _repeatedint32val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> repeatedstringval_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr userid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr bytesval_;
  ::RecoSystem_UserEmbedding* userembedding_;
  friend struct ::TableStruct_common_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RecoSystem_UserEmbedding

// int32 int32Val = 1;
inline void RecoSystem_UserEmbedding::clear_int32val() {
  int32val_ = 0;
}
inline int32_t RecoSystem_UserEmbedding::_internal_int32val() const {
  return int32val_;
}
inline int32_t RecoSystem_UserEmbedding::int32val() const {
  // @@protoc_insertion_point(field_get:RecoSystem.UserEmbedding.int32Val)
  return _internal_int32val();
}
inline void RecoSystem_UserEmbedding::_internal_set_int32val(int32_t value) {
  
  int32val_ = value;
}
inline void RecoSystem_UserEmbedding::set_int32val(int32_t value) {
  _internal_set_int32val(value);
  // @@protoc_insertion_point(field_set:RecoSystem.UserEmbedding.int32Val)
}

// string stringVal = 2;
inline void RecoSystem_UserEmbedding::clear_stringval() {
  stringval_.ClearToEmpty();
}
inline const std::string& RecoSystem_UserEmbedding::stringval() const {
  // @@protoc_insertion_point(field_get:RecoSystem.UserEmbedding.stringVal)
  return _internal_stringval();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RecoSystem_UserEmbedding::set_stringval(ArgT0&& arg0, ArgT... args) {
 
 stringval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:RecoSystem.UserEmbedding.stringVal)
}
inline std::string* RecoSystem_UserEmbedding::mutable_stringval() {
  std::string* _s = _internal_mutable_stringval();
  // @@protoc_insertion_point(field_mutable:RecoSystem.UserEmbedding.stringVal)
  return _s;
}
inline const std::string& RecoSystem_UserEmbedding::_internal_stringval() const {
  return stringval_.Get();
}
inline void RecoSystem_UserEmbedding::_internal_set_stringval(const std::string& value) {
  
  stringval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* RecoSystem_UserEmbedding::_internal_mutable_stringval() {
  
  return stringval_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* RecoSystem_UserEmbedding::release_stringval() {
  // @@protoc_insertion_point(field_release:RecoSystem.UserEmbedding.stringVal)
  return stringval_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void RecoSystem_UserEmbedding::set_allocated_stringval(std::string* stringval) {
  if (stringval != nullptr) {
    
  } else {
    
  }
  stringval_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stringval,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (stringval_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    stringval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:RecoSystem.UserEmbedding.stringVal)
}

// -------------------------------------------------------------------

// RecoSystem

// optional string userId = 1;
inline bool RecoSystem::_internal_has_userid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RecoSystem::has_userid() const {
  return _internal_has_userid();
}
inline void RecoSystem::clear_userid() {
  userid_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& RecoSystem::userid() const {
  // @@protoc_insertion_point(field_get:RecoSystem.userId)
  return _internal_userid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RecoSystem::set_userid(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 userid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:RecoSystem.userId)
}
inline std::string* RecoSystem::mutable_userid() {
  std::string* _s = _internal_mutable_userid();
  // @@protoc_insertion_point(field_mutable:RecoSystem.userId)
  return _s;
}
inline const std::string& RecoSystem::_internal_userid() const {
  return userid_.Get();
}
inline void RecoSystem::_internal_set_userid(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  userid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* RecoSystem::_internal_mutable_userid() {
  _has_bits_[0] |= 0x00000001u;
  return userid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* RecoSystem::release_userid() {
  // @@protoc_insertion_point(field_release:RecoSystem.userId)
  if (!_internal_has_userid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = userid_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (userid_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void RecoSystem::set_allocated_userid(std::string* userid) {
  if (userid != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  userid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), userid,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (userid_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:RecoSystem.userId)
}

// optional bytes bytesVal = 2;
inline bool RecoSystem::_internal_has_bytesval() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RecoSystem::has_bytesval() const {
  return _internal_has_bytesval();
}
inline void RecoSystem::clear_bytesval() {
  bytesval_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& RecoSystem::bytesval() const {
  // @@protoc_insertion_point(field_get:RecoSystem.bytesVal)
  return _internal_bytesval();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void RecoSystem::set_bytesval(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 bytesval_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:RecoSystem.bytesVal)
}
inline std::string* RecoSystem::mutable_bytesval() {
  std::string* _s = _internal_mutable_bytesval();
  // @@protoc_insertion_point(field_mutable:RecoSystem.bytesVal)
  return _s;
}
inline const std::string& RecoSystem::_internal_bytesval() const {
  return bytesval_.Get();
}
inline void RecoSystem::_internal_set_bytesval(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  bytesval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* RecoSystem::_internal_mutable_bytesval() {
  _has_bits_[0] |= 0x00000002u;
  return bytesval_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* RecoSystem::release_bytesval() {
  // @@protoc_insertion_point(field_release:RecoSystem.bytesVal)
  if (!_internal_has_bytesval()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = bytesval_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (bytesval_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    bytesval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void RecoSystem::set_allocated_bytesval(std::string* bytesval) {
  if (bytesval != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  bytesval_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), bytesval,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (bytesval_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    bytesval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:RecoSystem.bytesVal)
}

// optional .RecoSystem.UserEmbedding userEmbedding = 3;
inline bool RecoSystem::_internal_has_userembedding() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || userembedding_ != nullptr);
  return value;
}
inline bool RecoSystem::has_userembedding() const {
  return _internal_has_userembedding();
}
inline void RecoSystem::clear_userembedding() {
  if (userembedding_ != nullptr) userembedding_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::RecoSystem_UserEmbedding& RecoSystem::_internal_userembedding() const {
  const ::RecoSystem_UserEmbedding* p = userembedding_;
  return p != nullptr ? *p : reinterpret_cast<const ::RecoSystem_UserEmbedding&>(
      ::_RecoSystem_UserEmbedding_default_instance_);
}
inline const ::RecoSystem_UserEmbedding& RecoSystem::userembedding() const {
  // @@protoc_insertion_point(field_get:RecoSystem.userEmbedding)
  return _internal_userembedding();
}
inline void RecoSystem::unsafe_arena_set_allocated_userembedding(
    ::RecoSystem_UserEmbedding* userembedding) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(userembedding_);
  }
  userembedding_ = userembedding;
  if (userembedding) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:RecoSystem.userEmbedding)
}
inline ::RecoSystem_UserEmbedding* RecoSystem::release_userembedding() {
  _has_bits_[0] &= ~0x00000004u;
  ::RecoSystem_UserEmbedding* temp = userembedding_;
  userembedding_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::RecoSystem_UserEmbedding* RecoSystem::unsafe_arena_release_userembedding() {
  // @@protoc_insertion_point(field_release:RecoSystem.userEmbedding)
  _has_bits_[0] &= ~0x00000004u;
  ::RecoSystem_UserEmbedding* temp = userembedding_;
  userembedding_ = nullptr;
  return temp;
}
inline ::RecoSystem_UserEmbedding* RecoSystem::_internal_mutable_userembedding() {
  _has_bits_[0] |= 0x00000004u;
  if (userembedding_ == nullptr) {
    auto* p = CreateMaybeMessage<::RecoSystem_UserEmbedding>(GetArenaForAllocation());
    userembedding_ = p;
  }
  return userembedding_;
}
inline ::RecoSystem_UserEmbedding* RecoSystem::mutable_userembedding() {
  ::RecoSystem_UserEmbedding* _msg = _internal_mutable_userembedding();
  // @@protoc_insertion_point(field_mutable:RecoSystem.userEmbedding)
  return _msg;
}
inline void RecoSystem::set_allocated_userembedding(::RecoSystem_UserEmbedding* userembedding) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete userembedding_;
  }
  if (userembedding) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::RecoSystem_UserEmbedding>::GetOwningArena(userembedding);
    if (message_arena != submessage_arena) {
      userembedding = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, userembedding, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  userembedding_ = userembedding;
  // @@protoc_insertion_point(field_set_allocated:RecoSystem.userEmbedding)
}

// repeated int32 repeatedInt32Val = 4;
inline int RecoSystem::_internal_repeatedint32val_size() const {
  return repeatedint32val_.size();
}
inline int RecoSystem::repeatedint32val_size() const {
  return _internal_repeatedint32val_size();
}
inline void RecoSystem::clear_repeatedint32val() {
  repeatedint32val_.Clear();
}
inline int32_t RecoSystem::_internal_repeatedint32val(int index) const {
  return repeatedint32val_.Get(index);
}
inline int32_t RecoSystem::repeatedint32val(int index) const {
  // @@protoc_insertion_point(field_get:RecoSystem.repeatedInt32Val)
  return _internal_repeatedint32val(index);
}
inline void RecoSystem::set_repeatedint32val(int index, int32_t value) {
  repeatedint32val_.Set(index, value);
  // @@protoc_insertion_point(field_set:RecoSystem.repeatedInt32Val)
}
inline void RecoSystem::_internal_add_repeatedint32val(int32_t value) {
  repeatedint32val_.Add(value);
}
inline void RecoSystem::add_repeatedint32val(int32_t value) {
  _internal_add_repeatedint32val(value);
  // @@protoc_insertion_point(field_add:RecoSystem.repeatedInt32Val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
RecoSystem::_internal_repeatedint32val() const {
  return repeatedint32val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
RecoSystem::repeatedint32val() const {
  // @@protoc_insertion_point(field_list:RecoSystem.repeatedInt32Val)
  return _internal_repeatedint32val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
RecoSystem::_internal_mutable_repeatedint32val() {
  return &repeatedint32val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
RecoSystem::mutable_repeatedint32val() {
  // @@protoc_insertion_point(field_mutable_list:RecoSystem.repeatedInt32Val)
  return _internal_mutable_repeatedint32val();
}

// repeated string repeatedStringVal = 5;
inline int RecoSystem::_internal_repeatedstringval_size() const {
  return repeatedstringval_.size();
}
inline int RecoSystem::repeatedstringval_size() const {
  return _internal_repeatedstringval_size();
}
inline void RecoSystem::clear_repeatedstringval() {
  repeatedstringval_.Clear();
}
inline std::string* RecoSystem::add_repeatedstringval() {
  std::string* _s = _internal_add_repeatedstringval();
  // @@protoc_insertion_point(field_add_mutable:RecoSystem.repeatedStringVal)
  return _s;
}
inline const std::string& RecoSystem::_internal_repeatedstringval(int index) const {
  return repeatedstringval_.Get(index);
}
inline const std::string& RecoSystem::repeatedstringval(int index) const {
  // @@protoc_insertion_point(field_get:RecoSystem.repeatedStringVal)
  return _internal_repeatedstringval(index);
}
inline std::string* RecoSystem::mutable_repeatedstringval(int index) {
  // @@protoc_insertion_point(field_mutable:RecoSystem.repeatedStringVal)
  return repeatedstringval_.Mutable(index);
}
inline void RecoSystem::set_repeatedstringval(int index, const std::string& value) {
  repeatedstringval_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::set_repeatedstringval(int index, std::string&& value) {
  repeatedstringval_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::set_repeatedstringval(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  repeatedstringval_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::set_repeatedstringval(int index, const char* value, size_t size) {
  repeatedstringval_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RecoSystem.repeatedStringVal)
}
inline std::string* RecoSystem::_internal_add_repeatedstringval() {
  return repeatedstringval_.Add();
}
inline void RecoSystem::add_repeatedstringval(const std::string& value) {
  repeatedstringval_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::add_repeatedstringval(std::string&& value) {
  repeatedstringval_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::add_repeatedstringval(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  repeatedstringval_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:RecoSystem.repeatedStringVal)
}
inline void RecoSystem::add_repeatedstringval(const char* value, size_t size) {
  repeatedstringval_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:RecoSystem.repeatedStringVal)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
RecoSystem::repeatedstringval() const {
  // @@protoc_insertion_point(field_list:RecoSystem.repeatedStringVal)
  return repeatedstringval_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
RecoSystem::mutable_repeatedstringval() {
  // @@protoc_insertion_point(field_mutable_list:RecoSystem.repeatedStringVal)
  return &repeatedstringval_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2eproto
