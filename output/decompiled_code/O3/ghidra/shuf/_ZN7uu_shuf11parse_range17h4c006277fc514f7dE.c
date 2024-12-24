undefined8 * __rustcall
uu_shuf::parse_range(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 *local_60;
  code *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  core::str::_<impl_str>::split_once(&local_50);
  if (local_50 == 0) {
LAB_001c1822:
    local_60 = &local_b8;
    local_a0 = 1;
    local_b8 = 0;
    local_58 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_98 = &PTR_s_invalid_input_range__00237dd8;
    uStack_90 = 1;
    local_78 = 0;
    local_88 = &local_60;
    local_80 = 1;
    local_b0 = param_2;
    local_a8 = param_3;
    core::option::Option<T>::map_or_else(param_1 + 1,&local_98);
    uVar2 = 1;
LAB_001c1872:
    *param_1 = uVar2;
  }
  else {
    local_68 = local_40;
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_b8,local_50,local_48);
    uVar1 = local_b0;
    if ((char)local_b8 == '\0') {
      core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_b8,local_68,local_38)
      ;
      if ((char)local_b8 == '\0') {
        if ((local_b0 < uVar1) && (uVar1 != local_b0 + 1)) goto LAB_001c1822;
        param_1[1] = uVar1;
        param_1[2] = local_b0;
        *(undefined *)(param_1 + 3) = 0;
        uVar2 = 0;
        goto LAB_001c1872;
      }
      parse_range::___closure__(&local_98,local_68,local_38);
    }
    else {
      parse_range::___closure__(&local_98,local_50,local_48);
    }
    param_1[1] = local_98;
    param_1[2] = uStack_90;
    param_1[3] = local_88;
    *param_1 = 1;
  }
  return param_1;
}