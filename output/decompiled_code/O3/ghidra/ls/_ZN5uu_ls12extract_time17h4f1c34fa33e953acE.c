char __rustcall uu_ls::extract_time(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4
            );
  lVar5 = clap_builder::parser::error::MatchesError::unwrap
                    (&anon_3f7e092f2ea554bdd060175bd8ea63d9_22_llvm_16502254941234113161,4,&local_48
                    );
  if (lVar5 == 0) {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,&anon_8bf1419b86641518549345aedc57e906_9_llvm_11260003342554782039,1)
    ;
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_1,&anon_8bf1419b86641518549345aedc57e906_10_llvm_11260003342554782039
                         ,1);
      cVar4 = cVar4 * '\x02';
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c86,5);
    cVar4 = '\x02';
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c8b,6);
      cVar4 = '\x02';
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c91,6);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c97,5);
          if (cVar4 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134c9c,3)
            ;
            cVar4 = '\x01';
            if (cVar3 == '\0') {
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar1,uVar2,&DAT_00134c9f,5);
              cVar4 = '\x03';
              if (cVar3 == '\0') {
                cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar1,uVar2,"creation*direct*",8);
                cVar4 = '\x03';
                if (cVar3 == '\0') {
                  local_48 = &PTR_DAT_003122a0;
                  local_40 = 1;
                  local_38 = local_50;
                  local_30 = 0;
                  uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt(&local_48,&PTR_DAT_003122b0);
                }
              }
            }
          }
          else {
            cVar4 = '\x01';
          }
        }
      }
    }
  }
  return cVar4;
}