void _ZN5uu_od10peekreader19PeekReader_LT_R_GT_19write_to_tempbuffer17h4611bd3540c7d609E
               (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined local_80 [24];
  undefined local_68 [32];
  undefined local_48 [40];
  
  param_1 = param_1 + 0x48;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h8d595f7286eec3fbE(local_48,param_1);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h6c8deafb5c067f9dE
            (local_80,local_48);
  uVar1 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h0e35da82cfb5e4ccE
                    (param_2,param_3 + param_2);
                    /* try { // try from 001763a3 to 001763ad has its CatchHandler @ 001763d7 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h5a076726952885c5E(param_1,uVar1);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hc4d5cde4b690c154E
            (local_68,local_80);
  _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17h2dfbb914521bf3e6E
            (param_1,local_68);
  return;
}