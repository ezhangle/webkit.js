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

#include "config.h"

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBDatabase.h"

#include "DOMStringList.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "IDBDatabase.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSDOMStringList.h"
#include "JSEventListener.h"
#include "JSIDBTransaction.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSIDBDatabaseTableValues[] =
{
    { "name", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseName), (intptr_t)0 },
    { "version", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseVersion), (intptr_t)0 },
    { "objectStoreNames", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseObjectStoreNames), (intptr_t)0 },
    { "onabort", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseOnabort), (intptr_t)setJSIDBDatabaseOnabort },
    { "onerror", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseOnerror), (intptr_t)setJSIDBDatabaseOnerror },
    { "onversionchange", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseOnversionchange), (intptr_t)setJSIDBDatabaseOnversionchange },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBDatabaseTable = { 17, 15, JSIDBDatabaseTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSIDBDatabaseConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBDatabaseConstructorTable = { 1, 0, JSIDBDatabaseConstructorTableValues, 0 };
static const HashTable& getJSIDBDatabaseConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBDatabaseConstructorTable);
}

const ClassInfo JSIDBDatabaseConstructor::s_info = { "IDBDatabaseConstructor", &Base::s_info, 0, getJSIDBDatabaseConstructorTable, CREATE_METHOD_TABLE(JSIDBDatabaseConstructor) };

JSIDBDatabaseConstructor::JSIDBDatabaseConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBDatabaseConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSIDBDatabasePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSIDBDatabaseConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBDatabaseConstructor, JSDOMWrapper>(exec, getJSIDBDatabaseConstructorTable(exec), jsCast<JSIDBDatabaseConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSIDBDatabasePrototypeTableValues[] =
{
    { "createObjectStore", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBDatabasePrototypeFunctionCreateObjectStore), (intptr_t)1 },
    { "deleteObjectStore", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBDatabasePrototypeFunctionDeleteObjectStore), (intptr_t)1 },
    { "transaction", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBDatabasePrototypeFunctionTransaction), (intptr_t)1 },
    { "close", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBDatabasePrototypeFunctionClose), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBDatabasePrototypeTable = { 16, 15, JSIDBDatabasePrototypeTableValues, 0 };
static const HashTable& getJSIDBDatabasePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBDatabasePrototypeTable);
}

const ClassInfo JSIDBDatabasePrototype::s_info = { "IDBDatabasePrototype", &Base::s_info, 0, getJSIDBDatabasePrototypeTable, CREATE_METHOD_TABLE(JSIDBDatabasePrototype) };

JSObject* JSIDBDatabasePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBDatabase>(vm, globalObject);
}

bool JSIDBDatabasePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBDatabasePrototype* thisObject = jsCast<JSIDBDatabasePrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, getJSIDBDatabasePrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSIDBDatabaseTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBDatabaseTable);
}

const ClassInfo JSIDBDatabase::s_info = { "IDBDatabase", &Base::s_info, 0, getJSIDBDatabaseTable , CREATE_METHOD_TABLE(JSIDBDatabase) };

JSIDBDatabase::JSIDBDatabase(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBDatabase> impl)
    : JSEventTarget(structure, globalObject, impl)
{
}

void JSIDBDatabase::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSIDBDatabase::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSIDBDatabasePrototype::create(vm, globalObject, JSIDBDatabasePrototype::createStructure(vm, globalObject, JSEventTargetPrototype::self(vm, globalObject)));
}

bool JSIDBDatabase::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBDatabase* thisObject = jsCast<JSIDBDatabase*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSIDBDatabase, Base>(exec, getJSIDBDatabaseTable(exec), thisObject, propertyName, slot);
}

EncodedJSValue jsIDBDatabaseName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsIDBDatabaseVersion(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    JSValue result = jsNumber(impl.version());
    return JSValue::encode(result);
}


EncodedJSValue jsIDBDatabaseObjectStoreNames(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.objectStoreNames()));
    return JSValue::encode(result);
}


EncodedJSValue jsIDBDatabaseOnabort(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    if (EventListener* listener = impl.onabort()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsIDBDatabaseOnerror(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    if (EventListener* listener = impl.onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsIDBDatabaseOnversionchange(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    if (EventListener* listener = impl.onversionchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsIDBDatabaseConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSIDBDatabase* domObject = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSIDBDatabase::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSIDBDatabase::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSIDBDatabase* thisObject = jsCast<JSIDBDatabase*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSIDBDatabase, Base>(exec, propertyName, value, getJSIDBDatabaseTable(exec), thisObject, slot);
}

void setJSIDBDatabaseOnabort(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    impl.setOnabort(createJSAttributeEventListener(exec, value, castedThis));
}


void setJSIDBDatabaseOnerror(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    impl.setOnerror(createJSAttributeEventListener(exec, value, castedThis));
}


void setJSIDBDatabaseOnversionchange(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    IDBDatabase& impl = castedThis->impl();
    impl.setOnversionchange(createJSAttributeEventListener(exec, value, castedThis));
}


JSValue JSIDBDatabase::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBDatabaseConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionCreateObjectStore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBDatabase::info());
    return JSValue::encode(castedThis->createObjectStore(exec));
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionDeleteObjectStore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBDatabase::info());
    IDBDatabase& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.deleteObjectStore(name, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionTransaction1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBDatabase::info());
    IDBDatabase& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    const String& storeName(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& mode(argumentOrNull(exec, 1).isEmpty() ? String() : argumentOrNull(exec, 1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transaction(scriptContext, storeName, mode, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionTransaction2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBDatabase::info());
    IDBDatabase& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Vector<String> storeNames(toNativeArray<String>(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& mode(argumentOrNull(exec, 1).isEmpty() ? String() : argumentOrNull(exec, 1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transaction(scriptContext, storeNames, mode, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionTransaction(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    if (argsCount == 1 || argsCount == 2)
        return jsIDBDatabasePrototypeFunctionTransaction1(exec);
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isObject() && isJSArray(arg0))) || (argsCount == 2 && (arg0.isObject() && isJSArray(arg0))))
        return jsIDBDatabasePrototypeFunctionTransaction2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSIDBDatabase* castedThis = jsDynamicCast<JSIDBDatabase*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBDatabase::info());
    IDBDatabase& impl = castedThis->impl();
    impl.close();
    return JSValue::encode(jsUndefined());
}

void JSIDBDatabase::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSIDBDatabase* thisObject = jsCast<JSIDBDatabase*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

bool JSIDBDatabaseOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSIDBDatabase* jsIDBDatabase = jsCast<JSIDBDatabase*>(handle.get().asCell());
    if (jsIDBDatabase->impl().hasPendingActivity())
        return true;
    if (jsIDBDatabase->impl().isFiringEventListeners())
        return true;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBDatabaseOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSIDBDatabase* jsIDBDatabase = jsCast<JSIDBDatabase*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsIDBDatabase->impl(), jsIDBDatabase);
    jsIDBDatabase->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7IDBDatabase@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11IDBDatabaseE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBDatabase* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBDatabase>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7IDBDatabase@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11IDBDatabaseE[2];
#if COMPILER(CLANG)
    // If this fails IDBDatabase does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(IDBDatabase), IDBDatabase_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // IDBDatabase has subclasses. If IDBDatabase has subclasses that get passed
    // to toJS() we currently require IDBDatabase you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<IDBDatabase>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSIDBDatabase>(exec, globalObject, impl);
}

IDBDatabase* toIDBDatabase(JSC::JSValue value)
{
    return value.inherits(JSIDBDatabase::info()) ? &jsCast<JSIDBDatabase*>(value)->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)