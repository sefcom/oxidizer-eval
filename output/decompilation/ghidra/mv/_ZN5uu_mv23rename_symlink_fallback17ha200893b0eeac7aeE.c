void _ZN5uu_mv23rename_symlink_fallback17ha200893b0eeac7aeE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN3std2fs9read_link17h81077e8e2388a5a1E(&local_50,param_1,param_2);
  local_38 = local_50;
  local_30 = local_48;
  local_28 = local_40;
  lVar1 = _ZN3std2os4unix2fs7symlink17h25187c442fd48e77E(&local_38,param_3,param_4);
  if (lVar1 != 0) {
    return;
  }
  _ZN3std2fs11remove_file17hcda18fb70e9be9e2E(param_1,param_2);
  return;
}