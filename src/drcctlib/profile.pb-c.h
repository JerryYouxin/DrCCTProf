/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: profile.proto */

#ifndef PROTOBUF_C_profile_2eproto__INCLUDED
#define PROTOBUF_C_profile_2eproto__INCLUDED

#include "protobuf-c/protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Drcctprof__Profile__Profile Drcctprof__Profile__Profile;
typedef struct _Drcctprof__Profile__Sample Drcctprof__Profile__Sample;
typedef struct _Drcctprof__Profile__MetricType Drcctprof__Profile__MetricType;
typedef struct _Drcctprof__Profile__Metric Drcctprof__Profile__Metric;
typedef struct _Drcctprof__Profile__Context Drcctprof__Profile__Context;
typedef struct _Drcctprof__Profile__Location Drcctprof__Profile__Location;
typedef struct _Drcctprof__Profile__Line Drcctprof__Profile__Line;
typedef struct _Drcctprof__Profile__Function Drcctprof__Profile__Function;
typedef struct _Drcctprof__Profile__SourceFile Drcctprof__Profile__SourceFile;


/* --- enums --- */


/* --- messages --- */

struct  _Drcctprof__Profile__Profile
{
  ProtobufCMessage base;
  size_t n_metric_type;
  Drcctprof__Profile__MetricType **metric_type;
  size_t n_sample;
  Drcctprof__Profile__Sample **sample;
  size_t n_context;
  Drcctprof__Profile__Context **context;
  size_t n_location;
  Drcctprof__Profile__Location **location;
  size_t n_function;
  Drcctprof__Profile__Function **function;
  size_t n_source_file;
  Drcctprof__Profile__SourceFile **source_file;
  /*
   * string_table[0] must always be "".
   */
  size_t n_string_table;
  char **string_table;
};
#define DRCCTPROF__PROFILE__PROFILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__profile__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _Drcctprof__Profile__Sample
{
  ProtobufCMessage base;
  uint64_t context_id;
  size_t n_metric;
  Drcctprof__Profile__Metric **metric;
};
#define DRCCTPROF__PROFILE__SAMPLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__sample__descriptor) \
    , 0, 0,NULL }


/*
 * MetricType describes the semantics and measurement units of a value.
 */
struct  _Drcctprof__Profile__MetricType
{
  ProtobufCMessage base;
  int64_t value_type;
  /*
   * Index into string table.
   */
  int64_t unit;
  /*
   * Index into string table.
   */
  int64_t des;
};
#define DRCCTPROF__PROFILE__METRIC_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__metric_type__descriptor) \
    , 0, 0, 0 }


struct  _Drcctprof__Profile__Metric
{
  ProtobufCMessage base;
  int64_t int_value;
  uint64_t uint_value;
  /*
   * Index into string table.
   */
  int64_t str_value;
};
#define DRCCTPROF__PROFILE__METRIC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__metric__descriptor) \
    , 0, 0, 0 }


struct  _Drcctprof__Profile__Context
{
  ProtobufCMessage base;
  /*
   * Unique nonzero id for the context item.
   */
  uint64_t id;
  uint64_t location_id;
  uint64_t parent_id;
  size_t n_children_id;
  uint64_t *children_id;
};
#define DRCCTPROF__PROFILE__CONTEXT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__context__descriptor) \
    , 0, 0, 0, 0,NULL }


/*
 * Describes function and line table debug information.
 */
struct  _Drcctprof__Profile__Location
{
  ProtobufCMessage base;
  /*
   * Unique nonzero id for the location.  A profile could use
   * instruction addresses or any integer sequence as ids.
   */
  uint64_t id;
  /*
   * Multiple line indicates this location has inlined functions,
   * where the last entry represents the caller into which the
   * preceding entries were inlined.
   * E.g., if memcpy() is inlined into printf:
   *    line[0].function_name == "memcpy"
   *    line[1].function_name == "printf"
   */
  size_t n_line;
  Drcctprof__Profile__Line **line;
};
#define DRCCTPROF__PROFILE__LOCATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__location__descriptor) \
    , 0, 0,NULL }


