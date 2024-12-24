void __rustcall uu_ls::extract_format(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  char *pcVar6;
  undefined local_60 [8];
  undefined **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_58,param_2,"format",6);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("format",6,&local_58);
  if (lVar4 == 0) {
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039,4
                      );
    if (cVar3 != '\0') {
      *param_1 = 1;
      *(undefined4 **)(param_1 + 8) =
           &anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039;
      *(undefined8 *)(param_1 + 0x10) = 4;
      return;
    }
    pcVar6 = "x";
    cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"x",1);
    if (cVar3 == '\0') {
      pcVar6 = "m";
      cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"m",1);
      if (cVar3 == '\0') {
        pcVar6 = "C";
        cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"C",1);
        if (cVar3 == '\0') {
          local_58 = (undefined **)std::io::stdio::stdout();
          cVar3 = std::sys::pal::unix::io::is_terminal(&local_58);
          if (cVar3 == '\0') {
            *param_1 = 2;
          }
          else {
            *param_1 = 0;
          }
          *(undefined8 *)(param_1 + 8) = 0;
          return;
        }
        *param_1 = 0;
      }
      else {
        *param_1 = 4;
      }
    }
    else {
      *param_1 = 3;
    }
    *(char **)(param_1 + 8) = pcVar6;
    *(undefined8 *)(param_1 + 0x10) = 1;
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                    (uVar1,uVar2,&anon_93c251adab0f837eec2f5865e5b29e23_26_llvm_10262286748963977039
                     ,4);
  uVar5 = 1;
  if ((cVar3 == '\0') &&
     (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cba,7),
     cVar3 == '\0')) {
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cc1,0xd);
    uVar5 = 2;
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cce,7);
      if ((cVar3 == '\0') &&
         (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar1,uVar2,"verticalNovember",8), cVar3 == '\0')) {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cd5,6);
        uVar5 = 3;
        if ((cVar3 == '\0') &&
           (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar1,uVar2,&DAT_00134cdb,10), cVar3 == '\0')) {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134ce5,6);
          uVar5 = 4;
          if (cVar3 == '\0') {
            local_58 = &PTR_DAT_00312450;
            local_50 = 1;
            local_48 = local_60;
            local_40 = 0;
            uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt(&local_58,&PTR_DAT_00312460);
          }
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_1 = uVar5;
  *(char **)(param_1 + 8) = "format";
  *(undefined8 *)(param_1 + 0x10) = 6;
  return;
}