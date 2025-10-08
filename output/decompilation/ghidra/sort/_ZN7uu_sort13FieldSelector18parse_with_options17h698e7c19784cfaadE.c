void _ZN7uu_sort13FieldSelector18parse_with_options17h698e7c19784cfaadE
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = (*(code *)
            PTR__ZN63__LT_uu_sort__KeySettings_u20_as_u20_core__default__Default_GT_7default17h14a8cebf2953677dE_002975b8
          )();
  local_d0 = (undefined4)(uVar3 & 0xffffffffffff);
  local_cc = (undefined2)((uVar3 & 0xffffffffffff) >> 0x20);
  _ZN7uu_sort13FieldSelector18parse_with_options18parse_key_settings17h14361e95480b66dfE
            (&local_c0,uVar1,uVar2,&local_d0);
  param_1[2] = local_b0;
  *param_1 = local_c0;
  param_1[1] = uStack_b8;
  *(undefined *)((long)param_1 + 0x37) = 2;
  return;
}