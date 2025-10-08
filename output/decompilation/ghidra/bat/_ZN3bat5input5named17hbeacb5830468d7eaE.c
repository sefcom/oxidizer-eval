void _ZN3bat5input5named17hbeacb5830468d7eaE(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined local_a8 [40];
  undefined local_80 [120];
  
  if (param_3 != 0) {
    _ZN3bat5input5Input9with_name17h8273c086a877e6f3E(local_a8);
                    /* try { // try from 004ad73a to 004ad770 has its CatchHandler @ 004ad7a0 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hab28b98124005ba5E
              (&local_c0,"File",4);
    local_c8 = local_b0;
    local_d8 = local_c0;
    uStack_d4 = uStack_bc;
    uStack_d0 = uStack_b8;
    uStack_cc = uStack_b4;
    (*(code *)PTR__ZN3bat5input16InputDescription8set_kind17hc7573ae884c3aeeaE_00807ad8)
              (local_80,&local_d8);
    (*(code *)PTR_memcpy_008074c0)(param_1,local_a8,0xa0);
    return;
  }
  (*(code *)PTR_memcpy_008074c0)(param_1,param_2,0xa0);
  return;
}