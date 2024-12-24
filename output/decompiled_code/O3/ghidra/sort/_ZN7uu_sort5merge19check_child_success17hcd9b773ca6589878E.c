undefined  [16] __rustcall
uu_sort::merge::check_child_success(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  int local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
                    /* try { // try from 00232b52 to 00232c02 has its CatchHandler @ 00232c0b */
  std::process::Child::wait(&local_58,param_1);
  if (local_58 == 0) {
    bVar2 = (local_54 & 0x7f) == 0;
    uStack_68 = local_54 >> 8 & 0xff;
    uStack_6c = (uint)bVar2;
    local_70 = 0;
    if ((bVar2) && (uStack_68 != 0)) {
      core::ptr::
      drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>
                (&local_70);
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_70,param_2,param_3);
      local_40 = local_60;
      local_50 = local_70;
      uStack_4c = uStack_6c;
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      local_58 = CONCAT31(local_58._1_3_,6);
      uVar1 = ::alloc::boxed::Box<T>::new(&local_58);
      goto LAB_00232b86;
    }
  }
  else {
    uStack_68 = local_50;
    uStack_64 = uStack_4c;
    local_70 = 1;
  }
  core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>
            (&local_70);
  uVar1 = 0;
LAB_00232b86:
  core::ptr::drop_in_place<std::process::Child>(param_1);
  auVar3._8_8_ = &PTR_drop_in_place<uu_sort_SortError>_002ff708;
  auVar3._0_8_ = uVar1;
  return auVar3;
}