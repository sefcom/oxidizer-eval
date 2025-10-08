void _ZN4just8justfile8Justfile14check_unstable17he04de0852efda7ffE
               (ulong *param_1,long param_2,byte param_3)

{
  undefined uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68 [3];
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_c0 = *(ulong *)(param_2 + 0x2d0);
  uStack_b8 = *(ulong *)(param_2 + 0x2d8);
  local_d0 = (ulong)(local_c0 != 0);
  local_90 = local_c0;
  if (local_c0 != 0) {
    local_90 = *(ulong *)(param_2 + 0x2e0);
  }
  uStack_c8 = 0;
  uStack_a8 = 0;
  local_b0 = local_d0;
  local_a0 = local_c0;
  uStack_98 = uStack_b8;
  puVar2 = (undefined *)
           _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h34eefe8dabb71698E
                     (&local_d0);
  if (((puVar2 == (undefined *)0x0) || ((param_3 & 1) != 0)) || (*(char *)(param_2 + 0x1eb) != '\0')
     ) {
    local_68[2] = *(long *)(param_2 + 0x2a0);
    local_50 = *(undefined8 *)(param_2 + 0x2a8);
    local_28 = local_68[2];
    if (local_68[2] != 0) {
      local_28 = *(long *)(param_2 + 0x2b0);
    }
    local_68[0] = (ulong)(local_68[2] != 0);
    local_68[1] = 0;
    local_40 = 0;
    local_48 = local_68[0];
    local_38 = local_68[2];
    local_30 = local_50;
    auVar4 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                       (local_68);
    uVar3 = auVar4._8_8_;
    if (auVar4._0_8_ != 0) {
      do {
        _ZN4just8justfile8Justfile14check_unstable17he04de0852efda7ffE(&local_d0,uVar3,param_3);
        if ((char)local_d0 != '8') {
          param_1[0xc] = local_70;
          param_1[10] = local_80;
          param_1[0xb] = uStack_78;
          param_1[8] = local_90;
          param_1[9] = uStack_88;
          param_1[6] = local_a0;
          param_1[7] = uStack_98;
          param_1[4] = local_b0;
          param_1[5] = uStack_a8;
          param_1[2] = local_c0;
          param_1[3] = uStack_b8;
          *param_1 = local_d0;
          param_1[1] = uStack_c8;
          return;
        }
        auVar4 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                           (local_68);
        uVar3 = auVar4._8_8_;
      } while (auVar4._0_8_ != 0);
    }
    *(undefined *)param_1 = 0x38;
  }
  else {
    uVar1 = *puVar2;
    *(undefined *)param_1 = 0x36;
    *(undefined *)((long)param_1 + 1) = uVar1;
  }
  return;
}