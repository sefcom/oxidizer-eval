undefined  [16]
_ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17ha42b5e61fec17468E
          (undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined auVar10 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  undefined *local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0027d848)
            (&local_c8,param_3,param_4);
  uVar1 = local_b8;
  uVar4 = uStack_c0;
                    /* try { // try from 001a2f20 to 001a30ef has its CatchHandler @ 001a3134 */
  cVar2 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_0027d860)(uStack_c0,local_b8);
  if (cVar2 == '\0') {
LAB_001a3070:
    ppuVar5 = (undefined8 **)local_b8;
    uVar4 = uStack_c0;
    cVar2 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0027d838)
                      (uStack_c0,local_b8);
    if (cVar2 == '\0') {
      _ZN3std2fs12canonicalize17h51813c249f73b0e1E(&local_a8,uVar4,ppuVar5);
      ppuVar5 = local_98;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_c8,uVar4);
      local_c8 = local_a8;
      uStack_c0 = uStack_a0;
      local_b8 = ppuVar5;
      uVar4 = uStack_a0;
    }
    lVar3 = _ZN7uu_tail6follow5watch9WatcherRx5watch17h0f775d7b205c66a4E
                      (param_1,param_2,uVar4,ppuVar5);
    if (lVar3 == 0) {
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_c8,uVar4);
      lVar3 = 0;
      goto LAB_001a311c;
    }
  }
  else {
    auVar10 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_0027d868)(uVar4,uVar1);
    lVar3 = auVar10._0_8_;
    if (lVar3 != 0) {
      cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0027d870)
                        (lVar3,auVar10._8_8_);
      if (cVar2 == '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
                  (&local_a8,&DAT_00124c62,1);
        local_68 = local_98;
        local_78 = local_a8;
        uStack_70 = uStack_a0;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_c8,uVar4);
        local_b8 = local_68;
        uVar6 = (undefined4)local_78;
        uVar7 = local_78._4_4_;
        uVar8 = (undefined4)uStack_70;
        uVar9 = uStack_70._4_4_;
      }
      else {
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0027d848)
                  (&local_a8,lVar3,auVar10._8_8_);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_c8,uVar4);
        local_b8 = local_98;
        uVar6 = (undefined4)local_a8;
        uVar7 = local_a8._4_4_;
        uVar8 = (undefined4)uStack_a0;
        uVar9 = uStack_a0._4_4_;
      }
      local_c8 = CONCAT44(uVar7,uVar6);
      uStack_c0 = CONCAT44(uVar9,uVar8);
      goto LAB_001a3070;
    }
    local_78 = uVar4;
    uStack_70 = uVar1;
    local_58 = &local_78;
    local_50 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0027d878
    ;
    local_a8 = &PTR_DAT_00273490;
    uStack_a0 = 1;
    local_88 = 0;
    local_98 = &local_58;
    local_90 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h0ad4dbebb1db8692E(local_48,&local_a8);
    local_90 = CONCAT44(local_90._4_4_,1);
    local_98 = (undefined8 **)local_38;
    lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb525c77ba03b79d9E(&local_a8);
  }
  param_1 = &
            PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
  ;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_c8,uVar4);
LAB_001a311c:
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = lVar3;
  return auVar10;
}