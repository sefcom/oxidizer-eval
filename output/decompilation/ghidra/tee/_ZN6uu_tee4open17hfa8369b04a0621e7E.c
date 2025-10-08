void _ZN6uu_tee4open17hfa8369b04a0621e7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,byte *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_90;
  byte *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  local_88 = param_5;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hbc1a098f16dd279eE
            (&local_c0);
  uVar1 = uStack_b8;
  local_90 = local_c0;
  local_d0 = 0x1b600000000;
  if (param_4 == 0) {
    uStack_c6 = 0x100;
  }
  else {
    uStack_c6 = 1;
  }
  _local_c8 = CONCAT22(uStack_c6,0x100);
  local_c4 = 1;
                    /* try { // try from 0015d229 to 0015d23a has its CatchHandler @ 0015d402 */
  _ZN3std2fs11OpenOptions4open17h2690ee4aec4a6280E(&local_80,&local_d0,uStack_b8,local_b0);
  if (local_80 == 1) {
    local_d8 = local_78;
                    /* try { // try from 0015d24f to 0015d33c has its CatchHandler @ 0015d3ee */
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0d00)();
    local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c0a48ca77de87afE;
    local_c0 = &DAT_001ea4f0;
    uStack_b8 = 2;
    local_a0 = 0;
    local_a8 = 1;
    local_b0 = &local_70;
    local_70 = (undefined8 *)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0d08)(&local_c0);
    local_50._0_8_ = 0;
    local_38 = 0;
    local_68 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f0eb8
    ;
    local_58 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f0d90
    ;
    local_c0 = &DAT_001ea510;
    uStack_b8 = 3;
    local_a0 = 0;
    local_a8 = 2;
    local_b0 = &local_70;
    local_70 = (undefined8 *)local_50;
    local_60 = (undefined *)&local_d8;
    local_50._8_8_ = param_2;
    local_40 = param_3;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0d08)(&local_c0);
    if ((local_88 == (byte *)0x0) || (*local_88 < 2)) {
      *param_1 = 0x8000000000000001;
                    /* try { // try from 0015d360 to 0015d36f has its CatchHandler @ 0015d402 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc399f132f0256091E(local_d8);
    }
    else {
      *param_1 = 0x8000000000000000;
      param_1[1] = local_d8;
    }
  }
  else {
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h74aa50a9b650d9d3E(local_7c);
                    /* try { // try from 0015d370 to 0015d382 has its CatchHandler @ 0015d3da */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hbc1a098f16dd279eE
              (&local_c0,param_2,param_3);
    param_1[2] = local_b0;
    *(undefined4 *)param_1 = (undefined4)local_c0;
    *(undefined4 *)((long)param_1 + 4) = local_c0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_b8._4_4_;
    param_1[3] = uVar2;
    param_1[4] = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha6733c6cf5f3c093E_001ea540;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ef7ab37ae5a30d7E(local_90,uVar1);
  return;
}