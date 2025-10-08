void _ZN2rg6search21SearchWorker_LT_W_GT_19search_preprocessor17h295b0344cca9801bE
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined local_108 [224];
  
  _ZN3std7process7Command3new17hf0673b88a585bfeeE(local_108,param_2 + 0x260);
                    /* try { // try from 003575f2 to 0035767d has its CatchHandler @ 00357845 */
  _ZN3std7process7Command3arg17h12e56d6aa56d7810E(local_108,param_3,param_4);
  _ZN3std2fs4File4open17hbf43b83d6cee906cE(&local_1f8,param_3,param_4);
  if ((int)local_1f8 == 1) {
    lVar1 = CONCAT44(uStack_1ec,uStack_1f0);
  }
  else {
    _ZN3std7process7Command5stdin17hf2e58e20c85050ffE(local_108,3,local_1f8._4_4_);
    (*(code *)PTR__ZN8grep_cli7process20CommandReaderBuilder5build17h096992ea7f6eb603E_00526fd0)
              (&local_1f8,param_2 + 0x328,local_108);
    if ((int)local_1f8 != 2) {
      local_180 = uStack_1e8;
      uStack_178 = local_1e0;
      local_170 = uStack_1d8;
      uStack_168 = uStack_1d0;
      local_160 = (undefined4)uStack_1c8;
      uStack_15c = uStack_1c8._4_4_;
      iStack_158 = iStack_1c0;
      uStack_154 = uStack_1bc;
      local_190 = (int)local_1f8;
      local_18c = local_1f8._4_4_;
                    /* try { // try from 003576dd to 0035771d has its CatchHandler @ 00357836 */
      _ZN2rg6search13search_reader17h64074cc9b87c5257E
                (&local_150,param_2 + 0x2c0,param_2,param_2 + 0x108,param_3,param_4,&local_190);
      if (iStack_118 == 0x3b9aca01) {
        local_1f8 = _ZN2rg6search21SearchWorker_LT_W_GT_19search_preprocessor28__u7b__u7b_closure_u7d__u7d_17h481170515aa8cd57E
                              (local_108,CONCAT44(uStack_14c,local_150));
        iStack_1c0 = 0x3b9aca01;
      }
      else {
        uStack_1b8 = (undefined4)local_110;
        local_1b4 = (undefined4)((ulong)local_110 >> 0x20);
        uStack_1c8 = local_120;
        iStack_1c0 = iStack_118;
        uStack_1bc = uStack_114;
        uStack_1d8 = local_130;
        uStack_1d0 = uStack_128;
        uStack_1e8 = local_140;
        local_1e0 = uStack_138;
        local_1f8 = CONCAT44(uStack_14c,local_150);
        uStack_1f0 = uStack_148;
        uStack_1ec = uStack_144;
      }
                    /* try { // try from 0035776e to 00357778 has its CatchHandler @ 00357827 */
      local_1a8 = (*(code *)
                    PTR__ZN8grep_cli7process13CommandReader5close17h135975e7dd1c0241E_00527290)
                            (&local_190);
      if (iStack_1c0 == 0x3b9aca01) {
        *param_1 = local_1f8;
        *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
                    /* try { // try from 00357799 to 003577a2 has its CatchHandler @ 00357825 */
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                  (&local_1a8);
      }
      else {
        if (local_1a8 == 0) {
          *param_1 = local_1f8;
          *(undefined4 *)(param_1 + 1) = uStack_1f0;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_1ec;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1e8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_1e8._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_1e0;
          *(undefined4 *)((long)param_1 + 0x1c) = local_1e0._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_1d8;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_1d8._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)uStack_1d0;
          *(undefined4 *)((long)param_1 + 0x2c) = uStack_1d0._4_4_;
          *(undefined4 *)(param_1 + 6) = (undefined4)uStack_1c8;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_1c8._4_4_;
          *(int *)(param_1 + 7) = iStack_1c0;
          *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_1b8,uStack_1bc);
          *(undefined4 *)((long)param_1 + 0x44) = local_1b4;
                    /* try { // try from 0035780c to 00357815 has its CatchHandler @ 00357845 */
          _ZN4core3ptr53drop_in_place_LT_grep_cli__process__CommandReader_GT_17h9848abec419dbb07E
                    (&local_190);
          goto LAB_003577be;
        }
        *param_1 = local_1a8;
        *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
      }
                    /* try { // try from 003577b4 to 003577bd has its CatchHandler @ 00357845 */
      _ZN4core3ptr53drop_in_place_LT_grep_cli__process__CommandReader_GT_17h9848abec419dbb07E
                (&local_190);
      goto LAB_003577be;
    }
    local_198 = local_1e0;
    local_1a8 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1a0 = (undefined4)uStack_1e8;
    uStack_19c = uStack_1e8._4_4_;
    lVar1 = _ZN2rg6search21SearchWorker_LT_W_GT_19search_preprocessor28__u7b__u7b_closure_u7d__u7d_17hacef556950bacdabE
                      (local_108,&local_1a8);
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
LAB_003577be:
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h79c148136f15ad8bE(local_108);
  return;
}