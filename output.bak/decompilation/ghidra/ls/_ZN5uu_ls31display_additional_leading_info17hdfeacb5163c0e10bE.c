void __rustcall
uu_ls::display_additional_leading_info
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 local_38;
  
  local_78 = 0;
  uStack_70 = 1;
  local_68 = 0;
  local_38 = param_4;
  if (*(char *)(param_5 + 0xe9) != '\0') {
                    /* try { // try from 0022924e to 00229284 has its CatchHandler @ 0022950c */
    lVar2 = PathData::get_metadata(param_2,param_6);
    if (lVar2 == 0) {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_a8,&DAT_0013623a,1);
      local_b8 = local_98;
      local_c8._0_4_ = (undefined4)local_a8;
      local_c8._4_4_ = local_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
    }
    else {
      get_inode(&local_c8,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* try { // try from 002292a2 to 002292b1 has its CatchHandler @ 002294f0 */
    pad_left(&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,param_3);
    local_58 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 002292f4 to 00229311 has its CatchHandler @ 002294f5 */
    local_60 = (undefined **)&local_50;
    uVar1 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_78,&local_a8);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00312608);
                    /* try { // try from 00229312 to 0022931b has its CatchHandler @ 002294f0 */
    core::ptr::drop_in_place<alloc::string::String>(&local_50);
                    /* try { // try from 0022931c to 0022936f has its CatchHandler @ 0022950c */
    core::ptr::drop_in_place<alloc::string::String>(&local_c8);
  }
  if (*(char *)(param_5 + 0xea) == '\0') goto LAB_002294b1;
  lVar2 = PathData::get_metadata(param_2,param_6);
  if (lVar2 == 0) {
                    /* try { // try from 002293e9 to 002293fe has its CatchHandler @ 0022950c */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_a8,&DAT_0013623a,1);
    local_b8 = local_98;
    local_c8._0_4_ = (undefined4)local_a8;
    local_c8._4_4_ = local_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    if (*(char *)(param_5 + 0xf8) != '\x04') goto LAB_00229420;
LAB_0022937e:
    local_48 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_50;
    local_90 = 1;
                    /* try { // try from 002293c6 to 002293e3 has its CatchHandler @ 002294e3 */
    local_50 = &local_c8;
    uVar1 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_78,&local_a8);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00312620);
  }
  else {
    uVar1 = *(undefined *)(param_5 + 0xf1);
    uVar3 = get_block_size(*(undefined4 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x60),
                           *(undefined8 *)(param_5 + 0xd8),uVar1);
    display_size(&local_c8,uVar3,uVar1);
    if (*(char *)(param_5 + 0xf8) == '\x04') goto LAB_0022937e;
LAB_00229420:
                    /* try { // try from 0022942a to 0022943e has its CatchHandler @ 002294e3 */
    pad_left(&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,local_38);
    local_58 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 00229481 to 0022949e has its CatchHandler @ 002294d4 */
    local_60 = (undefined **)&local_50;
    uVar1 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                      (&local_78,&local_a8);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00312638);
                    /* try { // try from 0022949f to 002294a8 has its CatchHandler @ 002294e3 */
    core::ptr::drop_in_place<alloc::string::String>(&local_50);
  }
                    /* try { // try from 002294a9 to 002294b0 has its CatchHandler @ 0022950c */
  core::ptr::drop_in_place<alloc::string::String>(&local_c8);
LAB_002294b1:
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  return;
}