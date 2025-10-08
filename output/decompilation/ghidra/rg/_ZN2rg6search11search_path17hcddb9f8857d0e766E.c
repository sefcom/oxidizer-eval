void _ZN2rg6search11search_path17hcddb9f8857d0e766E
               (long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5
               ,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined auVar4 [12];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  undefined local_160 [80];
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  int local_80;
  undefined4 local_7c;
  long local_40;
  
  lVar1 = 0;
  if (*param_4 != 0) {
    lVar1 = *param_4 + -1;
  }
  local_1e0 = param_2;
  if (lVar1 == 0) {
    _ZN12grep_printer8standard17Standard_LT_W_GT_14sink_with_path17h5d522d78077ff9a9E
              (local_160,param_4,&local_1e0,param_5,param_6);
                    /* try { // try from 0035807c to 0035808f has its CatchHandler @ 003582ae */
    auVar4 = _ZN13grep_searcher8searcher8Searcher11search_path17ha6aa29b536717390E
                       (param_3,&local_1e0,param_5,param_6,local_160);
    if (auVar4._0_8_ == 0) {
      uVar2 = auVar4._8_4_;
      if (local_80 != 1000000000) {
        local_1a8 = local_88;
        local_1b8 = local_98;
        lStack_1b0 = lStack_90;
        local_1c8 = local_a8;
        lStack_1c0 = lStack_a0;
        local_1d8 = local_b8;
        uStack_1d0 = lStack_b0;
        uVar2 = local_7c;
      }
      param_1[6] = local_1a8;
      param_1[4] = local_1b8;
      param_1[5] = lStack_1b0;
      param_1[2] = local_1c8;
      param_1[3] = lStack_1c0;
      *(undefined4 *)param_1 = (undefined4)local_1d8;
      *(undefined4 *)((long)param_1 + 4) = local_1d8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1d0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1d0._4_4_;
      *(int *)(param_1 + 7) = local_80;
      *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
      *(bool *)(param_1 + 8) = local_40 != 0;
    }
    else {
      *param_1 = auVar4._0_8_;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr126drop_in_place_LT_grep_printer__standard__StandardSink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17hbaea639639eab715E
              (local_160);
  }
  else if (lVar1 == 1) {
    _ZN12grep_printer7summary16Summary_LT_W_GT_14sink_with_path17he035225173f768feE();
                    /* try { // try from 0035802f to 00358042 has its CatchHandler @ 003582c0 */
    auVar4 = _ZN13grep_searcher8searcher8Searcher11search_path17hdcdeda6dd20cf06bE
                       (param_3,&local_1e0,param_5,param_6,local_160);
    if (auVar4._0_8_ == 0) {
      if ((*(char *)(local_c8 + 0x72) == '\x03') || (*(char *)(local_c8 + 0x72) == '\x05')) {
        bVar3 = local_98 == 0;
      }
      else {
        bVar3 = local_98 != 0;
      }
      uVar2 = auVar4._8_4_;
      if (local_d8 != 1000000000) {
        local_168 = CONCAT44(uStack_dc,local_e0);
        lStack_170 = CONCAT44(uStack_e4,uStack_e8);
        local_178 = local_f0;
        local_188 = local_100;
        lStack_180 = lStack_f8;
        local_198 = local_110;
        uStack_190 = uStack_108;
        uVar2 = uStack_d4;
      }
      param_1[6] = local_168;
      param_1[4] = local_178;
      param_1[5] = lStack_170;
      param_1[2] = local_188;
      param_1[3] = lStack_180;
      *(undefined4 *)param_1 = (undefined4)local_198;
      *(undefined4 *)((long)param_1 + 4) = local_198._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_190;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_190._4_4_;
      *(int *)(param_1 + 7) = local_d8;
      *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
      *(bool *)(param_1 + 8) = bVar3;
    }
    else {
      *param_1 = auVar4._0_8_;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr124drop_in_place_LT_grep_printer__summary__SummarySink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17h43ababb217c3d4a6E
              (local_160);
  }
  else {
    _ZN12grep_printer4json13JSON_LT_W_GT_14sink_with_path17ha46c69d78c81d5a3E
              (local_160,param_4 + 1,&local_1e0,param_5,param_6);
                    /* try { // try from 003580ad to 003580c0 has its CatchHandler @ 0035829c */
    lVar1 = _ZN13grep_searcher8searcher8Searcher11search_path17h2befddfdef6aaf11E
                      (param_3,&local_1e0,param_5,param_6,local_160);
    if (lVar1 == 0) {
      param_1[6] = local_b8;
      param_1[7] = lStack_b0;
      param_1[4] = local_c8;
      param_1[5] = lStack_c0;
      param_1[2] = CONCAT44(uStack_d4,local_d8);
      param_1[3] = lStack_d0;
      *(undefined4 *)param_1 = uStack_e8;
      *(undefined4 *)((long)param_1 + 4) = uStack_e4;
      *(undefined4 *)(param_1 + 1) = local_e0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_dc;
      *(bool *)(param_1 + 8) = local_88 != 0;
    }
    else {
      *param_1 = lVar1;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr118drop_in_place_LT_grep_printer__json__JSONSink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17hb4dc6679c7e10724E
              (local_160);
  }
  return;
}