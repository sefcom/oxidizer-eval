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
            (local_48,param_1,"indicator-style",0xf);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap("indicator-style",0xf,local_48);
  uVar8 = (undefined7)((ulong)unaff_RBP >> 8);
  if (lVar6 == 0) {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (local_48,param_1,&anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,8
              );
    lVar6 = clap_builder::parser::error::MatchesError::unwrap
                      (&anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,8,local_48
                      );
    if (lVar6 == 0) {
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"p",1);
      uVar7 = CONCAT71(uVar8,1);
      if (cVar3 == '\0') {
        uVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_1,"file-type",9);
        uVar7 = (ulong)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 * '\x02');
      }
      goto LAB_0021fd59;
    }
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134e06,5);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134e0b,2);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00124260,4);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134def,6);
          uVar7 = CONCAT71(uVar8,3);
          if (cVar3 != '\0') goto LAB_0021fd59;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134df5,3);
          if (cVar3 != '\0') goto LAB_0021fd59;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134df8,5);
          if (cVar3 != '\0') goto LAB_0021fd59;
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_001241a0,4);
          if (cVar3 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134dfd,3)
            ;
            if (cVar3 == '\0') {
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar1,uVar2,&DAT_00134e00,6);
              if (cVar3 == '\0') goto LAB_0021fd57;
            }
          }
          local_48[0] = std::io::stdio::stdout();
          cVar3 = std::sys::pal::unix::io::is_terminal(local_48);
          uVar7 = (ulong)((uint)(cVar3 != '\0') * 3);
          goto LAB_0021fd59;
        }
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar6 + 8);
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00124260,4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134f29,9);
      uVar7 = CONCAT71(uVar8,2);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (uVar1,uVar2,
                           &anon_cfc37c807317366388c1b51bb9a73ad5_26_llvm_1151552614418493144,8);
        uVar7 = CONCAT71(uVar8,3);
        if (cVar3 == '\0') {
          uVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134f32,5);
          uVar7 = (ulong)uVar4;
        }
      }
      goto LAB_0021fd59;
    }
  }
LAB_0021fd57:
  uVar7 = 0;
LAB_0021fd59:
  return uVar7 & 0xffffffff;
}