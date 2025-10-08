void _ZN12forc_publish7tarball26copy_project_excluding_out17h7ab1230d4db057ebE
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_138 = param_2;
  local_130 = param_3;
  (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_01049948)(&local_e0);
  local_150 = local_e0;
  local_148 = local_d8;
  local_140 = local_d0;
                    /* try { // try from 00765095 to 007650a3 has its CatchHandler @ 007652ab */
  _ZN7walkdir7WalkDir3new17h9fc4aa02550a4930E(&local_128,&local_150);
  local_50 = local_f0;
  uStack_48 = uStack_e8;
  local_60 = local_100;
  uStack_58 = uStack_f8;
  local_70 = local_110;
  uStack_68 = uStack_108;
  local_88 = local_128;
  uStack_80 = uStack_120;
  local_78 = local_118;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 8;
  local_90 = 0;
  local_40 = 0;
  uStack_38 = 0;
  do {
                    /* try { // try from 0076516a to 00765176 has its CatchHandler @ 007652c4 */
    _ZN4core4iter6traits8iterator8Iterator8try_fold17ha7bfd4204b6c54f5E(&local_128,&local_e0);
    uVar3 = local_118;
    uVar2 = uStack_120;
    lVar1 = local_128;
    if (local_128 == -0x8000000000000000) {
      _ZN4core3ptr88drop_in_place_LT_core__ops__control_flow__ControlFlow_LT_walkdir__dent__DirEntry_GT__GT_17h93166211b1d79aa4E
                (0x8000000000000000,uStack_120);
                    /* try { // try from 0076525b to 00765289 has its CatchHandler @ 007652ab */
      _ZN4core3ptr170drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_walkdir__IntoIter_C_forc_publish__tarball__copy_project_excluding_out___u7b__u7b_closure_u7d__u7d__GT__GT_17had03b843b76a5de4E
                (&local_e0);
      *param_1 = 0xe;
LAB_0076528a:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(local_150,local_148)
      ;
      return;
    }
                    /* try { // try from 00765199 to 007651de has its CatchHandler @ 007652c9 */
    auVar6 = _ZN3std4path4Path12strip_prefix17h5e3823b49bb98f53E(uStack_120,local_118,&local_150);
    lVar5 = auVar6._0_8_;
    if (lVar5 == 0) {
      *param_1 = 5;
LAB_00765275:
      _ZN4core3ptr38drop_in_place_LT_walkdir__Ancestor_GT_17hbf3667f8d4e981a2E(lVar1,uVar2);
      _ZN4core3ptr170drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_walkdir__IntoIter_C_forc_publish__tarball__copy_project_excluding_out___u7b__u7b_closure_u7d__u7d__GT__GT_17had03b843b76a5de4E
                (&local_e0);
      goto LAB_0076528a;
    }
    cVar4 = _ZN3std4path4Path11starts_with17hfadacbc7cd2b7c05E(lVar5,auVar6._8_8_);
    if (cVar4 == '\0') {
      _ZN3std4path4Path4join17h3d685c86d6c853ecE(&local_128,local_138,local_130,lVar5,auVar6._8_8_);
                    /* try { // try from 007651df to 00765223 has its CatchHandler @ 007652b0 */
      cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_01049960)(uVar2,uVar3);
      if (cVar4 == '\0') {
        auVar6 = _ZN3std2fs4copy17hfac5bbf58e1b7ca6E(uVar2,uVar3,&local_128);
        lVar5 = auVar6._8_8_;
        if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00765150;
      }
      else {
        lVar5 = _ZN3std2fs14create_dir_all17hc82fc0e4ca47e48cE(&local_128);
        if (lVar5 == 0) {
LAB_00765150:
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
                    (local_128,uStack_120);
          goto LAB_0076515f;
        }
      }
      *param_1 = 0;
      *(long *)(param_1 + 8) = lVar5;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
                (local_128,uStack_120);
      goto LAB_00765275;
    }
LAB_0076515f:
    _ZN4core3ptr38drop_in_place_LT_walkdir__Ancestor_GT_17hbf3667f8d4e981a2E(lVar1,uVar2);
  } while( true );
}