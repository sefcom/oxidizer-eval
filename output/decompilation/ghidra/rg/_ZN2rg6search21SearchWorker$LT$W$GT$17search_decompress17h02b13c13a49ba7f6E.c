void _ZN2rg6search21SearchWorker_LT_W_GT_17search_decompress17h02b13c13a49ba7f6E
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_c8 [2];
  undefined4 uStack_b8;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int local_60 [5];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  _ZN8grep_cli10decompress26DecompressionReaderBuilder5build17hb91cdb578e206b05E
            (&local_a8,param_2 + 0x2a0);
  if (local_a8 == 3) {
    uStack_b8 = uStack_94;
    local_a8 = iStack_a0;
    uStack_a4 = uStack_9c;
    iStack_a0 = uStack_98;
    uStack_9c = uStack_94;
    lVar1 = (*(code *)
              PTR__ZN8grep_cli7process110__LT_impl_u20_core__convert__From_LT_grep_cli__process__CommandError_GT__u20_for_u20_std__io__error__Error_GT_4from17h51fc9fd89019e605E_00527298
            )(&local_a8);
    *param_1 = lVar1;
    *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
  }
  else {
    uStack_b8 = uStack_94;
    local_40 = uStack_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uStack_34 = uStack_7c;
    local_30 = local_78;
    uStack_2c = uStack_74;
    iStack_28 = iStack_70;
    uStack_24 = uStack_6c;
    uStack_4c = uStack_94;
    uStack_48 = uStack_90;
    uStack_44 = uStack_8c;
    local_60[0] = local_a8;
                    /* try { // try from 00357d55 to 00357d70 has its CatchHandler @ 00357e13 */
    _ZN2rg6search13search_reader17h1373a3ec018458d5E
              (&local_a8,param_2 + 0x2e0,param_2,param_2 + 0x108,param_3,param_4,local_60);
                    /* try { // try from 00357d71 to 00357d7b has its CatchHandler @ 00357e04 */
    local_c8[0] = (*(code *)
                    PTR__ZN8grep_cli10decompress19DecompressionReader5close17ha37792dd94278c65E_005272a0
                  )(local_60);
    if (iStack_70 == 0x3b9aca01) {
      *param_1 = CONCAT44(uStack_a4,local_a8);
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
                    /* try { // try from 00357d9c to 00357da5 has its CatchHandler @ 00357e02 */
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                (local_c8);
    }
    else if (local_c8[0] == 0) {
      *param_1 = CONCAT44(uStack_a4,local_a8);
      *(int *)(param_1 + 1) = iStack_a0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
      *(undefined4 *)(param_1 + 2) = uStack_98;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
      param_1[3] = CONCAT44(uStack_8c,uStack_90);
      param_1[4] = CONCAT44(uStack_84,uStack_88);
      param_1[5] = CONCAT44(uStack_7c,uStack_80);
      param_1[6] = CONCAT44(uStack_74,local_78);
      *(int *)(param_1 + 7) = iStack_70;
      *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_68,uStack_6c);
      *(undefined4 *)((long)param_1 + 0x44) = local_64;
    }
    else {
      *param_1 = local_c8[0];
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr62drop_in_place_LT_grep_cli__decompress__DecompressionReader_GT_17hc1b515400d04321cE
              (local_60);
  }
  return;
}