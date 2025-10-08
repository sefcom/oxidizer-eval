void _ZN7uu_tail5paths5Input4from17hacbfb0c241154464E(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  auVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h2e9e2a0144479a37E
                     (param_2);
  (*(code *)
    PTR__ZN100__LT_uu_tail__paths__InputKind_u20_as_u20_core__convert__From_LT__RF_std__ffi__os_str__OsStr_GT__GT_4from17h425c1323af6ac6c8E_0027d8a8
  )(&local_38,auVar1._0_8_);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0027d340)
            (local_70,auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 001a614e to 001a6157 has its CatchHandler @ 001a6191 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
            (&local_58,uStack_68,local_60);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha58dd5728a52fceeE(local_70);
  param_1[5] = local_28;
  param_1[3] = local_38;
  param_1[4] = uStack_30;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  param_1[2] = local_48;
  return;
}