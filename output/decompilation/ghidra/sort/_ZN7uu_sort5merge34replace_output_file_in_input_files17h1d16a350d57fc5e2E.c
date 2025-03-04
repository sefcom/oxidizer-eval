undefined  [16]
_ZN7uu_sort5merge34replace_output_file_in_input_files17h1d16a350d57fc5e2E
          (undefined **param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int __fd;
  char cVar1;
  int *piVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **unaff_R14;
  undefined auVar6 [16];
  int local_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined **local_168;
  long local_158;
  undefined **ppuStack_150;
  undefined **local_148;
  int local_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined **local_128;
  undefined **ppuStack_120;
  int local_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined8 local_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  int local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined **local_78;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  long local_50;
  long local_48;
  undefined **local_40;
  undefined **local_38;
  
  local_158 = -0x8000000000000000;
  if (param_3 != 0) {
                    /* try { // try from 00229c29 to 00229c41 has its CatchHandler @ 0022a03c */
    _ZN3std2fs12canonicalize17h5ee5ffd7248c8d7cE(&local_138,param_3,param_4);
    local_168 = local_128;
    local_178 = local_138;
    iStack_174 = iStack_134;
    uStack_170 = (int)uStack_130;
    uStack_16c = uStack_130._4_4_;
    lVar3 = CONCAT44(iStack_134,local_138);
    local_48 = lVar3;
    lVar5 = -0x7ffffffffffffffe;
    if (-0x7fffffffffffffff < lVar3) {
      local_50 = -0x7ffffffffffffffe;
      local_98 = local_128;
      local_a8 = local_138;
      iStack_a4 = iStack_134;
      uStack_a0 = (int)uStack_130;
      uStack_9c = uStack_130._4_4_;
      local_38 = param_1 + param_2 * 3;
      local_40 = param_1;
      piVar2 = (int *)_ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8f07d4e8b2ff4fedE
                                (&local_40);
      if (piVar2 != (int *)0x0) {
        param_1 = (undefined **)&local_f0;
        do {
          _ZN3std2fs12canonicalize17h5ee5ffd7248c8d7cE
                    (param_1,*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar2 + 4));
          if (CONCAT44(iStack_ec,local_f0) == -0x8000000000000000) {
LAB_00229ce0:
                    /* try { // try from 00229ce0 to 00229d0b has its CatchHandler @ 0022a093 */
            _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h499879e130aef05fE
                      (param_1);
          }
          else {
            local_d8 = local_f0;
            iStack_d4 = iStack_ec;
            uStack_d0 = uStack_e8;
            uStack_cc = uStack_e4;
            local_c8 = local_e0;
                    /* try { // try from 00229d4e to 00229d72 has its CatchHandler @ 0022a060 */
            cVar1 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h1d8861b9e1bd0bd7E
                              (CONCAT44(uStack_e4,uStack_e8),local_e0,CONCAT44(uStack_9c,uStack_a0),
                               local_98);
            if (cVar1 == '\0') {
LAB_00229eb1:
                    /* try { // try from 00229eb1 to 00229eb8 has its CatchHandler @ 0022a05b */
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_d8);
            }
            else {
              if (local_158 != -0x8000000000000000) {
                    /* try { // try from 00229e68 to 00229e76 has its CatchHandler @ 0022a060 */
                _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbd5fd95fcc29e6fbE
                          (&local_138,&local_158);
                local_78 = local_128;
                local_88 = local_138;
                iStack_84 = iStack_134;
                iStack_80 = (int)uStack_130;
                iStack_7c = uStack_130._4_4_;
                    /* try { // try from 00229e91 to 00229e98 has its CatchHandler @ 0022a01f */
                _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h5ef0e2e0fb72183bE
                          (piVar2);
                *(undefined ***)(piVar2 + 4) = local_78;
                *piVar2 = local_88;
                piVar2[1] = iStack_84;
                piVar2[2] = iStack_80;
                piVar2[3] = iStack_7c;
                goto LAB_00229eb1;
              }
              _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17h05b3ad075068705fE(&local_138,param_5);
              ppuVar4 = local_128;
              __fd = local_138;
              if (uStack_130 == (undefined **)0x8000000000000000) {
                    /* try { // try from 00229f46 to 00229f52 has its CatchHandler @ 00229fdf */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_d8)
                ;
                unaff_R14 = ppuStack_120;
LAB_00229f92:
                if (CONCAT44(iStack_ec,local_f0) == -0x8000000000000000) {
                    /* try { // try from 00229f9c to 00229fa8 has its CatchHandler @ 00229fda */
                  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h499879e130aef05fE
                            (&local_f0);
                }
                    /* try { // try from 00229fa9 to 00229fb5 has its CatchHandler @ 00229fe1 */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_a8)
                ;
                if (CONCAT44(iStack_174,local_178) == -0x8000000000000000) {
                    /* try { // try from 00229fbc to 00229fc3 has its CatchHandler @ 0022a03c */
                  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h499879e130aef05fE
                            (&local_178);
                }
                _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h7575e676c0bf6e13E
                          (&local_158);
                goto LAB_00229f24;
              }
              local_c0 = uStack_130;
              ppuStack_b8 = local_128;
              ppuStack_b0 = ppuStack_120;
              local_128 = local_c8;
              local_138 = local_d8;
              iStack_134 = iStack_d4;
              uStack_130._0_4_ = uStack_d0;
              uStack_130._4_4_ = uStack_cc;
                    /* try { // try from 00229db5 to 00229de1 has its CatchHandler @ 0022a041 */
              auVar6 = _ZN3std2fs4copy17ha09958592b5817e3E(&local_138,&local_c0);
              if (auVar6._0_8_ != 0) {
                local_138 = CONCAT31(local_138._1_3_,4);
                    /* try { // try from 00229f5f to 00229f68 has its CatchHandler @ 00229fd8 */
                uStack_130 = auVar6._8_8_;
                ppuVar4 = (undefined **)
                          _ZN5alloc5boxed12Box_LT_T_GT_3new17hebf92c849c48588dE(&local_138);
                    /* try { // try from 00229f69 to 00229f78 has its CatchHandler @ 00229fd3 */
                _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_c0)
                ;
                _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb578aa8d27e7bc5E(__fd);
                unaff_R14 = &
                            PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_00300230
                ;
                goto LAB_00229f92;
              }
              _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hbd5fd95fcc29e6fbE
                        (&local_138,&local_c0);
              local_58 = local_128;
              local_68 = local_138;
              iStack_64 = iStack_134;
              uStack_60 = (int)uStack_130;
              uStack_5c = uStack_130._4_4_;
                    /* try { // try from 00229dfc to 00229e03 has its CatchHandler @ 0022a002 */
              _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h5ef0e2e0fb72183bE
                        (piVar2);
              *(undefined ***)(piVar2 + 4) = local_58;
              *(ulong *)piVar2 = CONCAT44(iStack_64,local_68);
              *(ulong *)(piVar2 + 2) = CONCAT44(uStack_5c,uStack_60);
              local_128 = ppuStack_b0;
              local_138 = (int)local_c0;
              iStack_134 = local_c0._4_4_;
              uStack_130 = ppuStack_b8;
                    /* try { // try from 00229e36 to 00229e3f has its CatchHandler @ 00229fe9 */
              _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h7575e676c0bf6e13E
                        (&local_158);
              local_148 = local_128;
              local_158 = CONCAT44(iStack_134,local_138);
              ppuStack_150 = uStack_130;
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb578aa8d27e7bc5E(__fd);
            }
            if (CONCAT44(iStack_ec,local_f0) == -0x8000000000000000) goto LAB_00229ce0;
          }
          piVar2 = (int *)_ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8f07d4e8b2ff4fedE
                                    (&local_40);
        } while (piVar2 != (int *)0x0);
      }
                    /* try { // try from 00229ecc to 00229ed8 has its CatchHandler @ 00229fe1 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_a8);
      lVar3 = CONCAT44(iStack_174,local_178);
      lVar5 = local_50;
    }
    unaff_R14 = param_1;
    if (lVar3 == -0x8000000000000000) {
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h499879e130aef05fE
                (&local_178);
    }
    else if ((lVar3 != -0x7fffffffffffffff) && (local_48 < lVar5)) {
                    /* try { // try from 00229f06 to 00229f17 has its CatchHandler @ 0022a03c */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_178);
    }
  }
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h7575e676c0bf6e13E
            (&local_158);
  ppuVar4 = (undefined **)0x0;
LAB_00229f24:
  auVar6._8_8_ = unaff_R14;
  auVar6._0_8_ = ppuVar4;
  return auVar6;
}