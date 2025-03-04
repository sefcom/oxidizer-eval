void _ZN5uu_cp7copydir9build_dir17h8f7105fdecd19cc9E
               (undefined8 *param_1,char param_2,char param_3,undefined8 param_4,undefined param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_20;
  undefined local_1c;
  
  uVar1 = 0x12;
  if (param_3 == '\0') {
    uVar1 = 0;
  }
  uVar4 = 0x3f;
  if (param_2 == '\0') {
    uVar4 = uVar1;
  }
  local_1c = param_5;
  uVar1 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
  local_20 = (uVar1 & 0x1ff | uVar4) ^ 0x1ff;
  lVar2 = _ZN3std2fs10DirBuilder6create17hd1163c4ef941f4c8E(&local_20,param_4);
  if (lVar2 == 0) {
    uVar3 = 0xd;
  }
  else {
    param_1[1] = lVar2;
    uVar3 = 2;
  }
  *param_1 = uVar3;
  return;
}