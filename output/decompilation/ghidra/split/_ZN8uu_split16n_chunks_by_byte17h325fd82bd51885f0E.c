undefined  [16]
_ZN8uu_split16n_chunks_by_byte17h325fd82bd51885f0E
          (undefined8 *param_1,undefined8 param_2,long *param_3,ulong param_4,undefined8 **param_5)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  long local_158;
  undefined8 local_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_108;
  long *local_100;
  long *local_f8;
  ulong local_f0;
  undefined *local_e8;
  long *local_e0;
  undefined8 *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *local_38;
  
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  local_a8 = param_1 + 0xe;
                    /* try { // try from 00170a07 to 00170ac2 has its CatchHandler @ 00170fc5 */
  local_d8 = param_1;
  auVar10 = _ZN8uu_split14get_input_size17h76e4bf9c0daaab1cE
                      (local_a8,param_2,&local_c8,*param_1,param_1[1]);
  uVar9 = local_c0;
  plVar8 = auVar10._8_8_;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auVar10 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
              )(plVar8);
    uVar9 = local_c0;
    goto LAB_00170de7;
  }
  local_88 = local_c0;
  local_80 = local_b8;
  local_70 = 0;
  local_78 = param_2;
  if (param_4 == 0) {
    plVar4 = plVar8;
    if (param_3 < plVar8) {
      plVar4 = param_3;
    }
    if (*(char *)((long)local_d8 + 0xa1) != '\0') {
      param_3 = plVar4;
    }
    if (param_3 != (long *)0x0) goto LAB_00170aad;
  }
  else if ((plVar8 != (long *)0x0) && (param_3 != (long *)0x0)) {
LAB_00170aad:
    local_138 = (undefined8 *)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00211e38)();
    local_140 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00212170)(&local_138)
    ;
    local_108 = (undefined8 *)0x0;
    local_100 = (long *)&DAT_00000008;
    local_f8 = (long *)0x0;
    if (((ulong)plVar8 | (ulong)param_3) >> 0x20 == 0) {
      local_f0 = ((ulong)plVar8 & 0xffffffff) / ((ulong)param_3 & 0xffffffff);
      local_e8 = (undefined *)(((ulong)plVar8 & 0xffffffff) % ((ulong)param_3 & 0xffffffff));
    }
    else {
      local_f0 = (ulong)plVar8 / (ulong)param_3;
      local_e8 = (undefined *)((ulong)plVar8 % (ulong)param_3);
    }
    local_e0 = param_3;
    local_b0 = (long *)param_5;
    if (param_4 == 0) {
                    /* try { // try from 00170b2b to 00170b42 has its CatchHandler @ 00170f81 */
      (*(code *)
        PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_4init17h95c34a5c8d1a9d91E_00212158
      )(&local_138,param_3,local_d8,0);
      param_5 = local_128;
      plVar4 = uStack_130;
      puVar3 = local_138;
                    /* try { // try from 00170b5e to 00170b67 has its CatchHandler @ 00170f56 */
      _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
                (&local_108);
      local_108 = puVar3;
      local_100 = plVar4;
      local_f8 = (long *)param_5;
    }
    local_a0 = 1;
    local_90 = 0;
    local_98 = local_e0;
    auVar10 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h4a3c52dfa8d527ecE
                        (&local_a0);
    plVar4 = auVar10._8_8_;
    if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      if ((param_4 & 1) == 0) {
        do {
          local_158 = 0;
          local_150 = 1;
          local_148 = 0;
          if (plVar8 == (long *)0x0) goto LAB_00170dbf;
          uStack_130 = (long *)(local_f0 + ((undefined *)((long)plVar4 + -1) < local_e8));
          if (plVar4 == local_e0) {
            uStack_130 = plVar8;
          }
          local_138 = &local_88;
                    /* try { // try from 00170cec to 00170d1c has its CatchHandler @ 00170f97 */
          local_128 = (undefined8 **)uStack_130;
          auVar10 = _ZN3std2io19default_read_to_end17hfa36e1d8c1f6f3bfE(&local_138,&local_158);
          lVar7 = auVar10._8_8_;
          if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00170e0f;
          (*(code *)
            PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_10get_writer17h595821988eb35f9aE_00212168
          )(&local_138,&local_108,(undefined *)((long)plVar4 + -1),local_d8);
          param_5 = (undefined8 **)uStack_130;
          uVar2 = local_148;
          uVar6 = local_150;
          auVar10._8_8_ = uStack_130;
          auVar10._0_8_ = local_138;
          if (local_138 != (undefined8 *)0x0) goto LAB_00170f1f;
          lVar5 = uStack_130[2];
          if (local_148 < (ulong)(*uStack_130 - lVar5)) {
            (*(code *)PTR_memcpy_00211da8)(uStack_130[1] + lVar5,local_150,local_148);
            ((long *)param_5)[2] = lVar5 + uVar2;
          }
          else {
                    /* try { // try from 00170d93 to 00170da1 has its CatchHandler @ 00170f97 */
            lVar5 = (*(code *)
                      PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h12d792e0f419688eE_00211e98
                    )(uStack_130,local_150,local_148);
            if (lVar5 != 0) {
                    /* try { // try from 00170dac to 00170db9 has its CatchHandler @ 00170f54 */
              auVar10 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                        )(lVar5);
              goto LAB_00170f1f;
            }
          }
          plVar8 = (long *)((long)plVar8 - lVar7);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                    (local_158,uVar6);
          auVar10 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h4a3c52dfa8d527ecE
                              (&local_a0);
          plVar4 = auVar10._8_8_;
        } while ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
      else {
        param_5 = (undefined8 **)&local_158;
        do {
          local_158 = 0;
          local_150 = 1;
          local_148 = 0;
          if (plVar8 == (long *)0x0) goto LAB_00170dbf;
          uStack_130 = (long *)(local_f0 + ((undefined *)((long)plVar4 + -1) < local_e8));
          if (plVar4 == local_e0) {
            uStack_130 = plVar8;
          }
          local_138 = &local_88;
          local_128 = (undefined8 **)uStack_130;
                    /* try { // try from 00170c34 to 00170c3e has its CatchHandler @ 00170f95 */
          auVar10 = _ZN3std2io19default_read_to_end17hfa36e1d8c1f6f3bfE(&local_138,param_5);
          uVar6 = local_150;
          lVar7 = auVar10._8_8_;
          if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00170e0f;
          if (plVar4 == local_b0) {
            lVar7 = (*(code *)
                      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00212178
                    )(&local_140,local_150,local_148);
            if (lVar7 == 0) goto LAB_00170dc6;
            auVar10 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                      )(lVar7);
            goto LAB_00170f1f;
          }
          plVar8 = (long *)((long)plVar8 - lVar7);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                    (local_158,local_150);
          auVar10 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h4a3c52dfa8d527ecE
                              ();
          plVar4 = auVar10._8_8_;
        } while ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
    }
    goto LAB_00170dcb;
  }
  goto LAB_00170de4;
