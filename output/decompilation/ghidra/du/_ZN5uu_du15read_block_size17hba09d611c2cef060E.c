undefined8 *
_ZN5uu_du15read_block_size17hba09d611c2cef060E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_d0;
  undefined local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0 [2];
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  int local_70 [2];
  undefined **local_68;
  int local_50 [2];
  undefined8 local_48;
  
  if (param_2 == 0) {
    local_b0[0] = 0;
    local_b0[1] = 3;
    local_a0 = "DU_BLOCK_SIZE";
    local_98 = 0xd;
    local_90 = "BLOCK_SIZE";
    local_88 = 10;
    local_80 = "BLOCKSIZE";
    local_78 = 9;
    lVar3 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hd8fd032b1ad3245fE
                      (local_b0);
    puVar1 = PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0024eb80
    ;
    if (lVar3 != 0) {
      do {
        while (_ZN3std3env3var17h7ee537fe83ab501aE(&local_d0,lVar3), local_d0 == 0) {
                    /* try { // try from 001967c4 to 001967c8 has its CatchHandler @ 001968a3 */
          (*(code *)puVar1)(local_50,local_c0,local_b8);
          if (local_50[0] == 4) {
            param_1[1] = local_48;
            *param_1 = 0;
            _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17hcc1c8ea971724a57E
                      (local_50);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(local_c8);
            return param_1;
          }
          _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17hcc1c8ea971724a57E
                    (local_50);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(local_c8);
          lVar3 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hd8fd032b1ad3245fE
                            (local_b0);
          if (lVar3 == 0) goto LAB_001967f6;
        }
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h96b9c4a0e931651bE
                  (&local_d0);
        lVar3 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hd8fd032b1ad3245fE
                          (local_b0);
      } while (lVar3 != 0);
    }
LAB_001967f6:
    _ZN3std3env3var17h7ee537fe83ab501aE(local_b0,"POSIXLY_CORRECT",0xf);
    uVar2 = local_b0[0];
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h96b9c4a0e931651bE
              (local_b0);
    if ((uVar2 & 1) == 0) {
      param_1[1] = 0x200;
      *param_1 = 0;
    }
    else {
      param_1[1] = 0x400;
      *param_1 = 0;
    }
  }
  else {
    (*(code *)
      PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0024eb80)
              (local_70);
    if (local_70[0] == 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = _ZN5uu_du15read_block_size28__u7b__u7b_closure_u7d__u7d_17h5d9afd330ddffbbaE
                        (param_2,param_3,local_70);
      local_68 = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h9f697d196e5b685aE_00245bc0
      ;
    }
    param_1[1] = local_68;
    *param_1 = uVar4;
  }
  return param_1;
}