void _ZN5uu_ln18simple_backup_path17hf92f6b12668c10c1E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001fce08)(&local_38);
  if (local_38 != 1) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3685ff12e9f7df8aE
              (&local_38,uStack_30,local_28);
                    /* try { // try from 00166a7b to 00166a88 has its CatchHandler @ 00166ab2 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h456c924d25b0d073E
              (&local_38,param_4,param_5 + param_4);
    param_1[2] = local_28;
    *param_1 = CONCAT44(uStack_34,local_38);
    param_1[1] = uStack_30;
    return;
  }
  uVar1 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001fced8)
                    (&PTR_s_src_uu_ln_src_ln_rs_001f6200);
                    /* catch() { ... } // from try @ 00166a7b with catch @ 00166ab2 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbf70cab9980d1377E(&local_38);
  _Unwind_Resume(uVar1);
  return;
}