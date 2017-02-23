// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/tensor.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/resource_handle.pb.h"
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftensor_2eproto();
void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2ftensor_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftensor_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftensor_2eproto();

class TensorProto;

// ===================================================================

class TensorProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.TensorProto) */ {
 public:
  TensorProto();
  virtual ~TensorProto();

  TensorProto(const TensorProto& from);

  inline TensorProto& operator=(const TensorProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TensorProto& default_instance();

  static const TensorProto* internal_default_instance();

  void UnsafeArenaSwap(TensorProto* other);
  void Swap(TensorProto* other);

  // implements Message ----------------------------------------------

  inline TensorProto* New() const { return New(NULL); }

  TensorProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TensorProto& from);
  void MergeFrom(const TensorProto& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TensorProto* other);
  void UnsafeMergeFrom(const TensorProto& from);
  protected:
  explicit TensorProto(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // optional .tensorflow.TensorShapeProto tensor_shape = 2;
  bool has_tensor_shape() const;
  void clear_tensor_shape();
  static const int kTensorShapeFieldNumber = 2;
  private:
  void _slow_mutable_tensor_shape();
  void _slow_set_allocated_tensor_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** tensor_shape);
  ::tensorflow::TensorShapeProto* _slow_release_tensor_shape();
  public:
  const ::tensorflow::TensorShapeProto& tensor_shape() const;
  ::tensorflow::TensorShapeProto* mutable_tensor_shape();
  ::tensorflow::TensorShapeProto* release_tensor_shape();
  void set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_tensor_shape();
  void unsafe_arena_set_allocated_tensor_shape(
      ::tensorflow::TensorShapeProto* tensor_shape);

  // optional int32 version_number = 3;
  void clear_version_number();
  static const int kVersionNumberFieldNumber = 3;
  ::google::protobuf::int32 version_number() const;
  void set_version_number(::google::protobuf::int32 value);

  // optional bytes tensor_content = 4;
  void clear_tensor_content();
  static const int kTensorContentFieldNumber = 4;
  const ::std::string& tensor_content() const;
  void set_tensor_content(const ::std::string& value);
  void set_tensor_content(const char* value);
  void set_tensor_content(const void* value, size_t size);
  ::std::string* mutable_tensor_content();
  ::std::string* release_tensor_content();
  void set_allocated_tensor_content(::std::string* tensor_content);
  ::std::string* unsafe_arena_release_tensor_content();
  void unsafe_arena_set_allocated_tensor_content(
      ::std::string* tensor_content);

