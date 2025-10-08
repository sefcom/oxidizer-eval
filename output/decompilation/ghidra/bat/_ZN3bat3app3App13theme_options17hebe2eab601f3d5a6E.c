void _ZN3bat3app3App13theme_options17hebe2eab601f3d5a6E(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined local_90 [40];
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (local_90,param_2,"theme",5);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    ("theme",5,local_90);
  if (lVar1 == 0) {
    uStack_a0 = uStack_a0 & 0xffffff00;
    uVar2 = 0x8000000000000001;
  }
  else {
    (*(code *)
      PTR__ZN74__LT_bat__theme__ThemePreference_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h382b82fff54a15a0E_00807a60
    )(local_90,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    _ZN185__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__ops__try_trait__FromResidual_LT_core__ops__control_flow__ControlFlow_LT_B_C_core__convert__Infallible_GT__GT__GT_13from_residual17h0ea307a215188590E
              (&local_68,local_90);
    uStack_a0 = local_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uVar2 = local_68;
  }
                    /* try { // try from 004a891c to 004a8962 has its CatchHandler @ 004a8a4f */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (local_90,param_2,"theme-dark",10);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    ("theme-dark",10,local_90);
  if (lVar1 == 0) {
    local_50 = 0x8000000000000001;
  }
  else {
    (*(code *)
      PTR__ZN68__LT_bat__theme__ThemeName_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h449822739d473d5aE_00807a68
    )(local_90,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    _ZN185__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__ops__try_trait__FromResidual_LT_core__ops__control_flow__ControlFlow_LT_B_C_core__convert__Infallible_GT__GT__GT_13from_residual17h0ea307a215188590E
              (&local_50,local_90);
  }
                    /* try { // try from 004a8983 to 004a89c9 has its CatchHandler @ 004a8a32 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d802d13d527b428E
            (local_90,param_2,"theme-light",0xb);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf7d617d7cf213b9eE
                    ("theme-light",0xb,local_90);
  if (lVar1 == 0) {
    local_68 = 0x8000000000000001;
  }
  else {
    (*(code *)
      PTR__ZN68__LT_bat__theme__ThemeName_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h449822739d473d5aE_00807a68
    )(local_90,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    _ZN185__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__ops__try_trait__FromResidual_LT_core__ops__control_flow__ControlFlow_LT_B_C_core__convert__Infallible_GT__GT__GT_13from_residual17h0ea307a215188590E
              (&local_68,local_90);
    local_38 = CONCAT44(uStack_5c,local_60);
    uStack_30 = CONCAT44(uStack_54,uStack_58);
  }
  param_1[8] = CONCAT44(uStack_94,uStack_98);
  param_1[6] = uVar2;
  param_1[7] = CONCAT44(uStack_9c,uStack_a0);
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[2] = local_40;
  param_1[3] = local_68;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  return;
}