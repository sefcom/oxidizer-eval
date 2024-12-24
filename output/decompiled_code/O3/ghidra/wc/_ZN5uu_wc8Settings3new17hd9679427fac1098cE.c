undefined8 * __rustcall uu_wc::Settings::new(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int iVar5;
  long lVar6;
  undefined local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined uStack_80;
  undefined uStack_7f;
  undefined uStack_7e;
  undefined uStack_7d;
  undefined uStack_7c;
  undefined uStack_7b;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_58,param_2,"files0-from",0xb);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap("files0-from",0xb,&local_58);
  if (lVar6 == 0) {
    local_78 = 0x8000000000000002;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_58,lVar6);
    local_68 = local_48;
    local_78 = local_58;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
  }
                    /* try { // try from 001b8d07 to 001b8dc4 has its CatchHandler @ 001b8e84 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_58,param_2,"total",5);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap("total",5,&local_58);
  if (lVar6 == 0) {
    local_9c = 0;
  }
  else {
    local_9c = core::ops::function::FnOnce::call_once(lVar6);
  }
  uVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"bytes",5);
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"chars",5);
  uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"lines",5);
  uVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"words",5);
  uStack_7c = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_2,"max-line-length",0xf);
  local_88 = local_68;
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  uStack_7b = local_9c;
                    /* try { // try from 001b8dfa to 001b8e03 has its CatchHandler @ 001b8e75 */
  uStack_80 = uVar1;
  uStack_7f = uVar2;
  uStack_7e = uVar3;
  uStack_7d = uVar4;
  iVar5 = number_enabled(&local_98);
  if (iVar5 == 0) {
    param_1[2] = local_88;
    *(undefined4 *)param_1 = local_98;
    *(undefined4 *)((long)param_1 + 4) = uStack_94;
    *(undefined4 *)(param_1 + 1) = uStack_90;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
    local_40 = 0x1010001;
    local_3c = 0;
    local_58 = 0x8000000000000002;
    *(undefined4 *)(param_1 + 3) = 0x1010001;
    *(undefined *)((long)param_1 + 0x1c) = 0;
    *(undefined *)((long)param_1 + 0x1d) = local_9c;
    core::ptr::drop_in_place<uu_wc::Settings>(&local_58);
  }
  else {
    param_1[2] = local_88;
    param_1[3] = CONCAT26(uStack_7a,
                          CONCAT15(uStack_7b,
                                   CONCAT14(uStack_7c,
                                            CONCAT13(uStack_7d,
                                                     CONCAT12(uStack_7e,
                                                              CONCAT11(uStack_7f,uStack_80))))));
    *param_1 = CONCAT44(uStack_94,local_98);
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
  }
  return param_1;
}