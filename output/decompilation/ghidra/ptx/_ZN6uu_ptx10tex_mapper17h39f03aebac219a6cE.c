void _ZN6uu_ptx10tex_mapper17h39f03aebac219a6cE(undefined8 *param_1,int param_2)

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
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
                (param_1,&DAT_0015ecd8,0xc);
      return;
    default:
      local_48 = (int *)((ulong)local_48 & 0xffffffff00000000);
      uVar1 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(param_2,&local_48);
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h881c0d1e76b3a749E
                (&local_38,uVar1);
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
  local_40 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hb716a3158a91a555E(param_1,&local_38);
  return;
}