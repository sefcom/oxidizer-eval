undefined  [16] _ZN5uu_df6blocks19block_size_from_env17hdb573be3e983bfb6E(void)

{
  long lVar1;
  ulong uVar2;
  long *unaff_R14;
  undefined auVar3 [16];
  long local_a0;
  undefined local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  long *local_38;
  
  local_80 = 0;
  local_78 = 3;
  local_70 = "DF_BLOCK_SIZE";
  local_68 = 0xd;
  local_60 = "BLOCK_SIZE";
  local_58 = 10;
  local_50 = "BLOCKSIZE";
  local_48 = 9;
  lVar1 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h2841b62643c07fc9E
                    (&local_80);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    unaff_R14 = &local_a0;
    uVar2 = 0;
    do {
      _ZN3std3env3var17hcd02c620244cf284E(unaff_R14,lVar1);
      if (local_a0 == 0) {
                    /* try { // try from 0016ad5a to 0016ad64 has its CatchHandler @ 0016ada9 */
        (*(code *)
          PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0020a170)
                  (&local_40,local_90,local_88);
        uVar2 = (ulong)(local_40 == 4);
        if ((int)local_40 != 4) {
          _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17hecbb26056e05f293E
                    (&local_40);
        }
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h73027cd2db783008E(local_98);
        unaff_R14 = local_38;
        break;
      }
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h9bc22df766544719E
                (unaff_R14);
      lVar1 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h2841b62643c07fc9E
                        (&local_80);
    } while (lVar1 != 0);
  }
  auVar3._8_8_ = unaff_R14;
  auVar3._0_8_ = uVar2;
  return auVar3;
}