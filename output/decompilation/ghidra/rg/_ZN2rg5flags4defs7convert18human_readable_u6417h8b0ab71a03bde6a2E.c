undefined8
_ZN2rg5flags4defs7convert18human_readable_u6417h8b0ab71a03bde6a2E
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_38;
  undefined8 local_30;
  undefined local_28 [32];
  
  _ZN2rg5flags4defs7convert3str17hf200dae070501684E(&local_38,param_1,param_2);
  if (local_38 != 0) {
    (*(code *)PTR__ZN8grep_cli5human25parse_human_readable_size17h374500e7b36cff26E_00527098)
              (local_28,local_38,local_30);
    uVar1 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0bff3d9e96ea8957E
                      (local_28);
    return uVar1;
  }
  return 1;
}