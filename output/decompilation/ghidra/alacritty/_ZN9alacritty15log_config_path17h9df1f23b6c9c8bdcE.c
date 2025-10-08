void _ZN9alacritty15log_config_path17h9df1f23b6c9c8bdcE(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_b0;
  code *local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_70 [3];
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 != 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (local_70,"Configuration files loaded from:",0x20);
    puVar2 = 
    PTR__ZN55__LT_std__path__Display_u20_as_u20_core__fmt__Debug_GT_3fmt17h805f8819fa6944ceE_009dfd80
    ;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 8 + lVar4);
      local_58 = (undefined *)*puVar1;
      uStack_50 = puVar1[1];
      local_b0 = &local_58;
      local_a8 = (code *)puVar2;
      local_a0 = &PTR_s__00984568;
      local_98 = 1;
      local_80 = 0;
      local_90 = &local_b0;
      local_88 = 1;
                    /* try { // try from 00571564 to 00571570 has its CatchHandler @ 00571643 */
      _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hab45fb697e21b286E
                (local_70,&local_a0);
      lVar4 = lVar4 + 0x18;
    } while (param_2 * 0x18 != lVar4);
                    /* try { // try from 0057157a to 00571624 has its CatchHandler @ 00571641 */
    uVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar3) {
      local_b0 = local_70;
      local_a8 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_a0 = (undefined **)&DAT_001e8b60;
      local_98 = 1;
      local_80 = 0;
      local_90 = &local_b0;
      local_88 = 1;
      local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_main_rs_00984578);
      local_58 = &DAT_00201f24;
      uStack_50 = 9;
      local_48 = &DAT_00201f24;
      local_40 = 9;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_a0,3,&local_58);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(local_70);
  }
  return;
}