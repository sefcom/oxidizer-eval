long __rustcall uu_hashsum::uu_app(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"md5sum",6);
  if ((((cVar1 == '\0') &&
       (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha1sum",7),
       cVar1 == '\0')) &&
      (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha224sum",9),
      cVar1 == '\0')) &&
     (((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha256sum",9),
       cVar1 == '\0' &&
       (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha384sum",9),
       cVar1 == '\0')) &&
      (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha512sum",9),
      cVar1 == '\0')))) {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"b2sum",5);
    if (cVar1 != '\0') {
      uu_app_length(param_1);
      goto LAB_002db8ec;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha3-224sum",0xb);
    if (((cVar1 == '\0') &&
        (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                           (param_2,param_3,"sha3-256sum",0xb), cVar1 == '\0')) &&
       ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                           (param_2,param_3,"sha3-384sum",0xb), cVar1 == '\0' &&
        (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                           (param_2,param_3,"sha3-512sum",0xb), cVar1 == '\0')))) {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"sha3sum",7);
      if (((cVar1 == '\0') &&
          (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                             (param_2,param_3,"shake128sum",0xb), cVar1 == '\0')) &&
         (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (param_2,param_3,"shake256sum",0xb), cVar1 == '\0')) {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"b3sum",5);
        if (cVar1 == '\0') {
          uu_app_custom(param_1);
          *(undefined *)(param_1 + 0x2c8) = 1;
          return param_1;
        }
        uu_app_b3sum();
      }
      else {
        uu_app_bits(param_1);
      }
      goto LAB_002db8ec;
    }
  }
  uu_app_common(param_1);
LAB_002db8ec:
  *(undefined *)(param_1 + 0x2c8) = 0;
  return param_1;
}