void _ZN5uu_dd7numbers23to_magnitude_and_suffix17hda63ca50ad718accE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  double *local_78;
  undefined *local_70;
  undefined8 *local_68;
  code *local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN5uu_dd7numbers10SuffixType15base_and_suffix17h8dfa57e28a1f1cddE
            (&local_a8,param_4,param_2,param_3);
  puVar1 = PTR___floatuntidf_00246c18;
  local_40 = local_98;
  uStack_38 = uStack_90;
  local_58 = (double)(*(code *)PTR___floatuntidf_00246c18)(param_2,param_3);
  local_50 = (double)(*(code *)puVar1)(local_a8,local_a0);
  local_50 = local_58 / local_50;
  if (_s__0011e7f8 <= local_50) {
    local_48 = (double)(*(code *)PTR_round_00246c28)(local_50);
    local_78 = &local_48;
    local_88 = (undefined *)0x0;
  }
  else {
    local_78 = &local_50;
    local_88 = &DAT_00121120;
    local_80 = 2;
  }
  local_68 = &local_40;
  local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
  local_a0 = 2;
  local_a8 = &DAT_0023d8d8;
  local_98 = &local_78;
  uStack_90 = 2;
  local_70 = 
  PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_00246c20
  ;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h6db3e72e2d5d868fE(param_1,&local_a8);
  return;
}