  // repeated int32 half_val = 13 [packed = true];
  int half_val_size() const;
  void clear_half_val();
  static const int kHalfValFieldNumber = 13;
  ::google::protobuf::int32 half_val(int index) const;
  void set_half_val(int index, ::google::protobuf::int32 value);
  void add_half_val(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      half_val() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_half_val();

  // repeated float float_val = 5 [packed = true];
  int float_val_size() const;
  void clear_float_val();
  static const int kFloatValFieldNumber = 5;
  float float_val(int index) const;
  void set_float_val(int index, float value);
  void add_float_val(float value);
  const ::google::protobuf::RepeatedField< float >&
      float_val() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_float_val();

  // repeated double double_val = 6 [packed = true];
  int double_val_size() const;
  void clear_double_val();
  static const int kDoubleValFieldNumber = 6;
  double double_val(int index) const;
  void set_double_val(int index, double value);
  void add_double_val(double value);
  const ::google::protobuf::RepeatedField< double >&
      double_val() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_double_val();

  // repeated int32 int_val = 7 [packed = true];
  int int_val_size() const;
  void clear_int_val();
  static const int kIntValFieldNumber = 7;
  ::google::protobuf::int32 int_val(int index) const;
  void set_int_val(int index, ::google::protobuf::int32 value);
  void add_int_val(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      int_val() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_int_val();

  // repeated bytes string_val = 8;
  int string_val_size() const;
  void clear_string_val();
  static const int kStringValFieldNumber = 8;
  const ::std::string& string_val(int index) const;
  ::std::string* mutable_string_val(int index);
  void set_string_val(int index, const ::std::string& value);
  void set_string_val(int index, const char* value);
  void set_string_val(int index, const void* value, size_t size);
  ::std::string* add_string_val();
  void add_string_val(const ::std::string& value);
  void add_string_val(const char* value);
  void add_string_val(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& string_val() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_string_val();

  // repeated float scomplex_val = 9 [packed = true];
  int scomplex_val_size() const;
  void clear_scomplex_val();
  static const int kScomplexValFieldNumber = 9;
  float scomplex_val(int index) const;
  void set_scomplex_val(int index, float value);
  void add_scomplex_val(float value);
  const ::google::protobuf::RepeatedField< float >&
      scomplex_val() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_scomplex_val();

  // repeated int64 int64_val = 10 [packed = true];
  int int64_val_size() const;
  void clear_int64_val();
  static const int kInt64ValFieldNumber = 10;
  ::google::protobuf::int64 int64_val(int index) const;
  void set_int64_val(int index, ::google::protobuf::int64 value);
  void add_int64_val(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      int64_val() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_int64_val();

  // repeated bool bool_val = 11 [packed = true];
  int bool_val_size() const;
  void clear_bool_val();
  static const int kBoolValFieldNumber = 11;
  bool bool_val(int index) const;
  void set_bool_val(int index, bool value);
  void add_bool_val(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      bool_val() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_bool_val();

  // repeated double dcomplex_val = 12 [packed = true];
  int dcomplex_val_size() const;
  void clear_dcomplex_val();
  static const int kDcomplexValFieldNumber = 12;
  double dcomplex_val(int index) const;
  void set_dcomplex_val(int index, double value);
  void add_dcomplex_val(double value);
  const ::google::protobuf::RepeatedField< double >&
      dcomplex_val() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_dcomplex_val();

  // repeated .tensorflow.ResourceHandle resource_handle_val = 14;
  int resource_handle_val_size() const;
  void clear_resource_handle_val();
  static const int kResourceHandleValFieldNumber = 14;
  const ::tensorflow::ResourceHandle& resource_handle_val(int index) const;
  ::tensorflow::ResourceHandle* mutable_resource_handle_val(int index);
  ::tensorflow::ResourceHandle* add_resource_handle_val();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::ResourceHandle >*
      mutable_resource_handle_val();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::ResourceHandle >&
      resource_handle_val() const;

  // @@protoc_insertion_point(class_scope:tensorflow.TensorProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > half_val_;
  mutable int _half_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > float_val_;
  mutable int _float_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > double_val_;
  mutable int _double_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > int_val_;
  mutable int _int_val_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> string_val_;
  ::google::protobuf::RepeatedField< float > scomplex_val_;
  mutable int _scomplex_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > int64_val_;
  mutable int _int64_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > bool_val_;
  mutable int _bool_val_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > dcomplex_val_;
  mutable int _dcomplex_val_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::ResourceHandle > resource_handle_val_;
  ::google::protobuf::internal::ArenaStringPtr tensor_content_;
  ::tensorflow::TensorShapeProto* tensor_shape_;
  int dtype_;
  ::google::protobuf::int32 version_number_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2ftensor_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fframework_2ftensor_2eproto_impl();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2ftensor_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2ftensor_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<TensorProto> TensorProto_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TensorProto

// optional .tensorflow.DataType dtype = 1;
inline void TensorProto::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType TensorProto::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void TensorProto::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.dtype)
}

// optional .tensorflow.TensorShapeProto tensor_shape = 2;
inline bool TensorProto::has_tensor_shape() const {
  return this != internal_default_instance() && tensor_shape_ != NULL;
}
inline void TensorProto::clear_tensor_shape() {
  if (GetArenaNoVirtual() == NULL && tensor_shape_ != NULL) delete tensor_shape_;
  tensor_shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& TensorProto::tensor_shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.tensor_shape)
  return tensor_shape_ != NULL ? *tensor_shape_
                         : *::tensorflow::TensorShapeProto::internal_default_instance();
}
inline ::tensorflow::TensorShapeProto* TensorProto::mutable_tensor_shape() {
  
  if (tensor_shape_ == NULL) {
    _slow_mutable_tensor_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.tensor_shape)
  return tensor_shape_;
}
inline ::tensorflow::TensorShapeProto* TensorProto::release_tensor_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorProto.tensor_shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_tensor_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = tensor_shape_;
    tensor_shape_ = NULL;
    return temp;
  }
}
inline  void TensorProto::set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete tensor_shape_;
  }
  if (tensor_shape != NULL) {
    _slow_set_allocated_tensor_shape(message_arena, &tensor_shape);
  }
  tensor_shape_ = tensor_shape;
  if (tensor_shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorProto.tensor_shape)
}

// optional int32 version_number = 3;
inline void TensorProto::clear_version_number() {
  version_number_ = 0;
}
inline ::google::protobuf::int32 TensorProto::version_number() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.version_number)
  return version_number_;
}
inline void TensorProto::set_version_number(::google::protobuf::int32 value) {
  
  version_number_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.version_number)
}

