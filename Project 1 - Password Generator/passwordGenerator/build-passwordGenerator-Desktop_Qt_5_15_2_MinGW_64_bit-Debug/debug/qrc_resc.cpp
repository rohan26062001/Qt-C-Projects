/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.15.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/Internships/1. C++ - Codespeedy Technology/Projects/Project 1/passwordGenerator/password.txt
  0x0,0x0,0x0,0x30,
  0x55,
  0x6d,0x46,0x35,0x70,0x21,0x25,0x38,0x47,0x38,0x45,0x76,0x5a,0x4a,0x76,0x67,0x70,
  0x25,0x39,0x4c,0x6e,0x31,0x53,0x26,0x32,0x56,0x26,0x39,0x6c,0x41,0x57,0x26,0x25,
  0x6d,0x4d,0x73,0x52,0x42,0x6b,0x63,0x52,0x51,0x75,0x72,0x35,0x4d,0x35,0x6e,
  
};

static const unsigned char qt_resource_name[] = {
  // new
  0x0,0x3,
  0x0,0x0,0x74,0xc7,
  0x0,0x6e,
  0x0,0x65,0x0,0x77,
    // password.txt
  0x0,0xc,
  0x8,0x56,0xe,0x34,
  0x0,0x70,
  0x0,0x61,0x0,0x73,0x0,0x73,0x0,0x77,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/password.txt
  0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x77,0x84,0xea,0xb0,0xa6,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resc)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resc)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resc)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resc)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resc)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resc)(); }
   } dummy;
}