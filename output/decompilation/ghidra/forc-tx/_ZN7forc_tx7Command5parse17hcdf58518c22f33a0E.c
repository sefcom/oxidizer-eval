undefined8 _ZN7forc_tx7Command5parse17hcdf58518c22f33a0E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108 [2];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  
  (*(code *)PTR__ZN7forc_tx7Command9try_parse17hf5c8217981b2970bE_002d8640)(local_108);
  if (local_108[0] != 2) {
    (*(code *)PTR_memcpy_002d8190)(param_1,local_108,0x100);
    return param_1;
  }
  local_118 = local_e0;
  uStack_114 = uStack_dc;
  uStack_110 = uStack_d8;
  uStack_10c = uStack_d4;
  local_128 = local_f0;
  uStack_124 = uStack_ec;
  uStack_120 = uStack_e8;
  uStack_11c = uStack_e4;
  local_138 = local_100;
  uStack_134 = uStack_fc;
  uStack_130 = uStack_f8;
  uStack_12c = uStack_f4;
                    /* try { // try from 00228d69 to 00228d84 has its CatchHandler @ 00228d87 */
  uVar2 = (*(code *)PTR__ZN7forc_tx10ParseError5print17hb865d543b4bc2b20E_002d83a8)(&local_138);
  _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT__LP__RP__C_clap_builder__error__Error_GT__GT_17hb5f201bd87e8e1b6E
            (uVar2);
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_002d8648)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}