struct  _Drcctprof__Profile__Line
{
  ProtobufCMessage base;
  /*
   * The id of the corresponding profile.Function for this line.
   */
  uint64_t function_id;
  /*
   * Line number in source code.
   */
  int64_t line;
};
#define DRCCTPROF__PROFILE__LINE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__line__descriptor) \
    , 0, 0 }


struct  _Drcctprof__Profile__Function
{
  ProtobufCMessage base;
  /*
   * Unique nonzero id for the function.
   */
  uint64_t id;
  /*
   * Name of the function, in human-readable form if available.
   */
  /*
   * Index into string table
   */
  int64_t name;
  /*
   * Name of the function, as identified by the system.
   * For instance, it can be a C++ mangled name.
   */
  /*
   * Index into string table
   */
  int64_t system_name;
  /*
   * Source file containing the function.
   */
  uint64_t source_file_id;
  /*
   * Line number in source file.
   */
  int64_t start_line;
};
#define DRCCTPROF__PROFILE__FUNCTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__function__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  _Drcctprof__Profile__SourceFile
{
  ProtobufCMessage base;
  /*
   * Unique nonzero id for the source file.
   */
  uint64_t id;
  /*
   * Index into string table
   */
  int64_t filename;
  /*
   * Index into string table
   */
  int64_t location_path;
  int64_t type;
};
#define DRCCTPROF__PROFILE__SOURCE_FILE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&drcctprof__profile__source_file__descriptor) \
    , 0, 0, 0, 0 }


/* Drcctprof__Profile__Profile methods */
void   drcctprof__profile__profile__init
                     (Drcctprof__Profile__Profile         *message);
size_t drcctprof__profile__profile__get_packed_size
                     (const Drcctprof__Profile__Profile   *message);
size_t drcctprof__profile__profile__pack
                     (const Drcctprof__Profile__Profile   *message,
                      uint8_t             *out);
