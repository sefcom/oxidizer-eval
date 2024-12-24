void __rustcall uu_cat::get_input_type(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint local_e4;
  uint *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  uint **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_90;
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    std::fs::metadata(&local_c8,param_2,param_3);
    if ((int)local_c8 == 2) {
      local_d0 = local_c0;
      std::io::error::repr_bitpacked::decode_repr(&local_e0,local_c0);
                    /* WARNING: Could not recover jumptable at 0x001af8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001137b4 + *(int *)(&DAT_001137b4 + ((ulong)local_e0 & 0xff) * 4)))();
      return;
    }
    local_e4 = local_90;
    switch((local_90 & 0xf000) - 0x1000 >> 0xc) {
    case 0:
      *(undefined *)(param_1 + 1) = 6;
      break;
    case 1:
      *(undefined *)(param_1 + 1) = 5;
      break;
    default:
      local_e0 = &local_e4;
      local_d8 = _<std::fs::FileType_as_core::fmt::Debug>::fmt;
      local_c8 = &DAT_0010b1c0;
      local_c0 = 1;
      local_a8 = 0;
      local_b8 = &local_e0;
      local_b0 = 1;
      core::option::Option<T>::map_or_else(param_1,&local_c8);
      return;
    case 3:
      *(undefined *)(param_1 + 1) = 0;
      break;
    case 5:
      *(undefined *)(param_1 + 1) = 4;
      break;
    case 7:
      *(undefined *)(param_1 + 1) = 1;
      break;
    case 9:
      *(undefined *)(param_1 + 1) = 3;
      break;
    case 0xb:
      *(undefined *)(param_1 + 1) = 7;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  *param_1 = 0x8000000000000006;
  return;
}