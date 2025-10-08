void _ZN3bat11decorations21LineChangesDecoration15generate_cached17hecb1c1000ca73811E
               (undefined4 *param_1,undefined4 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined local_20;
  
  local_20 = *(undefined *)(param_2 + 4);
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  local_60 = 0x8000000000000000;
  local_48 = 0x8000000000000002;
                    /* try { // try from 00538a04 to 00538a10 has its CatchHandler @ 00538a64 */
  local_58 = param_3;
  local_50 = param_4;
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hf5336000855022daE
            (&local_78,&local_60);
                    /* try { // try from 00538a14 to 00538a1e has its CatchHandler @ 00538a47 */
  uVar1 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                    (param_3,param_4 + param_3);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *param_1 = local_78;
  param_1[1] = uStack_74;
  param_1[2] = uStack_70;
  param_1[3] = uStack_6c;
  *(undefined8 *)(param_1 + 4) = local_68;
  _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
            (&local_60);
  return;
}