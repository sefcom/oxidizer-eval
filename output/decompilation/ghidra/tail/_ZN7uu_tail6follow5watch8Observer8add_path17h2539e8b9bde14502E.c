undefined  [16]
_ZN7uu_tail6follow5watch8Observer8add_path17h2539e8b9bde14502E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined param_8)

{
  char cVar1;
  undefined8 uVar2;
  ulong unaff_R14;
  undefined auVar3 [16];
  undefined local_280 [8];
  undefined8 local_278;
  ulong local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined local_d8 [168];
  
  local_268 = param_5;
  if (*(char *)(param_1 + 0x8e) == '\x02') {
    _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hb79f29454372363dE
              (param_6,param_7);
  }
  else {
                    /* try { // try from 0020517a to 002051d5 has its CatchHandler @ 0020532b */
    cVar1 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E(param_2,param_3);
    if (cVar1 == '\0') {
      _ZN3std3env11current_dir17h8e5fbaefdf378c8cE(&local_260);
      if (local_260 == -0x8000000000000000) {
        auVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (local_258);
        _ZN4core3ptr98drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__BufRead_GT__GT__GT_17hb79f29454372363dE
                  (param_6,param_7);
        return auVar3;
      }
      local_188 = local_260;
      local_180 = local_258;
      local_178 = local_250;
                    /* try { // try from 00205211 to 00205220 has its CatchHandler @ 00205315 */
      _ZN3std4path4Path4join17hfe8bd1517fdb9512E(local_280,local_258,local_250,param_2,param_3);
                    /* try { // try from 00205221 to 0020522d has its CatchHandler @ 0020532b */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_188);
    }
    else {
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (local_280,param_2,param_3);
    }
    unaff_R14 = local_270;
    uVar2 = local_278;
                    /* try { // try from 0020523e to 00205262 has its CatchHandler @ 00205334 */
    _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_260,local_278,local_270);
    if (local_260 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                (&local_260);
      uVar2 = local_278;
      unaff_R14 = local_270;
    }
    else {
      (*(code *)PTR_memcpy_002c2760)(local_d8,&local_258,0xa8);
    }
    local_188 = local_260;
    (*(code *)PTR_memcpy_002c2760)(&local_180,local_d8,0xa8);
                    /* try { // try from 002052ac to 002052f3 has its CatchHandler @ 00205334 */
    _ZN7uu_tail6follow5files8PathData3new17h9cc9fab20487d2f9E
              (&local_260,param_6,param_7,&local_188,param_4,local_268);
    _ZN7uu_tail6follow5files12FileHandling6insert17h8755548d7239df23E
              (param_1 + 0x38,uVar2,unaff_R14,&local_260,param_8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(local_280);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_R14;
  return auVar3 << 0x40;
}