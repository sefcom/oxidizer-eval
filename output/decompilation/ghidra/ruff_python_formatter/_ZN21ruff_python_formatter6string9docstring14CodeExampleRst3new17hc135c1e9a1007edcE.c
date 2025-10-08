void _ZN21ruff_python_formatter6string9docstring14CodeExampleRst3new17hc135c1e9a1007edcE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined auVar6 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E(&local_80);
  uVar4 = uStack_68;
  uVar3 = local_70;
  uVar2 = uStack_78;
  uVar1 = local_80;
  cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (local_70,uStack_68,".. ",3);
  if (cVar5 == '\0') {
    auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc1c5622f93930984E(uVar3,uVar4);
    cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h74aadde88527fc22E
                      (auVar6._0_8_,auVar6._8_8_,"::",2);
    if (cVar5 == '\0') {
      *param_1 = 0x8000000000000000;
    }
    else {
                    /* try { // try from 00425179 to 00425189 has its CatchHandler @ 0042520a */
      _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                (&local_80,uVar1,uVar2);
      param_1[5] = local_70;
      param_1[3] = local_80;
      param_1[4] = uStack_78;
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 6) = 5;
      *(undefined *)(param_1 + 9) = 0;
    }
  }
  else {
    _ZN21ruff_python_formatter6string9docstring14CodeExampleRst14new_code_block17h4a2856211cdeac1eE
              (&local_80,param_2,param_3);
    param_1[8] = local_40;
    param_1[9] = uStack_38;
    param_1[6] = local_50;
    param_1[7] = uStack_48;
    param_1[4] = local_60;
    param_1[5] = uStack_58;
    param_1[2] = local_70;
    param_1[3] = uStack_68;
    *param_1 = local_80;
    param_1[1] = uStack_78;
  }
  return;
}