void _ZN5uu_cp7copydir5Entry3new17h6fc819f4164af7eaE
               (undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 **local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar7 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h1e9ed5ccbb1261f3E
                     (param_3);
  (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
            (&local_48,auVar7._0_8_);
                    /* try { // try from 00198d73 to 00198d7f has its CatchHandler @ 00199037 */
  _ZN3std4path4Path4join17h29f8b868344b633cE
            (&local_80,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 00198da0 to 00198da9 has its CatchHandler @ 00199015 */
  _ZN5uu_cp7copydir24get_local_to_root_parent17hd5a1f49dc6bab1d8E
            (&local_c8,uStack_78,local_70,*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28));
  if (local_c8 == (undefined **)0x8000000000000000) {
    *param_1 = 0x8000000000000000;
LAB_00198dbe:
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_80);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_48);
  }
  else {
    local_d8 = local_b8;
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    if (param_4 == '\0') {
      lVar6 = *(long *)(param_2 + 0x38);
    }
    else {
                    /* try { // try from 00198df7 to 00198e32 has its CatchHandler @ 00199006 */
      cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00267ad0)
                        (auVar7._0_8_,auVar7._8_8_);
      lVar6 = *(long *)(param_2 + 0x38);
      if (lVar6 == 0) {
LAB_00198ec6:
        lVar5 = _ZN3std4path4Path12strip_prefix17hf232be0ca9110327E
                          (CONCAT44(uStack_dc,uStack_e0),local_d8,*(undefined8 *)(param_2 + 0x40),
                           *(undefined8 *)(param_2 + 0x48));
        if (lVar5 == 0) {
          *param_1 = 0x8000000000000000;
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_e8);
          goto LAB_00198dbe;
        }
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
                  (&local_c8,lVar5);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_e8);
        local_d8 = local_b8;
        local_e8 = (undefined4)local_c8;
        uStack_e4 = local_c8._4_4_;
        uStack_e0 = (undefined4)uStack_c0;
        uStack_dc = uStack_c0._4_4_;
      }
      else {
        cVar1 = *(char *)(*(long *)(param_2 + 0x30) + -1 + lVar6);
        if (cVar1 == '/') {
          if (cVar3 == '\0') goto LAB_00198ec6;
        }
        else if (cVar3 != '\x01' || cVar1 != '\\') goto LAB_00198ec6;
        local_50 = _ZN3std2fs14create_dir_all17h55eae5e2d660073fE(*(long *)(param_2 + 0x30),lVar6);
        if (local_50 == 0) {
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h6803c44012521573E
                    (&local_50);
        }
        else {
          local_68 = &local_f0;
          puStack_60 = 
          PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_002676e8
          ;
          local_c8 = &PTR_s_Failed_to_create_directory__0025e600;
          uStack_c0 = 2;
          uStack_a8 = 0;
          local_b8 = &local_68;
          uStack_b0 = 1;
                    /* try { // try from 00198e99 to 00198ea3 has its CatchHandler @ 00198fdd */
          local_f0 = local_50;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00267630)(&local_c8);
                    /* try { // try from 00198ea4 to 00198f2e has its CatchHandler @ 00199006 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb23d8f5d6ef8daacE(&local_f0);
        }
      }
    }
    uVar2 = *(undefined8 *)(param_2 + 0x30);
                    /* try { // try from 00198f33 to 00198f4a has its CatchHandler @ 00199004 */
    _ZN3std4path4Path4join17h8508bcffc5cbd073E(&local_68,uVar2,lVar6,&local_e8);
                    /* try { // try from 00198f4b to 00198f56 has its CatchHandler @ 00198ff2 */
    uVar4 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_00267ad8)(uVar2,lVar6);
    param_1[8] = local_58;
    param_1[6] = local_68;
    param_1[7] = puStack_60;
    *param_1 = local_80;
    param_1[1] = uStack_78;
    param_1[4] = uStack_40;
    param_1[5] = local_38;
    param_1[2] = local_70;
    param_1[3] = local_48;
    *(undefined *)(param_1 + 9) = uVar4;
  }
  return;
}