void _ZN5uu_mv23rename_symlink_fallback17h50f184778666e82cE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN3std2fs9read_link17h2d828447d51f8a7fE(&local_50,param_1,param_2);
  if (local_50 != -0x8000000000000000) {
    local_38 = local_50;
    local_30 = local_48;
    local_28 = local_40;
    lVar1 = _ZN3std2os4unix2fs7symlink17h7819e981045b41e0E(&local_38,param_3,param_4);
    if (lVar1 == 0) {
      _ZN3std2fs11remove_file17hac48d4e29d9c97eaE(param_1,param_2);
      return;
    }
  }
  return;
}