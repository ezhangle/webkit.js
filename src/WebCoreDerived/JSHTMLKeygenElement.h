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

#ifndef JSHTMLKeygenElement_h
#define JSHTMLKeygenElement_h

#include "HTMLKeygenElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLKeygenElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLKeygenElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLKeygenElement> impl)
    {
        JSHTMLKeygenElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLKeygenElement>(globalObject->vm().heap)) JSHTMLKeygenElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    HTMLKeygenElement& impl() const
    {
        return static_cast<HTMLKeygenElement&>(Base::impl());
    }
protected:
    JSHTMLKeygenElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLKeygenElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSHTMLKeygenElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLKeygenElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLKeygenElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLKeygenElementPrototype>(vm.heap)) JSHTMLKeygenElementPrototype(vm, globalObject, structure);
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
    JSHTMLKeygenElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLKeygenElementConstructor : public DOMConstructorObject {
private:
    JSHTMLKeygenElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLKeygenElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLKeygenElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLKeygenElementConstructor>(vm.heap)) JSHTMLKeygenElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsHTMLKeygenElementAutofocus(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLKeygenElementAutofocus(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLKeygenElementChallenge(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLKeygenElementChallenge(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLKeygenElementDisabled(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLKeygenElementDisabled(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLKeygenElementForm(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementKeytype(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLKeygenElementKeytype(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLKeygenElementName(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLKeygenElementName(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLKeygenElementType(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementWillValidate(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementValidity(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementValidationMessage(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementLabels(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLKeygenElementConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif
