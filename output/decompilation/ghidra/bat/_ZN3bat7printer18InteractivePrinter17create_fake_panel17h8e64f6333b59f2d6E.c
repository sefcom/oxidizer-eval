void _ZN3bat7printer18InteractivePrinter17create_fake_panel17h8e64f6333b59f2d6E
               (undefined4 *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined local_40 [16];
  ulong local_30;
  
  if (param_3 != 0) {
    local_98 = (undefined8 *)(param_3 + -1);
    local_a8 = &DAT_00181174;
    uStack_a0 = &DAT_00181178;
    _ZN4core4iter6traits8iterator8Iterator7collect17hf2327cdb95cc4d00E(local_40,&local_a8);
                    /* try { // try from 0053f376 to 0053f38b has its CatchHandler @ 0053f4ec */
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
              (&local_a8,&DAT_0019ff9f,1,~local_30 + param_3);
    local_b8 = (long)local_98;
    local_c8 = (undefined4)local_a8;
    uStack_c4 = local_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    uStack_70 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_60 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_a8 = &DAT_00185820;
    uStack_a0 = (undefined *)0x2;
    local_88 = 0;
    local_98 = &local_78;
    local_90 = 2;
                    /* try { // try from 0053f3ee to 0053f401 has its CatchHandler @ 0053f4ea */
    local_78 = local_40;
    local_68 = (undefined *)&local_c8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
              (&local_58,0,extraout_RDX,&local_a8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_c8);
    local_c8 = (undefined4)local_58;
    uStack_c4 = local_58._4_4_;
    uStack_c0 = (undefined4)uStack_50;
    uStack_bc = uStack_50._4_4_;
    local_b8 = local_48;
                    /* try { // try from 0053f42a to 0053f481 has its CatchHandler @ 0053f504 */
    cVar1 = (*(code *)PTR__ZN3bat5style15StyleComponents4grid17h47e585e5c9942068E_00807a40)
                      (param_2 + 0xc0);
    if (cVar1 == '\0') {
      *(long *)(param_1 + 4) = local_b8;
      *param_1 = local_c8;
      param_1[1] = uStack_c4;
      param_1[2] = uStack_c0;
      param_1[3] = uStack_bc;
    }
    else {
      uStack_50 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_a8 = &DAT_007ceaa0;
      uStack_a0 = (undefined *)0x2;
      local_88 = 0;
      local_90 = 1;
      local_98 = &local_58;
      local_58 = &local_c8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
                (&local_78,0,extraout_RDX_00,&local_a8);
      *(undefined **)(param_1 + 4) = local_68;
      *param_1 = (undefined4)local_78;
      param_1[1] = local_78._4_4_;
      param_1[2] = (undefined4)uStack_70;
      param_1[3] = uStack_70._4_4_;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_c8);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_40);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
            (param_1,1,0);
  return;
}