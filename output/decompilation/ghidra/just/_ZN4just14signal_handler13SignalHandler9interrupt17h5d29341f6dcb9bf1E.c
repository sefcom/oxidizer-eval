void _ZN4just14signal_handler13SignalHandler9interrupt17h5d29341f6dcb9bf1E
               (long *param_1,uint param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined *local_b0;
  ulong local_a8 [3];
  long local_90;
  ulong local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined4 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_68 = param_1[2];
  if (local_68 == 0) {
    uVar4 = _ZN4just6signal6Signal4code17ha56ff543d8ac6eb8E(param_2);
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00565e90)(uVar4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(param_1 + 3) == 0) {
    *(uint *)(param_1 + 3) = param_2;
  }
  if (3 < param_2) {
    local_a8[2] = *param_1;
    local_90 = param_1[1];
    local_a8[0] = (ulong)(local_a8[2] != 0);
    if (local_a8[2] == 0) {
      local_68 = 0;
    }
    local_a8[1] = 0;
    local_80 = 0;
    local_88 = local_a8[0];
    local_78 = local_a8[2];
    local_70 = local_90;
    puVar5 = (undefined4 *)
             _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha8dc7643b5748a3cE
                       (local_a8);
    puVar3 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_00566450
    ;
    puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48;
    if (puVar5 != (undefined4 *)0x0) {
      if (*(byte *)((long)param_1 + 0x1c) < 2) {
        do {
          _ZN3nix3sys6signal4kill17hbdca6dbb133b60f3E(*puVar5);
          puVar5 = (undefined4 *)
                   _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha8dc7643b5748a3cE
                             (local_a8);
        } while (puVar5 != (undefined4 *)0x0);
      }
      else {
        do {
          local_bc = *puVar5;
          local_b8 = &local_bc;
          local_b0 = puVar3;
          local_60 = &PTR_DAT_00530f20;
          local_58 = 2;
          local_40 = 0;
          local_48 = 1;
          local_50 = &local_b8;
          (*(code *)puVar2)(&local_60);
          _ZN3nix3sys6signal4kill17hbdca6dbb133b60f3E(local_bc);
          puVar5 = (undefined4 *)
                   _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha8dc7643b5748a3cE
                             (local_a8);
        } while (puVar5 != (undefined4 *)0x0);
      }
    }
  }
  return;
}