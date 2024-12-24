ulong __rustcall uu_ls::extract_hyperlink(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 unaff_RBP;
  ulong uVar6;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_48,param_1,"hyperlink",9);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("hyperlink",9,&local_48);
  if (lVar5 == 0) {
    core::option::unwrap_failed(&PTR_DAT_003124e0);
LAB_0021f719:
    local_48 = &PTR_DAT_003124f8;
    local_40 = 1;
    local_38 = local_50;
    local_30 = 0;
    uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_48,&PTR_DAT_00312508);
  }
  uVar1 = *(undefined8 *)(lVar5 + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x10);
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134def,6);
  uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar3 == '\0') {
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134df5,3);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134df8,5);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_001241a0,4);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134dfd,3);
          if (cVar3 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134e00,6)
            ;
            if (cVar3 == '\0') {
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar1,uVar2,&DAT_00134e06,5);
              if (cVar3 == '\0') {
                cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar1,uVar2,&DAT_00134e0b,2);
                if (cVar3 == '\0') {
                  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                    (uVar1,uVar2,&DAT_00124260,4);
                  if (cVar3 == '\0') goto LAB_0021f719;
                }
              }
              uVar6 = 0;
              goto LAB_0021f6ac;
            }
          }
        }
        local_48 = (undefined **)std::io::stdio::stdout();
        uVar4 = std::sys::pal::unix::io::is_terminal(&local_48);
        uVar6 = (ulong)uVar4;
      }
    }
  }
LAB_0021f6ac:
  return uVar6 & 0xffffffff;
}