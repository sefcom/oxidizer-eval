void _ZN8uu_split20LineBytesChunkWriter3new17hd36f889c86b72df9E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long *local_110;
  code *local_108;
  undefined8 **local_100;
  undefined **local_f8;
  code *pcStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *local_a8;
  code *local_a0;
  undefined8 **local_98;
  undefined **local_90;
  code *pcStack_88;
  undefined8 **local_80;
  undefined local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN8uu_split9filenames16FilenameIterator3new17hd5c894c6ceac3496E
            (&local_f8,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             param_3 + 0x40);
  if (local_f8 == (undefined **)0x8000000000000001) {
    param_1[1] = pcStack_f0;
    param_1[2] = local_e8;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_38 = local_c0;
    uStack_34 = uStack_bc;
    uStack_30 = uStack_b8;
    uStack_2c = uStack_b4;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    uStack_40 = uStack_c8;
    uStack_3c = uStack_c4;
    uStack_58 = (undefined4)uStack_e0;
    uStack_54 = uStack_e0._4_4_;
    uStack_50 = (undefined4)uStack_d8;
    uStack_4c = uStack_d8._4_4_;
    local_70 = local_f8;
    uStack_68 = pcStack_f0;
    local_60 = local_e8;
                    /* try { // try from 001ccae0 to 001ccb44 has its CatchHandler @ 001ccce8 */
    _ZN96__LT_uu_split__filenames__FilenameIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5ad8a6a4076a29c8E
              (&local_a8,&local_70);
    if ((undefined ***)local_a8 == (undefined ***)0x8000000000000000) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha461c13160c52a35E
                (&local_90,"output file suffixes exhausted",0x1e);
      local_e8 = local_80;
      local_f8 = local_90;
      pcStack_f0 = pcStack_88;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(&local_f8);
      param_1[1] = uVar1;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00248438
      ;
      *param_1 = 0x8000000000000000;
    }
    else {
      local_110 = local_a8;
      local_108 = local_a0;
      local_100 = local_98;
      if (*(char *)(param_3 + 0xa0) != '\0') {
        local_90 = (undefined **)0x0;
        pcStack_88 = local_a0;
        local_80 = local_98;
        local_78 = 1;
        local_a8 = (long *)&local_90;
        local_a0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_f8 = &PTR_s_creating_file___cannot_read_from_002483e0;
        pcStack_f0 = (code *)0x2;
        uStack_d8 = 0;
        uStack_e0 = 1;
                    /* try { // try from 001ccbeb to 001ccc27 has its CatchHandler @ 001cccd9 */
        local_e8 = &local_a8;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_f8);
      }
      _ZN8uu_split8Settings26instantiate_current_writer17h325c265ed321d02dE
                (&local_f8,param_3,local_108,local_100,1);
      if (local_f8 != (undefined **)0x8000000000000000) {
        param_1[4] = uStack_d8;
        param_1[5] = CONCAT44(uStack_cc,uStack_d0);
        param_1[2] = local_e8;
        param_1[3] = uStack_e0;
        param_1[0xe] = CONCAT44(uStack_2c,uStack_30);
        *(undefined4 *)(param_1 + 0xc) = uStack_40;
        *(undefined4 *)((long)param_1 + 100) = uStack_3c;
        *(undefined4 *)(param_1 + 0xd) = local_38;
        *(undefined4 *)((long)param_1 + 0x6c) = uStack_34;
        *(undefined4 *)(param_1 + 10) = uStack_50;
        *(undefined4 *)((long)param_1 + 0x54) = uStack_4c;
        *(undefined4 *)(param_1 + 0xb) = uStack_48;
        *(undefined4 *)((long)param_1 + 0x5c) = uStack_44;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_60;
        *(undefined4 *)((long)param_1 + 0x44) = local_60._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_58;
        *(undefined4 *)((long)param_1 + 0x4c) = uStack_54;
        *(undefined4 *)(param_1 + 6) = (undefined4)local_70;
        *(undefined4 *)((long)param_1 + 0x34) = local_70._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_68;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_68._4_4_;
        *param_1 = local_f8;
        param_1[1] = pcStack_f0;
        param_1[0xf] = param_3;
        param_1[0x10] = param_2;
        param_1[0x11] = 0;
        param_1[0x12] = param_2;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha786b13c7b7ee26dE(&local_110);
        return;
      }
      auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         ();
      *(undefined (*) [16])(param_1 + 1) = auVar2;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001ccc33 to 001ccc3c has its CatchHandler @ 001ccce8 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha786b13c7b7ee26dE(&local_110);
    }
    _ZN4core3ptr58drop_in_place_LT_uu_split__filenames__FilenameIterator_GT_17h4a1cc4a00f07c721E
              (&local_70);
  }
  return;
}