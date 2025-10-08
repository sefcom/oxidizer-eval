void _ZN3bat22get_new_terminal_title17h8b51db7900522cfaE
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hab28b98124005ba5E
            (&local_60,"bat: LC_ALLPAGERXDG_CACHE_HOMEXDG_CONFIG_HOME",5);
  local_40 = param_3 * 0xa0 + param_2;
  local_38 = 0;
  local_48 = param_2;
  auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcd5efa96571fd292E
                     (&local_48);
  if (auVar2._8_8_ != 0) {
    do {
      lVar1 = *(long *)(auVar2._8_8_ + 0x48);
                    /* try { // try from 004af3ab to 004af3c9 has its CatchHandler @ 004af3f0 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb822dd115b0224bfE
                (&local_60,lVar1,*(long *)(auVar2._8_8_ + 0x50) + lVar1);
      if (auVar2._0_8_ < param_3 - 1U) {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb822dd115b0224bfE
                  (&local_60,", ",",:");
      }
      auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcd5efa96571fd292E
                         (&local_48);
    } while (auVar2._8_8_ != 0);
  }
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}