undefined8 *
_ZN5uu_od22open_input_peek_reader17h114ec616b3c82f88E
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined local_40 [24];
  
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h6da545f9e2e553ecE
            (local_40,param_2,param_2 + param_3 * 0x18);
  _ZN5uu_od15multifilereader15MultifileReader3new17h9647a60ecaa9b78dE(param_1 + 2,local_40);
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[8] = param_4;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  return param_1;
}