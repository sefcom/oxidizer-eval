undefined8 * __rustcall
uu_du::parse_depth(undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  if (param_2 == 0) {
    uVar1 = 0;
    local_38[0] = in_RAX;
LAB_001f3ce8:
    param_1[1] = uVar1;
    param_1[2] = local_38[0];
    uVar1 = 0;
    goto LAB_001f3cf2;
  }
  core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(&local_40);
  if ((char)local_40 == '\0') {
    if (param_4 == '\0') {
      uVar1 = 1;
      goto LAB_001f3ce8;
    }
LAB_001f3ca5:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_38,param_2,param_3);
    local_40 = 1;
  }
  else {
    if (param_4 != '\0') goto LAB_001f3ca5;
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_38,param_2,param_3);
    local_40 = 0;
  }
  uVar1 = ::alloc::boxed::Box<T>::new(&local_40);
  param_1[1] = uVar1;
  param_1[2] = &PTR_drop_in_place<uu_du_DuError>_00283ff8;
  uVar1 = 1;
LAB_001f3cf2:
  *param_1 = uVar1;
  return param_1;
}