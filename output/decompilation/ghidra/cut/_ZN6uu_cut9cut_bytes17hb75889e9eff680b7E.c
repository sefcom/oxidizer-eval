undefined  [16]
_ZN6uu_cut9cut_bytes17hb75889e9eff680b7E
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_b1;
  undefined local_b0 [16];
  long local_a0;
  undefined8 *local_98;
  undefined *puStack_90;
  char *local_88;
  long local_80;
  long *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined8 local_48;
  undefined local_40 [48];
  
  uVar1 = *(undefined *)(param_4 + 5);
  local_b1 = uVar1;
  local_68 = param_2;
  local_60 = param_3;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4b66837b380ddfc6E
            (local_40,0x2000,param_1);
                    /* try { // try from 001b6102 to 001b6106 has its CatchHandler @ 001b622b */
  local_b0 = _ZN6uu_cut13stdout_writer17h8d13c8405537874aE();
  pcVar2 = (char *)*param_4;
  local_80 = 1;
  if (pcVar2 != (char *)0x0) {
    local_80 = param_4[1];
  }
  local_88 = "\t";
  if (pcVar2 != (char *)0x0) {
    local_88 = pcVar2;
  }
  local_98 = &local_68;
  puStack_90 = local_b0;
  local_70 = &local_b1;
                    /* try { // try from 001b6159 to 001b616b has its CatchHandler @ 001b6211 */
  local_78 = param_4;
  local_a0 = _ZN4bstr2io10BufReadExt15for_byte_record17hb9b9251e70f5cc08E(local_40,uVar1,&local_98);
  if (local_a0 == 0) {
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_b0._0_8_,local_b0._8_8_);
    _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h847359979c596e00E
              (local_40);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 001b6176 to 001b61aa has its CatchHandler @ 001b6202 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h1fe03c512653459dE
              (local_58,&local_a0);
    local_80 = CONCAT44(local_80._4_4_,1);
    local_88 = (char *)local_48;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hac334f3a9663fcffE(&local_98);
                    /* try { // try from 001b61b3 to 001b61b7 has its CatchHandler @ 001b6211 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd987992319436672E(local_a0);
                    /* try { // try from 001b61c2 to 001b61e1 has its CatchHandler @ 001b622b */
    _ZN4core3ptr68drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT_17h87d33fdcef97e0f4E
              (local_b0._0_8_,local_b0._8_8_);
    _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h847359979c596e00E
              (local_40);
  }
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
  ;
  auVar4._0_8_ = uVar3;
  return auVar4;
}