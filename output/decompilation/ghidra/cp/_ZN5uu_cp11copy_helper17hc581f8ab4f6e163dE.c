void _ZN5uu_cp11copy_helper17hc581f8ab4f6e163dE
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               long param_6,undefined8 param_7,undefined8 param_8,char param_9,char param_10,
               undefined8 param_11,undefined param_12)

{
  undefined auVar1 [16];
  char cVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined2 local_74;
  undefined local_72;
  undefined8 local_70;
  long local_68;
  undefined2 uStack_60;
  undefined uStack_5e;
  undefined5 uStack_5d;
  undefined3 local_58;
  undefined5 uStack_55;
  undefined3 uStack_50;
  undefined5 uStack_4d;
  undefined3 local_48;
  undefined5 uStack_45;
  undefined3 uStack_40;
  undefined5 uStack_3d;
  long local_38;
  
  auVar1._8_8_ = param_5;
  auVar1._0_8_ = param_4;
  lVar4 = -0x7ffffffffffffff4;
  local_70 = param_3;
  if (*(char *)(param_6 + 0x5c) != '\0') {
    auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_002678a8)(param_4,param_5);
    if (auVar5._0_8_ == 0) {
      auVar5 = auVar1;
    }
    lVar3 = _ZN3std2fs14create_dir_all17h55eae5e2d660073fE(auVar5._0_8_,auVar5._8_8_);
    if (lVar3 != 0) {
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar3;
      return;
    }
  }
  if ((param_5 == 0) ||
     (((cVar2 = *(char *)(param_4 + -1 + param_5), cVar2 != '/' && (cVar2 != '\\')) ||
      (cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(param_4,param_5)
      , cVar2 != '\0')))) {
    if (((param_10 == '\0') || (*(char *)(param_6 + 0x5e) != '\x01')) ||
       (*(char *)(param_6 + 0x57) != '\0')) {
      if (param_9 == '\0') {
        _ZN5uu_cp8platform5linux13copy_on_write17h34431c68bfa64cd2E
                  (&local_68,param_2,local_70,param_4,param_5,*(undefined4 *)(param_6 + 100),
                   *(undefined *)(param_6 + 99),param_7,param_8,param_10,param_12);
        if (local_68 != -0x7ffffffffffffff4) {
          param_1[5] = CONCAT53(uStack_3d,uStack_40);
          param_1[6] = local_38;
          *(ulong *)((long)param_1 + 0x1b) = CONCAT35(local_48,uStack_4d);
          *(ulong *)((long)param_1 + 0x23) = CONCAT35(uStack_40,uStack_45);
          *(ulong *)((long)param_1 + 0xb) = CONCAT35(local_58,uStack_5d);
          *(ulong *)((long)param_1 + 0x13) = CONCAT35(uStack_50,uStack_55);
          *(undefined *)((long)param_1 + 10) = uStack_5e;
          *(undefined2 *)(param_1 + 1) = uStack_60;
          *param_1 = local_68;
          return;
        }
        local_74 = uStack_60;
        local_72 = uStack_5e;
        if ((*(char *)(param_6 + 0x56) == '\0') && (*(char *)(param_6 + 0x5f) != '\0')) {
          _ZN5uu_cp10show_debug17h47a442e1933f80eeE(&local_74);
        }
        goto LAB_001a51de;
      }
      _ZN5uu_cp9copy_link17h25042d5280b1628eE(&local_68,param_2,local_70,param_4,param_5,param_11);
    }
    else {
      _ZN5uu_cp9copy_fifo17he922d06a7cbac9e7E
                (&local_68,param_4,param_5,*(undefined4 *)(param_6 + 0x54),
                 *(undefined *)(param_6 + 0x5f));
    }
    if (local_68 != -0x7ffffffffffffff4) {
      param_1[6] = local_38;
      param_1[4] = CONCAT53(uStack_45,local_48);
      param_1[5] = CONCAT53(uStack_3d,uStack_40);
      param_1[2] = CONCAT53(uStack_55,local_58);
      param_1[3] = CONCAT53(uStack_4d,uStack_50);
      *param_1 = local_68;
      param_1[1] = CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
      return;
    }
  }
  else {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
              (param_1 + 1,param_4,param_5);
    lVar4 = -0x7ffffffffffffff5;
  }
LAB_001a51de:
  *param_1 = lVar4;
  return;
}