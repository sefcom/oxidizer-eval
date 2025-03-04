long _ZN7uu_tail10tail_stdin17h2faea1a609e9111aE
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char cStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  _ZN7uu_tail5paths5Input7resolve17h81e1f38162942b9dE(&local_40,param_3);
  if (CONCAT44(uStack_3c,local_40) == -0x8000000000000000) {
    _ZN7uu_tail5paths13HeaderPrinter11print_input17hd83f77d6875adb59E(param_2,param_3);
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4e7e0dc8796ce058E
              (&local_b8,0x2000,uVar2);
                    /* try { // try from 00200957 to 00200961 has its CatchHandler @ 00200ad3 */
    lVar3 = _ZN7uu_tail14unbounded_tail17h0ff524f5b27707eaE(&local_b8,param_1);
    if (lVar3 != 0) {
      _ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17hf4f586446f1cde67E
                (&local_b8);
      return lVar3;
    }
    uVar2 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_88 = local_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc4e768c36fc58529E(&local_88);
    lVar3 = _ZN7uu_tail6follow5watch8Observer9add_stdin17h52ffe74598bd409cE
                      (param_4,uVar2,uVar1,uVar4,
                       &
                       PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17hf4f586446f1cde67E_002bb9d0
                       ,1);
    if (lVar3 == 0) {
      return 0;
    }
    return lVar3;
  }
  local_c8 = local_30;
  local_d8 = local_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
                    /* try { // try from 0020099a to 002009a4 has its CatchHandler @ 00200b08 */
  _ZN9same_file6Handle5stdin17hcbeef53980d87d0eE(&local_b8);
  if (cStack_a4 == '\x02') {
    uVar2 = 0;
  }
  else {
    local_88 = local_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
                    /* try { // try from 002009c5 to 00200a06 has its CatchHandler @ 00200ae8 */
    uVar2 = _ZN9same_file6Handle11as_file_mut17h942b877c8aa1743bE(&local_88);
    local_50 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                         (uVar2,2,0);
    uVar2 = 0;
    if (local_50._0_8_ == 0) {
      uVar2 = local_50._8_8_;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h93858c9ebe12dc82E
              (local_50);
                    /* try { // try from 00200a07 to 00200a10 has its CatchHandler @ 00200ace */
    _ZN4core3ptr38drop_in_place_LT_same_file__Handle_GT_17h3c7dcb0c2c6f5816E(&local_88);
    if (cStack_a4 != '\x02') goto LAB_00200a22;
  }
                    /* try { // try from 00200a18 to 00200a40 has its CatchHandler @ 00200b08 */
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_same_file__Handle_C_std__io__error__Error_GT__GT_17h499404730bbf963dE
            (&local_b8);
LAB_00200a22:
  lVar3 = _ZN7uu_tail9tail_file17he6a88cf1ecd2d2b4E
                    (param_1,param_2,param_3,CONCAT44(uStack_cc,uStack_d0),local_c8,param_4,uVar2);
  if (lVar3 == 0) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_d8);
    return 0;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd68403fe0abd735bE(&local_d8);
  return lVar3;
}