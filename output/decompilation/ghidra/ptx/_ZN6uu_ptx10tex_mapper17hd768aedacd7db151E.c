void _ZN6uu_ptx10tex_mapper17hd768aedacd7db151E(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int local_4c;
  int *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 uStack_30;
  int **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_4c = param_2;
  if (3 < param_2 - 0x23U) {
    switch(param_2) {
    case 0x5c:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (param_1,"\\backslash{}",0xc);
      return;
    default:
      local_48 = (int *)((ulong)local_48 & 0xffffffff00000000);
      uVar1 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(param_2,&local_48);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he9e3a9b23988b07fE
                (&local_38,uVar1);
      param_1[2] = local_28;
      *param_1 = local_38;
      param_1[1] = uStack_30;
      return;
    case 0x5f:
      break;
    case 0x7b:
    case 0x7d:
      local_38 = &PTR_s_____00351a70;
      uStack_30 = 2;
      goto LAB_0022cdb5;
    }
  }
  local_38 = &PTR_s___00351a60;
  uStack_30 = 1;
LAB_0022cdb5:
  local_48 = &local_4c;
  local_40 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_003802c0;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4a28e95acdffaeaeE(param_1,&local_38);
  return;
}