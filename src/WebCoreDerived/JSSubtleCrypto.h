/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSubtleCrypto_h
#define JSSubtleCrypto_h

#if ENABLE(SUBTLE_CRYPTO)

#include "JSDOMBinding.h"
#include "SubtleCrypto.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSubtleCrypto : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSubtleCrypto* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SubtleCrypto> impl)
    {
        JSSubtleCrypto* ptr = new (NotNull, JSC::allocateCell<JSSubtleCrypto>(globalObject->vm().heap)) JSSubtleCrypto(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSSubtleCrypto();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }


    // Custom functions
    JSC::JSValue encrypt(JSC::ExecState*);
    JSC::JSValue decrypt(JSC::ExecState*);
    JSC::JSValue sign(JSC::ExecState*);
    JSC::JSValue verify(JSC::ExecState*);
    JSC::JSValue digest(JSC::ExecState*);
    JSC::JSValue generateKey(JSC::ExecState*);
    JSC::JSValue importKey(JSC::ExecState*);
    JSC::JSValue exportKey(JSC::ExecState*);
    JSC::JSValue wrapKey(JSC::ExecState*);
    JSC::JSValue unwrapKey(JSC::ExecState*);
    SubtleCrypto& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    SubtleCrypto* m_impl;
protected:
    JSSubtleCrypto(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SubtleCrypto>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSubtleCryptoOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, SubtleCrypto*)
{
    DEFINE_STATIC_LOCAL(JSSubtleCryptoOwner, jsSubtleCryptoOwner, ());
    return &jsSubtleCryptoOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, SubtleCrypto*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SubtleCrypto*);
SubtleCrypto* toSubtleCrypto(JSC::JSValue);

class JSSubtleCryptoPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSSubtleCryptoPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSubtleCryptoPrototype* ptr = new (NotNull, JSC::allocateCell<JSSubtleCryptoPrototype>(vm.heap)) JSSubtleCryptoPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSubtleCryptoPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionEncrypt(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionDecrypt(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionSign(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionVerify(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionDigest(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionGenerateKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionImportKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionExportKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionWrapKey(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSubtleCryptoPrototypeFunctionUnwrapKey(JSC::ExecState*);

} // namespace WebCore

#endif // ENABLE(SUBTLE_CRYPTO)

#endif
