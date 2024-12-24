byte __rustcall uu_ls::extract_sort(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_48,param_1,&anon_34cd953b2c946f74a585889e96ce9d7a_28_llvm_16853030268703478466,4
            );
  lVar4 = clap_builder::parser::error::MatchesError::unwrap
                    (&anon_34cd953b2c946f74a585889e96ce9d7a_28_llvm_16853030268703478466,4,&local_48
                    );
  if (lVar4 == 0) {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"t",1);
    if (cVar3 != '\0') {
      return 3;
    }
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"S",1);
    if (cVar3 != '\0') {
      return 2;
    }
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"U",1);
    if (cVar3 == '\0') {
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"v",1);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"X",1);
      return cVar3 << 2 | 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00124260,4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00124278,4);
      if (cVar3 != '\0') {
        return 1;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uVar1,uVar2,
                         &anon_34cd953b2c946f74a585889e96ce9d7a_29_llvm_16853030268703478466,4);
      if (cVar3 != '\0') {
        return 3;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uVar1,uVar2,
                         &anon_1ee88fda822c10878a738d2784ca6dcb_19_llvm_3648300969967796025,4);
      if (cVar3 != '\0') {
        return 2;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d2f,7);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d36,9);
      if (cVar3 != '\0') {
        return 5;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d3f,5);
      if (cVar3 != '\0') {
        return 6;
      }
      local_48 = &PTR_DAT_00312478;
      local_40 = 1;
      local_38 = local_50;
      local_30 = 0;
      uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_48,&PTR_DAT_00312488);
    }
  }
  return 0;
}