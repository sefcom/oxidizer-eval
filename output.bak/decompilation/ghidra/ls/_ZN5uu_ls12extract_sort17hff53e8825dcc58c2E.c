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
            (&local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,4
            );
  lVar4 = clap_builder::parser::error::MatchesError::unwrap
                    (&anon_3f7e092f2ea554bdd060175bd8ea63d9_21_llvm_16502254941234113161,4,&local_48
                    );
  if (lVar4 == 0) {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_12_llvm_10979288589332586409,1
                      );
    if (cVar3 != '\0') {
      return 3;
    }
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_11_llvm_10979288589332586409,1
                      );
    if (cVar3 != '\0') {
      return 2;
    }
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_13_llvm_10979288589332586409,1
                      );
    if (cVar3 == '\0') {
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_14_llvm_10979288589332586409
                         ,1);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_1,&anon_f45a42eab3604eaa40558bbeffd2bfb7_15_llvm_10979288589332586409
                         ,1);
      return cVar3 << 2 | 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00123ff4,4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0012400c,4);
      if (cVar3 != '\0') {
        return 1;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uVar1,uVar2,
                         &anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4);
      if (cVar3 != '\0') {
        return 3;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (uVar1,uVar2,
                         &anon_0961294ef8eb7b5431de28de81a5ae4f_9_llvm_9099371528486416302,4);
      if (cVar3 != '\0') {
        return 2;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c2f,7);
      if (cVar3 != '\0') {
        return 4;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c36,9);
      if (cVar3 != '\0') {
        return 5;
      }
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c3f,5);
      if (cVar3 != '\0') {
        return 6;
      }
      local_48 = &PTR_DAT_00312278;
      local_40 = 1;
      local_38 = local_50;
      local_30 = 0;
      uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_48,&PTR_DAT_00312288);
    }
  }
  return 0;
}