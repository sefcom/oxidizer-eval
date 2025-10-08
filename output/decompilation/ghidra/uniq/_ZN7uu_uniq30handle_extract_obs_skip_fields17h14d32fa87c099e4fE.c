void _ZN7uu_uniq30handle_extract_obs_skip_fields17h14d32fa87c099e4fE
               (undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  char local_aa;
  undefined local_a9;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_a8 = 0;
  local_a0 = 4;
  local_98 = 0;
  local_a9 = 0;
  local_aa = '\0';
  uStack_70 = param_2 + param_3;
  local_68 = &local_aa;
  local_60 = &local_a9;
  local_58 = &local_a8;
                    /* try { // try from 0016727b to 00167289 has its CatchHandler @ 001673ba */
  local_78 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h0975b431dfd15c94E(&local_90,&local_78);
  if (local_98 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h555f59bb363643cbE
              (&local_78,param_2,param_3);
    param_1[2] = local_68;
    *(undefined4 *)param_1 = (undefined4)local_78;
    *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_70._4_4_;
  }
  else {
    if (local_aa == '\0') {
      _ZN4core4iter6traits8iterator8Iterator7collect17h3b15c762db729d48E
                (&local_50,local_a0,local_a0 + local_98 * 4);
      if (*param_4 != -0x8000000000000000) {
                    /* try { // try from 00167334 to 0016733d has its CatchHandler @ 00167397 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hc93e8a66ab786634E
                  (&local_50,param_4[1],param_4[2] + param_4[1]);
      }
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                (param_4);
      param_4[2] = local_40;
      *(undefined4 *)param_4 = local_50;
      *(undefined4 *)((long)param_4 + 4) = uStack_4c;
      *(undefined4 *)(param_4 + 1) = uStack_48;
      *(undefined4 *)((long)param_4 + 0xc) = uStack_44;
    }
    else {
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h95e753fd9f550503E
                (param_4);
      *param_4 = -0x8000000000000000;
    }
    if (local_80 < 2) {
      *param_1 = 0x8000000000000000;
    }
    else {
                    /* try { // try from 001672c8 to 00167323 has its CatchHandler @ 001673a6 */
      _ZN4core4iter6traits8iterator8Iterator7collect17h3b15c762db729d48E
                (&local_38,local_88,local_88 + local_80 * 4);
      param_1[2] = local_28;
      *(undefined4 *)param_1 = local_38;
      *(undefined4 *)((long)param_1 + 4) = uStack_34;
      *(undefined4 *)(param_1 + 1) = uStack_30;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
    }
  }
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h341dc4a29c957248E
            (local_90,local_88);
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17h341dc4a29c957248E
            (local_a8,local_a0);
  return;
}