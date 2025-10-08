void _ZN6uu_who8platform4unix3Who14print_runlevel17h9d15e26d69ee4710E
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 **ppuVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint local_b0;
  int local_ac;
  uint *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  puVar6 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00205fb8;
  local_b0 = *(uint *)(param_2 + 4);
  uVar5 = local_b0 + 0xff;
  if (-1 < (int)local_b0) {
    uVar5 = local_b0;
  }
  local_b0 = local_b0 & 0xff;
  local_60 = &local_b0;
  puStack_58 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00205fb8
  ;
  local_90 = &PTR_s_run_level_001fef58;
  local_88 = 1;
  local_70 = 0;
  local_80 = &local_60;
  local_78 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(local_48,&local_90);
  uVar5 = uVar5 >> 8 & 0xff;
  local_ac = (uint)(uVar5 == 0x4e) * 5 + 0x4e;
  local_a8 = (uint *)&local_ac;
  puStack_a0 = puVar6;
  local_90 = &PTR_s_last__001fef68;
  local_88 = 1;
  local_70 = 0;
  local_80 = &local_a8;
  local_78 = 1;
                    /* try { // try from 00167c37 to 00167c45 has its CatchHandler @ 00167d05 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(&local_60,&local_90);
  local_a8 = local_60;
  puStack_a0 = puStack_58;
  local_98 = local_50;
                    /* try { // try from 00167c67 to 00167c73 has its CatchHandler @ 00167d00 */
  _ZN6uu_who8platform4unix11time_string17hf7b3fb93d48ce0b2E(&local_90,param_2);
  ppuVar2 = local_80;
  uVar1 = local_88;
                    /* try { // try from 00167c7e to 00167ccf has its CatchHandler @ 00167d1a */
  cVar3 = (*(code *)PTR__ZN4core7unicode12unicode_data2cc6lookup17h279dc51266654208E_00205fc0)
                    (uVar5);
  uVar4 = local_98;
  if (cVar3 != '\0') {
    uVar4 = 0;
  }
  puVar6 = &DAT_00000001;
  if (cVar3 == '\0') {
    puVar6 = puStack_a0;
  }
  _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
            (param_1,1,0,0x20,local_40,local_38,uVar1,ppuVar2,1,0,1,0,puVar6,uVar4,1,0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_90);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_48);
  return;
}