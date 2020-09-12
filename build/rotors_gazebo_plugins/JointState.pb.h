// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: JointState.proto

#ifndef PROTOBUF_JointState_2eproto__INCLUDED
#define PROTOBUF_JointState_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Header.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_sensor_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_JointState_2eproto();
void protobuf_AssignDesc_JointState_2eproto();
void protobuf_ShutdownFile_JointState_2eproto();

class JointState;

// ===================================================================

class JointState : public ::google::protobuf::Message {
 public:
  JointState();
  virtual ~JointState();

  JointState(const JointState& from);

  inline JointState& operator=(const JointState& from) {
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
  static const JointState& default_instance();

  void Swap(JointState* other);

  // implements Message ----------------------------------------------

  JointState* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JointState& from);
  void MergeFrom(const JointState& from);
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

  // required .gz_std_msgs.Header header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::gz_std_msgs::Header& header() const;
  inline ::gz_std_msgs::Header* mutable_header();
  inline ::gz_std_msgs::Header* release_header();
  inline void set_allocated_header(::gz_std_msgs::Header* header);

  // repeated string name = 2;
  inline int name_size() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name(int index) const;
  inline ::std::string* mutable_name(int index);
  inline void set_name(int index, const ::std::string& value);
  inline void set_name(int index, const char* value);
  inline void set_name(int index, const char* value, size_t size);
  inline ::std::string* add_name();
  inline void add_name(const ::std::string& value);
  inline void add_name(const char* value);
  inline void add_name(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // repeated double position = 3 [packed = true];
  inline int position_size() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 3;
  inline double position(int index) const;
  inline void set_position(int index, double value);
  inline void add_position(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      position() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_position();

  // @@protoc_insertion_point(class_scope:gz_sensor_msgs.JointState)
 private:
  inline void set_has_header();
  inline void clear_has_header();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gz_std_msgs::Header* header_;
  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::RepeatedField< double > position_;
  mutable int _position_cached_byte_size_;
  friend void  protobuf_AddDesc_JointState_2eproto();
  friend void protobuf_AssignDesc_JointState_2eproto();
  friend void protobuf_ShutdownFile_JointState_2eproto();

  void InitAsDefaultInstance();
  static JointState* default_instance_;
};
// ===================================================================


// ===================================================================

// JointState

// required .gz_std_msgs.Header header = 1;
inline bool JointState::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void JointState::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void JointState::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void JointState::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
inline const ::gz_std_msgs::Header& JointState::header() const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.JointState.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gz_std_msgs::Header* JointState::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::gz_std_msgs::Header;
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.JointState.header)
  return header_;
}
inline ::gz_std_msgs::Header* JointState::release_header() {
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void JointState::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_sensor_msgs.JointState.header)
}

// repeated string name = 2;
inline int JointState::name_size() const {
  return name_.size();
}
inline void JointState::clear_name() {
  name_.Clear();
}
inline const ::std::string& JointState::name(int index) const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.JointState.name)
  return name_.Get(index);
}
inline ::std::string* JointState::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:gz_sensor_msgs.JointState.name)
  return name_.Mutable(index);
}
inline void JointState::set_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.JointState.name)
  name_.Mutable(index)->assign(value);
}
inline void JointState::set_name(int index, const char* value) {
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gz_sensor_msgs.JointState.name)
}
inline void JointState::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gz_sensor_msgs.JointState.name)
}
inline ::std::string* JointState::add_name() {
  return name_.Add();
}
inline void JointState::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gz_sensor_msgs.JointState.name)
}
inline void JointState::add_name(const char* value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gz_sensor_msgs.JointState.name)
}
inline void JointState::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gz_sensor_msgs.JointState.name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
JointState::name() const {
  // @@protoc_insertion_point(field_list:gz_sensor_msgs.JointState.name)
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
JointState::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:gz_sensor_msgs.JointState.name)
  return &name_;
}

// repeated double position = 3 [packed = true];
inline int JointState::position_size() const {
  return position_.size();
}
inline void JointState::clear_position() {
  position_.Clear();
}
inline double JointState::position(int index) const {
  // @@protoc_insertion_point(field_get:gz_sensor_msgs.JointState.position)
  return position_.Get(index);
}
inline void JointState::set_position(int index, double value) {
  position_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz_sensor_msgs.JointState.position)
}
inline void JointState::add_position(double value) {
  position_.Add(value);
  // @@protoc_insertion_point(field_add:gz_sensor_msgs.JointState.position)
}
inline const ::google::protobuf::RepeatedField< double >&
JointState::position() const {
  // @@protoc_insertion_point(field_list:gz_sensor_msgs.JointState.position)
  return position_;
}
inline ::google::protobuf::RepeatedField< double >*
JointState::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:gz_sensor_msgs.JointState.position)
  return &position_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_sensor_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_JointState_2eproto__INCLUDED