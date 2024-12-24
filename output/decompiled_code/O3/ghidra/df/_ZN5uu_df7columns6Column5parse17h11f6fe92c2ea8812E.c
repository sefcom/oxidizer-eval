undefined8 __rustcall uu_df::columns::Column::parse(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"source",6);
  if (cVar1 == '\0') {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"fstype",6);
    uVar2 = 0xb;
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"itotal",6);
      uVar2 = 6;
      if (cVar1 == '\0') {
        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"iused",5);
        uVar2 = 7;
        if (cVar1 == '\0') {
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"iavail",6);
          uVar2 = 8;
          if (cVar1 == '\0') {
            cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"ipcent",6);
            uVar2 = 9;
            if (cVar1 == '\0') {
              cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (param_1,param_2,&DAT_0010be48,4);
              uVar2 = 1;
              if (cVar1 == '\0') {
                cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (param_1,param_2,&DAT_0010be5c,4);
                uVar2 = 2;
                if (cVar1 == '\0') {
                  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                    (param_1,param_2,"avail",5);
                  uVar2 = 3;
                  if (cVar1 == '\0') {
                    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                      (param_1,param_2,"pcent",5);
                    uVar2 = 4;
                    if (cVar1 == '\0') {
                      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                        (param_1,param_2,&DAT_0010be4c,4);
                      uVar2 = 10;
                      if (cVar1 == '\0') {
                        cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                          (param_1,param_2,
                                           "target/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rssrc/uu/df/src/table.rs"
                                           ,6);
                        uVar2 = 0xc;
                        if (cVar1 != '\0') {
                          uVar2 = 5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}