undefined  [16]
_ZN6uu_cut29cut_fields_implicit_out_delim17haca9c75437c7baf1E
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined param_6,undefined4 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_b1;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined local_50 [48];
  
  uVar1 = param_7;
  local_b1 = param_6;
  local_78 = param_4;
  local_70 = param_5;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h098d102270798e48E
            (local_50,param_1);
  uStack_a0 = &local_b1;
  local_90 = &param_7;
  local_88 = &local_78;
                    /* try { // try from 00168db3 to 00168dc1 has its CatchHandler @ 00168e50 */
  local_a8 = param_3;
  local_98 = param_2;
  lVar2 = _ZN4bstr2io10BufReadExt31for_byte_record_with_terminator17hd98daae6afad1e27E
                    (local_50,uVar1,&local_a8);
  if (lVar2 == 0) {
    uVar3 = 0;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hde8bb4ba94dd46beE
              (0);
  }
  else {
                    /* try { // try from 00168dcc to 00168e00 has its CatchHandler @ 00168e3b */
    local_b0 = lVar2;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0d308ee95f9441afE
              (&local_68,&local_b0);
    local_90 = (undefined4 *)CONCAT44(local_90._4_4_,1);
    local_a8 = CONCAT44(uStack_64,local_68);
    uStack_a0 = (undefined *)CONCAT44(uStack_5c,uStack_60);
    local_98 = local_58;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8c28acd2624e9f9fE(&local_a8);
                    /* try { // try from 00168e09 to 00168e18 has its CatchHandler @ 00168e50 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h78ae2c01de2ad3a3E(local_b0);
  }
  _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hbec81c69bfd4ba75E
            (local_50);
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h331995778b4fc266E_001f9218
  ;
  auVar4._0_8_ = uVar3;
  return auVar4;
}