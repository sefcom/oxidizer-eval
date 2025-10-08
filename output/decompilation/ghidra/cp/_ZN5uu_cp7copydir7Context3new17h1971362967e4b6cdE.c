void _ZN5uu_cp7copydir7Context3new17h1971362967e4b6cdE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  uVar8 = 0x8000000000000000;
  (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_00267988)(&local_e0);
  uVar5 = uStack_d0;
  uVar4 = local_d8;
  uVar2 = CONCAT44(uStack_dc,local_e0);
                    /* try { // try from 00198bb7 to 00198bc6 has its CatchHandler @ 00198cf6 */
  _ZN3std4path4Path4join17h10fbe6df042abedeE(&local_110,local_d8,uStack_d0,param_2,param_3);
                    /* try { // try from 00198bc7 to 00198cf3 has its CatchHandler @ 00198d0b */
  _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_e0,param_4,param_5);
  iVar3 = local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
            (&local_e0);
  if (iVar3 != 2) {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002674c0)
              (&local_e0,param_2,param_3);
    if (local_e0 == 1) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002679b0)
                (&PTR_s_src_uu_cp_src_copydir_rs_0025e5e8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hc600a80333ca26e9E
                      (local_d8,uStack_d0,"/.",2);
    if (cVar6 == '\0') {
      lVar7 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_002678a8)
                        (local_108,uStack_100);
      if (lVar7 != 0) {
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00267978)
                  (&local_e0,lVar7);
        uVar8 = CONCAT44(uStack_dc,local_e0);
        local_f8 = local_d8;
        uStack_f0 = uStack_d0;
      }
      param_1[2] = uVar5;
      *param_1 = uVar2;
      param_1[1] = uVar4;
      param_1[3] = uVar8;
      *(undefined4 *)(param_1 + 4) = (undefined4)local_f8;
      *(undefined4 *)((long)param_1 + 0x24) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_f0;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_f0._4_4_;
      param_1[6] = param_4;
      param_1[7] = param_5;
      param_1[8] = param_2;
      param_1[9] = param_3;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_110);
      return;
    }
  }
  param_1[2] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  param_1[3] = local_110;
  param_1[4] = local_108;
  param_1[5] = uStack_100;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_2;
  param_1[9] = param_3;
  return;
}