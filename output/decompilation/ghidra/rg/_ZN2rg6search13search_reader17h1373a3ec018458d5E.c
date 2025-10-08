void _ZN2rg6search13search_reader17h1373a3ec018458d5E
               (long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5
               ,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined auVar4 [12];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  undefined local_150 [80];
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  int local_70;
  undefined4 local_6c;
  long local_30;
  
  lVar1 = 0;
  if (*param_4 != 0) {
    lVar1 = *param_4 + -1;
  }
  local_1d0 = param_2;
  if (lVar1 == 0) {
    _ZN12grep_printer8standard17Standard_LT_W_GT_14sink_with_path17h8152d58051ad7157E
              (local_150,param_4,&local_1d0,param_5,param_6);
                    /* try { // try from 00358699 to 003586ae has its CatchHandler @ 003588cc */
    auVar4 = _ZN13grep_searcher8searcher8Searcher13search_reader17ha689e981d947947aE
                       (param_3,&local_1d0,&stack0x00000008,local_150);
    if (auVar4._0_8_ == 0) {
      uVar2 = auVar4._8_4_;
      if (local_70 != 1000000000) {
        local_198 = local_78;
        local_1a8 = local_88;
        lStack_1a0 = lStack_80;
        local_1b8 = local_98;
        lStack_1b0 = lStack_90;
        local_1c8 = local_a8;
        uStack_1c0 = lStack_a0;
        uVar2 = local_6c;
      }
      param_1[6] = local_198;
      param_1[4] = local_1a8;
      param_1[5] = lStack_1a0;
      param_1[2] = local_1b8;
      param_1[3] = lStack_1b0;
      *(undefined4 *)param_1 = (undefined4)local_1c8;
      *(undefined4 *)((long)param_1 + 4) = local_1c8._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1c0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1c0._4_4_;
      *(int *)(param_1 + 7) = local_70;
      *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
      *(bool *)(param_1 + 8) = local_30 != 0;
    }
    else {
      *param_1 = auVar4._0_8_;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr126drop_in_place_LT_grep_printer__standard__StandardSink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17hbaea639639eab715E
              (local_150);
  }
  else if (lVar1 == 1) {
    _ZN12grep_printer7summary16Summary_LT_W_GT_14sink_with_path17hfb849d1c20c4f3d2E();
                    /* try { // try from 0035864a to 0035865f has its CatchHandler @ 003588de */
    auVar4 = _ZN13grep_searcher8searcher8Searcher13search_reader17h70421e5c5e1d7301E
                       (param_3,&local_1d0,&stack0x00000008,local_150);
    if (auVar4._0_8_ == 0) {
      if ((*(char *)(local_b8 + 0x72) == '\x03') || (*(char *)(local_b8 + 0x72) == '\x05')) {
        bVar3 = local_88 == 0;
      }
      else {
        bVar3 = local_88 != 0;
      }
      uVar2 = auVar4._8_4_;
      if (local_c8 != 1000000000) {
        local_158 = CONCAT44(uStack_cc,local_d0);
        lStack_160 = CONCAT44(uStack_d4,uStack_d8);
        local_168 = local_e0;
        local_178 = local_f0;
        lStack_170 = lStack_e8;
        local_188 = local_100;
        uStack_180 = uStack_f8;
        uVar2 = uStack_c4;
      }
      param_1[6] = local_158;
      param_1[4] = local_168;
      param_1[5] = lStack_160;
      param_1[2] = local_178;
      param_1[3] = lStack_170;
      *(undefined4 *)param_1 = (undefined4)local_188;
      *(undefined4 *)((long)param_1 + 4) = local_188._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_180;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_180._4_4_;
      *(int *)(param_1 + 7) = local_c8;
      *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
      *(bool *)(param_1 + 8) = bVar3;
    }
    else {
      *param_1 = auVar4._0_8_;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr124drop_in_place_LT_grep_printer__summary__SummarySink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17h43ababb217c3d4a6E
              (local_150);
  }
  else {
    _ZN12grep_printer4json13JSON_LT_W_GT_14sink_with_path17hb29925006a44c88fE
              (local_150,param_4 + 1,&local_1d0,param_5,param_6);
                    /* try { // try from 003586cc to 003586e1 has its CatchHandler @ 003588ba */
    lVar1 = _ZN13grep_searcher8searcher8Searcher13search_reader17hee1d89112413402eE
                      (param_3,&local_1d0,&stack0x00000008,local_150);
    if (lVar1 == 0) {
      param_1[6] = local_a8;
      param_1[7] = lStack_a0;
      param_1[4] = local_b8;
      param_1[5] = lStack_b0;
      param_1[2] = CONCAT44(uStack_c4,local_c8);
      param_1[3] = lStack_c0;
      *(undefined4 *)param_1 = uStack_d8;
      *(undefined4 *)((long)param_1 + 4) = uStack_d4;
      *(undefined4 *)(param_1 + 1) = local_d0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
      *(bool *)(param_1 + 8) = local_78 != 0;
    }
    else {
      *param_1 = lVar1;
      *(undefined4 *)(param_1 + 7) = 0x3b9aca01;
    }
    _ZN4core3ptr118drop_in_place_LT_grep_printer__json__JSONSink_LT__RF__RF_grep_regex__matcher__RegexMatcher_C_termcolor__Buffer_GT__GT_17hb4dc6679c7e10724E
              (local_150);
  }
  return;
}