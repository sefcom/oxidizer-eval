void _ZN3bat11decorations20LineNumberDecoration3new17h91e05e55b8444121E
               (undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined local_20;
  
  _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
            (local_60,&DAT_0019ff9f,1,4);
  local_20 = *(undefined *)(param_2 + 0x76);
  local_30 = *(undefined4 *)(param_2 + 0x66);
  uStack_2c = *(undefined4 *)(param_2 + 0x6a);
  uStack_28 = *(undefined4 *)(param_2 + 0x6e);
  uStack_24 = *(undefined4 *)(param_2 + 0x72);
  local_48 = 0x8000000000000002;
                    /* try { // try from 005387af to 005387b9 has its CatchHandler @ 00538802 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hf5336000855022daE
            (&local_78,local_60);
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  *(undefined *)(param_1 + 7) = *(undefined *)(param_2 + 0x76);
  uVar1 = *(undefined4 *)(param_2 + 0x6a);
  uVar2 = *(undefined4 *)(param_2 + 0x6e);
  uVar3 = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = uVar3;
  param_1[3] = 4;
  param_1[4] = 10000;
  _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
            (local_60);
  return;
}