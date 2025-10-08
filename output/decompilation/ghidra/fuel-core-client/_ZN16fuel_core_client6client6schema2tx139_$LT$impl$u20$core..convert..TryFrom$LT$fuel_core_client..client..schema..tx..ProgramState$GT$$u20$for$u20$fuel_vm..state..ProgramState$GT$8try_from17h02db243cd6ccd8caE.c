undefined *
_ZN16fuel_core_client6client6schema2tx139__LT_impl_u20_core__convert__TryFrom_LT_fuel_core_client__client__schema__tx__ProgramState_GT__u20_for_u20_fuel_vm__state__ProgramState_GT_8try_from17h02db243cd6ccd8caE
          (undefined *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_2 + 3) == '\0') {
    local_38 = param_2[2];
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((long)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
    puVar5 = &local_48;
  }
  else {
    if (*(char *)(param_2 + 3) == '\x01') {
      puVar5 = (undefined4 *)param_2[1];
      if (param_2[2] == 0x20) {
        uVar2 = *(undefined8 *)((long)puVar5 + 7);
        param_1[0x20] = *(undefined *)((long)puVar5 + 0x1f);
        uVar1 = *(undefined4 *)((long)puVar5 + 0x13);
        uVar3 = *(undefined4 *)((long)puVar5 + 0x17);
        uVar4 = *(undefined4 *)((long)puVar5 + 0x1b);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((long)puVar5 + 0xf);
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        *(undefined4 *)(param_1 + 0x18) = uVar3;
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
        *param_1 = 1;
        uVar1 = *(undefined4 *)((long)puVar5 + 3);
        *(undefined4 *)(param_1 + 1) = *puVar5;
        *(undefined4 *)(param_1 + 4) = uVar1;
        *(undefined8 *)(param_1 + 8) = uVar2;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 8;
        *param_1 = 5;
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha84acb6fbde5c50fE
                (*param_2,puVar5);
      return param_1;
    }
    local_18 = param_2[2];
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((long)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((long)param_2 + 0xc);
    puVar5 = &local_28;
  }
  _ZN5alloc3vec111__LT_impl_u20_core__convert__TryFrom_LT_alloc__vec__Vec_LT_T_C_A_GT__GT__u20_for_u20__u5b_T_u3b__u20_N_u5d__GT_8try_from17hda5e3366c1b56843E
            (&local_60,puVar5);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha84acb6fbde5c50fE
            (local_60,local_58);
  *(undefined8 *)(param_1 + 8) = 8;
  *param_1 = 5;
  return param_1;
}