undefined  [16]
_ZN6uu_cut29cut_fields_explicit_out_delim17hf1ac07e2d7452ebcE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5,undefined param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_c2;
  undefined local_c1;
  undefined local_c0 [16];
  long local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_28 [16];
  undefined8 local_18;
  
  local_c2 = param_5;
  local_c1 = param_6;
  local_68 = param_3;
  local_60 = param_4;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4328c6376c0b9efbE
            (&local_58,0x2000,param_1);
                    /* try { // try from 001b6728 to 001b672c has its CatchHandler @ 001b6863 */
  local_c0 = _ZN6uu_cut13stdout_writer17h8d13c8405537874aE();
  puStack_a0 = &local_c2;
  local_98 = local_c0;
  local_90 = &local_c1;
  local_88 = &local_68;
  local_80 = param_7;
  local_78 = param_8;
                    /* try { // try from 001b677e to 001b678f has its CatchHandler @ 001b6849 */
  local_a8 = param_2;
  local_b0 = _ZN4bstr2io10BufReadExt31for_byte_record_with_terminator17h7528ff4248908e1fE
                       (&local_58,param_6,&local_a8);
  if (local_b0 == 0) {
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_c0._0_8_,local_c0._8_8_);
    _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h2e5ef2ccf1fc6755E
              (local_58,local_50);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001b679a to 001b67d7 has its CatchHandler @ 001b683a */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h1fe03c512653459dE
              (local_28,&local_b0);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
    local_98 = (undefined *)local_18;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hac334f3a9663fcffE(&local_a8);
                    /* try { // try from 001b67e0 to 001b67e4 has its CatchHandler @ 001b6849 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd987992319436672E(local_b0);
                    /* try { // try from 001b67ef to 001b6813 has its CatchHandler @ 001b6863 */
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_c0._0_8_,local_c0._8_8_);
    _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h2e5ef2ccf1fc6755E
              (local_58,local_50);
  }
  auVar2._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
  ;
  auVar2._0_8_ = uVar1;
  return auVar2;
}