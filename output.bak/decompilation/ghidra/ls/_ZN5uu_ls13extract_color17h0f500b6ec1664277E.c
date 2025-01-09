ulong __rustcall uu_ls::extract_color(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_RBP;
  undefined8 local_48 [5];
  
  cVar3 = is_color_compatible_term();
  if (cVar3 == '\0') {
LAB_0021f605:
    uVar6 = 0;
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (local_48,param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161,
               5);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      (&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161,5,
                       local_48);
    if (lVar5 == 0) {
      uVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                        (param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_28_llvm_16502254941234113161
                         ,5);
      return uVar6;
    }
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,1,0);
    uVar6 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cef,6);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cf5,3);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cf8,5);
    if (cVar3 != '\0') goto LAB_0021f607;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00123f34,4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134cfd,3);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_00134d00,6);
        if (cVar3 == '\0') goto LAB_0021f605;
      }
    }
    local_48[0] = std::io::stdio::stdout();
    uVar4 = std::sys::pal::unix::io::is_terminal(local_48);
    uVar6 = (ulong)uVar4;
  }
LAB_0021f607:
  return uVar6 & 0xffffffff;
}