--- components/autofill/core/common/autofill_payments_features.cc.orig	2024-05-21 18:07:39 UTC
+++ components/autofill/core/common/autofill_payments_features.cc
@@ -272,7 +272,7 @@ BASE_FEATURE(kAutofillEnableVirtualCards,
 bool ShouldShowImprovedUserConsentForCreditCardSave() {
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
   // The new user consent UI is fully launched on MacOS, Windows and Linux.
   return true;
