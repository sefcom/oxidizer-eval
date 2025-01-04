char __rustcall uu_touch::determine_atime_mtime_change(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  undefined auStack_48 [40];
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(param_1,"time",4);
  if (cVar1 == '\0') {
LAB_002c2ff2:
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"access",6);
    bVar2 = 2;
    if (cVar1 == '\0') {
      bVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_1,"modification",0xc);
LAB_002c3052:
      bVar5 = 0;
      goto LAB_002c3085;
    }
LAB_002c300e:
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,"modification",0xc);
    bVar3 = 1;
    bVar5 = 1;
    if (cVar1 != '\0') goto LAB_002c3085;
    if (bVar2 == 2) {
      return '\0';
    }
    bVar3 = bVar2 ^ 1;
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(auStack_48,param_1,"time",4)
    ;
    lVar4 = clap_builder::parser::error::MatchesError::unwrap("time",4,auStack_48);
    if (lVar4 == 0) goto LAB_002c2ff2;
    bVar2 = determine_atime_mtime_change::___closure__
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"access",6);
    if (cVar1 != '\0') goto LAB_002c300e;
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,"modification",0xc);
    bVar3 = 1;
    bVar5 = bVar2;
    if (cVar1 != '\0') goto LAB_002c3085;
    bVar3 = bVar2 ^ 1;
    if (bVar2 == 0) goto LAB_002c3052;
  }
  bVar6 = bVar3 == 0;
  bVar3 = 1;
  bVar5 = 1;
  if (bVar6) {
    return '\0';
  }
LAB_002c3085:
  return '\x02' - (bVar5 == 0 && bVar3 != 0);
}