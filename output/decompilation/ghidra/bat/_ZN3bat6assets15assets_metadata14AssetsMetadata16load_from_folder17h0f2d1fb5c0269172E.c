undefined8 *
_ZN3bat6assets15assets_metadata14AssetsMetadata16load_from_folder17h0f2d1fb5c0269172E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  char local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_d0 [44];
  
  _ZN3bat6assets15assets_metadata14AssetsMetadata20try_load_from_folder17hea3fe7d33e77c6ceE
            (&local_120);
  if (local_120 == '\r') {
    param_1[5] = local_f8;
    param_1[3] = uStack_108;
    param_1[4] = uStack_100;
    param_1[1] = uStack_118;
    param_1[2] = uStack_110;
    *(undefined *)param_1 = 0xd;
    return param_1;
  }
  if (local_120 == '\x06') {
    param_1[8] = local_e0;
    param_1[9] = uStack_d8;
    param_1[6] = local_f0;
    param_1[7] = uStack_e8;
    param_1[4] = uStack_100;
    param_1[5] = local_f8;
    param_1[2] = uStack_110;
    param_1[3] = uStack_108;
    *param_1 = CONCAT71(uStack_11f,6);
    param_1[1] = uStack_118;
    return param_1;
  }
                    /* try { // try from 005327e3 to 005327fd has its CatchHandler @ 005328c4 */
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(auStack_138,param_2,param_3,&DAT_0019fb00,0xc);
                    /* try { // try from 00532808 to 00532820 has its CatchHandler @ 005328c9 */
  _ZN3std2fs8metadata17h4d9fc7ae25563c19E(local_d0,local_130,local_128);
  iVar1 = local_d0[0];
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haf24c6c708ccc154E
            (local_d0);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_138);
  if (iVar1 == 2) {
                    /* try { // try from 0053282f to 00532849 has its CatchHandler @ 005328c4 */
    _ZN3std4path4Path4join17hb97e165d6abf39bfE(auStack_138,param_2,param_3,&DAT_0019fb0c,10);
                    /* try { // try from 00532854 to 0053286c has its CatchHandler @ 005328c2 */
    _ZN3std2fs8metadata17h4d9fc7ae25563c19E(local_d0,local_130,local_128);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haf24c6c708ccc154E
              (local_d0);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_138);
    if (local_d0[0] == 2) {
      param_1[1] = 0x8000000000000001;
      goto LAB_005328a3;
    }
  }
  param_1[1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 1000000000;
LAB_005328a3:
  *(undefined *)param_1 = 0xd;
  _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17head773e43869367fE(&local_120);
  return param_1;
}