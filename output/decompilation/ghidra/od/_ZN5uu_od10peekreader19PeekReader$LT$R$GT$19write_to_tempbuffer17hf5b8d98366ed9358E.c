void _ZN5uu_od10peekreader19PeekReader_LT_R_GT_19write_to_tempbuffer17hf5b8d98366ed9358E
               (long param_1,long param_2,long param_3)

{
  undefined local_60 [24];
  undefined local_48 [40];
  
  param_1 = param_1 + 0x70;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h85a19b6f171aa2b7E(local_48,param_1);
  _ZN4core4iter6traits8iterator8Iterator7collect17h283b0bc88187e27dE(local_60,local_48);
                    /* try { // try from 00160568 to 00160575 has its CatchHandler @ 0016059f */
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hfa5bd900e3366737E
            (param_1,param_2,param_3 + param_2);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9cd36669bb8db529E
            (local_48,local_60);
  _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17h3d59e0fe6cb4c802E
            (param_1,local_48);
  return;
}