// optional bytes tensor_content = 4;
inline void TensorProto::clear_tensor_content() {
  tensor_content_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& TensorProto::tensor_content() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.tensor_content)
  return tensor_content_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TensorProto::set_tensor_content(const ::std::string& value) {
  
  tensor_content_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.tensor_content)
}
inline void TensorProto::set_tensor_content(const char* value) {
  
  tensor_content_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.TensorProto.tensor_content)
}
inline void TensorProto::set_tensor_content(const void* value,
    size_t size) {
  
  tensor_content_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.TensorProto.tensor_content)
}
inline ::std::string* TensorProto::mutable_tensor_content() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.tensor_content)
  return tensor_content_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* TensorProto::release_tensor_content() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorProto.tensor_content)
  
  return tensor_content_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* TensorProto::unsafe_arena_release_tensor_content() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.TensorProto.tensor_content)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return tensor_content_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void TensorProto::set_allocated_tensor_content(::std::string* tensor_content) {
  if (tensor_content != NULL) {
    
  } else {
    
  }
  tensor_content_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tensor_content,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorProto.tensor_content)
}
inline void TensorProto::unsafe_arena_set_allocated_tensor_content(
    ::std::string* tensor_content) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (tensor_content != NULL) {
    
  } else {
    
  }
  tensor_content_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      tensor_content, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.TensorProto.tensor_content)
}

// repeated int32 half_val = 13 [packed = true];
inline int TensorProto::half_val_size() const {
  return half_val_.size();
}
inline void TensorProto::clear_half_val() {
  half_val_.Clear();
}
inline ::google::protobuf::int32 TensorProto::half_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.half_val)
  return half_val_.Get(index);
}
inline void TensorProto::set_half_val(int index, ::google::protobuf::int32 value) {
  half_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.half_val)
}
inline void TensorProto::add_half_val(::google::protobuf::int32 value) {
  half_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.half_val)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
TensorProto::half_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.half_val)
  return half_val_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
TensorProto::mutable_half_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.half_val)
  return &half_val_;
}

// repeated float float_val = 5 [packed = true];
inline int TensorProto::float_val_size() const {
  return float_val_.size();
}
inline void TensorProto::clear_float_val() {
  float_val_.Clear();
}
inline float TensorProto::float_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.float_val)
  return float_val_.Get(index);
}
inline void TensorProto::set_float_val(int index, float value) {
  float_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.float_val)
}
inline void TensorProto::add_float_val(float value) {
  float_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.float_val)
}
inline const ::google::protobuf::RepeatedField< float >&
TensorProto::float_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.float_val)
  return float_val_;
}
inline ::google::protobuf::RepeatedField< float >*
TensorProto::mutable_float_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.float_val)
  return &float_val_;
}

// repeated double double_val = 6 [packed = true];
inline int TensorProto::double_val_size() const {
  return double_val_.size();
}
inline void TensorProto::clear_double_val() {
  double_val_.Clear();
}
inline double TensorProto::double_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.double_val)
  return double_val_.Get(index);
}
inline void TensorProto::set_double_val(int index, double value) {
  double_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.double_val)
}
inline void TensorProto::add_double_val(double value) {
  double_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.double_val)
}
inline const ::google::protobuf::RepeatedField< double >&
TensorProto::double_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.double_val)
  return double_val_;
}
inline ::google::protobuf::RepeatedField< double >*
TensorProto::mutable_double_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.double_val)
  return &double_val_;
}

// repeated int32 int_val = 7 [packed = true];
inline int TensorProto::int_val_size() const {
  return int_val_.size();
}
inline void TensorProto::clear_int_val() {
  int_val_.Clear();
}
inline ::google::protobuf::int32 TensorProto::int_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.int_val)
  return int_val_.Get(index);
}
inline void TensorProto::set_int_val(int index, ::google::protobuf::int32 value) {
  int_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.int_val)
}
inline void TensorProto::add_int_val(::google::protobuf::int32 value) {
  int_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.int_val)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
TensorProto::int_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.int_val)
  return int_val_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
TensorProto::mutable_int_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.int_val)
  return &int_val_;
}

// repeated bytes string_val = 8;
inline int TensorProto::string_val_size() const {
  return string_val_.size();
}
inline void TensorProto::clear_string_val() {
  string_val_.Clear();
}
inline const ::std::string& TensorProto::string_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.string_val)
  return string_val_.Get(index);
}
inline ::std::string* TensorProto::mutable_string_val(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.string_val)
  return string_val_.Mutable(index);
}
inline void TensorProto::set_string_val(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.string_val)
  string_val_.Mutable(index)->assign(value);
}
inline void TensorProto::set_string_val(int index, const char* value) {
  string_val_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.TensorProto.string_val)
}
inline void TensorProto::set_string_val(int index, const void* value, size_t size) {
  string_val_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.TensorProto.string_val)
}
inline ::std::string* TensorProto::add_string_val() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.TensorProto.string_val)
  return string_val_.Add();
}
inline void TensorProto::add_string_val(const ::std::string& value) {
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(const char* value) {
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(const void* value, size_t size) {
  string_val_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.TensorProto.string_val)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
TensorProto::string_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.string_val)
  return string_val_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
TensorProto::mutable_string_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.string_val)
  return &string_val_;
}

