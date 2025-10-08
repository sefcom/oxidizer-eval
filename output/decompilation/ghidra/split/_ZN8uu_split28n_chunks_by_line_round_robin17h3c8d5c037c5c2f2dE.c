undefined  [16]
_ZN8uu_split28n_chunks_by_line_round_robin17h3c8d5c037c5c2f2dE
          (long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined uVar1;
  code *pcVar2;
  undefined auVar3 [16];
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  uint local_5c;
  char local_58;
  byte bStack_57;
  undefined6 uStack_56;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_88 = param_2;
  local_a0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00211e38)();
  local_68 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00212170)(&local_a0);
  local_80 = 0;
  local_78 = 8;
  local_70 = 0;
  if (param_4 == 0) {
                    /* try { // try from 0017165e to 0017166e has its CatchHandler @ 001718f0 */
    (*(code *)
      PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_4init17h95c34a5c8d1a9d91E_00212158
    )(&local_a0,param_3,param_1,*(undefined *)(param_1 + 0xa1));
    param_5 = local_90;
    uVar8 = local_a0;
                    /* try { // try from 0017168a to 00171693 has its CatchHandler @ 001718da */
    _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
              (&local_80);
    local_80 = uVar8;
    local_78 = local_98;
    local_70 = local_90;
    if (param_3 == 0) {
      local_a0 = 0;
      local_98 = 1;
      local_90 = 0;
                    /* try { // try from 00171833 to 00171844 has its CatchHandler @ 001718d8 */
      auVar9 = _ZN3std2io7BufRead10read_until17h0e9a123d5e254a87E
                         (local_88,*(byte *)(param_1 + 0xa2),&local_a0);
      lVar4 = auVar9._8_8_;
      if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        if (lVar4 != 0) {
                    /* try { // try from 001718c9 to 001718d5 has its CatchHandler @ 001718f5 */
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_002120c0
          )(&PTR_s_src_uu_split_src_split_rs_0020b0a8);
          goto LAB_001718d6;
        }
        goto LAB_00171864;
      }
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0x88);
      uVar5 = 0;
      local_5c = (uint)*(byte *)(param_1 + 0xa2);
      uVar7 = 0;
      local_40 = param_1;
      while( true ) {
        local_a0 = 0;
        local_98 = 1;
        local_90 = 0;
                    /* try { // try from 001716fb to 0017179a has its CatchHandler @ 001718fc */
        auVar9 = _ZN3std2io7BufRead10read_until17h0e9a123d5e254a87E(local_88,local_5c,&local_a0);
        uVar8 = local_98;
        lVar4 = auVar9._8_8_;
        if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
        if (lVar4 == 0) goto LAB_00171864;
        local_38 = local_90;
        if ((uVar5 | param_3) >> 0x20 == 0) {
          uVar6 = (uVar5 & 0xffffffff) % (param_3 & 0xffffffff);
        }
        else {
          uVar6 = uVar5 % param_3;
        }
        (*(code *)
          PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_10get_writer17h595821988eb35f9aE_00212168
        )(&local_58,&local_80,uVar6,local_40);
        param_5 = local_50;
        lVar4 = CONCAT62(uStack_56,CONCAT11(bStack_57,local_58));
        auVar9._8_8_ = local_50;
        auVar9._0_8_ = lVar4;
        if (lVar4 != 0) goto LAB_00171893;
        _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E
                  (&local_58,uVar8,local_38,local_50,local_48);
        if (local_58 == '\x01') {
                    /* try { // try from 00171887 to 0017188c has its CatchHandler @ 001718f5 */
          auVar9 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                   )(local_50);
          goto LAB_00171893;
        }
        uVar7 = uVar7 + ((ulong)bStack_57 ^ 1);
        if (uVar7 == param_3) goto LAB_00171864;
        uVar5 = uVar5 + 1;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_a0,uVar8);
      }
    }
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0xa2);
    if (param_3 == 0) {
      local_a0 = 0;
      local_98 = 1;
      local_90 = 0;
                    /* try { // try from 001717eb to 001717fc has its CatchHandler @ 001718ee */
      auVar9 = _ZN3std2io7BufRead10read_until17h0e9a123d5e254a87E(local_88,uVar1,&local_a0);
      lVar4 = auVar9._8_8_;
      if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        if (lVar4 != 0) {
                    /* try { // try from 00171806 to 00171812 has its CatchHandler @ 001718f5 */
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_002120c0
          )(&PTR_s_src_uu_split_src_split_rs_0020b090);
LAB_001718d6:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
LAB_00171864:
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_a0,local_98);
                    /* try { // try from 00171873 to 0017187c has its CatchHandler @ 001718f7 */
        _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
                  (&local_80);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_5;
        auVar9 = auVar3 << 0x40;
        goto LAB_001718aa;
      }
    }
    else {
      param_5 = param_5 - 1;
      uVar7 = 0;
      while( true ) {
        local_a0 = 0;
        local_98 = 1;
        local_90 = 0;
                    /* try { // try from 001715db to 0017163f has its CatchHandler @ 001718fe */
        auVar9 = _ZN3std2io7BufRead10read_until17h0e9a123d5e254a87E(local_88,uVar1,&local_a0);
        uVar8 = local_98;
        lVar4 = auVar9._8_8_;
        if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) break;
        if (lVar4 == 0) goto LAB_00171864;
        if ((uVar7 | param_3) >> 0x20 == 0) {
          uVar5 = (uVar7 & 0xffffffff) % (param_3 & 0xffffffff);
        }
        else {
          uVar5 = uVar7 % param_3;
        }
        if ((uVar5 == param_5) &&
           (lVar4 = (*(code *)
                      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00212178
                    )(&local_68,local_98,local_90), lVar4 != 0)) {
                    /* try { // try from 00171649 to 00171651 has its CatchHandler @ 001718f5 */
          auVar9 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                   )(lVar4);
          goto LAB_00171893;
        }
        uVar7 = uVar7 + 1;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_a0,uVar8);
      }
    }
  }
                    /* try { // try from 00171849 to 00171851 has its CatchHandler @ 001718f5 */
  auVar9 = (*(code *)
             PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
           )(lVar4);
  uVar8 = local_98;
LAB_00171893:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E(local_a0,uVar8);
                    /* try { // try from 001718a0 to 001718a9 has its CatchHandler @ 001718f7 */
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
            (&local_80);
LAB_001718aa:
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1369307f6e9c4811E(local_68);
  return auVar9;
}