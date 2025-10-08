undefined  [16]
_ZN5uu_tr9operation15translate_input17h0ac4b7e158c4d5ccE
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 *local_38;
  
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_60 = 0;
  local_58 = 1;
  local_50 = 0;
  do {
                    /* try { // try from 00161ae0 to 00161af0 has its CatchHandler @ 00161bd2 */
    auVar5 = (*(code *)
               PTR__ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17hc4dcd49adc43842dE_002053b0
             )(param_1,10,&local_78);
    lVar4 = auVar5._8_8_;
    uVar1 = auVar5._0_8_;
    if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_00161b74:
                    /* try { // try from 00161b74 to 00161b8d has its CatchHandler @ 00161bd0 */
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd84acac9d5f9e71fE
                (uVar1,lVar4);
      lVar3 = 0;
LAB_00161b8e:
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h2db8680331b6b45eE
                (local_60,local_58);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h2db8680331b6b45eE
                (local_78,local_70);
      _ZN4core3ptr57drop_in_place_LT_uu_tr__operation__TranslateOperation_GT_17hba9417b013456e17E
                (*param_3,param_3[1]);
      auVar5._8_8_ = &
                     PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17ha892872e96b86351E_001fcd90
      ;
      auVar5._0_8_ = lVar3;
      return auVar5;
    }
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_00161b74;
    }
    local_40 = local_68 + local_70;
    local_48 = local_70;
                    /* try { // try from 00161b1e to 00161b46 has its CatchHandler @ 00161bd7 */
    local_38 = param_3;
    _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17hd3854286173163e1E
              (&local_60,&local_48);
    uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h03d4feaa07dcafddE
                      (param_2,local_58,local_50);
    lVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h1c081fbf40a55a1cE
                      (uVar2);
    if (lVar3 != 0) {
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd84acac9d5f9e71fE
                (uVar1,lVar4);
      goto LAB_00161b8e;
    }
    local_68 = 0;
    local_50 = 0;
                    /* try { // try from 00161b61 to 00161b6b has its CatchHandler @ 00161bd2 */
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd84acac9d5f9e71fE
              (uVar1,lVar4);
  } while( true );
}