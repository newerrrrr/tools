// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActivityConfig.proto

#ifndef PROTOBUF_ActivityConfig_2eproto__INCLUDED
#define PROTOBUF_ActivityConfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "GroupTypeConfig.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ActivityConfig_2eproto();
void protobuf_AssignDesc_ActivityConfig_2eproto();
void protobuf_ShutdownFile_ActivityConfig_2eproto();

class ActivityConfig;

// ===================================================================

class ActivityConfig : public ::google::protobuf::Message {
 public:
  ActivityConfig();
  virtual ~ActivityConfig();

  ActivityConfig(const ActivityConfig& from);

  inline ActivityConfig& operator=(const ActivityConfig& from) {
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
  static const ActivityConfig& default_instance();

  void Swap(ActivityConfig* other);

  // implements Message ----------------------------------------------

  ActivityConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ActivityConfig& from);
  void MergeFrom(const ActivityConfig& from);
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

  // repeated int32 activity_show = 1;
  inline int activity_show_size() const;
  inline void clear_activity_show();
  static const int kActivityShowFieldNumber = 1;
  inline ::google::protobuf::int32 activity_show(int index) const;
  inline void set_activity_show(int index, ::google::protobuf::int32 value);
  inline void add_activity_show(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      activity_show() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_activity_show();

  // required int32 act_type = 2;
  inline bool has_act_type() const;
  inline void clear_act_type();
  static const int kActTypeFieldNumber = 2;
  inline ::google::protobuf::int32 act_type() const;
  inline void set_act_type(::google::protobuf::int32 value);

  // required int32 open_date = 3;
  inline bool has_open_date() const;
  inline void clear_open_date();
  static const int kOpenDateFieldNumber = 3;
  inline ::google::protobuf::int32 open_date() const;
  inline void set_open_date(::google::protobuf::int32 value);

  // required int32 hot_type = 4;
  inline bool has_hot_type() const;
  inline void clear_hot_type();
  static const int kHotTypeFieldNumber = 4;
  inline ::google::protobuf::int32 hot_type() const;
  inline void set_hot_type(::google::protobuf::int32 value);

  // required string rule = 5;
  inline bool has_rule() const;
  inline void clear_rule();
  static const int kRuleFieldNumber = 5;
  inline const ::std::string& rule() const;
  inline void set_rule(const ::std::string& value);
  inline void set_rule(const char* value);
  inline void set_rule(const char* value, size_t size);
  inline ::std::string* mutable_rule();
  inline ::std::string* release_rule();
  inline void set_allocated_rule(::std::string* rule);

  // repeated int32 week_date = 6;
  inline int week_date_size() const;
  inline void clear_week_date();
  static const int kWeekDateFieldNumber = 6;
  inline ::google::protobuf::int32 week_date(int index) const;
  inline void set_week_date(int index, ::google::protobuf::int32 value);
  inline void add_week_date(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      week_date() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_week_date();

  // required int32 close_date = 7;
  inline bool has_close_date() const;
  inline void clear_close_date();
  static const int kCloseDateFieldNumber = 7;
  inline ::google::protobuf::int32 close_date() const;
  inline void set_close_date(::google::protobuf::int32 value);

  // required int32 showornot = 8;
  inline bool has_showornot() const;
  inline void clear_showornot();
  static const int kShowornotFieldNumber = 8;
  inline ::google::protobuf::int32 showornot() const;
  inline void set_showornot(::google::protobuf::int32 value);

  // required int32 id = 9;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 9;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required int32 title_res = 10;
  inline bool has_title_res() const;
  inline void clear_title_res();
  static const int kTitleResFieldNumber = 10;
  inline ::google::protobuf::int32 title_res() const;
  inline void set_title_res(::google::protobuf::int32 value);

  // required int32 activity_id = 11;
  inline bool has_activity_id() const;
  inline void clear_activity_id();
  static const int kActivityIdFieldNumber = 11;
  inline ::google::protobuf::int32 activity_id() const;
  inline void set_activity_id(::google::protobuf::int32 value);

  // required string desc = 12;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 12;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // repeated int32 activity_drop = 13;
  inline int activity_drop_size() const;
  inline void clear_activity_drop();
  static const int kActivityDropFieldNumber = 13;
  inline ::google::protobuf::int32 activity_drop(int index) const;
  inline void set_activity_drop(int index, ::google::protobuf::int32 value);
  inline void add_activity_drop(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      activity_drop() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_activity_drop();

  // required int32 show_type = 14;
  inline bool has_show_type() const;
  inline void clear_show_type();
  static const int kShowTypeFieldNumber = 14;
  inline ::google::protobuf::int32 show_type() const;
  inline void set_show_type(::google::protobuf::int32 value);

  // required int32 showrule = 15;
  inline bool has_showrule() const;
  inline void clear_showrule();
  static const int kShowruleFieldNumber = 15;
  inline ::google::protobuf::int32 showrule() const;
  inline void set_showrule(::google::protobuf::int32 value);

  // repeated .GroupTypeConfig kk = 16;
  inline int kk_size() const;
  inline void clear_kk();
  static const int kKkFieldNumber = 16;
  inline const ::GroupTypeConfig& kk(int index) const;
  inline ::GroupTypeConfig* mutable_kk(int index);
  inline ::GroupTypeConfig* add_kk();
  inline const ::google::protobuf::RepeatedPtrField< ::GroupTypeConfig >&
      kk() const;
  inline ::google::protobuf::RepeatedPtrField< ::GroupTypeConfig >*
      mutable_kk();

  // required int32 act_same_index = 17;
  inline bool has_act_same_index() const;
  inline void clear_act_same_index();
  static const int kActSameIndexFieldNumber = 17;
  inline ::google::protobuf::int32 act_same_index() const;
  inline void set_act_same_index(::google::protobuf::int32 value);

  // required int32 date_type = 18;
  inline bool has_date_type() const;
  inline void clear_date_type();
  static const int kDateTypeFieldNumber = 18;
  inline ::google::protobuf::int32 date_type() const;
  inline void set_date_type(::google::protobuf::int32 value);

  // required string activity_name = 19;
  inline bool has_activity_name() const;
  inline void clear_activity_name();
  static const int kActivityNameFieldNumber = 19;
  inline const ::std::string& activity_name() const;
  inline void set_activity_name(const ::std::string& value);
  inline void set_activity_name(const char* value);
  inline void set_activity_name(const char* value, size_t size);
  inline ::std::string* mutable_activity_name();
  inline ::std::string* release_activity_name();
  inline void set_allocated_activity_name(::std::string* activity_name);

  // @@protoc_insertion_point(class_scope:ActivityConfig)
 private:
  inline void set_has_act_type();
  inline void clear_has_act_type();
  inline void set_has_open_date();
  inline void clear_has_open_date();
  inline void set_has_hot_type();
  inline void clear_has_hot_type();
  inline void set_has_rule();
  inline void clear_has_rule();
  inline void set_has_close_date();
  inline void clear_has_close_date();
  inline void set_has_showornot();
  inline void clear_has_showornot();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_title_res();
  inline void clear_has_title_res();
  inline void set_has_activity_id();
  inline void clear_has_activity_id();
  inline void set_has_desc();
  inline void clear_has_desc();
  inline void set_has_show_type();
  inline void clear_has_show_type();
  inline void set_has_showrule();
  inline void clear_has_showrule();
  inline void set_has_act_same_index();
  inline void clear_has_act_same_index();
  inline void set_has_date_type();
  inline void clear_has_date_type();
  inline void set_has_activity_name();
  inline void clear_has_activity_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > activity_show_;
  ::google::protobuf::int32 act_type_;
  ::google::protobuf::int32 open_date_;
  ::std::string* rule_;
  ::google::protobuf::int32 hot_type_;
  ::google::protobuf::int32 close_date_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > week_date_;
  ::google::protobuf::int32 showornot_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 title_res_;
  ::google::protobuf::int32 activity_id_;
  ::std::string* desc_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > activity_drop_;
  ::google::protobuf::int32 show_type_;
  ::google::protobuf::int32 showrule_;
  ::google::protobuf::RepeatedPtrField< ::GroupTypeConfig > kk_;
  ::google::protobuf::int32 act_same_index_;
  ::google::protobuf::int32 date_type_;
  ::std::string* activity_name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(19 + 31) / 32];

  friend void  protobuf_AddDesc_ActivityConfig_2eproto();
  friend void protobuf_AssignDesc_ActivityConfig_2eproto();
  friend void protobuf_ShutdownFile_ActivityConfig_2eproto();

  void InitAsDefaultInstance();
  static ActivityConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// ActivityConfig

// repeated int32 activity_show = 1;
inline int ActivityConfig::activity_show_size() const {
  return activity_show_.size();
}
inline void ActivityConfig::clear_activity_show() {
  activity_show_.Clear();
}
inline ::google::protobuf::int32 ActivityConfig::activity_show(int index) const {
  return activity_show_.Get(index);
}
inline void ActivityConfig::set_activity_show(int index, ::google::protobuf::int32 value) {
  activity_show_.Set(index, value);
}
inline void ActivityConfig::add_activity_show(::google::protobuf::int32 value) {
  activity_show_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ActivityConfig::activity_show() const {
  return activity_show_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ActivityConfig::mutable_activity_show() {
  return &activity_show_;
}

// required int32 act_type = 2;
inline bool ActivityConfig::has_act_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActivityConfig::set_has_act_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActivityConfig::clear_has_act_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActivityConfig::clear_act_type() {
  act_type_ = 0;
  clear_has_act_type();
}
inline ::google::protobuf::int32 ActivityConfig::act_type() const {
  return act_type_;
}
inline void ActivityConfig::set_act_type(::google::protobuf::int32 value) {
  set_has_act_type();
  act_type_ = value;
}

// required int32 open_date = 3;
inline bool ActivityConfig::has_open_date() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActivityConfig::set_has_open_date() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActivityConfig::clear_has_open_date() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActivityConfig::clear_open_date() {
  open_date_ = 0;
  clear_has_open_date();
}
inline ::google::protobuf::int32 ActivityConfig::open_date() const {
  return open_date_;
}
inline void ActivityConfig::set_open_date(::google::protobuf::int32 value) {
  set_has_open_date();
  open_date_ = value;
}

// required int32 hot_type = 4;
inline bool ActivityConfig::has_hot_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActivityConfig::set_has_hot_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActivityConfig::clear_has_hot_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActivityConfig::clear_hot_type() {
  hot_type_ = 0;
  clear_has_hot_type();
}
inline ::google::protobuf::int32 ActivityConfig::hot_type() const {
  return hot_type_;
}
inline void ActivityConfig::set_hot_type(::google::protobuf::int32 value) {
  set_has_hot_type();
  hot_type_ = value;
}

// required string rule = 5;
inline bool ActivityConfig::has_rule() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ActivityConfig::set_has_rule() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ActivityConfig::clear_has_rule() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ActivityConfig::clear_rule() {
  if (rule_ != &::google::protobuf::internal::kEmptyString) {
    rule_->clear();
  }
  clear_has_rule();
}
inline const ::std::string& ActivityConfig::rule() const {
  return *rule_;
}
inline void ActivityConfig::set_rule(const ::std::string& value) {
  set_has_rule();
  if (rule_ == &::google::protobuf::internal::kEmptyString) {
    rule_ = new ::std::string;
  }
  rule_->assign(value);
}
inline void ActivityConfig::set_rule(const char* value) {
  set_has_rule();
  if (rule_ == &::google::protobuf::internal::kEmptyString) {
    rule_ = new ::std::string;
  }
  rule_->assign(value);
}
inline void ActivityConfig::set_rule(const char* value, size_t size) {
  set_has_rule();
  if (rule_ == &::google::protobuf::internal::kEmptyString) {
    rule_ = new ::std::string;
  }
  rule_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActivityConfig::mutable_rule() {
  set_has_rule();
  if (rule_ == &::google::protobuf::internal::kEmptyString) {
    rule_ = new ::std::string;
  }
  return rule_;
}
inline ::std::string* ActivityConfig::release_rule() {
  clear_has_rule();
  if (rule_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = rule_;
    rule_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActivityConfig::set_allocated_rule(::std::string* rule) {
  if (rule_ != &::google::protobuf::internal::kEmptyString) {
    delete rule_;
  }
  if (rule) {
    set_has_rule();
    rule_ = rule;
  } else {
    clear_has_rule();
    rule_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 week_date = 6;
inline int ActivityConfig::week_date_size() const {
  return week_date_.size();
}
inline void ActivityConfig::clear_week_date() {
  week_date_.Clear();
}
inline ::google::protobuf::int32 ActivityConfig::week_date(int index) const {
  return week_date_.Get(index);
}
inline void ActivityConfig::set_week_date(int index, ::google::protobuf::int32 value) {
  week_date_.Set(index, value);
}
inline void ActivityConfig::add_week_date(::google::protobuf::int32 value) {
  week_date_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ActivityConfig::week_date() const {
  return week_date_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ActivityConfig::mutable_week_date() {
  return &week_date_;
}

// required int32 close_date = 7;
inline bool ActivityConfig::has_close_date() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ActivityConfig::set_has_close_date() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ActivityConfig::clear_has_close_date() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ActivityConfig::clear_close_date() {
  close_date_ = 0;
  clear_has_close_date();
}
inline ::google::protobuf::int32 ActivityConfig::close_date() const {
  return close_date_;
}
inline void ActivityConfig::set_close_date(::google::protobuf::int32 value) {
  set_has_close_date();
  close_date_ = value;
}

// required int32 showornot = 8;
inline bool ActivityConfig::has_showornot() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ActivityConfig::set_has_showornot() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ActivityConfig::clear_has_showornot() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ActivityConfig::clear_showornot() {
  showornot_ = 0;
  clear_has_showornot();
}
inline ::google::protobuf::int32 ActivityConfig::showornot() const {
  return showornot_;
}
inline void ActivityConfig::set_showornot(::google::protobuf::int32 value) {
  set_has_showornot();
  showornot_ = value;
}

// required int32 id = 9;
inline bool ActivityConfig::has_id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ActivityConfig::set_has_id() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ActivityConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ActivityConfig::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ActivityConfig::id() const {
  return id_;
}
inline void ActivityConfig::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required int32 title_res = 10;
inline bool ActivityConfig::has_title_res() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ActivityConfig::set_has_title_res() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ActivityConfig::clear_has_title_res() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ActivityConfig::clear_title_res() {
  title_res_ = 0;
  clear_has_title_res();
}
inline ::google::protobuf::int32 ActivityConfig::title_res() const {
  return title_res_;
}
inline void ActivityConfig::set_title_res(::google::protobuf::int32 value) {
  set_has_title_res();
  title_res_ = value;
}

// required int32 activity_id = 11;
inline bool ActivityConfig::has_activity_id() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ActivityConfig::set_has_activity_id() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ActivityConfig::clear_has_activity_id() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ActivityConfig::clear_activity_id() {
  activity_id_ = 0;
  clear_has_activity_id();
}
inline ::google::protobuf::int32 ActivityConfig::activity_id() const {
  return activity_id_;
}
inline void ActivityConfig::set_activity_id(::google::protobuf::int32 value) {
  set_has_activity_id();
  activity_id_ = value;
}

// required string desc = 12;
inline bool ActivityConfig::has_desc() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ActivityConfig::set_has_desc() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ActivityConfig::clear_has_desc() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ActivityConfig::clear_desc() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& ActivityConfig::desc() const {
  return *desc_;
}
inline void ActivityConfig::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void ActivityConfig::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
}
inline void ActivityConfig::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActivityConfig::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    desc_ = new ::std::string;
  }
  return desc_;
}
inline ::std::string* ActivityConfig::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActivityConfig::set_allocated_desc(::std::string* desc) {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (desc) {
    set_has_desc();
    desc_ = desc;
  } else {
    clear_has_desc();
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 activity_drop = 13;
inline int ActivityConfig::activity_drop_size() const {
  return activity_drop_.size();
}
inline void ActivityConfig::clear_activity_drop() {
  activity_drop_.Clear();
}
inline ::google::protobuf::int32 ActivityConfig::activity_drop(int index) const {
  return activity_drop_.Get(index);
}
inline void ActivityConfig::set_activity_drop(int index, ::google::protobuf::int32 value) {
  activity_drop_.Set(index, value);
}
inline void ActivityConfig::add_activity_drop(::google::protobuf::int32 value) {
  activity_drop_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ActivityConfig::activity_drop() const {
  return activity_drop_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ActivityConfig::mutable_activity_drop() {
  return &activity_drop_;
}

// required int32 show_type = 14;
inline bool ActivityConfig::has_show_type() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void ActivityConfig::set_has_show_type() {
  _has_bits_[0] |= 0x00002000u;
}
inline void ActivityConfig::clear_has_show_type() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void ActivityConfig::clear_show_type() {
  show_type_ = 0;
  clear_has_show_type();
}
inline ::google::protobuf::int32 ActivityConfig::show_type() const {
  return show_type_;
}
inline void ActivityConfig::set_show_type(::google::protobuf::int32 value) {
  set_has_show_type();
  show_type_ = value;
}

// required int32 showrule = 15;
inline bool ActivityConfig::has_showrule() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void ActivityConfig::set_has_showrule() {
  _has_bits_[0] |= 0x00004000u;
}
inline void ActivityConfig::clear_has_showrule() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void ActivityConfig::clear_showrule() {
  showrule_ = 0;
  clear_has_showrule();
}
inline ::google::protobuf::int32 ActivityConfig::showrule() const {
  return showrule_;
}
inline void ActivityConfig::set_showrule(::google::protobuf::int32 value) {
  set_has_showrule();
  showrule_ = value;
}

// repeated .GroupTypeConfig kk = 16;
inline int ActivityConfig::kk_size() const {
  return kk_.size();
}
inline void ActivityConfig::clear_kk() {
  kk_.Clear();
}
inline const ::GroupTypeConfig& ActivityConfig::kk(int index) const {
  return kk_.Get(index);
}
inline ::GroupTypeConfig* ActivityConfig::mutable_kk(int index) {
  return kk_.Mutable(index);
}
inline ::GroupTypeConfig* ActivityConfig::add_kk() {
  return kk_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::GroupTypeConfig >&
ActivityConfig::kk() const {
  return kk_;
}
inline ::google::protobuf::RepeatedPtrField< ::GroupTypeConfig >*
ActivityConfig::mutable_kk() {
  return &kk_;
}

// required int32 act_same_index = 17;
inline bool ActivityConfig::has_act_same_index() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void ActivityConfig::set_has_act_same_index() {
  _has_bits_[0] |= 0x00010000u;
}
inline void ActivityConfig::clear_has_act_same_index() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void ActivityConfig::clear_act_same_index() {
  act_same_index_ = 0;
  clear_has_act_same_index();
}
inline ::google::protobuf::int32 ActivityConfig::act_same_index() const {
  return act_same_index_;
}
inline void ActivityConfig::set_act_same_index(::google::protobuf::int32 value) {
  set_has_act_same_index();
  act_same_index_ = value;
}

// required int32 date_type = 18;
inline bool ActivityConfig::has_date_type() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void ActivityConfig::set_has_date_type() {
  _has_bits_[0] |= 0x00020000u;
}
inline void ActivityConfig::clear_has_date_type() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void ActivityConfig::clear_date_type() {
  date_type_ = 0;
  clear_has_date_type();
}
inline ::google::protobuf::int32 ActivityConfig::date_type() const {
  return date_type_;
}
inline void ActivityConfig::set_date_type(::google::protobuf::int32 value) {
  set_has_date_type();
  date_type_ = value;
}

// required string activity_name = 19;
inline bool ActivityConfig::has_activity_name() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void ActivityConfig::set_has_activity_name() {
  _has_bits_[0] |= 0x00040000u;
}
inline void ActivityConfig::clear_has_activity_name() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void ActivityConfig::clear_activity_name() {
  if (activity_name_ != &::google::protobuf::internal::kEmptyString) {
    activity_name_->clear();
  }
  clear_has_activity_name();
}
inline const ::std::string& ActivityConfig::activity_name() const {
  return *activity_name_;
}
inline void ActivityConfig::set_activity_name(const ::std::string& value) {
  set_has_activity_name();
  if (activity_name_ == &::google::protobuf::internal::kEmptyString) {
    activity_name_ = new ::std::string;
  }
  activity_name_->assign(value);
}
inline void ActivityConfig::set_activity_name(const char* value) {
  set_has_activity_name();
  if (activity_name_ == &::google::protobuf::internal::kEmptyString) {
    activity_name_ = new ::std::string;
  }
  activity_name_->assign(value);
}
inline void ActivityConfig::set_activity_name(const char* value, size_t size) {
  set_has_activity_name();
  if (activity_name_ == &::google::protobuf::internal::kEmptyString) {
    activity_name_ = new ::std::string;
  }
  activity_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActivityConfig::mutable_activity_name() {
  set_has_activity_name();
  if (activity_name_ == &::google::protobuf::internal::kEmptyString) {
    activity_name_ = new ::std::string;
  }
  return activity_name_;
}
inline ::std::string* ActivityConfig::release_activity_name() {
  clear_has_activity_name();
  if (activity_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = activity_name_;
    activity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActivityConfig::set_allocated_activity_name(::std::string* activity_name) {
  if (activity_name_ != &::google::protobuf::internal::kEmptyString) {
    delete activity_name_;
  }
  if (activity_name) {
    set_has_activity_name();
    activity_name_ = activity_name;
  } else {
    clear_has_activity_name();
    activity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ActivityConfig_2eproto__INCLUDED
