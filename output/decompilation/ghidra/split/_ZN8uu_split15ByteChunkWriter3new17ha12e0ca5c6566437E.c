void _ZN8uu_split15ByteChunkWriter3new17ha12e0ca5c6566437E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined **local_108;
  undefined *puStack_100;
  undefined8 **local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  long *local_b0;
  undefined *local_a8;
  undefined8 **local_a0;
  undefined **local_98;
  undefined *puStack_90;
  undefined8 **local_88;
  undefined local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN8uu_split9filenames16FilenameIterator3new17hc2a8a0f7203a171bE
            (&local_108,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             param_3 + 0x40);
  if (local_108 == (undefined **)0x8000000000000001) {
    param_1[1] = puStack_100;
    param_1[2] = local_f8;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_40 = local_d0;
    uStack_3c = uStack_cc;
    uStack_38 = uStack_c8;
    uStack_34 = uStack_c4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    uStack_48 = uStack_d8;
    uStack_44 = uStack_d4;
    uStack_60 = (undefined4)uStack_f0;
    uStack_5c = uStack_f0._4_4_;
    uStack_58 = (undefined4)uStack_e8;
    uStack_54 = uStack_e8._4_4_;
    local_78 = local_108;
    uStack_70 = puStack_100;
    local_68 = local_f8;
                    /* try { // try from 0016f436 to 0016f49a has its CatchHandler @ 0016f649 */
    local_b8 = param_2;
    (*(code *)
      PTR__ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h029d1b66ecb898b7E_00211ee0
    )(&local_b0,&local_78);
    puVar2 = local_a8;
    plVar1 = local_b0;
    if (local_b0 == (long *)&DAT_8000000000000000) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                (&local_98,"output file suffixes exhausted",0x1e);
      local_f8 = local_88;
      local_108 = local_98;
      puStack_100 = puStack_90;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he26860fb58d4a888E(&local_108);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h69a8f36dceb4e008E_0020ab40
      ;
      *param_1 = 0x8000000000000000;
    }
    else {
      if (*(char *)(param_3 + 0xa0) != '\0') {
        local_98 = (undefined **)0x0;
        puStack_90 = local_a8;
        local_88 = local_a0;
        local_80 = 1;
        local_b0 = (long *)&local_98;
        local_a8 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00212140
        ;
        local_108 = &PTR_s_creating_file_0020af08;
        puStack_100 = (undefined *)0x2;
        uStack_e8 = 0;
        uStack_f0 = 1;
                    /* try { // try from 0016f534 to 0016f56e has its CatchHandler @ 0016f637 */
        local_f8 = &local_b0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00212148)(&local_108);
      }
      _ZN8uu_split8Settings26instantiate_current_writer17hd292c92efbe44a3cE
                (&local_108,param_3,puVar2,local_a0,1);
      if (local_108 != (undefined **)0x8000000000000000) {
        param_1[4] = uStack_e8;
        param_1[5] = CONCAT44(uStack_dc,uStack_e0);
        param_1[2] = local_f8;
        param_1[3] = uStack_f0;
        param_1[0xe] = CONCAT44(uStack_34,uStack_38);
        *(undefined4 *)(param_1 + 0xc) = uStack_48;
        *(undefined4 *)((long)param_1 + 100) = uStack_44;
        *(undefined4 *)(param_1 + 0xd) = local_40;
        *(undefined4 *)((long)param_1 + 0x6c) = uStack_3c;
        *(undefined4 *)(param_1 + 10) = uStack_58;
        *(undefined4 *)((long)param_1 + 0x54) = uStack_54;
        *(undefined4 *)(param_1 + 0xb) = uStack_50;
        *(undefined4 *)((long)param_1 + 0x5c) = uStack_4c;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_68;
        *(undefined4 *)((long)param_1 + 0x44) = local_68._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_60;
        *(undefined4 *)((long)param_1 + 0x4c) = uStack_5c;
        *(undefined4 *)(param_1 + 6) = (undefined4)local_78;
        *(undefined4 *)((long)param_1 + 0x34) = local_78._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_70;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_70._4_4_;
        *param_1 = local_108;
        param_1[1] = puStack_100;
        param_1[0xf] = param_3;
        param_1[0x10] = local_b8;
        param_1[0x11] = 0;
        param_1[0x12] = local_b8;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E(plVar1,puVar2);
        return;
      }
      auVar4 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
               )();
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7f9a6516de84fa50E(plVar1,puVar2);
    }
    _ZN4core3ptr58drop_in_place_LT_uu_split__filenames__FilenameIterator_GT_17h3a3dca25075fae6fE
              (local_78,uStack_70);
  }
  return;
}