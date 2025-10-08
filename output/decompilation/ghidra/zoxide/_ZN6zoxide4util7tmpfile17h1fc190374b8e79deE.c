void _ZN6zoxide4util7tmpfile17h1fc190374b8e79deE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined local_58 [16];
  ulong local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_98 = param_1;
  auVar5 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h4cd980ea14f59bb6E
                     (param_2,param_3);
  local_60 = auVar5._0_8_;
  uVar4 = 0;
  while( true ) {
    auVar6 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha54110e1dc3a9d5bE
                       (0x10,1,1,&PTR_s__rustc_bf64d66bd58719fac2585eae5_00234c00);
    local_48 = 0;
    local_58 = auVar6;
                    /* try { // try from 0019310e to 00193123 has its CatchHandler @ 0019328e */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2f2041815b897805E
              (local_58,&DAT_00118e9c,&DAT_00118ea0);
    while (local_48 < 0x10) {
                    /* try { // try from 00193138 to 00193146 has its CatchHandler @ 00193290 */
      uVar3 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hae14fb10f9f72051E();
      _ZN5alloc6string6String4push17h0ede46164189e411E(local_58,uVar3);
    }
    _ZN3std4path4Path4join17h33426bc926a36134E(&local_b0,local_60,auVar5._8_8_,local_58);
    local_70 = 0x1b600000000;
    local_68 = 0x100;
    local_64 = 0x100;
                    /* try { // try from 0019318d to 0019319e has its CatchHandler @ 00193274 */
    _ZN3std2fs11OpenOptions4open17h797baef3413a069bE(&local_40,&local_70,&local_b0);
    uVar1 = local_38;
    if (local_40 != 1) break;
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_38);
    local_90 = (undefined4)uVar1;
    uStack_8c = (undefined4)((ulong)uVar1 >> 0x20);
    if ((cVar2 != '\f') || (3 < uVar4)) {
      uStack_88 = 0;
      uStack_84 = 0x80000000;
                    /* try { // try from 00193240 to 0019324e has its CatchHandler @ 00193270 */
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hd248ee6c6b10aefeE
                (local_98,&local_90,uStack_a8,local_a0);
      _ZN4core3mem4drop17h8efcdb4578edbe7fE(local_b0,uStack_a8);
      return;
    }
                    /* try { // try from 001931c5 to 001931ce has its CatchHandler @ 00193272 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a90eb9fb31b0c2E(&local_90);
    _ZN4core3mem4drop17h8efcdb4578edbe7fE(local_b0,uStack_a8);
    uVar4 = uVar4 + 1;
  }
  uStack_8c = (undefined4)local_b0;
  uStack_88 = (undefined4)((ulong)local_b0 >> 0x20);
  uStack_84 = (undefined4)uStack_a8;
  *local_98 = local_3c;
  *(ulong *)(local_98 + 1) = CONCAT44(uStack_8c,local_90);
  *(ulong *)(local_98 + 3) = CONCAT44(uStack_84,uStack_88);
  *(undefined8 *)(local_98 + 4) = uStack_a8;
  *(undefined8 *)(local_98 + 6) = local_a0;
  return;
}