undefined  [16] __rustcall
uu_split::n_chunks_by_line
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
                    /* try { // try from 001cd831 to 001cd8ae has its CatchHandler @ 001cdc89 */
  local_c8 = param_5;
  auVar9 = get_input_size(param_1 + 0xe,param_2,&local_a0,*param_1,param_1[1]);
  uVar4 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    local_d0 = local_98;
    local_e0 = local_90;
    if ((uVar4 != 0) || ((uVar5 = 0, param_4 != 1 && (*(char *)((long)param_1 + 0xa1) == '\0')))) {
      local_78 = std::io::stdio::stdout();
      local_108 = std::io::stdio::Stderr::lock(&local_78);
      local_100 = 0;
      local_f8 = 8;
      local_f0 = (undefined8 *)0x0;
      if (param_3 == 0) {
                    /* try { // try from 001cdc5f to 001cdc6b has its CatchHandler @ 001cdc87 */
        uVar5 = core::panicking::panic_const::panic_const_div_by_zero
                          (&PTR_s_src_uu_split_src_split_rs_00248ac0);
                    /* catch() { ... } // from try @ 001cdc00 with catch @ 001cdc6c */
                    /* catch() { ... } // from try @ 001cda9f with catch @ 001cdc8e */
                    /* try { // try from 001cdc91 to 001cdcbd has its CatchHandler @ 001cdcc6 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_100);
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_108);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
        auVar9 = _Unwind_Resume(uVar5);
        return auVar9;
      }
      if ((uVar4 | param_3) >> 0x20 == 0) {
        uVar2 = (uVar4 & 0xffffffff) / (param_3 & 0xffffffff);
        local_d8 = (undefined *)((uVar4 & 0xffffffff) % (param_3 & 0xffffffff));
        if (param_4 == 1) goto LAB_001cd901;
LAB_001cd92d:
        local_111 = *(char *)((long)param_1 + 0xa1);
                    /* try { // try from 001cd935 to 001cd952 has its CatchHandler @ 001cdc87 */
        local_e8 = param_2;
        _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::init
                  (&local_78,param_3,param_1,local_111);
        lVar1 = local_78;
        auVar9._8_8_ = local_68;
        auVar9._0_8_ = local_70;
        if (local_78 == -0x8000000000000000) {
LAB_001cdc29:
                    /* try { // try from 001cdc29 to 001cdc32 has its CatchHandler @ 001cdc82 */
          unaff_R12 = auVar9._8_8_;
          uVar5 = auVar9._0_8_;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_100);
                    /* try { // try from 001cdc38 to 001cdc3c has its CatchHandler @ 001cdc89 */
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_108);
          goto LAB_001cdc3d;
        }
                    /* try { // try from 001cd97e to 001cd987 has its CatchHandler @ 001cdc6e */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_100);
        local_100 = lVar1;
        local_f8 = local_70;
        local_f0 = local_68;
      }
      else {
        uVar2 = uVar4 / param_3;
        local_d8 = (undefined *)(uVar4 % param_3);
        if (param_4 != 1) goto LAB_001cd92d;
LAB_001cd901:
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
      while (_<std::io::Split<B>as_core::iter::traits::iterator::Iterator>::next
                       (&local_48,&local_78), local_48 != local_d0) {
        if (local_48 == -0x8000000000000000) {
                    /* try { // try from 001cdbe5 to 001cdbed has its CatchHandler @ 001cdc87 */
          auVar9 = uucore::mods::error::
                   _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                   ::from(local_40);
          goto LAB_001cdc29;
        }
        local_c0 = local_48;
        local_b8 = local_40;
        local_b0 = local_38;
        if (local_38 + uVar8 < local_a8) {
                    /* try { // try from 001cda9f to 001cdb40 has its CatchHandler @ 001cdc8e */
          ::alloc::vec::Vec<T,A>::push(&local_c0,local_e0 & 0xffffffff);
        }
        lVar1 = local_b0;
        uVar5 = local_b8;
        if (param_4 == 0) {
          _<alloc::vec::Vec<uu_split::OutFile>as_uu_split::ManageOutFiles>::get_writer
                    (&local_88,&local_100,unaff_R12 + -1,local_e8);
          auVar9._8_8_ = local_80;
          auVar9._0_8_ = CONCAT71(uStack_87,local_88);
          if (CONCAT71(uStack_87,local_88) == 0) {
            custom_write_all(&local_88,uVar5,lVar1,local_80,local_50);
            if (local_88 == '\0') goto LAB_001cdb4f;
                    /* try { // try from 001cdc00 to 001cdc18 has its CatchHandler @ 001cdc6c */
            auVar9 = uucore::mods::error::
                     _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                     ::from(local_80);
          }
LAB_001cdc1f:
                    /* try { // try from 001cdc1f to 001cdc28 has its CatchHandler @ 001cdc87 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
          goto LAB_001cdc29;
        }
        if ((unaff_R12 == local_c8) &&
           (lVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                              (&local_108,local_b8,local_b0), lVar3 != 0)) {
          auVar9 = uucore::mods::error::
                   _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                   ::from(lVar3);
          goto LAB_001cdc1f;
        }
LAB_001cdb4f:
        uVar8 = uVar8 + lVar1;
        if (uVar8 < uVar7) {
LAB_001cdb57:
          if (param_4 == 1) {
LAB_001cdbad:
            if (local_c8 < unaff_R12) {
                    /* try { // try from 001cdbb8 to 001cdbc1 has its CatchHandler @ 001cdc87 */
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
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
          if ((local_111 == '\0') || (0x7ffffffe < uVar6)) goto LAB_001cdb57;
          if (param_4 == 1) goto LAB_001cdbad;
          unaff_R12 = unaff_R12 + -uVar4;
        }
                    /* try { // try from 001cda30 to 001cda4e has its CatchHandler @ 001cdc9d */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_c0);
      }
                    /* try { // try from 001cdbc2 to 001cdbcb has its CatchHandler @ 001cdc82 */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&local_100);
                    /* try { // try from 001cdbd1 to 001cdbd5 has its CatchHandler @ 001cdc89 */
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_108);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
      uVar5 = 0;
      goto LAB_001cdc47;
    }
  }
  else {
    auVar9 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(uVar4);
    unaff_R12 = auVar9._8_8_;
    uVar5 = auVar9._0_8_;
  }
LAB_001cdc3d:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
LAB_001cdc47:
  auVar10._8_8_ = unaff_R12;
  auVar10._0_8_ = uVar5;
  return auVar10;
}