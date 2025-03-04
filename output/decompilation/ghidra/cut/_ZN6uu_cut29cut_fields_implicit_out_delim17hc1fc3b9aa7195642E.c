undefined  [16]
_ZN6uu_cut29cut_fields_implicit_out_delim17hc1fc3b9aa7195642E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5,undefined param_6)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_b2;
  undefined local_b1;
  undefined local_b0 [16];
  long local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_28 [16];
  undefined8 local_18;
  
  local_b2 = param_5;
  local_b1 = param_6;
  local_68 = param_3;
  local_60 = param_4;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4328c6376c0b9efbE
            (&local_58,0x2000,param_1);
                    /* try { // try from 001b6a18 to 001b6a1c has its CatchHandler @ 001b6b39 */
  local_b0 = _ZN6uu_cut13stdout_writer17h8d13c8405537874aE();
  puStack_90 = &local_b2;
  local_88 = local_b0;
  local_80 = &local_b1;
  local_78 = &local_68;
                    /* try { // try from 001b6a54 to 001b6a65 has its CatchHandler @ 001b6b1f */
  local_98 = param_2;
  local_a0 = _ZN4bstr2io10BufReadExt31for_byte_record_with_terminator17he41badc75985900eE
                       (&local_58,param_6,&local_98);
  if (local_a0 == 0) {
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_b0._0_8_,local_b0._8_8_);
    _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h2e5ef2ccf1fc6755E
              (local_58,local_50);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001b6a70 to 001b6aad has its CatchHandler @ 001b6b10 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h1fe03c512653459dE
              (local_28,&local_a0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    local_88 = (undefined *)local_18;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hac334f3a9663fcffE(&local_98);
                    /* try { // try from 001b6ab6 to 001b6aba has its CatchHandler @ 001b6b1f */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd987992319436672E(local_a0);
                    /* try { // try from 001b6ac5 to 001b6ae9 has its CatchHandler @ 001b6b39 */
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_b0._0_8_,local_b0._8_8_);
    _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h2e5ef2ccf1fc6755E
              (local_58,local_50);
  }
  auVar2._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
  ;
  auVar2._0_8_ = uVar1;
  return auVar2;
}