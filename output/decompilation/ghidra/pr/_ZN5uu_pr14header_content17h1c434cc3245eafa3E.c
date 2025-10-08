void _ZN5uu_pr14header_content17h1c434cc3245eafa3E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 local_90;
  long local_88;
  code *pcStack_80;
  long local_78;
  code *local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(char *)(param_2 + 0x141) == '\0') {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  local_88 = param_2 + 0x78;
  local_78 = param_2 + 0x30;
  pcStack_80 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_70 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_68 = &local_90;
  local_60 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00398c00
  ;
  local_38 = &DAT_00369650;
  local_30 = 3;
  local_18 = 0;
  local_28 = &local_88;
  local_20 = 3;
  local_90 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(&local_50,&local_38);
  puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 1;
    puVar2[5] = 0;
    puVar2[6] = local_50;
    puVar2[7] = uStack_48;
    puVar2[8] = local_40;
    puVar2[9] = 0;
    puVar2[10] = 1;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 1;
    puVar2[0xe] = 0;
    *param_1 = 5;
    param_1[1] = puVar2;
    param_1[2] = 5;
    return;
  }
                    /* try { // try from 002380ed to 002380fc has its CatchHandler @ 002380ff */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00398af8)(8,0x78);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}