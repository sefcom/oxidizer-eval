ulong __rustcall uu_ls::extract_indicator_style(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulong uVar7;
  undefined8 local_48 [5];
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (local_48,param_1,anon_3f7e092f2ea554bdd060175bd8ea63d9_30_llvm_16502254941234113161,0xf
            );
  lVar6 = clap_builder::parser::error::MatchesError::unwrap
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_30_llvm_16502254941234113161,0xf,local_48
                    );
  uVar8 = (undefined7)((ulong)unaff_RBP >> 8);
  if (lVar6 == 0) {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (local_48,param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_18_llvm_10979288589332586409,
               8);
    lVar6 = clap_builder::parser::error::MatchesError::unwrap
                      (&anon_f45a42eab3604eaa40558bbeffd2bfb7_18_llvm_10979288589332586409,8,
                       local_48);
    if (lVar6 == 0) {
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_16_llvm_10979288589332586409
                         ,1);
      uVar7 = CONCAT71(uVar8,1);
      if (cVar3 == '\0') {
        uVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_1,
                           anon_f45a42eab3604eaa40558bbeffd2bfb7_17_llvm_10979288589332586409,9);
        uVar7 = (ulong)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 * '\x02');
      }
      goto LAB_0021fdf9;
    }
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d06,5);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d0b,2);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00123ff4,4);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cef,6);
          uVar7 = CONCAT71(uVar8,3);
          if (cVar3 != '\0') goto LAB_0021fdf9;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cf5,3);
          if (cVar3 != '\0') goto LAB_0021fdf9;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cf8,5);
          if (cVar3 != '\0') goto LAB_0021fdf9;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00123f34,4);
          if (cVar3 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cfd,3)
            ;
            if (cVar3 == '\0') {
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar1,uVar2,&DAT_00134d00,6);
              if (cVar3 == '\0') goto LAB_0021fdf7;
            }
          }
          local_48[0] = std::io::stdio::stdout();
          cVar3 = std::sys::pal::unix::io::is_terminal(local_48);
          uVar7 = (ulong)((uint)(cVar3 != '\0') * 3);
          goto LAB_0021fdf9;
        }
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00123ff4,4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134e29,9);
      uVar7 = CONCAT71(uVar8,2);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (uVar1,uVar2,
                           &anon_f45a42eab3604eaa40558bbeffd2bfb7_18_llvm_10979288589332586409,8);
        uVar7 = CONCAT71(uVar8,3);
        if (cVar3 == '\0') {
          uVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134e32,5);
          uVar7 = (ulong)uVar4;
        }
      }
      goto LAB_0021fdf9;
    }
  }
LAB_0021fdf7:
  uVar7 = 0;
LAB_0021fdf9:
  return uVar7 & 0xffffffff;
}