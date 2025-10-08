void _ZN2rg5flags6hiargs6HiArgs12matcher_rust17h9492ce990c54230dE(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int3 iVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  ushort local_fa;
  undefined4 local_f8;
  undefined2 local_f4;
  byte local_f2;
  undefined local_f1;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined local_58 [24];
  undefined local_40 [24];
  undefined local_28 [24];
  
  local_110 = 0x6400000;
  local_108 = 0x3e800000;
  local_100 = 0xfa;
  local_fc = CONCAT11(local_fc._1_1_,2);
  local_fa = local_fa & 0xff00;
  local_f4 = 0;
  local_f8 = 0x10000;
  local_f2 = *(byte *)((long)param_2 + 0x386) ^ 1;
  local_f1 = 0;
  bVar1 = *(byte *)((long)param_2 + 0x372);
  local_f0._0_3_ = (uint3)bVar1 << 0x10;
  iVar4 = (int3)local_f0;
  local_f0 = (uint)bVar1 << 0x10;
  if (*(char *)((long)param_2 + 0x393) == '\0') {
LAB_0034ee82:
    bVar2 = *(byte *)((long)param_2 + 0x391);
  }
  else {
    if (*(char *)((long)param_2 + 0x393) == '\x01') {
      local_f8 = 0x10001;
      goto LAB_0034ee82;
    }
    local_f8 = 0x10100;
    bVar2 = *(byte *)((long)param_2 + 0x391);
  }
  if (bVar2 != 2) {
    if ((bVar2 & 1) == 0) {
      local_f0 = CONCAT13(1,iVar4);
      cVar6 = *(char *)((long)param_2 + 0x37d);
      uVar5 = local_f0;
      goto joined_r0x0034eee3;
    }
    local_f0 = (uint)CONCAT12(bVar1,0x100);
  }
  cVar6 = *(char *)((long)param_2 + 0x37d);
  uVar5 = local_f0;
joined_r0x0034eee3:
  local_f0._1_3_ = (undefined3)(uVar5 >> 8);
  if (cVar6 == '\0') {
    local_fc = 0xa00;
    if (*(char *)((long)param_2 + 0x371) != '\0') {
      local_fc = 0xa01;
      local_f0 = CONCAT31(local_f0._1_3_,1);
      uVar5 = local_f0;
    }
    local_f0 = uVar5;
    uVar5 = local_f0;
    if (*(char *)((long)param_2 + 0x387) != '\0') {
      local_fc = 0;
    }
  }
  else {
    local_f8 = CONCAT13(*(undefined *)((long)param_2 + 0x37e),(undefined3)local_f8);
    if (*(char *)((long)param_2 + 0x371) != '\0') {
      local_f0 = CONCAT31(local_f0._1_3_,1);
      local_fc = CONCAT11(local_fc._1_1_,2);
      uVar5 = local_f0;
    }
  }
  local_f0 = uVar5;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    iVar3 = *param_2;
  }
  else {
    local_110 = *(undefined8 *)(param_2 + 0x16);
    iVar3 = *param_2;
  }
  if (iVar3 == 1) {
    local_108 = *(undefined8 *)(param_2 + 2);
    cVar6 = _ZN2rg5flags6hiargs15BinaryDetection7is_none17hebe1986f036d3105E(param_2 + 0xc6);
  }
  else {
    cVar6 = _ZN2rg5flags6hiargs15BinaryDetection7is_none17hebe1986f036d3105E(param_2 + 0xc6);
  }
  if (cVar6 == '\0') {
    local_fa = 1;
  }
  _ZN10grep_regex7matcher19RegexMatcherBuilder10build_many17hdebacf7a69444a96E
            (&local_c0,&local_110,*(undefined8 *)(param_2 + 0x5e),*(undefined8 *)(param_2 + 0x60));
  if (local_60._3_1_ != '\x02') {
    param_1[0xc] = CONCAT44(uStack_5c,local_60);
    param_1[10] = local_70;
    param_1[0xb] = uStack_68;
    param_1[8] = local_80;
    param_1[9] = uStack_78;
    param_1[6] = local_90;
    param_1[7] = uStack_88;
    param_1[4] = local_a0;
    param_1[5] = uStack_98;
    param_1[2] = CONCAT44(uStack_ac,local_b0);
    param_1[3] = CONCAT44(uStack_a4,uStack_a8);
    *param_1 = CONCAT44(uStack_bc,local_c0);
    param_1[1] = CONCAT44(uStack_b4,uStack_b8);
    return;
  }
  local_d8 = local_b0;
  uStack_d4 = uStack_ac;
  uStack_d0 = uStack_a8;
  uStack_cc = uStack_a4;
  local_e8 = local_c0;
  uStack_e4 = uStack_bc;
  uStack_e0 = uStack_b8;
  uStack_dc = uStack_b4;
                    /* try { // try from 0034ef81 to 0034efc9 has its CatchHandler @ 0034f070 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h373d913ec849885cE
            (local_28,&local_e8);
  _ZN2rg5flags6hiargs17suggest_multiline17h877188e632fbc6aaE(local_40,local_28);
  _ZN2rg5flags6hiargs12suggest_text17heed0f2133eb3442fE(local_58,local_40);
  uVar7 = _ZN6anyhow4kind5Adhoc3new17h108351ff8f5d4b99E(local_58);
  *param_1 = uVar7;
  *(undefined *)((long)param_1 + 99) = 2;
  _ZN4core3ptr45drop_in_place_LT_grep_regex__error__Error_GT_17h00eb35c315f69d1bE(&local_e8);
  return;
}