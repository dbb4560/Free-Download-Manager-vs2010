/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_DownloadEvent_h__
#define mozilla_dom_DownloadEvent_h__

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DownloadEventBinding.h"
#include "mozilla/dom/Event.h"

struct JSContext;

namespace mozilla {
namespace dom {

class DownloadEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(DownloadEvent, Event)
  virtual ~DownloadEvent();
protected:
  DownloadEvent(mozilla::dom::EventTarget* aOwner);

  nsRefPtr<DOMDownload> mDownload;

public:
  virtual DownloadEvent* AsDownloadEvent();

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<DownloadEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const DownloadEventInit& aEventInitDict);

  static already_AddRefed<DownloadEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const DownloadEventInit& aEventInitDict, ErrorResult& aRv);

  DOMDownload* GetDownload() const;

};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DownloadEvent_h__