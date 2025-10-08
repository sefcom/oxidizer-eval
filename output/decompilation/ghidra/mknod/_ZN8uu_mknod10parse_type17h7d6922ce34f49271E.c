void _ZN8uu_mknod10parse_type17h7d6922ce34f49271E(undefined8 *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  local_20 = param_2 + param_3;
  local_28 = param_2;
  auVar1 = _ZN4core3str11validations15next_code_point17hb663aabe38a54c14E(&local_28);
  if ((auVar1 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    _ZN8uu_mknod10parse_type28__u7b__u7b_closure_u7d__u7d_17h6540ee980b2a8f73E
              (param_1,param_2,param_3,auVar1._8_8_ & 0xffffffff);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7e6cafe721babae1E
            (&local_40,"missing device typeinvalid device type ",0x13);
  *(undefined4 *)((long)param_1 + 0x14) = local_2c;
  *(undefined8 *)((long)param_1 + 0xc) = local_34;
  *param_1 = local_40;
  *(undefined4 *)(param_1 + 1) = local_38;
  return;
}