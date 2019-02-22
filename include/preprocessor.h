#ifndef EXTUTIL_PREPROCESS_H_
#define EXTUTIL_PREPROCESS_H_

#define EXTUTIL_MK_STR_(x) #x
#define EXTUTIL_MK_STR(x) EXTUTIL_MK_STR_(x)

#define EXTUTIL_JOIN_(x, y) x##y
#define EXTUTIL_JOIN(x, y) EXTUTIL_JOIN_(x, y)

#endif // EXTUTIL_PREPROCESS_H_
