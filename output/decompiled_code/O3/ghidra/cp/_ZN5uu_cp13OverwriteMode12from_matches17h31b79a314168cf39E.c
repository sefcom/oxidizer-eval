ulong __rustcall uu_cp::OverwriteMode::from_matches(undefined8 param_1)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulong uVar2;
  undefined7 uVar3;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_1,"interactive",0xb);
  uVar3 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 == '\0') {
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,"no-clobber",10);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71(uVar3,2);
      goto LAB_00200af9;
    }
    uVar2 = 0;
  }
  ClobberMode::from_matches(param_1);
LAB_00200af9:
  return uVar2 & 0xffffffff;
}