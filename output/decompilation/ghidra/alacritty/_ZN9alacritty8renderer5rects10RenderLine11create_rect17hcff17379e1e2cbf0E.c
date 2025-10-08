void _ZN9alacritty8renderer5rects10RenderLine11create_rect17hcff17379e1e2cbf0E
               (float param_1,float param_2,float param_3,undefined8 *param_4,long param_5,
               ulong param_6,ulong param_7,long param_8,undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 <= DAT_001eb5d0) {
    param_3 = DAT_001eb5d0;
  }
  fVar1 = *(float *)(param_5 + 0x18);
  fVar3 = ((float)param_6 + DAT_001eb5d0) * *(float *)(param_5 + 0x1c);
  fVar2 = (float)(*(code *)PTR_roundf_009dfde8)
                           (DAT_001ec66c * param_3 + ((param_1 + fVar3) - param_2));
  fVar3 = fVar3 - param_3;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  fVar2 = fVar1 * (float)param_7;
  *param_4 = CONCAT44(fVar3 + (float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20),
                      fVar2 + (float)*(undefined8 *)(param_5 + 0x20));
  *(float *)(param_4 + 1) = (float)(param_8 + 1) * fVar1 - fVar2;
  *(float *)((long)param_4 + 0xc) = param_3;
  *(char *)((long)param_4 + 0x16) = (char)((uint)param_9 >> 0x10);
  *(short *)((long)param_4 + 0x14) = (short)param_9;
  *(undefined4 *)(param_4 + 2) = 0x3f800000;
  *(undefined *)((long)param_4 + 0x17) = 0;
  return;
}