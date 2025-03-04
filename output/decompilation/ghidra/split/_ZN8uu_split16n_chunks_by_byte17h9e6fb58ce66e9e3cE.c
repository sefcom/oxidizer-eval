undefined  [16]
_ZN8uu_split16n_chunks_by_byte17h9e6fb58ce66e9e3cE
          (undefined8 *param_1,undefined8 **param_2,long *param_3,long param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_f0;
  undefined *local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_78;
  undefined local_70;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *local_38;
  
  local_c0 = 0;
  local_b8 = 1;
  uStack_b0 = 0;
  puVar7 = param_1 + 0xe;
                    /* try { // try from 001cd194 to 001cd205 has its CatchHandler @ 001cd6e9 */
  local_a8 = param_5;
  auVar9 = _ZN8uu_split14get_input_size17hff72b499bd50ee30E
                     (puVar7,param_2,&local_c0,*param_1,param_1[1]);
  plVar8 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    local_88 = (undefined4)local_b8;
    uStack_84 = local_b8._4_4_;
    uStack_80 = (undefined4)uStack_b0;
    uStack_7c = uStack_b0._4_4_;
    local_70 = 0;
    local_78 = (long *)param_2;
    if (param_4 == 1) {
      if ((plVar8 == (long *)0x0) || (param_3 == (long *)0x0)) {
LAB_001cd260:
        uVar5 = 0;
        goto LAB_001cd65b;
      }
    }
    else {
      plVar3 = param_3;
      if (plVar8 < param_3) {
        plVar3 = plVar8;
      }
      if (*(char *)((long)param_1 + 0xa1) != '\0') {
        param_3 = plVar3;
      }
      if (param_3 == (long *)0x0) goto LAB_001cd260;
    }
    local_128 = (long *)_ZN3std2io5stdio6stdout17h077da66234850927E();
    local_148 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_128);
    local_140 = (long *)0x0;
    local_138 = (long *)&DAT_00000008;
    local_130 = (long *)0x0;
    if (((ulong)plVar8 | (ulong)param_3) >> 0x20 == 0) {
      local_f0 = ((ulong)plVar8 & 0xffffffff) / ((ulong)param_3 & 0xffffffff);
      local_e8 = (undefined *)(((ulong)plVar8 & 0xffffffff) % ((ulong)param_3 & 0xffffffff));
    }
    else {
      local_f0 = (ulong)plVar8 / (ulong)param_3;
      local_e8 = (undefined *)((ulong)plVar8 % (ulong)param_3);
    }
    local_e0 = param_3;
    if (param_4 != 1) {
                    /* try { // try from 001cd28b to 001cd29d has its CatchHandler @ 001cd6b0 */
      _ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_4init17h5aea99d9a23c30d0E
                (&local_128,param_3,param_1,0);
      param_2 = local_118;
      plVar3 = uStack_120;
      auVar9._8_8_ = local_118;
      auVar9._0_8_ = uStack_120;
      local_d0 = local_128;
      if (local_128 == (long *)0x8000000000000000) goto LAB_001cd647;
                    /* try { // try from 001cd2c8 to 001cd2d1 has its CatchHandler @ 001cd692 */
      _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
                (&local_140);
      local_140 = local_d0;
      local_138 = plVar3;
      local_130 = (long *)param_2;
    }
    local_a0 = 1;
    local_90 = 0;
    local_98 = local_e0;
    auVar9 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h60295cd701836f7aE
                       (&local_a0);
    plVar3 = auVar9._8_8_;
    if (auVar9._0_8_ != 0) {
      puVar2 = puVar7;
      if (param_4 == 0) {
        do {
          local_c8 = puVar2;
          local_160 = 0;
          local_158 = 1;
          local_150 = 0;
          if (plVar8 == (long *)0x0) goto LAB_001cd5fe;
          uStack_120 = (long *)(local_f0 + ((undefined *)((long)plVar3 + -1) < local_e8));
          if (plVar3 == local_e0) {
            uStack_120 = plVar8;
          }
          local_128 = (long *)&local_88;
                    /* try { // try from 001cd447 to 001cd479 has its CatchHandler @ 001cd6c6 */
          auVar9 = _ZN3std2io19default_read_to_end17h2406a85fdf2eff30E(&local_128,&local_160,0);
          lVar6 = auVar9._8_8_;
          if (auVar9._0_8_ != 0) goto LAB_001cd50e;
          _ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_10get_writer17hcb920ccabbd9d626E
                    (&local_128,&local_140,(undefined *)((long)plVar3 + -1),param_1);
          plVar3 = uStack_120;
          uVar1 = local_150;
          auVar9._8_8_ = uStack_120;
          auVar9._0_8_ = local_128;
          if (local_128 != (long *)0x0) goto LAB_001cd63d;
          lVar4 = uStack_120[2];
          if (local_150 < (ulong)(*uStack_120 - lVar4)) {
            (*(code *)PTR_memcpy_0024cfc0)(uStack_120[1] + lVar4,local_158,local_150);
            plVar3[2] = lVar4 + uVar1;
          }
          else {
                    /* try { // try from 001cd4c7 to 001cd4d1 has its CatchHandler @ 001cd6c6 */
            lVar4 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h76ddc0e24b459a3fE
                              (uStack_120,local_158,local_150);
            if (lVar4 != 0) {
                    /* try { // try from 001cd62e to 001cd636 has its CatchHandler @ 001cd6ae */
              auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                 (lVar4);
              goto LAB_001cd63d;
            }
          }
                    /* try { // try from 001cd4e3 to 001cd4ec has its CatchHandler @ 001cd6ba */
          puVar7 = local_c8;
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E
                    (&local_160);
          plVar8 = (long *)((long)plVar8 - lVar6);
          auVar9 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h60295cd701836f7aE
                             (&local_a0);
          plVar3 = auVar9._8_8_;
          param_2 = (undefined8 **)plVar3;
          puVar2 = local_c8;
        } while (auVar9._0_8_ != 0);
      }
      else {
        do {
          local_160 = 0;
          local_158 = 1;
          local_150 = 0;
          if (plVar8 == (long *)0x0) goto LAB_001cd5fe;
          uStack_120 = (long *)(local_f0 + ((undefined *)((long)plVar3 + -1) < local_e8));
          if (plVar3 == local_e0) {
            uStack_120 = plVar8;
          }
          local_128 = (long *)&local_88;
                    /* try { // try from 001cd397 to 001cd3a3 has its CatchHandler @ 001cd6c4 */
          auVar9 = _ZN3std2io19default_read_to_end17h2406a85fdf2eff30E(&local_128,&local_160,0);
          lVar6 = auVar9._8_8_;
          if (auVar9._0_8_ != 0) goto LAB_001cd50e;
          if (plVar3 == local_a8) {
            lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                              (&local_148,local_158,local_150);
            if (lVar6 == 0) goto LAB_001cd5fe;
            auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                               (lVar6);
            goto LAB_001cd63d;
          }
                    /* try { // try from 001cd3be to 001cd3c5 has its CatchHandler @ 001cd6bf */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E
                    (&local_160);
          plVar8 = (long *)((long)plVar8 - lVar6);
          auVar9 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h60295cd701836f7aE
                             (&local_a0);
          plVar3 = auVar9._8_8_;
          param_2 = (undefined8 **)plVar3;
        } while (auVar9._0_8_ != 0);
      }
    }
    goto LAB_001cd608;
  }
  auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                     (plVar8);
  param_2 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
  goto LAB_001cd65b;
