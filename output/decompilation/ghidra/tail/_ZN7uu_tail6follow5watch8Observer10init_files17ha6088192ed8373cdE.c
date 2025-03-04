undefined  [16]
_ZN7uu_tail6follow5watch8Observer10init_files17ha6088192ed8373cdE
          (int *param_1,long param_2,long param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int *unaff_R14;
  undefined auVar6 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*param_1 == 3) {
LAB_00205a16:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = unaff_R14;
    return auVar1 << 0x40;
  }
  local_50 = param_3 * 0x30 + param_2;
  local_78 = param_1 + 8;
  local_58 = param_2;
LAB_00205a90:
  do {
    lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37bf687fdcd4f7caE
                      (&local_58);
    unaff_R14 = param_1;
    if (lVar4 == 0) goto LAB_00205a16;
    if (*(long *)(lVar4 + 0x18) != -0x8000000000000000) {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0bc823050694df3dE
                (&local_98,lVar4 + 0x18);
      local_a8 = local_88;
      local_b8 = local_98;
      uStack_b4 = uStack_94;
      uStack_b0 = uStack_90;
      uStack_ac = uStack_8c;
                    /* try { // try from 00205ace to 00205adc has its CatchHandler @ 00205c14 */
      cVar3 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E(CONCAT44(uStack_8c,uStack_90));
      if (cVar3 == '\0') {
        _ZN3std3env11current_dir17h8e5fbaefdf378c8cE(&local_98);
        uVar2 = local_88;
        lVar4 = CONCAT44(uStack_94,local_98);
        uVar5 = CONCAT44(uStack_8c,uStack_90);
        if (lVar4 == -0x8000000000000000) {
                    /* try { // try from 00205bd1 to 00205bd9 has its CatchHandler @ 00205c03 */
          auVar6 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                             (uVar5);
          goto LAB_00205be0;
        }
        local_60 = local_88;
        local_88 = local_a8;
        local_98 = local_b8;
        uStack_94 = uStack_b4;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
                    /* try { // try from 00205b17 to 00205b23 has its CatchHandler @ 00205c05 */
        local_70 = lVar4;
        local_68 = uVar5;
        _ZN3std4path4Path4join17h568adc6ac393441eE(&local_48,uVar5,uVar2,&local_98);
        local_b8 = local_48;
        uStack_b4 = uStack_44;
        uStack_b0 = uStack_40;
        uStack_ac = uStack_3c;
        local_a8 = local_38;
                    /* try { // try from 00205b3a to 00205bbb has its CatchHandler @ 00205c14 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_70);
      }
      cVar3 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_11is_tailable17hfd31d73cfedfa97dE
                        (CONCAT44(uStack_ac,uStack_b0),local_a8);
      if (cVar3 == '\0') {
        cVar3 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_9is_orphan17h65c9528458cf452dE
                          (CONCAT44(uStack_ac,uStack_b0),local_a8);
        if (cVar3 != '\0') {
          local_88 = local_a8;
          local_98 = local_b8;
          uStack_94 = uStack_b4;
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h1444e8e90e3da7b6E(local_78,&local_98);
          goto LAB_00205a90;
        }
        auVar6 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE
                           (CONCAT44(uStack_ac,uStack_b0),local_a8);
        if (auVar6._0_8_ == 0) {
                    /* try { // try from 00205bf6 to 00205c02 has its CatchHandler @ 00205c03 */
          uVar5 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002bbf20);
                    /* catch() { ... } // from try @ 00205bd1 with catch @ 00205c03
                       catch() { ... } // from try @ 00205bf6 with catch @ 00205c03 */
                    /* catch() { ... } // from try @ 00205ace with catch @ 00205c14
                       catch() { ... } // from try @ 00205b3a with catch @ 00205c14 */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
          auVar6 = _Unwind_Resume(uVar5);
          return auVar6;
        }
        lVar4 = _ZN7uu_tail6follow5watch9WatcherRx5watch17h12bff18e757f3bf5E
                          (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),auVar6._0_8_,
                           auVar6._8_8_);
        if (lVar4 != 0) {
          auVar6._8_8_ = &
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he6319248e6802a40E_002bbdb0
          ;
          auVar6._0_8_ = lVar4;
          goto LAB_00205be0;
        }
      }
      else {
        auVar6 = _ZN7uu_tail6follow5watch9WatcherRx17watch_with_parent17h1fadf41504d6de8eE
                           (*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6));
        if (auVar6._0_8_ != 0) {
LAB_00205be0:
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
          return auVar6;
        }
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_b8);
    }
  } while( true );
}