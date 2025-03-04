undefined  [16]
_ZN8uu_split16n_chunks_by_line17hfea4751dad8f6ed1E
          (undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,undefined *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined *unaff_R12;
  ulong uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  char local_111;
  undefined8 local_108;
  long local_100;
  ulong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulong local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  ulong local_a8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined8 *local_68;
  undefined local_60;
  byte local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_a0 = 0;
  local_98 = 1;
  local_90 = 0;
                    /* try { // try from 001cd761 to 001cd7de has its CatchHandler @ 001cdbb9 */
  local_c8 = param_5;
  auVar9 = _ZN8uu_split14get_input_size17hff72b499bd50ee30E
                     (param_1 + 0xe,param_2,&local_a0,*param_1,param_1[1]);
  uVar4 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    local_d0 = local_98;
    local_e0 = local_90;
    if ((uVar4 != 0) || ((uVar5 = 0, param_4 != 1 && (*(char *)((long)param_1 + 0xa1) == '\0')))) {
      local_78 = _ZN3std2io5stdio6stdout17h077da66234850927E();
      local_108 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_78);
      local_100 = 0;
      local_f8 = 8;
      local_f0 = (undefined8 *)0x0;
      if (param_3 == 0) {
                    /* try { // try from 001cdb8f to 001cdb9b has its CatchHandler @ 001cdbb7 */
        uVar5 = _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                          (&PTR_s_src_uu_split_src_split_rs_002485a0);
                    /* catch() { ... } // from try @ 001cdb38 with catch @ 001cdb9c */
                    /* catch() { ... } // from try @ 001cd9cf with catch @ 001cdbbe */
                    /* try { // try from 001cdbc1 to 001cdbed has its CatchHandler @ 001cdbf6 */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_c0);
        _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
                  (&local_100);
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17habe0dd4c6dde56f8E(local_108)
        ;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_a0);
        auVar9 = _Unwind_Resume(uVar5);
        return auVar9;
      }
      if ((uVar4 | param_3) >> 0x20 == 0) {
        uVar2 = (uVar4 & 0xffffffff) / (param_3 & 0xffffffff);
        local_d8 = (undefined *)((uVar4 & 0xffffffff) % (param_3 & 0xffffffff));
        if (param_4 == 1) goto LAB_001cd831;
LAB_001cd85d:
        local_111 = *(char *)((long)param_1 + 0xa1);
                    /* try { // try from 001cd865 to 001cd882 has its CatchHandler @ 001cdbb7 */
        local_e8 = param_2;
        _ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_4init17h5aea99d9a23c30d0E
                  (&local_78,param_3,param_1,local_111);
        lVar1 = local_78;
        auVar9._8_8_ = local_68;
        auVar9._0_8_ = local_70;
        if (local_78 == -0x8000000000000000) {
LAB_001cdb59:
                    /* try { // try from 001cdb59 to 001cdb62 has its CatchHandler @ 001cdbb2 */
          unaff_R12 = auVar9._8_8_;
          uVar5 = auVar9._0_8_;
          _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
                    (&local_100);
                    /* try { // try from 001cdb68 to 001cdb6c has its CatchHandler @ 001cdbb9 */
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17habe0dd4c6dde56f8E
                    (local_108);
          goto LAB_001cdb6d;
        }
                    /* try { // try from 001cd8ae to 001cd8b7 has its CatchHandler @ 001cdb9e */
        _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
                  (&local_100);
        local_100 = lVar1;
        local_f8 = local_70;
        local_f0 = local_68;
      }
      else {
        uVar2 = uVar4 / param_3;
        local_d8 = (undefined *)(uVar4 % param_3);
        if (param_4 != 1) goto LAB_001cd85d;
LAB_001cd831:
        local_111 = *(char *)((long)param_1 + 0xa1);
        local_e8 = param_2;
      }
      local_58 = *(byte *)((long)param_1 + 0xa2);
      uVar7 = (uVar2 + 1) - (ulong)(local_d8 == (undefined *)0x0);
      local_78 = local_d0;
      local_70 = local_e0;
      local_68 = local_e8;
      local_60 = 0;
      local_50 = param_1[0x11];
      unaff_R12 = &DAT_00000001;
      uVar8 = 0;
      local_d0 = -0x7fffffffffffffff;
      local_e0 = CONCAT44(local_e0._4_4_,(uint)local_58);
      local_e8 = param_1;
      local_a8 = uVar4;
      while (_ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7f08040107fbede2E
                       (&local_48,&local_78), local_48 != local_d0) {
        if (local_48 == -0x8000000000000000) {
                    /* try { // try from 001cdb15 to 001cdb1d has its CatchHandler @ 001cdbb7 */
          auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                             (local_40);
          goto LAB_001cdb59;
        }
        local_c0 = local_48;
        local_b8 = local_40;
        local_b0 = local_38;
        if (local_38 + uVar8 < local_a8) {
                    /* try { // try from 001cd9cf to 001cda70 has its CatchHandler @ 001cdbbe */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf1e1eb1ae4f6230eE(&local_c0,local_e0 & 0xffffffff);
        }
        lVar1 = local_b0;
        uVar5 = local_b8;
        if (param_4 == 0) {
          _ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_10get_writer17hcb920ccabbd9d626E
                    (&local_88,&local_100,unaff_R12 + -1,local_e8);
          auVar9._8_8_ = local_80;
          auVar9._0_8_ = CONCAT71(uStack_87,local_88);
          if (CONCAT71(uStack_87,local_88) == 0) {
            _ZN8uu_split16custom_write_all17h79f0c894f91cdf7aE
                      (&local_88,uVar5,lVar1,local_80,local_50);
            if (local_88 == '\0') goto LAB_001cda7f;
                    /* try { // try from 001cdb38 to 001cdb48 has its CatchHandler @ 001cdb9c */
            auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                               (local_80);
          }
LAB_001cdb4f:
                    /* try { // try from 001cdb4f to 001cdb58 has its CatchHandler @ 001cdbb7 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E
                    (&local_c0);
          goto LAB_001cdb59;
        }
        if ((unaff_R12 == local_c8) &&
           (lVar3 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                              (&local_108,local_b8,local_b0), lVar3 != 0)) {
          auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                             (lVar3);
          goto LAB_001cdb4f;
        }
LAB_001cda7f:
        uVar8 = uVar8 + lVar1;
        if (uVar8 < uVar7) {
LAB_001cda87:
          if (param_4 == 1) {
LAB_001cdadd:
            if (local_c8 < unaff_R12) {
                    /* try { // try from 001cdae8 to 001cdaf1 has its CatchHandler @ 001cdbb7 */
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E
                        (&local_c0);
              break;
            }
          }
        }
        else {
          uVar4 = 0xffffffff;
          uVar6 = 0xfffffffe;
          do {
            uVar7 = uVar7 + uVar2 + (ulong)(unaff_R12 < local_d8);
            unaff_R12 = unaff_R12 + 1;
            uVar4 = (ulong)((int)uVar4 + 1);
            uVar6 = uVar6 + 1;
          } while (uVar7 <= uVar8);
          if ((local_111 == '\0') || (0x7ffffffe < uVar6)) goto LAB_001cda87;
          if (param_4 == 1) goto LAB_001cdadd;
          unaff_R12 = unaff_R12 + -uVar4;
        }
                    /* try { // try from 001cd960 to 001cd97e has its CatchHandler @ 001cdbcd */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_c0);
      }
                    /* try { // try from 001cdaf2 to 001cdafb has its CatchHandler @ 001cdbb2 */
      _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9a093a5d557b8fa2E
                (&local_100);
                    /* try { // try from 001cdb01 to 001cdb05 has its CatchHandler @ 001cdbb9 */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17habe0dd4c6dde56f8E(local_108);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_a0);
      uVar5 = 0;
      goto LAB_001cdb77;
    }
  }
  else {
    auVar9 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       (uVar4);
    unaff_R12 = auVar9._8_8_;
    uVar5 = auVar9._0_8_;
  }
LAB_001cdb6d:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_a0);
LAB_001cdb77:
  auVar10._8_8_ = unaff_R12;
  auVar10._0_8_ = uVar5;
  return auVar10;
}