void __rustcall uu_cat::write_lines(long *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  undefined auVar10 [16];
  undefined8 local_7d00;
  long *local_7cf8;
  long local_7cf0;
  uint local_7ce8;
  uint local_7ce4;
  undefined **local_7ce0;
  undefined local_7cd8 [16];
  undefined8 local_7cc8;
  undefined4 uStack_7cc0;
  undefined4 uStack_7cbc;
  undefined8 local_7cb8;
  undefined8 local_7cb0;
  undefined8 local_7ca8;
  undefined8 local_7ca0;
  undefined local_7c98;
  char *local_7c90;
  long local_7c88;
  long local_7c80;
  undefined8 local_7c78;
  long *local_7c70;
  code *local_7c68;
  undefined *local_7c60;
  undefined8 local_7c58;
  long **local_7c50;
  undefined8 local_7c48;
  undefined8 *local_7c40;
  undefined8 local_7c38;
  undefined local_7c30 [3072];
  undefined8 local_7030;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4030;
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  local_7030 = 0;
  local_7cf8 = param_1;
  (*(code *)PTR_memset_0021d170)(local_7c30,0,0x7c00);
  local_7c78 = std::io::stdio::stdout();
  local_7d00 = std::io::stdio::Stderr::lock(&local_7c78);
  cVar1 = *(char *)(param_3 + 4);
  bVar9 = *(char *)(param_3 + 2) != '\0';
  local_7c90 = "$\n";
  if (!bVar9) {
    local_7c90 = "\n: ";
  }
  local_7c88 = (ulong)bVar9 + 1;
  local_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00219128;
  local_7ce4 = (uint)*(byte *)(param_3 + 1);
  local_7ce8 = (uint)*(byte *)(param_3 + 3);
  local_7cf0 = param_2;
  local_7c80 = param_3;
  do {
                    /* try { // try from 001b0a64 to 001b0a70 has its CatchHandler @ 001b0dcb */
    auVar10 = _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read
                        (local_7cf0,local_7c30,0x7c00,
                         _<std::os::unix::net::stream::UnixStream_as_std::io::Read>::read);
    uVar6 = auVar10._8_8_;
    local_7cd8 = auVar10;
    if ((auVar10._0_8_ != 0) || (uVar6 == 0)) {
                    /* try { // try from 001b0d5d to 001b0d66 has its CatchHandler @ 001b0dc4 */
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(local_7cd8);
      *local_7cf8 = -0x7ffffffffffffffa;
LAB_001b0d41:
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_7d00);
      return;
    }
                    /* try { // try from 001b0a90 to 001b0aa6 has its CatchHandler @ 001b0dc9 */
    auVar10 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                        (uVar6,local_7c30,0x7c00,&PTR_s_src_uu_cat_src_cat_rs_00219110);
    uVar7 = auVar10._8_8_;
    lVar2 = auVar10._0_8_;
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      if (uVar7 < uVar8 || uVar7 - uVar8 == 0) goto LAB_001b0d8a;
      if (*(char *)(lVar2 + uVar8) == '\n') {
                    /* try { // try from 001b0ae6 to 001b0ca5 has its CatchHandler @ 001b0dd0 */
        write_new_line(&local_7cc8,&local_7d00,local_7c80,param_4,*(undefined *)(local_7cf0 + 4));
        if (local_7cc8 != -0x7ffffffffffffffa) {
          local_7cf8[2] = local_7cb8;
          *(undefined4 *)local_7cf8 = (undefined4)local_7cc8;
          *(undefined4 *)((long)local_7cf8 + 4) = local_7cc8._4_4_;
          *(undefined4 *)(local_7cf8 + 1) = uStack_7cc0;
          *(undefined4 *)((long)local_7cf8 + 0xc) = uStack_7cbc;
LAB_001b0d37:
                    /* try { // try from 001b0d37 to 001b0d40 has its CatchHandler @ 001b0dc4 */
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(local_7cd8);
          goto LAB_001b0d41;
        }
        *(undefined *)(param_4 + 1) = 1;
        uVar8 = uVar8 + 1;
      }
      else {
        if (*(char *)((long)param_4 + 9) == '\0') {
          *(undefined *)((long)param_4 + 10) = 0;
          if ((*(char *)(param_4 + 1) != '\0') && (cVar1 != '\0')) {
            local_7c68 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
            local_7cc8 = 2;
            local_7cb8 = 0;
            local_7cb0 = 6;
            local_7ca8 = 0;
            local_7ca0 = 0x20;
            local_7c98 = 3;
            local_7c60 = &DAT_00219140;
            local_7c58 = 2;
            local_7c40 = &local_7cc8;
            local_7c38 = 1;
            local_7c50 = &local_7c70;
            local_7c48 = 1;
            local_7c70 = param_4;
            lVar3 = std::io::Write::write_fmt(&local_7d00,&local_7c60);
            if (lVar3 != 0) goto LAB_001b0d0a;
            *param_4 = *param_4 + 1;
          }
        }
        else {
          lVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(&local_7d00,"\r",1);
          if (lVar3 != 0) {
LAB_001b0d0a:
            *local_7cf8 = -0x8000000000000000;
            local_7cf8[1] = lVar3;
            goto LAB_001b0d37;
          }
          *(undefined2 *)(param_4 + 1) = 0;
          *(undefined *)((long)param_4 + 10) = 0;
        }
        lVar3 = write_end(&local_7d00,lVar2 + uVar8,uVar7 - uVar8,local_7ce4,local_7ce8);
        uVar4 = lVar3 + uVar8;
        if (uVar4 == uVar7) {
          *(undefined *)(param_4 + 1) = 0;
          break;
        }
        if (uVar7 <= uVar4) {
          local_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00219160;
LAB_001b0d8a:
                    /* try { // try from 001b0d8a to 001b0dc3 has its CatchHandler @ 001b0dd2 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar4,uVar7,local_7ce0);
        }
        if (*(char *)(lVar2 + uVar4) == '\n') {
          write_end_of_line(&local_7cc8,&local_7d00,local_7c90,local_7c88,
                            *(undefined *)(local_7cf0 + 4));
          if (local_7cc8 != -0x7ffffffffffffffa) {
            *(undefined4 *)(local_7cf8 + 1) = uStack_7cc0;
            *(undefined4 *)((long)local_7cf8 + 0xc) = uStack_7cbc;
            *(undefined4 *)(local_7cf8 + 2) = (undefined4)local_7cb8;
            *(undefined4 *)((long)local_7cf8 + 0x14) = local_7cb8._4_4_;
            *local_7cf8 = local_7cc8;
            goto LAB_001b0d37;
          }
          *(undefined *)(param_4 + 1) = 1;
          uVar8 = uVar8 + lVar3 + 1;
        }
        else {
          if (*(char *)(lVar2 + uVar4) != '\r') {
            local_7cc8 = 0;
            uVar5 = core::panicking::assert_failed
                              (0,lVar2 + uVar4,"\n: ",&local_7cc8,
                               &PTR_s_src_uu_cat_src_cat_rs_00219178);
                    /* catch() { ... } // from try @ 001b0d37 with catch @ 001b0dc4
                       catch() { ... } // from try @ 001b0d5d with catch @ 001b0dc4 */
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_7d00);
            _Unwind_Resume(uVar5);
            return;
          }
          *(undefined *)((long)param_4 + 9) = 1;
          uVar8 = uVar8 + lVar3 + 1;
        }
      }
    } while (uVar8 < uVar6);
                    /* try { // try from 001b0ccf to 001b0cd8 has its CatchHandler @ 001b0dcb */
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(local_7cd8);
  } while( true );
}