undefined8 *
_ZN4just8function14semver_matches17hc829c6283672f96cE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_28;
  
  (*(code *)
    PTR__ZN6semver5parse75__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__VersionReq_GT_8from_str17h84fbbf7c0ccc06c0E_00566c18
  )(&local_100,param_5,param_6);
  local_88 = local_100;
  uStack_84 = uStack_fc;
  uStack_80 = uStack_f8;
  uStack_7c = uStack_f4;
  local_a8 = local_100;
  uStack_a4 = uStack_fc;
  uStack_a0 = uStack_f8;
  uStack_9c = uStack_f4;
                    /* try { // try from 0036cc50 to 0036cc60 has its CatchHandler @ 0036cd78 */
  (*(code *)
    PTR__ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17hea2b01e263d9c4ddE_00566c20
  )(&local_100,param_3,param_4);
  if (CONCAT44(uStack_fc,local_100) == 0) {
    _ZN4just8function14semver_matches28__u7b__u7b_closure_u7d__u7d_17hb0a3fd84aa074353E
              (&local_50,CONCAT44(uStack_f4,uStack_f8));
    local_68 = local_50;
    uStack_64 = uStack_4c;
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
    local_58 = local_40;
    param_1[3] = local_40;
    *(undefined4 *)(param_1 + 1) = local_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_4c;
    *(undefined4 *)(param_1 + 2) = uStack_48;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_44;
    *param_1 = 1;
    puVar3 = &local_88;
  }
  else {
    local_28 = local_e8;
    local_68 = uStack_f8;
    uStack_64 = uStack_f4;
    uStack_60 = local_f0;
    uStack_5c = uStack_ec;
    local_58 = local_e8;
    uStack_d0 = uStack_f8;
    uStack_cc = uStack_f4;
    local_c8 = local_f0;
    uStack_c4 = uStack_ec;
    local_c0 = local_e8;
    local_b8 = local_e0;
                    /* try { // try from 0036ccac to 0036cce0 has its CatchHandler @ 0036cd69 */
    bVar1 = (*(code *)PTR__ZN6semver10VersionReq7matches17hb49ac1d1a2d3d7a6E_00566c28)
                      (&local_a8,local_d8);
    pcVar2 = "false";
    if (bVar1 != 0) {
      pcVar2 = "true";
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_100,pcVar2,bVar1 ^ 5);
    param_1[3] = CONCAT44(uStack_ec,local_f0);
    *(undefined4 *)(param_1 + 1) = local_100;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_fc;
    *(undefined4 *)(param_1 + 2) = uStack_f8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_f4;
    *param_1 = 0;
                    /* try { // try from 0036ccfa to 0036cd1c has its CatchHandler @ 0036cd78 */
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h81119a53d22e768aE(local_d8);
    puVar3 = &local_a8;
  }
  _ZN4core3ptr39drop_in_place_LT_semver__VersionReq_GT_17h1e215c3c00761ef0E(puVar3);
  return param_1;
}