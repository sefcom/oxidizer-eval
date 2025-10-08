void _ZN8uu_split24handle_extract_obs_lines17h29d50544fed6fa56E
               (undefined8 *param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined local_a1;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_a0 = 0;
  local_98 = 4;
  local_90 = 0;
  local_a1 = 0;
  uStack_68 = param_2 + param_3;
  local_60 = &local_a1;
  local_58 = &local_a0;
                    /* try { // try from 0016d4bc to 0016d4ca has its CatchHandler @ 0016d593 */
  local_70 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h7ad22d5ebc8d4397E(&local_88,&local_70);
  if (local_90 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
              (&local_70,param_2,param_3);
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_68._4_4_;
  }
  else {
                    /* try { // try from 0016d4de to 0016d545 has its CatchHandler @ 0016d598 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h52fe2ecd3228eeacE
              (&local_50,local_98,local_98 + local_90 * 4);
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hdcaffe84f2735cf8E
              (param_4);
    *(undefined8 *)(param_4 + 4) = local_40;
    *param_4 = local_50;
    param_4[1] = uStack_4c;
    param_4[2] = uStack_48;
    param_4[3] = uStack_44;
    if (local_78 < 2) {
      *param_1 = 0x8000000000000000;
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator7collect17h52fe2ecd3228eeacE
                (&local_38,local_80,local_80 + local_78 * 4);
      param_1[2] = local_28;
      *(undefined4 *)param_1 = local_38;
      *(undefined4 *)((long)param_1 + 4) = uStack_34;
      *(undefined4 *)(param_1 + 1) = uStack_30;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
    }
  }
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h8f4b49139bd30d2fE
            (local_88,local_80);
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h8f4b49139bd30d2fE
            (local_a0,local_98);
  return;
}