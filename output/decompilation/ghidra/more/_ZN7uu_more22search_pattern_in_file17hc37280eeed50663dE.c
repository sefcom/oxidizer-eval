undefined  [16]
_ZN7uu_more22search_pattern_in_file17hc37280eeed50663dE(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  long local_20;
  long lStack_18;
  long lVar2;
  
  if (*param_3 == -0x8000000000000000) {
    local_38 = 1;
    lStack_30 = 0;
    local_40 = 0;
  }
  else {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_28,param_3);
    local_38 = local_20;
    lStack_30 = lStack_18;
    local_40 = local_28;
  }
  if ((param_2 == 0) || (lStack_30 == 0)) {
    uVar4 = 0;
  }
  else {
    local_20 = param_1 + param_2 * 0x18;
    lStack_18 = 0;
    lVar3 = param_1;
    local_28 = param_1;
    do {
      auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h718377d33ac374ceE
                         (&local_28);
      lVar2 = auVar5._8_8_;
      param_1 = auVar5._0_8_;
      if (lVar2 == 0) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_40);
        uVar4 = 0;
        goto LAB_001ddc73;
      }
                    /* try { // try from 001ddc52 to 001ddc59 has its CatchHandler @ 001ddc90 */
      cVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hce6c1a51027c4ec5E
                        (local_38,lStack_30,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10)
                        );
      lVar3 = param_1;
    } while (cVar1 == '\0');
    uVar4 = 1;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_40);
  lVar3 = param_1;
LAB_001ddc73:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}