// repeated float scomplex_val = 9 [packed = true];
inline int TensorProto::scomplex_val_size() const {
  return scomplex_val_.size();
}
inline void TensorProto::clear_scomplex_val() {
  scomplex_val_.Clear();
}
inline float TensorProto::scomplex_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.scomplex_val)
  return scomplex_val_.Get(index);
}
inline void TensorProto::set_scomplex_val(int index, float value) {
  scomplex_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.scomplex_val)
}
inline void TensorProto::add_scomplex_val(float value) {
  scomplex_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.scomplex_val)
}
inline const ::google::protobuf::RepeatedField< float >&
TensorProto::scomplex_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.scomplex_val)
  return scomplex_val_;
}
inline ::google::protobuf::RepeatedField< float >*
TensorProto::mutable_scomplex_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.scomplex_val)
  return &scomplex_val_;
}

// repeated int64 int64_val = 10 [packed = true];
inline int TensorProto::int64_val_size() const {
  return int64_val_.size();
}
inline void TensorProto::clear_int64_val() {
  int64_val_.Clear();
}
inline ::google::protobuf::int64 TensorProto::int64_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.int64_val)
  return int64_val_.Get(index);
}
inline void TensorProto::set_int64_val(int index, ::google::protobuf::int64 value) {
  int64_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.int64_val)
}
inline void TensorProto::add_int64_val(::google::protobuf::int64 value) {
  int64_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.int64_val)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
TensorProto::int64_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.int64_val)
  return int64_val_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
TensorProto::mutable_int64_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.int64_val)
  return &int64_val_;
}

// repeated bool bool_val = 11 [packed = true];
inline int TensorProto::bool_val_size() const {
  return bool_val_.size();
}
inline void TensorProto::clear_bool_val() {
  bool_val_.Clear();
}
inline bool TensorProto::bool_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.bool_val)
  return bool_val_.Get(index);
}
inline void TensorProto::set_bool_val(int index, bool value) {
  bool_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.bool_val)
}
inline void TensorProto::add_bool_val(bool value) {
  bool_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.bool_val)
}
inline const ::google::protobuf::RepeatedField< bool >&
TensorProto::bool_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.bool_val)
  return bool_val_;
}
inline ::google::protobuf::RepeatedField< bool >*
TensorProto::mutable_bool_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.bool_val)
  return &bool_val_;
}

// repeated double dcomplex_val = 12 [packed = true];
inline int TensorProto::dcomplex_val_size() const {
  return dcomplex_val_.size();
}
inline void TensorProto::clear_dcomplex_val() {
  dcomplex_val_.Clear();
}
inline double TensorProto::dcomplex_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.dcomplex_val)
  return dcomplex_val_.Get(index);
}
inline void TensorProto::set_dcomplex_val(int index, double value) {
  dcomplex_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.dcomplex_val)
}
inline void TensorProto::add_dcomplex_val(double value) {
  dcomplex_val_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.dcomplex_val)
}
inline const ::google::protobuf::RepeatedField< double >&
TensorProto::dcomplex_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.dcomplex_val)
  return dcomplex_val_;
}
inline ::google::protobuf::RepeatedField< double >*
TensorProto::mutable_dcomplex_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.dcomplex_val)
  return &dcomplex_val_;
}

// repeated .tensorflow.ResourceHandle resource_handle_val = 14;
inline int TensorProto::resource_handle_val_size() const {
  return resource_handle_val_.size();
}
inline void TensorProto::clear_resource_handle_val() {
  resource_handle_val_.Clear();
}
inline const ::tensorflow::ResourceHandle& TensorProto::resource_handle_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.resource_handle_val)
  return resource_handle_val_.Get(index);
}
inline ::tensorflow::ResourceHandle* TensorProto::mutable_resource_handle_val(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.resource_handle_val)
  return resource_handle_val_.Mutable(index);
}
inline ::tensorflow::ResourceHandle* TensorProto::add_resource_handle_val() {
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.resource_handle_val)
  return resource_handle_val_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::ResourceHandle >*
TensorProto::mutable_resource_handle_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.resource_handle_val)
  return &resource_handle_val_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::ResourceHandle >&
TensorProto::resource_handle_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.resource_handle_val)
  return resource_handle_val_;
}

inline const TensorProto* TensorProto::internal_default_instance() {
  return &TensorProto_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_2eproto__INCLUDED