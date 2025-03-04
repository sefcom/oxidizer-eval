undefined  [16]
_ZN7uu_tail6follow5watch8Observer9add_stdin17h52ffe74598bd409cE
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined param_6)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x8e) == 2) || ((*(byte *)(param_1 + 0x8e) & 1) != 0)) {
    _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hb79f29454372363dE
              (param_4,param_5);
    uVar1 = 0;
  }
  else {
                    /* try { // try from 00205393 to 002053b5 has its CatchHandler @ 00205428 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_48,&DAT_00129838,10);
    local_58 = local_38;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
                    /* try { // try from 002053ce to 002053e8 has its CatchHandler @ 0020541b */
    auVar2 = _ZN7uu_tail6follow5watch8Observer8add_path17h2539e8b9bde14502E
                       (param_1,CONCAT44(uStack_3c,uStack_40),local_38,param_2,param_3,param_4,
                        param_5,param_6);
    param_5 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_68);
  }
  auVar2._8_8_ = param_5;
  auVar2._0_8_ = uVar1;
  return auVar2;
}