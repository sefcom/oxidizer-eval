void _ZN15tabby_index_cli8commands7inspect24print_fields_space_usage17h5ca46c29abb1f1fdE
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *local_88;
  code *local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined local_68 [16];
  undefined8 **local_58;
  undefined *local_50;
  
  local_88 = *(undefined8 **)(param_2 + 0x30);
  local_58 = &local_88;
  local_50 = 
  PTR__ZN76__LT_tantivy_common__byte_count__ByteCount_u20_as_u20_core__fmt__Display_GT_3fmt17h1804e424f0a7a9d4E_006dfd90
  ;
  local_c0 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
  local_b8 = 2;
  local_a0 = 0;
  local_b0 = &local_58;
  local_a8 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_c0);
  (*(code *)PTR__ZN7tantivy11space_usage18PerFieldSpaceUsage6fields17h4d33281b8b3ce08cE_006dfda0)
            (&local_58,param_2);
  auVar2 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h06d3ab6fa90ee265E
                     (&local_58);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10;
  if (auVar2._0_8_ != 0) {
    do {
      auVar3 = (*(code *)
                 PTR__ZN7tantivy6schema6schema6Schema14get_field_name17hd6be3989dcc97c97E_006dfca0)
                         (param_1,*auVar2._0_8_);
      local_90 = *(undefined8 *)(auVar2._8_8_ + 0x18);
      local_88 = (undefined8 *)local_68;
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h22e78c90c7c13f5cE;
      local_78 = &local_90;
      local_70 = 
      PTR__ZN76__LT_tantivy_common__byte_count__ByteCount_u20_as_u20_core__fmt__Display_GT_3fmt17h1804e424f0a7a9d4E_006dfd90
      ;
      local_c0 = &PTR_s_Field____bytes__00684e18;
      local_b8 = 3;
      local_a0 = 0;
      local_b0 = &local_88;
      local_a8 = 2;
      local_68 = auVar3;
      (*(code *)puVar1)(&local_c0);
      auVar2 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h06d3ab6fa90ee265E
                         (&local_58);
    } while (auVar2._0_8_ != 0);
  }
  return;
}