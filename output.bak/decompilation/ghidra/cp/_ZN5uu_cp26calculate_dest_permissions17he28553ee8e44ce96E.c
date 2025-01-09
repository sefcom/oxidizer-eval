void __rustcall
uu_cp::calculate_dest_permissions
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined param_5,undefined param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_a8;
  
  std::fs::metadata(&local_e0);
  iVar1 = (int)local_e0;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&local_e0)
  ;
  if (iVar1 == 2) {
    uVar2 = handle_no_preserve_mode(param_5,param_6,param_4);
    uVar3 = uucore::features::mode::get_umask();
    local_a8 = ~uVar3 & uVar2;
  }
  else {
    std::fs::symlink_metadata(&local_e0,param_2,param_3);
    local_d0 = local_d8;
    if ((int)local_e0 == 2) {
      local_e0 = param_7;
      local_d8 = param_8;
      _<uu_cp::Error_as_core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from
                (param_1,&local_e0);
      return;
    }
  }
  *(uint *)(param_1 + 1) = local_a8;
  *param_1 = 0xd;
  return;
}