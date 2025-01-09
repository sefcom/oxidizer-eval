void __rustcall uu_head::Mode::from(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_48,param_2,"BYTES",5);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap("BYTES",5,&local_48);
  if (lVar1 == 0) {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_48,param_2,"LINES",5)
    ;
    lVar1 = clap_builder::parser::error::MatchesError::unwrap("LINES",5,&local_48);
    if (lVar1 == 0) {
      param_1[1] = 0;
      param_1[2] = 10;
      goto LAB_001b8edf;
    }
    uu_head::parse::parse_num(&local_68,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    if (local_68 != 3) {
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      from::___closure__(&local_88,&local_48);
      goto LAB_001b8eb4;
    }
    uVar2 = CONCAT44(uStack_5c,uStack_60);
    if ((char)local_58 == '\0') {
      param_1[1] = 0;
    }
    else {
      param_1[1] = 1;
    }
  }
  else {
    uu_head::parse::parse_num(&local_68,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    if (local_68 != 3) {
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      from::___closure__(&local_88,&local_48);
LAB_001b8eb4:
      *(uint *)((long)param_1 + 0x14) = CONCAT31(uStack_73,uStack_77._3_1_);
      *(undefined4 *)((long)param_1 + 0x11) = uStack_77;
      *param_1 = local_88;
      param_1[1] = uStack_80;
      *(undefined *)(param_1 + 2) = local_78;
      return;
    }
    uVar2 = CONCAT44(uStack_5c,uStack_60);
    if ((char)local_58 == '\0') {
      param_1[1] = 2;
    }
    else {
      param_1[1] = 3;
    }
  }
  param_1[2] = uVar2;
LAB_001b8edf:
  *param_1 = 0x8000000000000000;
  return;
}