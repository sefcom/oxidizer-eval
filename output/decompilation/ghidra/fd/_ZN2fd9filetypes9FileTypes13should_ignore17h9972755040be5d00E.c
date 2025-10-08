ulong _ZN2fd9filetypes9FileTypes13should_ignore17h9972755040be5d00E
                (char *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined auVar5 [16];
  undefined auVar6 [12];
  
  auVar6 = _ZN2fd9dir_entry8DirEntry9file_type17ha8777f9a24494ad2E(param_2);
  uVar3 = auVar6._8_4_;
  uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (((((((auVar6 & (undefined  [12])0x1) != (undefined  [12])0x0) &&
         ((uVar2 = uVar3 & 0xf000, uVar2 != 0x8000 || (*param_1 != '\0')))) &&
        ((uVar2 != 0x4000 || (param_1[1] != '\0')))) &&
       ((((uVar2 != 0xa000 || (param_1[2] != '\0')) && ((uVar2 != 0x6000 || (param_1[3] != '\0'))))
        && ((uVar2 != 0x2000 || (param_1[4] != '\0')))))) &&
      ((uVar2 != 0xc000 || (param_1[5] != '\0')))) && ((uVar2 != 0x1000 || (param_1[6] != '\0')))) {
    if (param_1[7] != '\0') {
      auVar5 = _ZN2fd9dir_entry8DirEntry4path17h16a39562ed47efc5E(param_2);
      cVar1 = _ZN7faccess7PathExt10executable17hc6a3f3fddf09c694E(auVar5._0_8_,auVar5._8_8_);
      if (cVar1 == '\0') goto LAB_002f4475;
    }
    if (param_1[8] != '\0') {
      cVar1 = _ZN2fd10filesystem8is_empty17hcba4d2bbc1884a13E(param_2);
      if (cVar1 == '\0') goto LAB_002f4475;
    }
    if ((uVar3 & 0xd000) == 0x8000) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)(0xfa9e >> (sbyte)((uVar3 + 0x4000 & 0xffff) >> 0xc));
    }
  }
LAB_002f4475:
  return uVar4 & 0xffffff01;
}