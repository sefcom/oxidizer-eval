undefined  [16]
_ZN6uu_cut9cut_bytes17h32bb827a9ce38497E
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5
          )

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_b1;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  long local_90;
  long *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  undefined local_50 [48];
  
  uVar1 = *(undefined4 *)(param_5 + 5);
  local_b1 = (undefined)uVar1;
  local_78 = param_3;
  local_70 = param_4;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h098d102270798e48E
            (local_50,param_1);
  pcVar2 = (char *)*param_5;
  local_90 = 1;
  if (pcVar2 != (char *)0x0) {
    local_90 = param_5[1];
  }
  local_98 = "\t";
  if (pcVar2 != (char *)0x0) {
    local_98 = pcVar2;
  }
  local_a8 = &local_78;
  local_80 = &local_b1;
                    /* try { // try from 00167c08 to 00167c16 has its CatchHandler @ 00167ca5 */
  uStack_a0 = param_2;
  local_88 = param_5;
  lVar3 = _ZN4bstr2io10BufReadExt15for_byte_record17h7faf1fdbaf93c297E(local_50,uVar1,&local_a8);
  if (lVar3 == 0) {
    uVar4 = 0;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hde8bb4ba94dd46beE
              (0);
  }
  else {
                    /* try { // try from 00167c21 to 00167c55 has its CatchHandler @ 00167c90 */
    local_b0 = lVar3;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0d308ee95f9441afE
              (&local_68,&local_b0);
    local_90 = CONCAT44(local_90._4_4_,1);
    local_a8 = (undefined8 *)CONCAT44(uStack_64,local_68);
    uStack_a0 = CONCAT44(uStack_5c,uStack_60);
    local_98 = local_58;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8c28acd2624e9f9fE(&local_a8);
                    /* try { // try from 00167c5e to 00167c6d has its CatchHandler @ 00167ca5 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h78ae2c01de2ad3a3E(local_b0);
  }
  _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hbec81c69bfd4ba75E
            (local_50);
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h331995778b4fc266E_001f9218
  ;
  auVar5._0_8_ = uVar4;
  return auVar5;
}