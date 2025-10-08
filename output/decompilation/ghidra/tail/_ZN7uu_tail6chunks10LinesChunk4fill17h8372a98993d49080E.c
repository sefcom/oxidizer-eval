void _ZN7uu_tail6chunks10LinesChunk4fill17h8372a98993d49080E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int local_40 [2];
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN7uu_tail6chunks10BytesChunk4fill17h59bd7f494a242c6cE(local_40);
  if (local_40[0] == 1) {
    param_1[1] = CONCAT44(uStack_34,local_38);
    param_1[2] = CONCAT44(uStack_2c,uStack_30);
    uVar1 = 1;
  }
  else {
    if (local_38 == 1) {
      local_28 = local_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      uVar1 = (*(code *)PTR__ZN7uu_tail6chunks10LinesChunk11count_lines17h5dbe30604f66562bE_0027d810
              )(param_2);
      *(undefined8 *)(param_2 + 0x2008) = uVar1;
      param_1[1] = CONCAT44(uStack_24,local_28);
      param_1[2] = CONCAT44(uStack_1c,uStack_20);
    }
    else {
      *(undefined8 *)(param_2 + 0x2008) = 0;
      param_1[1] = 0;
    }
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}