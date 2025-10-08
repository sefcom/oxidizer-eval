void _ZN4just6search6Search21global_justfile_paths17hd43d3a4a486b84b5E(undefined8 *param_1)

{
  undefined auVar1 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_c0 = 0;
  uStack_b8 = 8;
  local_b0 = 0;
  local_50 = param_1;
                    /* try { // try from 00387e64 to 00387e6c has its CatchHandler @ 00388086 */
  (*(code *)PTR__ZN4dirs10config_dir17h4d6c94d6b0a70841E_00566b30)(&local_d8);
                    /* try { // try from 00387e7f to 00387ed4 has its CatchHandler @ 0038807e */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E
            (&local_78,CONCAT44(uStack_cc,uStack_d0),local_c8,&DAT_00166c50,4);
  local_98 = (undefined *)local_68;
  puStack_90 = &DAT_00169778;
  local_88 = 8;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf9976eaa6275e613E
            (&local_c0,&local_a8,&PTR_s_src_search_rs_00530d68);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_d8);
                    /* try { // try from 00387edd to 00387eea has its CatchHandler @ 00388086 */
  (*(code *)PTR__ZN4dirs8home_dir17h56798f98581d6ac2E_00566ab8)(&local_48);
  if (local_48 != -0x8000000000000000) {
                    /* try { // try from 00387f13 to 00387f2f has its CatchHandler @ 0038806d */
    _ZN3std4path4Path4join17h1eac0ae5e7efa361E(&local_78,local_40,local_38,".config",7);
                    /* try { // try from 00387f3a to 00387f8c has its CatchHandler @ 0038806f */
    _ZN3std4path4Path4join17h1eac0ae5e7efa361E
              (&local_d8,CONCAT44(uStack_6c,uStack_70),local_68,&DAT_00166c50,4);
    local_98 = (undefined *)local_c8;
    puStack_90 = &DAT_00169778;
    local_88 = 8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf9976eaa6275e613E
              (&local_c0,&local_a8,&PTR_s_src_search_rs_00530d80);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_78);
    local_a8 = 0;
    uStack_a0 = 2;
    local_98 = PTR_DAT_0052e5b0;
    puStack_90 = (undefined *)_UNK_0052e5b8;
    local_88 = CONCAT44(PTR_DAT_0052e5c0._4_4_,PTR_DAT_0052e5c0._0_4_);
    uStack_80 = _UNK_0052e5c8;
    uStack_7c = _UNK_0052e5cc;
    auVar1 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17he3a8d094ac8fb9abE
                       (&local_a8);
    if (auVar1._0_8_ != 0) {
      do {
                    /* try { // try from 00387fe0 to 00388021 has its CatchHandler @ 0038809b */
        _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
                  (&local_d8,local_40,local_38);
        local_68 = local_c8;
        local_78 = local_d8;
        uStack_74 = uStack_d4;
        uStack_70 = uStack_d0;
        uStack_6c = uStack_cc;
        local_60 = auVar1;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf9976eaa6275e613E
                  (&local_c0,&local_78,&PTR_s_src_search_rs_00530d98);
        auVar1 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17he3a8d094ac8fb9abE
                           (&local_a8);
      } while (auVar1._0_8_ != 0);
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_48);
  }
  local_50[2] = local_b0;
  *local_50 = local_c0;
  local_50[1] = uStack_b8;
  return;
}