LAB_00170e0f:
  local_68 = local_a8;
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_58 = &local_d0;
  local_50 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00211e50
  ;
  local_138 = (undefined8 *)&DAT_0020b040;
  uStack_130 = (long *)0x2;
  local_118 = 0;
  local_128 = &local_68;
  local_120 = 2;
                    /* try { // try from 00170e89 to 00170ecd has its CatchHandler @ 00170f6f */
  local_d0 = lVar7;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(&local_48,0,&local_138);
  local_120 = CONCAT44(local_120._4_4_,1);
  local_138 = (undefined8 *)CONCAT44(uStack_44,local_48);
  uStack_130 = (long *)CONCAT44(uStack_3c,uStack_40);
  local_128 = (undefined8 **)local_38;
  uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he26860fb58d4a888E(&local_138);
                    /* try { // try from 00170ece to 00170f11 has its CatchHandler @ 00170f54 */
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2c8dec07427c60f4E(&local_d0);
  auVar10._8_8_ =
       &
       PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h69a8f36dceb4e008E_0020ab40
  ;
  auVar10._0_8_ = uVar6;
LAB_00170f1f:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
            (local_158,local_150);
                    /* try { // try from 00170f2e to 00170f37 has its CatchHandler @ 00170f8b */
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
            (&local_108);
                    /* try { // try from 00170f3d to 00170f41 has its CatchHandler @ 00170fc5 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1369307f6e9c4811E(local_140);
  goto LAB_00170de7;
LAB_00170dbf:
  local_148 = 0;
  local_150 = 1;
  local_158 = 0;
  uVar6 = 1;
LAB_00170dc6:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E(local_158,uVar6);
LAB_00170dcb:
                    /* try { // try from 00170dcb to 00170dd9 has its CatchHandler @ 00170f8b */
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
            (&local_108);
                    /* try { // try from 00170ddf to 00170de3 has its CatchHandler @ 00170fc5 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1369307f6e9c4811E(local_140);
LAB_00170de4:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar10 = auVar1 << 0x40;
LAB_00170de7:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E(local_c8,uVar9);
  return auVar10;
}