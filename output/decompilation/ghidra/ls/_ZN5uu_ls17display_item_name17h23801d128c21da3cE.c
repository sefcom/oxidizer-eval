void _ZN5uu_ls17display_item_name17h23801d128c21da3cE
               (undefined4 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
               undefined4 *param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  undefined auVar13 [16];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 *local_2e0;
  undefined8 *local_2d8;
  code *local_2d0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_298;
  long local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 local_260;
  ulong local_258;
  undefined4 *local_250;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar1 = param_3 + 0xfc;
                    /* try { // try from 0029e5ae to 0029e5bb has its CatchHandler @ 0029ee2f */
  local_2e0 = param_6;
  local_260 = param_5;
  local_258 = param_4;
  (*(code *)PTR__ZN6uucore8features13quoting_style11escape_name17h942044e1943bd5afE_0048fea8)
            (&local_2f8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),lVar1);
  local_250 = param_1;
  if (*(char *)(param_3 + 0xf7) != '\0') {
                    /* try { // try from 0029e5de to 0029e5f0 has its CatchHandler @ 0029ee3a */
    _ZN5uu_ls16create_hyperlink17h0a10a692235dc40bE
              (&local_178,CONCAT44(uStack_2ec,uStack_2f0),local_2e8,param_2);
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
              (CONCAT44(uStack_2f4,local_2f8),CONCAT44(uStack_2ec,uStack_2f0));
    local_2e8 = local_168;
    local_2f8 = (undefined4)local_178;
    uStack_2f4 = local_178._4_4_;
    uStack_2f0 = (undefined4)uStack_170;
    uStack_2ec = uStack_170._4_4_;
  }
  local_290 = param_7 + 0x68;
  if (*(char *)(param_7 + 0x85) != '\x02') {
                    /* try { // try from 0029e641 to 0029e650 has its CatchHandler @ 0029ee1a */
    uVar7 = _ZN5uu_ls17display_item_name28__u7b__u7b_closure_u7d__u7d_17h25fbdfd9e7387c2fE
                      (param_3,param_8,local_2e8);
                    /* try { // try from 0029e651 to 0029e676 has its CatchHandler @ 0029ee18 */
    _ZN5uu_ls6colors10color_name17hafb991a3ed925fc5E
              (&local_178,&local_2f8,param_2,local_290,param_7,0,uVar7);
    local_2e8 = local_168;
    local_2f8 = (undefined4)local_178;
    uStack_2f4 = local_178._4_4_;
    uStack_2f0 = (undefined4)uStack_170;
    uStack_2ec = uStack_170._4_4_;
  }
  cVar2 = *(char *)(param_3 + 0x100);
  bVar5 = true;
  if ((cVar2 != '\x01') && (*(long *)(local_2e0 + 4) != 0)) {
    local_168 = (undefined8 **)local_2e8;
    local_178 = (undefined *)CONCAT44(uStack_2f4,local_2f8);
    uStack_170 = CONCAT44(uStack_2ec,uStack_2f0);
    local_2f8 = *local_2e0;
    uStack_2f4 = local_2e0[1];
    uStack_2f0 = local_2e0[2];
    uStack_2ec = local_2e0[3];
    local_2e8 = *(undefined8 *)(local_2e0 + 4);
                    /* try { // try from 0029e6e0 to 0029e6f1 has its CatchHandler @ 0029edf6 */
    _ZN3std3ffi6os_str8OsString4push17h7acd85275a97cdacE(&local_2f8,&local_178);
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
              (local_178,uStack_170);
    bVar5 = false;
  }
  cVar8 = *(char *)(param_3 + 0xff);
  if (cVar8 != '\0') {
                    /* try { // try from 0029e71c to 0029e771 has its CatchHandler @ 0029ee3a */
    iVar9 = _ZN5uu_ls13classify_file17hfca466d8ec9ab1d0E(param_2,param_7);
    if (cVar8 == '\x01') {
      if (iVar9 == 0x2f) goto LAB_0029e74e;
    }
    else if (((cVar8 != '\x02') || (iVar9 != 0x2a)) && (iVar9 != 0x110000)) {
LAB_0029e74e:
      local_2d8 = (undefined8 *)((ulong)local_2d8 & 0xffffffff00000000);
      uVar10 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(iVar9,&local_2d8);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
                (&local_178,uVar10);
      uStack_218 = local_168;
      local_228 = local_178;
      uStack_220 = (undefined4)uStack_170;
      uStack_21c = uStack_170._4_4_;
                    /* try { // try from 0029e79a to 0029e7a3 has its CatchHandler @ 0029ede4 */
      _ZN3std3ffi6os_str8OsString4push17had4c4c06171a790fE(&local_2f8,uStack_170);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_228);
    }
  }
                    /* try { // try from 0029e7ba to 0029e817 has its CatchHandler @ 0029ee3a */
  if ((cVar2 == '\x01') &&
     (lVar11 = _ZN5uu_ls8PathData9file_type17h413d2014e9fb015bE(param_2,param_7), lVar11 != 0)) {
    puVar12 = (uint *)_ZN5uu_ls8PathData9file_type17h413d2014e9fb015bE(param_2,param_7);
    if (puVar12 == (uint *)0x0) {
                    /* try { // try from 0029ed36 to 0029ed42 has its CatchHandler @ 0029ee3a */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0048fd98)
                (&PTR_s_src_uu_ls_src_ls_rs_00386d40);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((*puVar12 & 0xf000) == 0xa000) && (*(char *)(param_2 + 0x128) != '\x01')) {
      _ZN3std2fs9read_link17h8fc09be18a8db6e8E
                (&local_240,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      local_2a8 = local_230;
      local_2b8 = local_240;
      uStack_2b4 = uStack_23c;
      uStack_2b0 = uStack_238;
      uStack_2ac = uStack_234;
                    /* try { // try from 0029eabe to 0029eb2d has its CatchHandler @ 0029eda1 */
      _ZN3std3ffi6os_str8OsString4push17h8d27602952d812afE(&local_2f8,&DAT_001cfe48,4);
      uVar10 = local_2a8;
      if (*(char *)(param_7 + 0x85) == '\x02') {
        (*(code *)PTR__ZN6uucore8features13quoting_style11escape_name17h942044e1943bd5afE_0048fea8)
                  (&local_178,CONCAT44(uStack_2ac,uStack_2b0),local_2a8,lVar1);
        _ZN3std3ffi6os_str8OsString4push17h7ae4c515aa982082E(&local_2f8,&local_178);
      }
      else {
        local_298 = CONCAT44(uStack_2ac,uStack_2b0);
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h523154303afc7abcE
                  (&local_178,local_298,local_2a8);
        local_278 = local_168;
        local_288 = (undefined4)local_178;
        uStack_284 = local_178._4_4_;
        uStack_280 = (undefined4)uStack_170;
        uStack_27c = uStack_170._4_4_;
                    /* try { // try from 0029eb4e to 0029eb75 has its CatchHandler @ 0029ed61 */
        local_268 = uVar10;
        cVar8 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0048ff08)
                          (local_298,uVar10);
        if (cVar8 == '\0') {
          auVar13 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_0048ff10)
                              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
          if (auVar13._0_8_ != 0) {
                    /* try { // try from 0029eb7b to 0029ec06 has its CatchHandler @ 0029ed8d */
            _ZN3std4path4Path4join17h7af255de9de1491fE
                      (&local_178,auVar13._0_8_,auVar13._8_8_,&local_288);
            local_278 = local_168;
            local_288 = (undefined4)local_178;
            uStack_284 = local_178._4_4_;
            uStack_280 = (undefined4)uStack_170;
            uStack_27c = uStack_170._4_4_;
          }
        }
        local_228 = 0;
        local_2d8 = (undefined8 *)&DAT_8000000000000000;
        _ZN5uu_ls8PathData3new17h2697718e531487bcE
                  (&local_178,&local_288,&local_228,&local_2d8,*(undefined *)(param_3 + 0xf3),
                   *(undefined *)(param_3 + 0xfa),0);
                    /* try { // try from 0029ec07 to 0029ecbc has its CatchHandler @ 0029ed8f */
        lVar11 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_7);
        uVar10 = local_298;
        if (lVar11 == 0) {
          _ZN5uu_ls27get_metadata_with_deref_opt17h6fbf7688ce069f5fE
                    (&local_228,local_158,local_150,local_50);
          if ((int)local_228 != 2) {
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                      (&local_228);
            goto LAB_0029eca1;
          }
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                    (&local_228);
          _ZN3std2fs9read_link17h8fc09be18a8db6e8E
                    (&local_228,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2ec348307e7b0fa4E(&local_2d8,&local_228);
          _ZN3std3ffi6os_str8OsString4push17h94a704c4a50176c7E(&local_2f8,&local_2d8);
        }
        else {
LAB_0029eca1:
          (*(code *)PTR__ZN6uucore8features13quoting_style11escape_name17h942044e1943bd5afE_0048fea8
          )(&local_228,uVar10,local_268,lVar1);
                    /* try { // try from 0029ecc2 to 0029ecd1 has its CatchHandler @ 0029ed47 */
          uVar7 = _ZN5uu_ls17display_item_name28__u7b__u7b_closure_u7d__u7d_17h25fbdfd9e7387c2fE
                            (param_3,param_8,local_2e8);
                    /* try { // try from 0029ecd2 to 0029ecfc has its CatchHandler @ 0029ed45 */
          _ZN5uu_ls6colors10color_name17hafb991a3ed925fc5E
                    (&local_2d8,&local_228,param_2,local_290,param_7,&local_178,uVar7);
                    /* try { // try from 0029ecfd to 0029ed0b has its CatchHandler @ 0029ed8f */
          _ZN3std3ffi6os_str8OsString4push17h7ae4c515aa982082E(&local_2f8,&local_2d8);
        }
                    /* try { // try from 0029ed0c to 0029ed18 has its CatchHandler @ 0029ed8d */
        _ZN4core3ptr36drop_in_place_LT_uu_ls__PathData_GT_17h76a87c73f87c0bb8E(&local_178);
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h2dce88b0c646837fE(&local_2b8);
      cVar8 = *(char *)(param_3 + 0xf3);
      goto joined_r0x0029e940;
    }
  }
  cVar8 = *(char *)(param_3 + 0xf3);
