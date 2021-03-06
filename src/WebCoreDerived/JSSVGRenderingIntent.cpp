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

#if ENABLE(SVG)

#include "JSSVGRenderingIntent.h"

#include "SVGRenderingIntent.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGRenderingIntentTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGRenderingIntentTable = { 2, 1, JSSVGRenderingIntentTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGRenderingIntentConstructorTableValues[] =
{
    { "RENDERING_INTENT_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_UNKNOWN), (intptr_t)0 },
    { "RENDERING_INTENT_AUTO", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_AUTO), (intptr_t)0 },
    { "RENDERING_INTENT_PERCEPTUAL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_PERCEPTUAL), (intptr_t)0 },
    { "RENDERING_INTENT_RELATIVE_COLORIMETRIC", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_RELATIVE_COLORIMETRIC), (intptr_t)0 },
    { "RENDERING_INTENT_SATURATION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_SATURATION), (intptr_t)0 },
    { "RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_ABSOLUTE_COLORIMETRIC), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGRenderingIntentConstructorTable = { 16, 15, JSSVGRenderingIntentConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGRenderingIntent::RENDERING_INTENT_UNKNOWN, SVGRenderingIntentEnumRENDERING_INTENT_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGRenderingIntent::RENDERING_INTENT_AUTO, SVGRenderingIntentEnumRENDERING_INTENT_AUTOIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGRenderingIntent::RENDERING_INTENT_PERCEPTUAL, SVGRenderingIntentEnumRENDERING_INTENT_PERCEPTUALIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == SVGRenderingIntent::RENDERING_INTENT_RELATIVE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_RELATIVE_COLORIMETRICIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == SVGRenderingIntent::RENDERING_INTENT_SATURATION, SVGRenderingIntentEnumRENDERING_INTENT_SATURATIONIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == SVGRenderingIntent::RENDERING_INTENT_ABSOLUTE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_ABSOLUTE_COLORIMETRICIsWrongUseDoNotCheckConstants);

const ClassInfo JSSVGRenderingIntentConstructor::s_info = { "SVGRenderingIntentConstructor", &Base::s_info, &JSSVGRenderingIntentConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGRenderingIntentConstructor) };

JSSVGRenderingIntentConstructor::JSSVGRenderingIntentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGRenderingIntentConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGRenderingIntentPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGRenderingIntentConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGRenderingIntentConstructor, JSDOMWrapper>(exec, JSSVGRenderingIntentConstructorTable, jsCast<JSSVGRenderingIntentConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGRenderingIntentPrototypeTableValues[] =
{
    { "RENDERING_INTENT_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_UNKNOWN), (intptr_t)0 },
    { "RENDERING_INTENT_AUTO", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_AUTO), (intptr_t)0 },
    { "RENDERING_INTENT_PERCEPTUAL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_PERCEPTUAL), (intptr_t)0 },
    { "RENDERING_INTENT_RELATIVE_COLORIMETRIC", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_RELATIVE_COLORIMETRIC), (intptr_t)0 },
    { "RENDERING_INTENT_SATURATION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_SATURATION), (intptr_t)0 },
    { "RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRenderingIntentRENDERING_INTENT_ABSOLUTE_COLORIMETRIC), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGRenderingIntentPrototypeTable = { 16, 15, JSSVGRenderingIntentPrototypeTableValues, 0 };
const ClassInfo JSSVGRenderingIntentPrototype::s_info = { "SVGRenderingIntentPrototype", &Base::s_info, &JSSVGRenderingIntentPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGRenderingIntentPrototype) };

JSObject* JSSVGRenderingIntentPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRenderingIntent>(vm, globalObject);
}

bool JSSVGRenderingIntentPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGRenderingIntentPrototype* thisObject = jsCast<JSSVGRenderingIntentPrototype*>(object);
    return getStaticValueSlot<JSSVGRenderingIntentPrototype, JSObject>(exec, JSSVGRenderingIntentPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGRenderingIntent::s_info = { "SVGRenderingIntent", &Base::s_info, &JSSVGRenderingIntentTable, 0 , CREATE_METHOD_TABLE(JSSVGRenderingIntent) };

JSSVGRenderingIntent::JSSVGRenderingIntent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGRenderingIntent> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGRenderingIntent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGRenderingIntent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGRenderingIntentPrototype::create(vm, globalObject, JSSVGRenderingIntentPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSVGRenderingIntent::destroy(JSC::JSCell* cell)
{
    JSSVGRenderingIntent* thisObject = static_cast<JSSVGRenderingIntent*>(cell);
    thisObject->JSSVGRenderingIntent::~JSSVGRenderingIntent();
}

JSSVGRenderingIntent::~JSSVGRenderingIntent()
{
    releaseImplIfNotNull();
}

bool JSSVGRenderingIntent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGRenderingIntent* thisObject = jsCast<JSSVGRenderingIntent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGRenderingIntent, Base>(exec, JSSVGRenderingIntentTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGRenderingIntentConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGRenderingIntent* domObject = jsDynamicCast<JSSVGRenderingIntent*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGRenderingIntent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGRenderingIntent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRenderingIntentConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_UNKNOWN(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_AUTO(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_PERCEPTUAL(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_RELATIVE_COLORIMETRIC(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(3)));
}

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_SATURATION(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(4)));
}

EncodedJSValue jsSVGRenderingIntentRENDERING_INTENT_ABSOLUTE_COLORIMETRIC(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(5)));
}

bool JSSVGRenderingIntentOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGRenderingIntentOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGRenderingIntent* jsSVGRenderingIntent = jsCast<JSSVGRenderingIntent*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGRenderingIntent->impl(), jsSVGRenderingIntent);
    jsSVGRenderingIntent->releaseImpl();
}

SVGRenderingIntent* toSVGRenderingIntent(JSC::JSValue value)
{
    return value.inherits(JSSVGRenderingIntent::info()) ? &jsCast<JSSVGRenderingIntent*>(value)->impl() : 0;
}

}

#endif // ENABLE(SVG)
