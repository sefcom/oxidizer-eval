undefined8 *
_ZN5uu_du4Stat3new17hd07a900d361a9fcdE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined auVar7 [16];
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  uint local_158;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined local_e0 [176];
  
  uVar4 = *(ulong *)(param_5 + 0x18) ^ 0x8000000000000000;
  uVar3 = 1;
  if (uVar4 < 3) {
    uVar3 = uVar4;
  }
  if (uVar3 == 0) {
LAB_00196423:
    _ZN3std2fs8metadata17h856c52e7943c3d38E(&local_190,param_2,param_3);
  }
  else {
    if (uVar3 == 1) {
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      uVar1 = *(undefined8 *)(param_5 + 0x28);
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0024eb60
      )(&local_190,param_2,param_3);
                    /* try { // try from 00196400 to 0019640d has its CatchHandler @ 00196644 */
      cVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5291ddcb580e955fE
                        (&local_190,uVar5,uVar1);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hab61ff66151da0a3E(&local_190);
      if (cVar2 != '\0') goto LAB_00196423;
    }
    if (param_4 == 0) {
      _ZN3std2fs16symlink_metadata17h3ef288d09f993fadE(&local_190,param_2,param_3);
    }
    else {
      (*(code *)PTR__ZN3std2fs8DirEntry8metadata17h185bce2ef1f407a2E_0024eb68)(&local_190,param_4);
    }
  }
  if (local_190 == 2) {
    param_1[2] = uStack_188;
    param_1[1] = 0;
    *param_1 = 2;
  }
  else {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0024eb60)
              (&local_190,param_2,param_3);
                    /* try { // try from 001965a0 to 001965ac has its CatchHandler @ 00196646 */
    auVar7 = _ZN5uu_du9birth_u6417h1d347758d1f93929E(local_e0);
    bVar6 = (local_158 & 0xf000) == 0x4000;
    uVar5 = CONCAT44(uStack_13c,local_140);
    if (bVar6) {
      uVar5 = 0;
    }
    param_1[10] = local_180;
    param_1[8] = local_190;
    param_1[9] = uStack_188;
    param_1[1] = 0;
    *param_1 = 1;
    param_1[2] = CONCAT44(uStack_164,local_168);
    param_1[3] = 0;
    param_1[4] = local_170;
    *(undefined (*) [16])(param_1 + 6) = auVar7;
    param_1[0xb] = uVar5;
    param_1[0xc] = local_130;
    param_1[0xd] = 1;
    param_1[0xe] = CONCAT44(uStack_124,local_128);
    param_1[0xf] = local_118;
    *(bool *)(param_1 + 0x10) = bVar6;
  }
  return param_1;
}