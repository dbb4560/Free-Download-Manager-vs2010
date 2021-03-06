/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_BrowserElementDictionariesBinding_h__
#define mozilla_dom_BrowserElementDictionariesBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"
#include "nsINode.h"

class nsINode;

namespace mozilla {
namespace dom {

struct AsyncScrollEventDetailAtoms;
struct DOMWindowResizeEventDetailAtoms;
class NativePropertyHooks;
struct OpenWindowEventDetailAtoms;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct AsyncScrollEventDetail : public DictionaryBase
{
  float mHeight;
  float mLeft;
  float mScrollHeight;
  float mScrollWidth;
  float mTop;
  float mWidth;

  AsyncScrollEventDetail();

  explicit inline AsyncScrollEventDetail(const AsyncScrollEventDetail& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline AsyncScrollEventDetail(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, AsyncScrollEventDetailAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const AsyncScrollEventDetail& aOther);
};

namespace binding_detail {
struct FastAsyncScrollEventDetail : public AsyncScrollEventDetail
{
  inline FastAsyncScrollEventDetail()
    : AsyncScrollEventDetail(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct DOMWindowResizeEventDetail : public DictionaryBase
{
  int32_t mHeight;
  int32_t mWidth;

  DOMWindowResizeEventDetail();

  explicit inline DOMWindowResizeEventDetail(const DOMWindowResizeEventDetail& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline DOMWindowResizeEventDetail(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, DOMWindowResizeEventDetailAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const DOMWindowResizeEventDetail& aOther);
};

namespace binding_detail {
struct FastDOMWindowResizeEventDetail : public DOMWindowResizeEventDetail
{
  inline FastDOMWindowResizeEventDetail()
    : DOMWindowResizeEventDetail(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct OpenWindowEventDetail : public DictionaryBase
{
  nsString mFeatures;
  nsRefPtr<nsINode> mFrameElement;
  nsString mName;
  nsString mUrl;

  OpenWindowEventDetail();

protected:
  explicit inline OpenWindowEventDetail(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  OpenWindowEventDetail(const OpenWindowEventDetail&) MOZ_DELETE;
  void operator=(const OpenWindowEventDetail) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, OpenWindowEventDetailAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastOpenWindowEventDetail : public OpenWindowEventDetail
{
  inline FastOpenWindowEventDetail()
    : OpenWindowEventDetail(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_BrowserElementDictionariesBinding_h__
