void _ZN4just13attribute_set12AttributeSet23ensure_valid_attributes17h6f0be17f12135348E
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  undefined local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0 [3];
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined local_98 [72];
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [16];
  
  local_e0[2] = *param_2;
  local_c8 = param_2[1];
  local_e0[0] = (ulong)(local_e0[2] != 0);
  local_a0 = local_e0[2];
  if (local_e0[2] != 0) {
    local_a0 = param_2[2];
  }
  local_e0[1] = 0;
  local_b8 = 0;
  local_f8 = param_3;
  local_f0 = param_4;
  local_e8 = param_5;
  local_c0 = local_e0[0];
  local_b0 = local_e0[2];
  local_a8 = local_c8;
  puVar3 = (undefined8 *)
           _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0a90991eb32c0f01E
                     (local_e0);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      local_f9 = _ZN4just9attribute9Attribute12discriminant17habfb87751dacf735E(*puVar3);
      cVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5a60ec6c7191de53E
                        (&local_f9,param_6,param_7);
      uVar1 = local_e8;
      if (cVar2 == '\0') {
        auVar4 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(local_e8);
        _ZN65__LT_just__attribute__Attribute_u20_as_u20_core__clone__Clone_GT_5clone17hf7be862012ab759cE
                  (local_98,puVar3);
        local_50 = local_f8;
        local_48 = local_f0;
        local_40 = auVar4;
        _ZN4just5token5Token5error17h986494da066a4455E(param_1,uVar1,local_98);
        return;
      }
      puVar3 = (undefined8 *)
               _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0a90991eb32c0f01E
                         (local_e0);
    } while (puVar3 != (undefined8 *)0x0);
  }
  *(undefined *)(param_1 + 0x48) = 0x25;
  return;
}