float _ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                (float param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)param_3 * DAT_001ec2f4;
  fVar3 = param_1 - fVar4;
  iVar2 = (int)fVar3;
  if (DAT_001edecc < fVar3) {
    iVar2 = 0x7fffffff;
  }
  if (NAN(fVar3)) {
    iVar2 = 0;
  }
  iVar1 = _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar2,0);
  fVar4 = fVar4 + param_1;
  iVar2 = (int)fVar4;
  if (DAT_001edecc < fVar4) {
    iVar2 = 0x7fffffff;
  }
  if (NAN(fVar4)) {
    iVar2 = 0;
  }
  _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar2,param_2);
  return (float)iVar1;
}