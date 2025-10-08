undefined8 _ZN7uu_join4Line9get_field17h5172ba7928bd7492E(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x10)) {
    uVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h5fa46ece5d44be38E
                      (*(undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x10),
                       *(undefined8 *)(*(long *)(param_1 + 8) + 8 + param_2 * 0x10),
                       *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                       &PTR_DAT_001fe3c8);
    return uVar1;
  }
  return 0;
}