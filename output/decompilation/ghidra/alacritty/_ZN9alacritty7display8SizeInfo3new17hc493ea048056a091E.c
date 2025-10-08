void _ZN9alacritty7display8SizeInfo3new17hc493ea048056a091E
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               undefined8 *param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_38;
  
  puVar1 = PTR_floorf_009dfe38;
  local_38 = param_5;
  if (param_8 != 0) {
    local_38 = (float)(*(code *)PTR_floorf_009dfe38)(param_5);
    puVar2 = PTR_fmodf_009dfe40;
    fVar6 = (float)(*(code *)PTR_fmodf_009dfe40)(param_1 - (local_38 + local_38),param_3);
    local_38 = fVar6 * DAT_001ec2f4 + local_38;
    param_6 = (float)(*(code *)puVar1)(param_6);
    fVar6 = (float)(*(code *)puVar2)(param_2 - (param_6 + param_6),param_4);
    param_6 = fVar6 * DAT_001ec2f4 + param_6;
  }
  fVar6 = (param_2 - (param_6 + param_6)) / param_4;
  uVar5 = (long)(fVar6 - DAT_001ec664) & (long)fVar6 >> 0x3f | (long)fVar6;
  if (fVar6 < 0.0) {
    uVar5 = 0;
  }
  if (DAT_001ec668 < fVar6) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uVar5,1);
  fVar6 = (param_1 - (local_38 + local_38)) / param_3;
  uVar5 = (long)(fVar6 - DAT_001ec664) & (long)fVar6 >> 0x3f | (long)fVar6;
  if (fVar6 < DAT_001eb5d4) {
    uVar5 = 0;
  }
  if (DAT_001ec668 < fVar6) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar4 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(uVar5,2);
  puVar1 = PTR_floorf_009dfe38;
  uVar7 = (*(code *)PTR_floorf_009dfe38)(local_38);
  uVar8 = (*(code *)puVar1)(param_6);
  *(float *)(param_7 + 2) = param_1;
  *(float *)((long)param_7 + 0x14) = param_2;
  *(float *)(param_7 + 3) = param_3;
  *(float *)((long)param_7 + 0x1c) = param_4;
  *(undefined4 *)(param_7 + 4) = uVar7;
  *(undefined4 *)((long)param_7 + 0x24) = uVar8;
  *param_7 = uVar3;
  param_7[1] = uVar4;
  return;
}