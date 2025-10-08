undefined  [16]
_ZN7uu_sort5merge34replace_output_file_in_input_files17hfdb0f95794ab3c79E
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  undefined4 local_13c;
  long local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  long local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  ppuVar5 = (undefined **)0x8000000000000000;
  local_138 = -0x8000000000000000;
  if (param_3 == 0) {
    ppuVar5 = (undefined **)0x8000000000000001;
    local_c8 = -0x7fffffffffffffff;
  }
  else {
                    /* try { // try from 001c5169 to 001c5181 has its CatchHandler @ 001c5461 */
    _ZN3std2fs12canonicalize17h70c6b6ce54d47e66E(&local_108,param_3,param_4);
    uVar2 = local_f8;
    lVar1 = uStack_100;
    local_b8 = local_f8;
    local_c8 = local_108;
    uStack_c0 = (undefined4)uStack_100;
    uStack_bc = uStack_100._4_4_;
    if (-0x7fffffffffffffff < local_108) {
      local_78 = local_f8;
      uStack_84 = local_108._4_4_;
      uStack_80 = (undefined4)uStack_100;
      uStack_7c = uStack_100._4_4_;
      local_88 = (int)local_108;
      if (param_2 == 0) {
        uVar4 = 0;
      }
      else {
        param_2 = param_2 * 0x18;
        local_a8 = param_5;
        do {
          _ZN3std2fs12canonicalize17h70c6b6ce54d47e66E(&local_a0,param_1[1],param_1[2]);
          if (local_a0 == -0x8000000000000000) {
                    /* try { // try from 001c5210 to 001c5235 has its CatchHandler @ 001c5488 */
            _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hfc2246f970fc19deE
                      (&local_a0);
          }
          else {
                    /* try { // try from 001c5250 to 001c527f has its CatchHandler @ 001c5476 */
            cVar3 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                              (local_98,local_90,lVar1,uVar2);
            if (cVar3 != '\0') {
              if (local_138 == -0x8000000000000000) {
                _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17he098c4319062daf7E
                          (&local_108,local_a8);
                uVar4 = local_f8;
                if (uStack_100 == -0x8000000000000000) {
                  ppuVar5 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb52824ed0e0c3e52E
                            (&local_a0);
                }
                else {
                  local_13c = (undefined4)local_108;
                  local_120 = uStack_100;
                  uStack_118 = (undefined4)local_f8;
                  uStack_114 = local_f8._4_4_;
                  uStack_110 = uStack_f0;
                  uStack_10c = uStack_ec;
                    /* try { // try from 001c52a5 to 001c52cd has its CatchHandler @ 001c5448 */
                  auVar6 = _ZN3std2fs4copy17hb892bade5913721cE(&local_a0,&local_120);
                  if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h87b9b7723d120741E
                              (&local_108,CONCAT44(uStack_114,uStack_118),
                               CONCAT44(uStack_10c,uStack_110));
                    local_38 = local_f8;
                    local_48 = (undefined4)local_108;
                    uStack_44 = local_108._4_4_;
                    uStack_40 = (undefined4)uStack_100;
                    uStack_3c = uStack_100._4_4_;
                    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hd8e262b15878059aE
                              (param_1);
                    param_1[2] = local_38;
                    *param_1 = CONCAT44(uStack_44,local_48);
                    param_1[1] = CONCAT44(uStack_3c,uStack_40);
                    local_f8 = CONCAT44(uStack_10c,uStack_110);
                    local_108 = local_120;
                    uStack_100 = CONCAT44(uStack_114,uStack_118);
                    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17he07655bc243cfc68E
                              (&local_138);
                    local_128 = local_f8;
                    local_138 = local_108;
                    uStack_130 = (undefined4)uStack_100;
                    uStack_12c = uStack_100._4_4_;
                    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h03a65ca6f8c2bbc9E(&local_13c)
                    ;
                    goto LAB_001c5218;
                  }
                  local_108 = -0x7ffffffffffffffd;
                    /* try { // try from 001c541c to 001c5425 has its CatchHandler @ 001c5446 */
                  uStack_100 = auVar6._8_8_;
                  uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_108);
                  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb52824ed0e0c3e52E
                            (&local_120);
                  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h03a65ca6f8c2bbc9E(&local_13c);
                  ppuVar5 = &
                            PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
                  ;
                }
                goto LAB_001c53c6;
              }
                    /* try { // try from 001c5353 to 001c535c has its CatchHandler @ 001c5476 */
              _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h87b9b7723d120741E
                        (&local_108,CONCAT44(uStack_12c,uStack_130),local_128);
              local_58 = local_f8;
              local_68 = (undefined4)local_108;
              uStack_64 = local_108._4_4_;
              uStack_60 = (undefined4)uStack_100;
              uStack_5c = uStack_100._4_4_;
              _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hd8e262b15878059aE
                        (param_1);
              param_1[2] = local_58;
              *(undefined4 *)param_1 = local_68;
              *(undefined4 *)((long)param_1 + 4) = uStack_64;
              *(undefined4 *)(param_1 + 1) = uStack_60;
              *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
            }
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb52824ed0e0c3e52E(&local_a0);
          }
LAB_001c5218:
          param_1 = param_1 + 3;
          param_2 = param_2 + -0x18;
        } while (param_2 != 0);
        uVar4 = 0;
      }
LAB_001c53c6:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb52824ed0e0c3e52E(&local_c8);
      goto LAB_001c53d3;
    }
  }
                    /* try { // try from 001c53af to 001c53bb has its CatchHandler @ 001c5461 */
  _ZN4core3ptr119drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT__GT_17hfecc749772c142e4E
            (&local_c8);
  uVar4 = 0;
LAB_001c53d3:
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17he07655bc243cfc68E
            (&local_138);
  auVar6._8_8_ = ppuVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}