void _ZN9alacritty7display7Display13request_frame17h50f3eaa34af0ccb9E
               (long param_1,undefined8 param_2)

{
  double dVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined local_e8 [192];
  
  *(undefined *)(param_1 + 0x410) = 0;
  _ZN9alacritty7display6window6Window15current_monitor17ha6a20112880c3114E
            (&local_210,*(undefined8 *)(param_1 + 0x340),*(undefined8 *)(param_1 + 0x348));
  dVar1 = _DAT_001ea168;
  if (CONCAT44(uStack_20c,local_210) != -0x7fffffffffffffff) {
    local_128 = local_1a0;
    local_138 = local_1b0;
    uStack_130 = uStack_1a8;
    local_148 = local_1c0;
    uStack_140 = uStack_1b8;
    local_158 = local_1d0;
    uStack_150 = uStack_1c8;
    local_168 = local_1e0;
    uStack_164 = uStack_1dc;
    uStack_160 = uStack_1d8;
    uStack_15c = uStack_1d4;
    local_178 = local_1f0;
    uStack_174 = uStack_1ec;
    uStack_170 = uStack_1e8;
    uStack_16c = uStack_1e4;
    local_188 = local_200;
    uStack_184 = uStack_1fc;
    uStack_180 = uStack_1f8;
    uStack_17c = uStack_1f4;
    uStack_190 = uStack_208;
    uStack_18c = uStack_204;
    auVar5 = _ZN9alacritty7display7Display13request_frame28__u7b__u7b_closure_u7d__u7d_17h3c37ceebc40a2dbdE
                       (&local_198);
    dVar1 = _DAT_001ea168;
    if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      dVar1 = (double)(auVar5._8_8_ & 0xffffffff);
    }
  }
  dVar1 = (_s__001ead48 / dVar1) * _s__001eae40;
  uVar2 = 0;
  if (0.0 <= dVar1) {
    uVar2 = (long)(dVar1 - DAT_001ea6a0) & (long)dVar1 >> 0x3f | (long)dVar1;
  }
  uVar4 = 0xffffffffffffffff;
  if (dVar1 <= DAT_001e9f78) {
    uVar4 = uVar2;
  }
  auVar5 = _ZN9alacritty7display10FrameTimer15compute_timeout17hd003256b07b45f79E
                     (param_1 + 0x5c8,uVar4 / 1000000,
                      ((int)uVar4 + (int)(uVar4 / 1000000) * -1000000) * 1000);
  uVar3 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(param_1 + 800);
  local_198 = 0x800000000000000a;
  _ZN9alacritty5event5Event3new17h74b0126f9adfc99eE(local_e8,&local_198,uVar3);
  _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
            (param_2,local_e8,auVar5._0_8_,auVar5._8_8_ & 0xffffffff,0,uVar3,4);
  return;
}