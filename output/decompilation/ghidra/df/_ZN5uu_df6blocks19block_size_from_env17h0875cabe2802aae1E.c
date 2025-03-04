undefined  [16] _ZN5uu_df6blocks19block_size_from_env17h0875cabe2802aae1E(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined auVar4 [16];
  long local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined *local_30;
  
  plVar3 = &local_b8;
  local_78 = &DAT_001160ed;
  local_70 = 0xd;
  local_68 = &DAT_001160fa;
  local_60 = 10;
  local_58 = &DAT_00116104;
  local_50 = 9;
  local_48 = 0;
  local_40 = 3;
  do {
                    /* try { // try from 001d4b90 to 001d4bb6 has its CatchHandler @ 001d4c6e */
    lVar1 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcf71787afda94e57E
                      (&local_78);
    if (lVar1 == 0) {
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h810d07154baeed19E
                (&local_78);
      uVar2 = 0;
LAB_001d4c37:
      auVar4._8_8_ = plVar3;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    _ZN3std3env3var17hec353e942184343cE(&local_b8,lVar1);
    if (local_b8 == 0) {
      local_88 = local_a0;
      local_98 = local_b0;
      uStack_94 = uStack_ac;
      uStack_90 = uStack_a8;
      uStack_8c = uStack_a4;
                    /* try { // try from 001d4be0 to 001d4c10 has its CatchHandler @ 001d4c50 */
      _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE
                (local_38,CONCAT44(uStack_a4,uStack_a8));
      _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17hc8411f64556cc8d7E
                (local_38);
                    /* try { // try from 001d4c11 to 001d4c1a has its CatchHandler @ 001d4c4b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4c5421f62a6f6c4dE(&local_98);
      if (local_b8 != 0) {
                    /* try { // try from 001d4c22 to 001d4c29 has its CatchHandler @ 001d4c49 */
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h122bc1b4c76f4cd7E
                  (&local_b8);
      }
      uVar2 = (ulong)(local_38[0] == 3);
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h810d07154baeed19E
                (&local_78);
      plVar3 = (long *)local_30;
      goto LAB_001d4c37;
    }
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h122bc1b4c76f4cd7E
              (&local_b8);
  } while( true );
}