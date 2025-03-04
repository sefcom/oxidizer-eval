void _ZN5uu_tr9operation15translate_input17hd58ae3eaa3f14818E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  puVar1 = 
  PTR__ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17h22767f011618eb41E_00232f38
  ;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0;
  local_68 = 1;
  local_60 = 0;
  while( true ) {
                    /* try { // try from 001722c0 to 001722cc has its CatchHandler @ 00172384 */
    auVar3 = (*(code *)puVar1)(param_1,10,&local_88);
    local_58 = auVar3;
    if ((auVar3._0_8_ != 0) || (auVar3._8_8_ == 0)) break;
    local_40 = local_78 + local_80;
    local_48 = local_80;
                    /* try { // try from 001722fd to 00172325 has its CatchHandler @ 00172389 */
    local_38 = param_3;
    _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17hd45417de63711eb1E
              (&local_70,&local_48);
    uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h266d567e2e387c1eE
                      (param_2,local_68,local_60);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdacc8680b3e233fdE(uVar2);
    local_78 = 0;
    local_60 = 0;
                    /* try { // try from 00172338 to 0017233f has its CatchHandler @ 00172384 */
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h3721ff3632bfcddfE
              (local_58);
  }
                    /* try { // try from 00172345 to 0017234e has its CatchHandler @ 00172382 */
  _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h3721ff3632bfcddfE
            (local_58);
                    /* try { // try from 0017234f to 00172358 has its CatchHandler @ 0017237d */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hefea7399e2ac3a44E(&local_70);
                    /* try { // try from 00172359 to 00172360 has its CatchHandler @ 00172378 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hefea7399e2ac3a44E(&local_88);
  _ZN4core3ptr143drop_in_place_LT_uu_tr__operation__ChainedSymbolTranslator_LT_uu_tr__operation__TranslateOperation_C_uu_tr__operation__SqueezeOperation_GT__GT_17hf3ef7a5e03e34340E
            (param_3);
  return;
}