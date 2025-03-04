undefined8 *
_ZN5uu_du15read_block_size17h76babfb70e66ee44E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 != 0) {
    _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE(local_c8);
    if (local_c8[0] == 3) {
      ppuVar4 = (undefined **)CONCAT44(uStack_bc,uStack_c0);
      uVar3 = 0;
    }
    else {
      uVar3 = _ZN5uu_du15read_block_size28__u7b__u7b_closure_u7d__u7d_17hbe6839e34197ed94E
                        (param_2,param_3,&local_a8);
      ppuVar4 = &
                PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hef7e4b832a2fba76E_00284310
      ;
    }
    param_1[1] = ppuVar4;
    *param_1 = uVar3;
    return param_1;
  }
  local_a8 = &DAT_0011cd1d;
  uStack_a0 = 0xd;
  local_98 = &DAT_0011cd2a;
  uStack_90 = 10;
  local_88 = &DAT_0011cd34;
  local_80 = 9;
  local_78 = 0;
  local_70 = 3;
LAB_001f1de8:
  lVar2 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hca94120cebd2fbbeE
                    (&local_a8);
  if (lVar2 == 0) {
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h1e3b5b2db52edb1fE
              (&local_a8);
    _ZN3std3env3var17h8742b1567e161603E(&local_a8,&DAT_0011cd3d,0xf);
    puVar1 = local_a8;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h9fc456eefb69a366E
              (&local_a8);
    if (puVar1 != (undefined *)0x0) {
      param_1[1] = 0x400;
      *param_1 = 0;
      return param_1;
    }
    param_1[1] = 0x200;
    *param_1 = 0;
    return param_1;
  }
  _ZN3std3env3var17h8742b1567e161603E(&local_50,lVar2);
  if (local_50 == 0) goto code_r0x001f1e0c;
  goto LAB_001f1de0;
code_r0x001f1e0c:
  local_58 = local_38;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
                    /* try { // try from 001f1e23 to 001f1e3a has its CatchHandler @ 001f1f3d */
  _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE
            (local_c8,CONCAT44(uStack_3c,uStack_40));
  if (local_c8[0] == 3) {
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    *param_1 = 0;
                    /* try { // try from 001f1eec to 001f1ef3 has its CatchHandler @ 001f1f36 */
    _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h0c054e42efb06657E
              (local_c8);
                    /* try { // try from 001f1ef4 to 001f1efd has its CatchHandler @ 001f1f31 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_68);
    if (local_50 != 0) {
                    /* try { // try from 001f1f06 to 001f1f0f has its CatchHandler @ 001f1f2f */
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h9fc456eefb69a366E
                (&local_50);
    }
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h1e3b5b2db52edb1fE
              (&local_a8);
    return param_1;
  }
  _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h0c054e42efb06657E
            (local_c8);
                    /* try { // try from 001f1e3b to 001f1e44 has its CatchHandler @ 001f1f38 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_68);
  if (local_50 != 0) {
LAB_001f1de0:
                    /* try { // try from 001f1de0 to 001f1e03 has its CatchHandler @ 001f1f5e */
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h9fc456eefb69a366E
              (&local_50);
  }
  goto LAB_001f1de8;
}