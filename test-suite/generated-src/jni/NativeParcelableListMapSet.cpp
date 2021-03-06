// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#include "NativeParcelableListMapSet.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeParcelableListMapSet::NativeParcelableListMapSet() = default;

NativeParcelableListMapSet::~NativeParcelableListMapSet() = default;

auto NativeParcelableListMapSet::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeParcelableListMapSet>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::List<::djinni::Map<::djinni::String, ::djinni::Set<::djinni::String>>>::fromCpp(jniEnv, c.list_map_set)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeParcelableListMapSet::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeParcelableListMapSet>::get();
    return {::djinni::List<::djinni::Map<::djinni::String, ::djinni::Set<::djinni::String>>>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mListMapSet))};
}

}  // namespace djinni_generated
