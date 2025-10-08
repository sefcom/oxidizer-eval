undefined8 _ZN2rg5flags4defs7convert3u6417h82a0a4ffdeb985fdE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  _ZN2rg5flags4defs7convert3str17hf200dae070501684E(&local_28,param_1,param_2);
  if (local_28 != 0) {
    _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E
              (local_18,local_28,local_20);
    uVar1 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h5182e55b4bf32348E
                      (local_18);
    return uVar1;
  }
  return 1;
}