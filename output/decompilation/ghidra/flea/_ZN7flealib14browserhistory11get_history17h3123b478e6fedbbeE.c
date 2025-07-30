void _ZN7flealib14browserhistory11get_history17h3123b478e6fedbbeE
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_e8 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN8rusqlite10Connection15open_with_flags17hb7f432c017781faaE(&local_190);
  if ((local_190 & 1) == 0) {
    local_98 = local_138;
    uStack_94 = uStack_134;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    local_a8 = local_148;
    uStack_a4 = uStack_144;
    uStack_a0 = uStack_140;
    uStack_9c = uStack_13c;
    local_88 = (undefined4)uStack_188;
    uStack_84 = uStack_188._4_4_;
    uStack_80 = (undefined4)uStack_180;
    uStack_7c = uStack_180._4_4_;
    local_78 = local_178;
    uStack_74 = uStack_174;
    uStack_70 = uStack_170;
    uStack_6c = uStack_16c;
    local_68 = local_168;
    uStack_64 = uStack_164;
    uStack_60 = uStack_160;
    uStack_5c = uStack_15c;
    local_58 = local_158;
    uStack_54 = uStack_154;
    uStack_50 = uStack_150;
    uStack_4c = uStack_14c;
    local_48 = local_148;
    uStack_44 = uStack_144;
    uStack_40 = uStack_140;
    uStack_3c = uStack_13c;
    local_38 = local_138;
    uStack_34 = uStack_134;
    uStack_30 = uStack_130;
    uStack_2c = uStack_12c;
                    /* try { // try from 0049a133 to 0049a14a has its CatchHandler @ 0049a2e6 */
    _ZN8rusqlite10Connection18prepare_with_flags17h3f9d83aa8886ee5fE
              (&local_190,&local_88,param_4,param_5);
    local_128 = uStack_188;
    uVar1 = local_128;
    uStack_120 = uStack_180;
    uVar2 = uStack_120;
    local_128._0_4_ = (undefined4)uStack_188;
    local_128._4_4_ = (undefined4)(uStack_188 >> 0x20);
    uStack_120._0_4_ = (undefined4)uStack_180;
    uStack_120._4_4_ = (undefined4)(uStack_180 >> 0x20);
    local_128 = uVar1;
    uStack_120 = uVar2;
    if (local_190 == 0) {
      param_1[6] = CONCAT44(uStack_154,local_158);
      param_1[7] = CONCAT44(uStack_14c,uStack_150);
      param_1[4] = CONCAT44(uStack_164,local_168);
      param_1[5] = CONCAT44(uStack_15c,uStack_160);
      param_1[2] = CONCAT44(uStack_174,local_178);
      param_1[3] = CONCAT44(uStack_16c,uStack_170);
      *(undefined4 *)param_1 = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 4) = local_128._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_120._4_4_;
    }
    else {
      local_a8 = uStack_150;
      uStack_a4 = uStack_14c;
      local_e8[0] = local_190;
                    /* try { // try from 0049a1cf to 0049a1e0 has its CatchHandler @ 0049a2d4 */
      _ZN8rusqlite9statement9Statement9query_map17hc9c4ed965d83b976E(&local_190,local_e8);
      uVar2 = uStack_180;
      uVar1 = uStack_188;
      if (local_190 == 0x8000000000000012) {
        local_190 = 0;
        uStack_188 = 8;
        uStack_180 = 0;
                    /* try { // try from 0049a21a to 0049a223 has its CatchHandler @ 0049a2c5 */
        _ZN4core4iter6traits8iterator8Iterator4fold17hcd588a60c15920c0E(uVar1,uVar2,&local_190);
        param_1[3] = uStack_180;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_190;
        *(undefined4 *)((long)param_1 + 0xc) = local_190._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_188;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_188._4_4_;
        *param_1 = 0x8000000000000012;
                    /* try { // try from 0049a239 to 0049a2a8 has its CatchHandler @ 0049a2e6 */
        _ZN4core3ptr51drop_in_place_LT_rusqlite__statement__Statement_GT_17hb6df3ca1791e0b00E
                  (local_e8);
      }
      else {
        param_1[7] = CONCAT44(uStack_154,local_158);
        *(undefined4 *)(param_1 + 5) = local_168;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_164;
        *(undefined4 *)(param_1 + 6) = uStack_160;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_15c;
        *(undefined4 *)(param_1 + 3) = local_178;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_174;
        *(undefined4 *)(param_1 + 4) = uStack_170;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_16c;
        *param_1 = local_190;
        param_1[1] = uStack_188;
        param_1[2] = uStack_180;
        _ZN4core3ptr51drop_in_place_LT_rusqlite__statement__Statement_GT_17hb6df3ca1791e0b00E
                  (local_e8);
      }
    }
    _ZN4core3ptr41drop_in_place_LT_rusqlite__Connection_GT_17h10f01d85e30e267cE(&local_88);
  }
  else {
    param_1[6] = CONCAT44(uStack_154,local_158);
    param_1[7] = CONCAT44(uStack_14c,uStack_150);
    param_1[4] = CONCAT44(uStack_164,local_168);
    param_1[5] = CONCAT44(uStack_15c,uStack_160);
    param_1[2] = CONCAT44(uStack_174,local_178);
    param_1[3] = CONCAT44(uStack_16c,uStack_170);
    *param_1 = uStack_188;
    param_1[1] = uStack_180;
  }
  return;
}