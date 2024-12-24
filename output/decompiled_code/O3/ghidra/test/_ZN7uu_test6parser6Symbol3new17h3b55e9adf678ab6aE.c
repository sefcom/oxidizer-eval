undefined8 * __rustcall uu_test::parser::Symbol::new(undefined8 *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*param_2 == -0x8000000000000000) {
    *param_1 = 6;
    return param_1;
  }
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((long)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((long)param_2 + 0xc);
  local_48 = param_2[2];
                    /* try { // try from 001ae6fe to 001ae771 has its CatchHandler @ 001aec73 */
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_38,param_2[1]);
  if (local_38 == 0) {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"(",1);
    if (cVar1 == '\0') {
      uVar2 = 1;
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"!",1);
      if (cVar1 == '\0') {
                    /* try { // try from 001ae790 to 001aec45 has its CatchHandler @ 001aec73 */
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-a",2);
        if ((cVar1 != '\0') ||
           (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-o",2),
           cVar1 != '\0')) {
          param_1[3] = local_48;
          param_1[1] = CONCAT44(uStack_54,local_58);
          param_1[2] = CONCAT44(uStack_4c,uStack_50);
          *param_1 = 2;
          return param_1;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"=",1);
        if ((cVar1 != '\0') ||
           ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"==",2),
            cVar1 != '\0' ||
            (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"!=",2),
            cVar1 != '\0')))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 0;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-eq",3);
        if ((cVar1 != '\0') ||
           ((((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                 (local_30,local_28,"-ge",3), cVar1 != '\0' ||
              (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                 (local_30,local_28,"-gt",3), cVar1 != '\0')) ||
             (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-le",3)
             , cVar1 != '\0')) ||
            ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-lt",3)
             , cVar1 != '\0' ||
             (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-ne",3)
             , cVar1 != '\0')))))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 1;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-ef",3);
        if ((cVar1 != '\0') ||
           ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-nt",3),
            cVar1 != '\0' ||
            (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-ot",3),
            cVar1 != '\0')))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 2;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-n",2);
        if ((cVar1 != '\0') ||
           (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-z",2),
           cVar1 != '\0')) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 0;
          *param_1 = 5;
          return param_1;
        }
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-b",2);
        if ((((((cVar1 != '\0') ||
               (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-c",2), cVar1 != '\0')) ||
              (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-d",2)
              , cVar1 != '\0')) ||
             (((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-e",2), cVar1 != '\0' ||
               (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-f",2), cVar1 != '\0')) ||
              ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-g",2), cVar1 != '\0' ||
               ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                   (local_30,local_28,"-G",2), cVar1 != '\0' ||
                (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                   (local_30,local_28,"-h",2), cVar1 != '\0')))))))) ||
            ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-k",2),
             cVar1 != '\0' ||
             (((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-L",2), cVar1 != '\0' ||
               (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-N",2), cVar1 != '\0')) ||
              (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-O",2)
              , cVar1 != '\0')))))) ||
           ((((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-p",2)
              , cVar1 != '\0' ||
              (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-r",2)
              , cVar1 != '\0')) ||
             (((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (local_30,local_28,"-s",2), cVar1 != '\0' ||
               ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                   (local_30,local_28,"-S",2), cVar1 != '\0' ||
                (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                   (local_30,local_28,"-t",2), cVar1 != '\0')))) ||
              (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-u",2)
              , cVar1 != '\0')))) ||
            ((cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-w",2),
             cVar1 != '\0' ||
             (cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_30,local_28,"-x",2),
             cVar1 != '\0')))))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 1;
          *param_1 = 5;
          return param_1;
        }
        goto LAB_001ae711;
      }
    }
    else {
      uVar2 = 0;
    }
    *param_1 = uVar2;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_58);
  }
  else {
LAB_001ae711:
    param_1[3] = local_48;
    param_1[1] = CONCAT44(uStack_54,local_58);
    param_1[2] = CONCAT44(uStack_4c,uStack_50);
    *param_1 = 3;
  }
  return param_1;
}