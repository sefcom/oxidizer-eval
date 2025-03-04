/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN5uu_dd7numbers23to_magnitude_and_suffix17h88c44cbe00c16152E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  double dVar3;
  double local_110;
  undefined8 **local_108;
  code *local_100;
  undefined8 **local_f8;
  code *local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  double *local_d8;
  code *local_d0;
  undefined8 *local_c8;
  code *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  _ZN5uu_dd7numbers10SuffixType15base_and_suffix17he90531716fe26654E
            (&local_b8,param_4,param_2,param_3);
  puVar1 = PTR___floatuntidf_00266e90;
  local_40 = local_a8;
  uStack_38 = uStack_a0;
  dVar3 = (double)(*(code *)PTR___floatuntidf_00266e90)(param_2,param_3);
  local_110 = (double)(*(code *)puVar1)(local_b8,local_b0);
  local_110 = dVar3 / local_110;
  if (_s__00118ba0 <= local_110) {
    local_d8 = (double *)(*(code *)PTR_round_00266e98)(local_110);
    local_108 = &local_d8;
    local_100 = 
    _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
    ;
    local_f8 = &local_40;
    local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
    local_b8 = (undefined8 *)&DAT_00261a88;
    local_b0 = 2;
    local_a8 = &local_108;
    uStack_a0 = 2;
    pppuVar2 = (undefined8 ***)&local_b8;
  }
  else {
    local_d8 = &local_110;
    local_d0 = 
    _ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17hdf81dcc7e03fc666E
    ;
    local_c8 = &local_40;
    local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
    local_b8 = (undefined8 **)0x0;
    local_b0 = 1;
    local_a8 = (undefined8 ***)0x2;
    local_90 = 0x20;
    local_88 = 3;
    local_80 = 2;
    local_70 = 2;
    local_60 = 1;
    local_58 = 0x20;
    local_50 = 3;
    local_108 = (undefined8 **)&DAT_00261a88;
    local_100 = (code *)0x2;
    local_e8 = (undefined **)&local_b8;
    local_e0 = 2;
    local_f8 = &local_d8;
    local_f0 = (code *)0x2;
    pppuVar2 = &local_108;
  }
  local_98 = 0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1b70357c4d75658E(param_1,pppuVar2);
  return param_1;
}