void __rustcall uu_ptx::tex_mapper(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int local_4c;
  int *local_48;
  code *local_40;
  undefined **local_38;
  undefined8 uStack_30;
  int **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_4c = param_2;
  if (3 < param_2 - 0x23U) {
    switch(param_2) {
    case 0x5c:
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,&DAT_0015ecd8,0xc);
      return;
    default:
      local_48 = (int *)((ulong)local_48 & 0xffffffff00000000);
      uVar1 = core::char::methods::encode_utf8_raw(param_2,&local_48);
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_38,uVar1);
      param_1[2] = local_28;
      *param_1 = local_38;
      param_1[1] = uStack_30;
      return;
    case 0x5f:
      break;
    case 0x7b:
    case 0x7d:
      local_38 = &PTR_DAT_003edf80;
      uStack_30 = 2;
      goto LAB_002b7d95;
    }
  }
  local_38 = &PTR_DAT_003edf70;
  uStack_30 = 1;
LAB_002b7d95:
  local_48 = &local_4c;
  local_40 = _<char_as_core::fmt::Display>::fmt;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
  core::option::Option<T>::map_or_else(param_1,&local_38);
  return;
}