size_t drcctprof__profile__profile__pack_to_buffer
                     (const Drcctprof__Profile__Profile   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Profile *
       drcctprof__profile__profile__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__profile__free_unpacked
                     (Drcctprof__Profile__Profile *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Sample methods */
void   drcctprof__profile__sample__init
                     (Drcctprof__Profile__Sample         *message);
size_t drcctprof__profile__sample__get_packed_size
                     (const Drcctprof__Profile__Sample   *message);
size_t drcctprof__profile__sample__pack
                     (const Drcctprof__Profile__Sample   *message,
                      uint8_t             *out);
size_t drcctprof__profile__sample__pack_to_buffer
                     (const Drcctprof__Profile__Sample   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Sample *
       drcctprof__profile__sample__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__sample__free_unpacked
                     (Drcctprof__Profile__Sample *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__MetricType methods */
void   drcctprof__profile__metric_type__init
                     (Drcctprof__Profile__MetricType         *message);
size_t drcctprof__profile__metric_type__get_packed_size
                     (const Drcctprof__Profile__MetricType   *message);
size_t drcctprof__profile__metric_type__pack
                     (const Drcctprof__Profile__MetricType   *message,
                      uint8_t             *out);
size_t drcctprof__profile__metric_type__pack_to_buffer
                     (const Drcctprof__Profile__MetricType   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__MetricType *
       drcctprof__profile__metric_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__metric_type__free_unpacked
                     (Drcctprof__Profile__MetricType *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Metric methods */
void   drcctprof__profile__metric__init
                     (Drcctprof__Profile__Metric         *message);
size_t drcctprof__profile__metric__get_packed_size
                     (const Drcctprof__Profile__Metric   *message);
size_t drcctprof__profile__metric__pack
                     (const Drcctprof__Profile__Metric   *message,
                      uint8_t             *out);
size_t drcctprof__profile__metric__pack_to_buffer
                     (const Drcctprof__Profile__Metric   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Metric *
       drcctprof__profile__metric__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__metric__free_unpacked
                     (Drcctprof__Profile__Metric *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Context methods */
void   drcctprof__profile__context__init
                     (Drcctprof__Profile__Context         *message);
size_t drcctprof__profile__context__get_packed_size
                     (const Drcctprof__Profile__Context   *message);
size_t drcctprof__profile__context__pack
                     (const Drcctprof__Profile__Context   *message,
                      uint8_t             *out);
size_t drcctprof__profile__context__pack_to_buffer
                     (const Drcctprof__Profile__Context   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Context *
       drcctprof__profile__context__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__context__free_unpacked
                     (Drcctprof__Profile__Context *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Location methods */
void   drcctprof__profile__location__init
                     (Drcctprof__Profile__Location         *message);
size_t drcctprof__profile__location__get_packed_size
                     (const Drcctprof__Profile__Location   *message);
size_t drcctprof__profile__location__pack
                     (const Drcctprof__Profile__Location   *message,
                      uint8_t             *out);
size_t drcctprof__profile__location__pack_to_buffer
                     (const Drcctprof__Profile__Location   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Location *
       drcctprof__profile__location__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__location__free_unpacked
                     (Drcctprof__Profile__Location *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Line methods */
void   drcctprof__profile__line__init
                     (Drcctprof__Profile__Line         *message);
size_t drcctprof__profile__line__get_packed_size
                     (const Drcctprof__Profile__Line   *message);
size_t drcctprof__profile__line__pack
                     (const Drcctprof__Profile__Line   *message,
                      uint8_t             *out);
size_t drcctprof__profile__line__pack_to_buffer
                     (const Drcctprof__Profile__Line   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Line *
       drcctprof__profile__line__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__line__free_unpacked
                     (Drcctprof__Profile__Line *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__Function methods */
void   drcctprof__profile__function__init
                     (Drcctprof__Profile__Function         *message);
size_t drcctprof__profile__function__get_packed_size
                     (const Drcctprof__Profile__Function   *message);
size_t drcctprof__profile__function__pack
                     (const Drcctprof__Profile__Function   *message,
                      uint8_t             *out);
size_t drcctprof__profile__function__pack_to_buffer
                     (const Drcctprof__Profile__Function   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__Function *
       drcctprof__profile__function__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__function__free_unpacked
                     (Drcctprof__Profile__Function *message,
                      ProtobufCAllocator *allocator);
/* Drcctprof__Profile__SourceFile methods */
void   drcctprof__profile__source_file__init
                     (Drcctprof__Profile__SourceFile         *message);
size_t drcctprof__profile__source_file__get_packed_size
                     (const Drcctprof__Profile__SourceFile   *message);
size_t drcctprof__profile__source_file__pack
                     (const Drcctprof__Profile__SourceFile   *message,
                      uint8_t             *out);
size_t drcctprof__profile__source_file__pack_to_buffer
                     (const Drcctprof__Profile__SourceFile   *message,
                      ProtobufCBuffer     *buffer);
Drcctprof__Profile__SourceFile *
       drcctprof__profile__source_file__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   drcctprof__profile__source_file__free_unpacked
                     (Drcctprof__Profile__SourceFile *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Drcctprof__Profile__Profile_Closure)
                 (const Drcctprof__Profile__Profile *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Sample_Closure)
                 (const Drcctprof__Profile__Sample *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__MetricType_Closure)
                 (const Drcctprof__Profile__MetricType *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Metric_Closure)
                 (const Drcctprof__Profile__Metric *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Context_Closure)
                 (const Drcctprof__Profile__Context *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Location_Closure)
                 (const Drcctprof__Profile__Location *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Line_Closure)
                 (const Drcctprof__Profile__Line *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__Function_Closure)
                 (const Drcctprof__Profile__Function *message,
                  void *closure_data);
typedef void (*Drcctprof__Profile__SourceFile_Closure)
                 (const Drcctprof__Profile__SourceFile *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor drcctprof__profile__profile__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__sample__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__metric_type__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__metric__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__context__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__location__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__line__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__function__descriptor;
extern const ProtobufCMessageDescriptor drcctprof__profile__source_file__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_profile_2eproto__INCLUDED */
