long _ZN2fd6output11print_entry17hc890df4f63d95a00E
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_98;
  undefined8 local_90;
  undefined4 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *local_50;
  code *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if (*(char *)(param_3 + 0x1e8) == '\0') {
    bVar2 = false;
    iVar1 = *(int *)(param_3 + 0x30);
  }
  else {
    uVar3 = _ZN2fd9dir_entry8DirEntry4path17h16a39562ed47efc5E(param_2);
    _ZN2fd9hyperlink7PathUrl3new17hdbaee58768b6d289E(&local_40,uVar3);
    bVar2 = true;
    local_58 = local_30;
    local_68 = local_40;
    uStack_64 = uStack_3c;
    uStack_60 = uStack_38;
    uStack_5c = uStack_34;
    local_50 = &local_68;
    local_48 = 
    _ZN61__LT_fd__hyperlink__PathUrl_u20_as_u20_core__fmt__Display_GT_3fmt17h26ba7c628c69def1E;
    local_98 = &PTR_DAT_005024f0;
    local_90 = 2;
    uStack_78 = 0;
    local_88 = &local_50;
    local_80 = 1;
                    /* try { // try from 002f6952 to 002f695c has its CatchHandler @ 002f6a6b */
    lVar4 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_98);
    _ZN4core3ptr43drop_in_place_LT_fd__hyperlink__PathUrl_GT_17h2d976cf0ed371e6cE
              (CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
    if (lVar4 != 0) {
      return lVar4;
    }
    iVar1 = *(int *)(param_3 + 0x30);
  }
  if (iVar1 == 2) {
    lVar4 = _ZN2fd6output21print_entry_colorized17hba02dea0711b7802E
                      (param_1,param_2,param_3,param_3 + 200);
  }
  else {
    lVar4 = _ZN2fd6output18print_entry_format17h055b3d4dd7dc026aE
                      (param_1,param_2,param_3,param_3 + 0x30);
  }
  if (lVar4 == 0) {
    if (bVar2) {
      local_98 = &PTR_DAT_00502510;
      local_90 = 1;
      local_88 = (undefined4 **)0x8;
      local_80 = 0;
      uStack_78 = 0;
      lVar4 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_98);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
    if (*(char *)(param_3 + 0x1e2) == '\0') {
      local_98 = &PTR_s__00502530;
    }
    else {
      local_98 = &PTR_DAT_00502520;
    }
    local_90 = 1;
    local_88 = (undefined4 **)0x8;
    local_80 = 0;
    uStack_78 = 0;
    lVar4 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_98);
  }
  return lVar4;
}