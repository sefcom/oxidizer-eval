undefined **
_ZN5uu_cp19construct_dest_path17h35c9b894b22c07c1E
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,char param_6,byte param_7,byte param_8)

{
  undefined auVar1 [16];
  char cVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  long local_78;
  undefined **local_70;
  undefined8 *local_68;
  undefined8 **ppuStack_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  char local_36;
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  if (((param_7 & 1) != 0) &&
     (cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(param_4,param_5),
     cVar2 != '\0')) {
    local_a8 = 1;
    local_90 = 1;
    local_88 = &local_a8;
    puStack_80 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_70 = &PTR_s_cannot_overwrite_directory_with_n_0025eae8;
    local_68 = (undefined8 *)0x2;
    local_50 = 0;
    ppuStack_60 = &local_88;
    local_58 = 1;
    uStack_a0 = param_4;
    local_98 = param_5;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(param_1 + 1,&local_70);
    local_70 = (undefined **)0x8000000000000003;
    goto LAB_001a0df3;
  }
  if ((param_8 & 1) == 0) {
    if (param_6 != '\0') goto LAB_001a0d02;
    auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_002678a8)(param_2,param_3);
    if (auVar4._0_8_ == 0) {
      auVar4 = auVar1;
    }
LAB_001a0d5d:
    (*(code *)PTR__ZN5uu_cp18localize_to_target17hb1878d723015ce03E_00267c28)
              (&local_70,auVar4._0_8_,auVar4._8_8_,param_2,param_3,param_4,param_5);
    if (local_70 != (undefined **)0x800000000000000c) {
      param_1[6] = local_40;
      param_1[4] = local_50;
      param_1[5] = lStack_48;
      param_1[3] = local_58;
      param_1[1] = (long)local_68;
      param_1[2] = (long)ppuStack_60;
      goto LAB_001a0df3;
    }
    local_88 = local_68;
    puStack_80 = (undefined *)ppuStack_60;
    local_78 = local_58;
  }
  else {
    cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)(param_4,param_5);
    if (cVar2 == '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc9b93e2d5549764dE
                (param_1 + 1,"with --parents, the destination must be a directory",0x33);
      *param_1 = -0x7ffffffffffffffd;
      return (undefined **)param_1;
    }
    if (param_6 == '\0') {
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8)
                (&local_70,param_2,param_3);
      if (local_36 == '\0') {
        bVar3 = (byte)ppuStack_60 < 5;
        auVar4._9_7_ = 0;
        auVar4[8] = bVar3;
        auVar4._0_8_ = 1;
        if (bVar3) {
          auVar4._0_8_ = "/";
          auVar4._9_7_ = 0;
        }
      }
      else {
        auVar4._8_8_ = 1;
        auVar4._0_8_ = "/";
      }
      goto LAB_001a0d5d;
    }
LAB_001a0d02:
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
              (&local_88,param_4,param_5);
  }
  param_1[3] = local_78;
  param_1[1] = (long)local_88;
  param_1[2] = (long)puStack_80;
  local_70 = (undefined **)0x800000000000000c;
LAB_001a0df3:
  *param_1 = (long)local_70;
  return local_70;
}