undefined  [16]
_ZN7uu_tail6follow5watch8Observer8add_path17h2513ec520b230a37E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined param_8)

{
  undefined auVar1 [16];
  long lVar2;
  char cVar3;
  ulong unaff_R14;
  undefined8 local_288;
  undefined8 local_280;
  ulong local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  long local_188;
  undefined local_180 [168];
  undefined local_d8 [168];
  
  local_268 = param_4;
  if (*(char *)(param_1 + 0x8e) == '\x02') {
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
              (param_6,param_7);
  }
  else {
                    /* try { // try from 001a33da to 001a3439 has its CatchHandler @ 001a3585 */
    cVar3 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_0027d838)
                      (param_2,param_3);
    local_270 = param_5;
    if (cVar3 == '\0') {
      (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_0027d880)(&local_260);
      lVar2 = local_260;
                    /* try { // try from 001a3458 to 001a3468 has its CatchHandler @ 001a354d */
      _ZN3std4path4Path4join17h5377cb3aaed3538aE(&local_288,local_258,local_250,param_2,param_3);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(lVar2,local_258);
    }
    else {
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0027d848
      )(&local_288,param_2,param_3);
    }
                    /* try { // try from 001a3486 to 001a34aa has its CatchHandler @ 001a355d */
    _ZN3std2fs8metadata17h5c248dd9820946ebE(&local_260,local_280,local_278);
    if (local_260 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
                (&local_260);
    }
    else {
      (*(code *)PTR_memcpy_0027d2f0)(local_d8,&local_258,0xa8);
    }
    local_188 = local_260;
    (*(code *)PTR_memcpy_0027d2f0)(local_180,local_d8,0xa8);
                    /* try { // try from 001a34e8 to 001a3529 has its CatchHandler @ 001a356e */
    _ZN7uu_tail6follow5files8PathData3new17h86625b3b593f4467E
              (&local_260,param_6,param_7,&local_188,local_268,local_270);
    _ZN7uu_tail6follow5files12FileHandling6insert17h25f905215c20caacE
              (param_1 + 0x38,local_280,local_278,&local_260,param_8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_288,local_280);
    unaff_R14 = local_278;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_R14;
  return auVar1 << 0x40;
}