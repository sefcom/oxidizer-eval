char __rustcall uu_uniq::get_delimiter(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_48,param_1,"all-repeated",0xc);
  uVar5 = clap_builder::parser::error::MatchesError::unwrap("all-repeated",0xc,&local_48);
  lVar6 = core::option::Option<T>::or_else(uVar5,param_1);
  if (lVar6 == 0) {
    bVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(param_1,"group",5);
    cVar2 = (bVar3 ^ 1) * '\x02' + '\x02';
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 8);
    uVar1 = *(undefined8 *)(lVar6 + 0x10);
    cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar5,uVar1,"append",6);
    if (cVar2 == '\0') {
      cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar5,uVar1,"prepend",7);
      cVar2 = '\x01';
      if (cVar4 == '\0') {
        cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar5,uVar1,"separate",8);
        cVar2 = '\x02';
        if (cVar4 == '\0') {
          cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar5,uVar1,&DAT_00115d10,4);
          cVar2 = '\x03';
          if (cVar4 == '\0') {
            cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar5,uVar1,&DAT_00115d00,4)
            ;
            cVar2 = '\x04';
            if (cVar4 == '\0') {
              local_48 = &PTR_s_internal_error__entered_unreacha_00230548;
              local_40 = 1;
              local_38 = local_50;
              local_30 = 0;
              uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt(&local_48,&PTR_s_src_uu_uniq_src_uniq_rs_00230558);
            }
          }
        }
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  return cVar2;
}