joined_r0x0029e940:
  if ((cVar8 != '\0') && ((local_258 & 1) != 0)) {
    if (cVar2 == '\x04') {
                    /* try { // try from 0029e95d to 0029e98c has its CatchHandler @ 0029ee3a */
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0048fc58
      )(&local_228,param_2 + 0x30);
    }
    else {
      _ZN5uu_ls8pad_left17h9cc9c358e56c676aE
                (&local_228,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                 local_260);
    }
    uVar6 = local_2e8;
    uVar10 = CONCAT44(uStack_2f4,local_2f8);
    uVar4 = CONCAT44(uStack_2ec,uStack_2f0);
    local_2d8 = &local_228;
    local_2d0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_178 = &DAT_00386678;
    uStack_170 = 2;
    local_158 = 0;
    local_168 = &local_2d8;
    local_160 = 1;
                    /* try { // try from 0029e9f5 to 0029ea09 has its CatchHandler @ 0029edc7 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(&local_48,&local_178);
    local_2f8 = local_48;
    uStack_2f4 = uStack_44;
    uStack_2f0 = uStack_40;
    uStack_2ec = uStack_3c;
    local_2e8 = local_38;
    local_168 = (undefined8 **)uVar6;
                    /* try { // try from 0029ea3c to 0029ea4d has its CatchHandler @ 0029edc5 */
    local_178 = (undefined *)uVar10;
    uStack_170 = uVar4;
    _ZN3std3ffi6os_str8OsString4push17h7ae4c515aa982082E(&local_2f8,&local_178);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_228);
  }
  *(undefined8 *)(local_250 + 4) = local_2e8;
  *local_250 = local_2f8;
  local_250[1] = uStack_2f4;
  local_250[2] = uStack_2f0;
  local_250[3] = uStack_2ec;
                    /* try { // try from 0029ea74 to 0029ea80 has its CatchHandler @ 0029ee2a */
  _ZN4core3ptr170drop_in_place_LT_core__cell__lazy__LazyCell_LT_usize_C_alloc__boxed__Box_LT_dyn_u20_core__ops__function__FnOnce_LT__LP__RP__GT__u2b_Output_u20__u3d__u20_usize_GT__GT__GT_17h4c6a460533912afdE
            (param_8);
  if (bVar5) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_2e0);
  }
  return;
}