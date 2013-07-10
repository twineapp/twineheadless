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

#ifndef JSSVGPathElement_h
#define JSSVGPathElement_h

#if ENABLE(SVG)

#include "JSSVGElement.h"
#include "SVGElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class SVGPathElement;

class JSSVGPathElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGPathElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGPathElementPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSSVGPathElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetTotalLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetPointAtLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetPathSegAtLength(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegClosePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegMovetoAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegMovetoRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegArcAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegArcRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoHorizontalAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoHorizontalRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoVerticalAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegLinetoVerticalRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicSmoothAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoCubicSmoothRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticSmoothAbs(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionCreateSVGPathSegCurvetoQuadraticSmoothRel(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetBBox(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetScreenCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPathElementPrototypeFunctionGetTransformToElement(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGPathElementPathLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementPathSegList(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementNormalizedPathSegList(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementAnimatedPathSegList(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementAnimatedNormalizedPathSegList(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementSystemLanguage(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementXmllang(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathElementXmlspace(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementClassName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementTransform(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementNearestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementFarthestViewportElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPathElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
