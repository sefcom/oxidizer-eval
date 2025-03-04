void _ZN5uu_pr14header_content17h02dbeaeea8884abbE
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  long local_68;
  code *local_60;
  long local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = (undefined *)&local_88;
  if (*(char *)(param_2 + 0x141) == '\0') {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    local_68 = param_2 + 0x78;
    local_58 = param_2 + 0x30;
    local_60 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_50 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_40 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_38 = &DAT_00409590;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_68;
    local_20 = 3;
    local_88 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ea8d69383c77fddE(&local_80,&local_38);
    puVar1 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,0x78);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 002c8a09 to 002c8a18 has its CatchHandler @ 002c8a19 */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x78);
    }
    *puVar1 = 0;
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = local_80;
    *(undefined4 *)((long)puVar1 + 0x34) = uStack_7c;
    *(undefined4 *)(puVar1 + 7) = uStack_78;
    *(undefined4 *)((long)puVar1 + 0x3c) = uStack_74;
    puVar1[8] = local_70;
    puVar1[9] = 0;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 1;
    puVar1[0xe] = 0;
    _ZN5alloc5slice4hack8into_vec17h00e2e55fcd83f713E(param_1,puVar1,5);
  }
  return;
}