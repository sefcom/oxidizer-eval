ulong _ZN5uu_wc4utf810Incomplete3new17hec8ef2d4187e9f87E(undefined8 param_1,long param_2)

{
  uint in_EAX;
  undefined auVar1 [16];
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  auVar1 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17hb9f4f421da6706dfE
                     (param_2,(long)&uStack_18 + 4,4,&PTR_DAT_001f8f70);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h738b473666d6ec1eE
            (auVar1._0_8_,auVar1._8_8_,param_1,param_2,&PTR_DAT_001f8f88);
  return param_2 << 0x20 | uStack_18 >> 0x20;
}