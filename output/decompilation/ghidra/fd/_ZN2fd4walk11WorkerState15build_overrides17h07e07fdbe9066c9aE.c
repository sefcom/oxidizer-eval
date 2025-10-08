void _ZN2fd4walk11WorkerState15build_overrides17h07e07fdbe9066c9aE
               (int *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_80 [80];
  
  _ZN6ignore9gitignore16GitignoreBuilder3new17hdada0b04754bdf0dE(local_80,param_4);
  puVar1 = PTR__ZN6ignore9overrides15OverrideBuilder3add17h08511d1b8bd831bdE_005409a0;
  if (param_3 != 0) {
    lVar3 = 0;
    do {
                    /* try { // try from 002f85ca to 002f85d1 has its CatchHandler @ 002f870f */
      (*(code *)puVar1)(&local_128,local_80,*(undefined8 *)(param_2 + 8 + lVar3),
                        *(undefined8 *)(param_2 + 0x10 + lVar3));
      if (local_128 != 9) {
        uStack_b8 = local_f8;
        uStack_c8 = local_108;
        uStack_c4 = uStack_104;
        local_c0 = uStack_100;
        uStack_bc = uStack_fc;
        uStack_d8 = local_118;
        uStack_d4 = uStack_114;
        uStack_d0 = uStack_110;
        uStack_cc = uStack_10c;
        local_e8 = local_128;
        iStack_e4 = iStack_124;
        iStack_e0 = iStack_120;
        iStack_dc = iStack_11c;
        uVar2 = _ZN2fd4walk11WorkerState15build_overrides28__u7b__u7b_closure_u7d__u7d_17h032f1114b7bc68ddE
                          (&local_e8);
        *(undefined8 *)(param_1 + 2) = uVar2;
        param_1[0] = 0;
        param_1[1] = -0x80000000;
        goto LAB_002f86ee;
      }
      lVar3 = lVar3 + 0x18;
    } while (param_3 * 0x18 != lVar3);
  }
                    /* try { // try from 002f85e6 to 002f86d7 has its CatchHandler @ 002f870d */
  (*(code *)PTR__ZN6ignore9overrides15OverrideBuilder5build17hc0202f9ccbfecce3E_005409a8)
            (&local_e8,local_80);
  *(undefined8 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x14) = local_98;
  *(undefined8 *)(param_1 + 0x16) = uStack_90;
  *(undefined8 *)(param_1 + 0x10) = local_a8;
  *(undefined8 *)(param_1 + 0x12) = uStack_a0;
  *(undefined8 *)(param_1 + 0xc) = uStack_b8;
  *(undefined8 *)(param_1 + 0xe) = local_b0;
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(param_1 + 10) = CONCAT44(uStack_bc,local_c0);
  *(ulong *)(param_1 + 4) = CONCAT44(uStack_d4,uStack_d8);
  *(ulong *)(param_1 + 6) = CONCAT44(uStack_cc,uStack_d0);
  *param_1 = local_e8;
  param_1[1] = iStack_e4;
  param_1[2] = iStack_e0;
  param_1[3] = iStack_dc;
LAB_002f86ee:
  _ZN4core3ptr55drop_in_place_LT_ignore__overrides__OverrideBuilder_GT_17h0428f109c44de354E
            (local_80);
  return;
}