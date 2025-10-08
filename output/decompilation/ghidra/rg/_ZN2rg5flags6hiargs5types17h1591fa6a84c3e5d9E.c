void _ZN2rg5flags6hiargs5types17h1591fa6a84c3e5d9E(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_78 [72];
  
  (*(code *)PTR__ZN6ignore5types12TypesBuilder3new17h122fb34b094e5283E_00527198)(local_78);
                    /* try { // try from 00351d7b to 00351d83 has its CatchHandler @ 00351f80 */
  (*(code *)PTR__ZN6ignore5types12TypesBuilder12add_defaults17h9c0a1c66c6d96833E_005271a0)(local_78)
  ;
  if (param_3 == 0) {
    (*(code *)PTR__ZN6ignore5types12TypesBuilder5build17h4beff1898c4bd452E_005271c8)
              (local_f8,local_78);
    param_1[0xe] = local_88;
    param_1[0xc] = local_98;
    param_1[0xd] = uStack_90;
    param_1[10] = local_a8;
    param_1[0xb] = uStack_a0;
    param_1[8] = local_b8;
    param_1[9] = uStack_b0;
    param_1[7] = local_c0;
    local_138 = (undefined4)local_f8[1];
    uStack_134 = (undefined4)((ulong)local_f8[1] >> 0x20);
    uStack_130 = (undefined4)local_f8[2];
    uStack_12c = (undefined4)((ulong)local_f8[2] >> 0x20);
    param_1[5] = local_d0;
    param_1[6] = uStack_c8;
    param_1[3] = local_e0;
    param_1[4] = uStack_d8;
    *(undefined4 *)(param_1 + 1) = local_138;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_134;
    *(undefined4 *)(param_1 + 2) = uStack_130;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_12c;
    *param_1 = local_f8[0];
    _ZN4core3ptr48drop_in_place_LT_ignore__types__TypesBuilder_GT_17hd937f0a8ba1360d7E(local_78);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00351ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00162d50 + *(int *)(&DAT_00162d50 + *param_2 * 4)))();
  return;
}