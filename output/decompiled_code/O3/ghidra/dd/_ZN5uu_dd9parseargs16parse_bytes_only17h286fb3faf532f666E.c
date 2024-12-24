void __rustcall
uu_dd::parseargs::parse_bytes_only(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined uVar2;
  char local_28 [8];
  undefined8 local_20;
  
  if (param_4 != 0) {
    uVar2 = param_4 == param_3;
    if (param_3 <= param_4) goto LAB_001d46f8;
    if (*(char *)(param_2 + param_4) < -0x40) {
      do {
        uVar2 = 1;
        core::str::slice_error_fail(param_2,param_3);
LAB_001d46f8:
      } while (!(bool)uVar2);
    }
  }
  core::num::_<impl_core::str::traits::FromStr_for_u64>::from_str(local_28,param_2,param_4);
  if (local_28[0] == '\0') {
    param_1[1] = local_20;
    uVar1 = 0xe;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_2,param_3);
    uVar1 = 7;
  }
  *param_1 = uVar1;
  return;
}