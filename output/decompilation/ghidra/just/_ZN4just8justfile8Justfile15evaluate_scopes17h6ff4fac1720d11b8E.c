void _ZN4just8justfile8Justfile15evaluate_scopes17h6ff4fac1720d11b8E
               (int *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined auVar4 [16];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong local_b8 [3];
  undefined7 uStack_a0;
  undefined uStack_99;
  uint7 uStack_98;
  undefined uStack_91;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  _ZN4just9evaluator9Evaluator20evaluate_assignments17h2cf48b4fb0207fb8E
            (&local_120,param_4,param_5,param_2,param_6,param_7,param_9);
  if ((char)local_120 == '8') {
    local_58 = iStack_118;
    iStack_54 = iStack_114;
    iStack_50 = iStack_110;
    iStack_4c = iStack_10c;
    local_48 = iStack_108;
    iStack_44 = iStack_104;
    iStack_40 = iStack_100;
    iStack_3c = iStack_fc;
    _ZN11typed_arena14Arena_LT_T_GT_15alloc_fast_path17hd673e813275a11c7E
              (&local_120,param_3,&local_58);
    if (local_120 == 1) {
      uVar1 = _ZN11typed_arena14Arena_LT_T_GT_15alloc_slow_path17hc006cc0a87cb3d76E
                        (param_3,&iStack_118);
    }
    else {
      uVar1 = CONCAT44(iStack_114,iStack_118);
    }
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
    )(&local_120,param_2 + 0x30);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h0aa37625c7037f01E
              (param_8,&local_120,param_2,uVar1);
    local_b8[2] = *(long *)(param_2 + 0x2a0);
    local_80 = *(undefined8 *)(param_2 + 0x2a8);
    bVar3 = local_b8[2] != 0;
    local_b8[0] = (ulong)bVar3;
    local_78 = local_b8[2];
    if (bVar3) {
      local_78 = *(long *)(param_2 + 0x2b0);
    }
    local_b8[1] = 0;
    uStack_a0 = (undefined7)local_80;
    uStack_99 = (undefined)((ulong)local_80 >> 0x38);
    uStack_98 = (uint7)bVar3;
    uStack_91 = 0;
    local_90 = 0;
    local_88 = local_b8[2];
    auVar4 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                       (local_b8);
    uVar2 = auVar4._8_8_;
    if (auVar4._0_8_ != 0) {
      do {
        local_70[0] = 0;
        local_60 = 0;
                    /* try { // try from 0036d948 to 0036d975 has its CatchHandler @ 0036d9fe */
        _ZN4just8justfile8Justfile15evaluate_scopes17h6ff4fac1720d11b8E
                  (&local_120,uVar2,param_3,param_4,param_5,local_70,uVar1,param_8,param_9);
        if ((char)local_120 != '8') {
          *(undefined8 *)(param_1 + 0x18) = local_c0;
          *(undefined8 *)(param_1 + 0x14) = local_d0;
          *(undefined8 *)(param_1 + 0x16) = uStack_c8;
          *(undefined8 *)(param_1 + 0x10) = local_e0;
          *(undefined8 *)(param_1 + 0x12) = uStack_d8;
          param_1[0xc] = local_f0;
          param_1[0xd] = iStack_ec;
          param_1[0xe] = iStack_e8;
          param_1[0xf] = iStack_e4;
          param_1[8] = iStack_100;
          param_1[9] = iStack_fc;
          param_1[10] = iStack_f8;
          param_1[0xb] = iStack_f4;
          param_1[4] = iStack_110;
          param_1[5] = iStack_10c;
          param_1[6] = iStack_108;
          param_1[7] = iStack_104;
          *param_1 = local_120;
          param_1[1] = iStack_11c;
          param_1[2] = iStack_118;
          param_1[3] = iStack_114;
          _ZN4core3ptr114drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_alloc__string__String_GT__GT_17ha376ddf44fdc42b7E
                    (local_70);
          return;
        }
        _ZN4core3ptr114drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_alloc__string__String_GT__GT_17ha376ddf44fdc42b7E
                  (local_70);
        auVar4 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                           (local_b8);
        uVar2 = auVar4._8_8_;
      } while (auVar4._0_8_ != 0);
    }
    *(char *)param_1 = '8';
  }
  else {
    uStack_98 = (uint7)(CONCAT44(iStack_fc,iStack_100) >> 8);
    *(undefined8 *)(param_1 + 0x16) = uStack_c8;
    *(undefined8 *)(param_1 + 0x18) = local_c0;
    *(undefined8 *)(param_1 + 0x12) = uStack_d8;
    *(undefined8 *)(param_1 + 0x14) = local_d0;
    *(ulong *)(param_1 + 0xe) = CONCAT44(iStack_e4,iStack_e8);
    *(undefined8 *)(param_1 + 0x10) = local_e0;
    *(ulong *)(param_1 + 10) = CONCAT44(iStack_f4,iStack_f8);
    *(ulong *)(param_1 + 0xc) = CONCAT44(iStack_ec,local_f0);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_98,(undefined)iStack_100);
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)iStack_108,CONCAT43(iStack_10c,iStack_110._1_3_));
    *(ulong *)((long)param_1 + 0x19) =
         CONCAT17((undefined)iStack_100,CONCAT43(iStack_104,iStack_108._1_3_));
    *(ulong *)((long)param_1 + 1) =
         CONCAT17((undefined)iStack_118,CONCAT43(iStack_11c,local_120._1_3_));
    *(ulong *)((long)param_1 + 9) =
         CONCAT17((undefined)iStack_110,CONCAT43(iStack_114,iStack_118._1_3_));
    *(char *)param_1 = (char)local_120;
  }
  return;
}