LAB_001cd5fe:
                    /* try { // try from 001cd5fe to 001cd607 has its CatchHandler @ 001cd6b0 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_160);
  param_2 = (undefined8 **)plVar3;
LAB_001cd608:
                    /* try { // try from 001cd608 to 001cd611 has its CatchHandler @ 001cd6b5 */
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
            (&local_140);
                    /* try { // try from 001cd617 to 001cd61b has its CatchHandler @ 001cd6e9 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17habe0dd4c6dde56f8E(local_148);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_c0);
  uVar5 = 0;
  goto LAB_001cd668;
LAB_001cd50e:
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_58 = &local_d8;
  local_50 = 
  _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
  local_128 = (long *)&DAT_00248580;
  uStack_120 = (long *)0x2;
  local_108 = 0;
  local_118 = &local_68;
  local_110 = 2;
                    /* try { // try from 001cd580 to 001cd5bf has its CatchHandler @ 001cd680 */
  local_d8 = lVar6;
  local_68 = puVar7;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(&local_48,0,&local_128);
  local_110 = CONCAT44(local_110._4_4_,1);
  local_128 = (long *)CONCAT44(uStack_44,local_48);
  uStack_120 = (long *)CONCAT44(uStack_3c,uStack_40);
  local_118 = (undefined8 **)local_38;
  uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(&local_128);
                    /* try { // try from 001cd5cb to 001cd5fb has its CatchHandler @ 001cd6ae */
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(local_d8);
  auVar9._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00248438
  ;
  auVar9._0_8_ = uVar5;
LAB_001cd63d:
                    /* try { // try from 001cd63d to 001cd646 has its CatchHandler @ 001cd6b0 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_160);
LAB_001cd647:
                    /* try { // try from 001cd647 to 001cd650 has its CatchHandler @ 001cd6b5 */
  param_2 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
            (&local_140);
                    /* try { // try from 001cd656 to 001cd65a has its CatchHandler @ 001cd6e9 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17habe0dd4c6dde56f8E(local_148);
LAB_001cd65b:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_c0);
LAB_001cd668:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = uVar5;
  return auVar10;
}