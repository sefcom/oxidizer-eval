undefined  [16] __rustcall
uu_uniq::Uniq::print_uniq
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 unaff_R13;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar7 = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    uVar7 = 0;
  }
  local_d8 = param_4;
  local_d0 = param_5;
  std::io::BufRead::split(&local_68,param_2,param_3,uVar7);
                    /* try { // try from 001707be to 001707f7 has its CatchHandler @ 00170b6e */
  _<std::io::Split<B>as_core::iter::traits::iterator::Iterator>::next(&local_c8,&local_68);
  lVar4 = CONCAT44(uStack_c4,local_c8);
  if (lVar4 == -0x7fffffffffffffff) {
    uVar9 = 0;
  }
  else {
    if (lVar4 != -0x8000000000000000) {
      local_e8 = local_b8;
      local_78 = local_58;
      local_88 = local_68;
      uStack_84 = uStack_64;
      uStack_80 = uStack_60;
      uStack_7c = uStack_5c;
      cVar1 = *(char *)(param_1 + 0x32);
      cVar2 = *(char *)(param_1 + 0x30);
      cVar3 = *(char *)(param_1 + 0x31);
      uVar8 = 1;
      bVar6 = false;
      local_50 = -0x7fffffffffffffff;
      local_f8 = lVar4;
      uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
      local_a4 = uVar7;
                    /* try { // try from 00170880 to 00170894 has its CatchHandler @ 00170ba1 */
      while (_<std::io::Split<B>as_core::iter::traits::iterator::Iterator>::next
                       (&local_48,&local_88), local_48 != local_50) {
        if (local_48 == -0x8000000000000000) {
                    /* try { // try from 00170a74 to 00170a91 has its CatchHandler @ 00170b5b */
          auVar10 = (*(code *)PTR_from_00235380)(local_40);
LAB_00170a92:
                    /* try { // try from 00170aa2 to 00170b0f has its CatchHandler @ 00170b62 */
          core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn_std::io::BufRead>>>
                    (CONCAT44(uStack_84,local_88),CONCAT44(uStack_7c,uStack_80));
          goto LAB_00170b1b;
        }
        local_a0 = local_48;
        uStack_98 = local_40;
        local_90 = local_38;
                    /* try { // try from 001708e0 to 0017093c has its CatchHandler @ 00170ba6 */
        cVar5 = (*(code *)PTR_cmp_keys_00235388)(param_1,uStack_f0,local_e8);
        if (cVar5 == '\0') {
          if (cVar1 == '\0') {
                    /* try { // try from 00170a0a to 00170a13 has its CatchHandler @ 00170ba1 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
            uVar8 = uVar8 + 1;
          }
          else {
                    /* try { // try from 001709a4 to 001709be has its CatchHandler @ 00170ba6 */
            auVar10 = print_line(param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
            if (auVar10._0_8_ != 0) {
LAB_00170a85:
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_a0);
              goto LAB_00170a92;
            }
            local_b8 = local_90;
            local_c8 = (undefined4)local_a0;
            uStack_c4 = local_a0._4_4_;
            uStack_c0 = (undefined4)uStack_98;
            uStack_bc = uStack_98._4_4_;
                    /* try { // try from 001709df to 001709e8 has its CatchHandler @ 00170b6c */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_f8);
            local_e8 = local_b8;
            local_f8 = CONCAT44(uStack_c4,local_c8);
            uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
            uVar8 = uVar8 + 1;
            bVar6 = true;
          }
        }
        else {
          if ((uVar8 == 1 && cVar2 == '\0') || (1 < uVar8 && cVar3 == '\0')) {
            auVar10 = print_line(param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
            bVar6 = true;
            if (auVar10._0_8_ != 0) goto LAB_00170a85;
          }
          local_b8 = local_90;
          local_c8 = (undefined4)local_a0;
          uStack_c4 = local_a0._4_4_;
          uStack_c0 = (undefined4)uStack_98;
          uStack_bc = uStack_98._4_4_;
                    /* try { // try from 0017095f to 00170968 has its CatchHandler @ 00170b88 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_f8);
          local_e8 = local_b8;
          local_f8 = CONCAT44(uStack_c4,local_c8);
          uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
          uVar8 = 1;
        }
      }
                    /* try { // try from 00170a2f to 00170a33 has its CatchHandler @ 00170b62 */
      core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn_std::io::BufRead>>>
                (CONCAT44(uStack_84,local_88),CONCAT44(uStack_7c,uStack_80));
      if ((uVar8 == 1 && cVar2 == '\0') || (1 < uVar8 && cVar3 == '\0')) {
        auVar10 = print_line(param_1,local_d8,local_d0,uStack_f0,local_e8,uVar8,bVar6);
        if (auVar10._0_8_ != 0) {
LAB_00170b1b:
                    /* try { // try from 00170b1b to 00170b30 has its CatchHandler @ 00170b5d */
          unaff_R13 = auVar10._8_8_;
          uVar9 = auVar10._0_8_;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_f8);
          goto LAB_00170b34;
        }
        if ((*(char *)(param_1 + 0x36) == '\0') || (*(char *)(param_1 + 0x36) == '\x03'))
        goto LAB_00170ae7;
      }
      else if (((*(char *)(param_1 + 0x36) == '\0') || (*(char *)(param_1 + 0x36) == '\x03')) &&
              (bVar6)) {
LAB_00170ae7:
        local_c8 = CONCAT31(local_c8._1_3_,(char)local_a4);
        uVar9 = std::io::impls::_<impl_std::io::Write_for_alloc::boxed::Box<W>>::write_all
                          (local_d8,local_d0,&local_c8,1);
        auVar10 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                  ::map_err_context(uVar9);
        if (auVar10._0_8_ != 0) goto LAB_00170b1b;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_f8);
      uVar9 = 0;
      goto LAB_00170b34;
    }
    auVar10 = (*(code *)PTR_from_00235380)();
    unaff_R13 = auVar10._8_8_;
    uVar9 = auVar10._0_8_;
  }
                    /* try { // try from 0017080e to 00170812 has its CatchHandler @ 00170b67 */
  core::ptr::drop_in_place<std::io::Split<alloc::boxed::Box<dyn_std::io::BufRead>>>
            (CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
LAB_00170b34:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Write>>(local_d8,local_d0);
  auVar10._8_8_ = unaff_R13;
  auVar10._0_8_ = uVar9;
  return auVar10;
}