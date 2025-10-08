void _ZN16fuel_core_client6client32from_strings_errors_to_std_error17h0d912308b953dd65E
               (undefined8 param_1)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [32];
  undefined local_20 [24];
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h97fb9eda06d64d42E
            (local_40,param_1);
                    /* try { // try from 00415bf2 to 00415c07 has its CatchHandler @ 00415c44 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6bd9d4397e2e1910E
            (&local_58,"Response errors",0xf);
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h73fe1b5f25bc7699E
            (local_20,local_40,&local_78);
  (*(code *)PTR__ZN3std2io5error5Error3new17h73c260a684a0fa2cE_00720160)(0x28,local_20);
  return;
}