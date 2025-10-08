undefined  [16]
_ZN8uu_split16n_chunks_by_line17h05febb31e178eac9E
          (undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  undefined uVar2;
  code *pcVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined auVar16 [16];
  undefined8 local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined local_60;
  undefined local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  ulong uVar11;
  
  local_b0 = 0;
  local_a8 = 1;
  local_a0 = 0;
                    /* try { // try from 00171042 to 001710a8 has its CatchHandler @ 001714cd */
  local_90 = param_5;
  auVar16 = _ZN8uu_split14get_input_size17h76e4bf9c0daaab1cE
                      (param_1 + 0xe,param_2,&local_b0,*param_1,param_1[1]);
  lVar6 = local_a0;
  lVar14 = local_a8;
  uVar11 = auVar16._8_8_;
  if ((auVar16 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auVar16 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
              )(uVar11);
    lVar14 = local_a8;
    goto LAB_0017146d;
  }
  if ((uVar11 != 0) || ((param_4 == 0 && (*(char *)((long)param_1 + 0xa1) == '\0')))) {
    local_78 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00211e38)();
    local_100 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00212170)(&local_78);
    local_d8 = lVar6;
    local_f8 = 0;
    local_f0 = 8;
    local_e8 = 0;
    if (param_3 == 0) {
                    /* try { // try from 0017148f to 0017149b has its CatchHandler @ 001714c3 */
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_00212180)
                (&PTR_s_src_uu_split_src_split_rs_0020b060);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar11 | param_3) >> 0x20 == 0) {
      uVar8 = (uVar11 & 0xffffffff) / (param_3 & 0xffffffff);
      local_e0 = (uVar11 & 0xffffffff) % (param_3 & 0xffffffff);
      if (param_4 == 0) goto LAB_0017113e;
LAB_001710fb:
      bVar1 = *(byte *)((long)param_1 + 0xa1);
    }
    else {
      uVar8 = uVar11 / param_3;
      local_e0 = uVar11 % param_3;
      if (param_4 != 0) goto LAB_001710fb;
LAB_0017113e:
      bVar1 = *(byte *)((long)param_1 + 0xa1);
                    /* try { // try from 00171145 to 0017115f has its CatchHandler @ 001714c3 */
      (*(code *)
        PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_4init17h95c34a5c8d1a9d91E_00212158
      )(&local_78,param_3,param_1,bVar1);
      lVar6 = local_78;
      auVar16._8_8_ = local_68;
      auVar16._0_8_ = local_70;
      if (local_78 == -0x8000000000000000) {
LAB_00171454:
                    /* try { // try from 00171454 to 0017145d has its CatchHandler @ 001714be */
        _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
                  (&local_f8);
                    /* try { // try from 00171463 to 00171467 has its CatchHandler @ 001714cd */
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1369307f6e9c4811E(local_100)
        ;
        goto LAB_0017146d;
      }
                    /* try { // try from 001711a0 to 001711a9 has its CatchHandler @ 001714a0 */
      _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
                (&local_f8);
      local_f8 = lVar6;
      local_f0 = local_70;
      local_e8 = local_68;
    }
    uVar2 = *(undefined *)((long)param_1 + 0xa2);
    uVar12 = (uVar8 + 1) - (ulong)(local_e0 == 0);
    local_78 = lVar14;
    local_70 = local_d8;
    local_60 = 0;
    local_50 = param_1[0x11];
    param_3 = 1;
    local_d8 = -0x7fffffffffffffff;
    uVar13 = 0;
    local_d0 = param_4;
    local_98 = uVar11;
    local_68 = param_2;
    local_58 = uVar2;
    do {
                    /* try { // try from 001712a9 to 001712bd has its CatchHandler @ 001714c8 */
      _ZN82__LT_std__io__Split_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0018ef1f4ff01f8fE
                (&local_48,&local_78);
      if (local_48 == local_d8) break;
      if (local_48 == -0x8000000000000000) {
                    /* try { // try from 0017140d to 00171415 has its CatchHandler @ 001714c3 */
        auVar16 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                  )(local_40);
        goto LAB_00171454;
      }
      local_c8 = local_48;
      local_c0 = local_40;
      local_b8 = local_38;
      if (local_38 + uVar13 < local_98) {
                    /* try { // try from 00171311 to 001713af has its CatchHandler @ 001714df */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hec3bc305ec2b1aaaE
                  (&local_c8,uVar2,&PTR_s_src_uu_split_src_split_rs_0020b078);
      }
      lVar6 = local_b8;
      uVar5 = local_c0;
      if ((local_d0 & 1) == 0) {
        (*(code *)
          PTR__ZN85__LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__u20_as_u20_uu_split__ManageOutFiles_GT_10get_writer17h595821988eb35f9aE_00212168
        )(&local_88,&local_f8,param_3 - 1,param_1);
        auVar16._8_8_ = local_80;
        auVar16._0_8_ = CONCAT71(uStack_87,local_88);
        if (CONCAT71(uStack_87,local_88) == 0) {
          _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E
                    (&local_88,uVar5,lVar6,local_80,local_50);
          if (local_88 != '\x01') goto LAB_001713ba;
                    /* try { // try from 0017142e to 0017143e has its CatchHandler @ 0017149e */
          auVar16 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                    )(local_80);
        }
LAB_00171445:
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_c8,local_c0);
        goto LAB_00171454;
      }
      if ((param_3 == local_90) &&
         (lVar10 = (*(code *)
                     PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00212178
                   )(&local_100,local_c0,local_b8), lVar10 != 0)) {
        auVar16 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00212150
                  )(lVar10);
        goto LAB_00171445;
      }
LAB_001713ba:
      uVar11 = local_d0;
      uVar13 = uVar13 + lVar6;
      uVar7 = 0xffffffff;
      for (; uVar12 <= uVar13; uVar12 = uVar12 + uVar8 + (ulong)bVar15) {
        bVar15 = param_3 < local_e0;
        param_3 = param_3 + 1;
        uVar7 = uVar7 + 1;
      }
      uVar9 = (ulong)uVar7;
      if ((int)uVar7 < 1) {
        uVar9 = 0;
      }
      if (((bVar1 ^ 1) & 1) != 0) {
        uVar9 = 0;
      }
      if (local_d0 != 0) {
        uVar9 = 0;
      }
      param_3 = param_3 - uVar9;
      bVar15 = local_90 < param_3;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                (local_c8,local_c0);
    } while (((byte)uVar11 & bVar15) == 0);
                    /* try { // try from 001713f5 to 001713fe has its CatchHandler @ 001714be */
    _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_uu_split__OutFile_GT__GT_17h9ac88a79a4d2d114E
              (&local_f8);
                    /* try { // try from 00171404 to 00171408 has its CatchHandler @ 001714cd */
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1369307f6e9c4811E(local_100);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar16 = auVar4 << 0x40;
LAB_0017146d:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E(local_b0,lVar14);
  return auVar16;
}