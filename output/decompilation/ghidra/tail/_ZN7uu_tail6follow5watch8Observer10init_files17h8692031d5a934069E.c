undefined  [16]
_ZN7uu_tail6follow5watch8Observer10init_files17h8692031d5a934069E
          (int *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  int *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((*param_1 == 3) || (param_3 == 0)) {
    local_80 = 0;
  }
  else {
    local_58 = param_1 + 8;
    local_80 = 0;
    local_60 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h92141829766abf5aE_00272f18
    ;
    lVar6 = param_2 + 0x30;
    lVar5 = param_2;
    while (lVar4 = lVar6, *(long *)(lVar5 + 0x18) == -0x8000000000000000) {
LAB_001a3e0f:
      if ((lVar4 == param_3 * 0x30 + param_2) || (lVar6 = lVar4 + 0x30, lVar5 = lVar4, lVar4 == 0))
      goto LAB_001a3e33;
    }
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf90a2ac3df31af12E
              (&local_78,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28));
    uVar8 = local_68;
    uVar7 = local_70;
    lVar6 = local_78;
                    /* try { // try from 001a3ccb to 001a3ce9 has its CatchHandler @ 001a3e97 */
    cVar3 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0027d838)
                      (local_70,local_68);
    if (cVar3 == '\0') {
      (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_0027d880)(&local_78);
      uVar2 = local_70;
      lVar5 = local_78;
      if (local_78 != -0x8000000000000000) {
                    /* try { // try from 001a3d27 to 001a3d38 has its CatchHandler @ 001a3e81 */
        local_78 = lVar6;
        local_70 = uVar7;
        _ZN3std4path4Path4join17h1c57b3f402244323E(&local_48,uVar2,local_68,&local_78);
        local_68 = uVar8;
        uVar8 = local_38;
        lVar6 = local_48;
        local_50 = local_40;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(lVar5,uVar2);
        uVar7 = local_50;
        goto LAB_001a3d66;
      }
                    /* try { // try from 001a3e4c to 001a3e7e has its CatchHandler @ 001a3e99 */
      auVar9 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
               )(local_70);
    }
    else {
LAB_001a3d66:
                    /* try { // try from 001a3d66 to 001a3dab has its CatchHandler @ 001a3e97 */
      cVar3 = (*(code *)
                PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_11is_tailable17h8ddebe59fac1e02eE_0027d850
              )(uVar7,uVar8);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)
                  PTR__ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_9is_orphan17h6fd6d482b353a62dE_0027d890
                )(uVar7,uVar8);
        if (cVar3 != '\0') {
          local_78 = lVar6;
          local_70 = uVar7;
          local_68 = uVar8;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcd2b65ebabcd2f96E
                    (local_58,&local_78,&PTR_DAT_00273598);
          goto LAB_001a3e0f;
        }
                    /* try { // try from 001a3dd7 to 001a3dfe has its CatchHandler @ 001a3e97 */
        auVar9 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_0027d868)(uVar7,uVar8);
        if (auVar9._0_8_ == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
                    (&PTR_DAT_00273580);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar5 = _ZN7uu_tail6follow5watch9WatcherRx5watch17h0f775d7b205c66a4E
                          (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),auVar9._0_8_,
                           auVar9._8_8_);
        auVar9._8_8_ = local_60;
        auVar9._0_8_ = lVar5;
      }
      else {
        auVar9 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17ha42b5e61fec17468E
                           (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),uVar7,uVar8);
        lVar5 = auVar9._0_8_;
      }
      if (lVar5 == 0) {
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(lVar6,uVar7);
        goto LAB_001a3e0f;
      }
    }
    local_60 = auVar9._8_8_;
    local_80 = auVar9._0_8_;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(lVar6,uVar7);
  }
LAB_001a3e33:
  auVar10._8_8_ = local_60;
  auVar10._0_8_ = local_80;
  return auVar10;
}