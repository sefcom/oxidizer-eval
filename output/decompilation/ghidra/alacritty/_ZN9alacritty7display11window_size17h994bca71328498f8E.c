ulong _ZN9alacritty7display11window_size17h994bca71328498f8E
                (float param_1,float param_2,float param_3,ushort param_4,ushort param_5,
                undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  puVar1 = PTR_floorf_009dfe38;
  uVar5 = (*(code *)PTR_floorf_009dfe38)((float)param_4 * param_3);
  uVar6 = (*(code *)puVar1)((float)param_5 * param_3);
  uVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(param_6,2);
  uVar4 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(param_7,1);
  puVar2 = PTR_fmaf_009dfe90;
  (*(code *)PTR_fmaf_009dfe90)(uVar5,_s__001ec4b0,param_1 * (float)uVar3);
  fVar7 = (float)(*(code *)puVar1)();
  (*(code *)puVar2)(uVar6,_s__001ec4b0,param_2 * (float)uVar4);
  (*(code *)puVar1)();
  uVar3 = (long)fVar7 & 0xffffffff;
  if (fVar7 < 0.0) {
    uVar3 = 0;
  }
  if (DAT_001edbc8 < fVar7) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}