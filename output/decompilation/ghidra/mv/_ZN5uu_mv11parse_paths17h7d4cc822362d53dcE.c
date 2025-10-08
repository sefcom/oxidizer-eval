void _ZN5uu_mv11parse_paths17h7d4cc822362d53dcE
               (undefined8 param_1,long param_2,long param_3,byte param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) == 0) {
    _ZN4core4iter6traits8iterator8Iterator7collect17h19cc99d274e89084E();
    return;
  }
  uVar1 = _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb002c63040758a83E
                    (param_2,param_2 + param_3 * 0x18);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h1fcc64a42015e15fE
            (param_1,uVar1);
  return;
}