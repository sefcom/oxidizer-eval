void _ZN2rg8haystack15HaystackBuilder5build17hbf10e93e3f18e435E
               (undefined8 *param_1,undefined param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  uint local_1f0;
  undefined4 local_1ec;
  undefined local_1e8 [16];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined local_168;
  undefined7 uStack_167;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined **local_130;
  code *local_128;
  uint *local_120;
  code *local_118;
  undefined ***local_110;
  code *local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  local_1d8 = *param_3;
  uStack_1d4 = param_3[1];
  uStack_1d0 = param_3[2];
  uStack_1cc = param_3[3];
  local_1c8 = param_3[4];
  uStack_1c4 = param_3[5];
  uStack_1c0 = param_3[6];
  uStack_1bc = param_3[7];
  local_1b8 = param_3[8];
  uStack_1b4 = param_3[9];
  uStack_1b0 = param_3[10];
  uStack_1ac = param_3[0xb];
  local_1a8 = *(ulong *)(param_3 + 0xc);
  uStack_1a0 = *(undefined8 *)(param_3 + 0xe);
  local_178 = *(undefined8 *)(param_3 + 0x18);
  uStack_170 = *(undefined8 *)(param_3 + 0x1a);
  local_188 = *(undefined8 *)(param_3 + 0x14);
  uStack_180 = *(undefined8 *)(param_3 + 0x16);
  local_198 = param_3[0x10];
  uStack_194 = param_3[0x11];
  uStack_190 = param_3[0x12];
  uStack_18c = param_3[0x13];
  local_168 = param_2;
  if ((int)uStack_1a0 != 9) {
    local_1e8._0_8_ = &uStack_1a0;
                    /* try { // try from 00355f0e to 00355f43 has its CatchHandler @ 0035631b */
    cVar2 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
    if ((cVar2 != '\0') &&
       (cVar2 = _ZN2rg8messages15ignore_messages17hf16747a1cdd9c08bE(), cVar2 != '\0')) {
      local_d0 = (undefined **)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)()
      ;
      uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)(&local_d0);
      local_d0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 00355f56 to 00355f63 has its CatchHandler @ 003562f7 */
      local_158 = (char *)(*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)
                                    (&local_d0);
      local_d0 = &PTR_s_rg__004e99c8;
      local_c8 = 1;
      local_c0 = (undefined ***)&DAT_00000008;
      local_b8 = 0;
      uStack_b0 = 0;
                    /* try { // try from 00355fa1 to 0035606a has its CatchHandler @ 003562fc */
      local_130 = (undefined **)_ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_158,&local_d0)
      ;
      if (local_130 == (undefined **)0x0) {
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                  (&local_130);
        local_130 = (undefined **)local_1e8;
        local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3fb75ff7bec6bbbbE;
        local_d0 = (undefined **)&DAT_004ea800;
        local_c8 = 2;
        uStack_b0 = 0;
        local_b8 = 1;
        local_c0 = &local_130;
        local_100 = (undefined **)
                    _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_158,&local_d0);
        if (local_100 == (undefined **)0x0) {
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                    (&local_100);
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(uVar3);
                    /* try { // try from 00356073 to 00356077 has its CatchHandler @ 003562bc */
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                    (local_158);
          goto LAB_00356078;
        }
        local_d0 = local_100;
        cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_100);
                    /* try { // try from 003562b4 to 003562b9 has its CatchHandler @ 003562be */
        (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
      }
      else {
        local_d0 = local_130;
        cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_130);
                    /* try { // try from 00356292 to 00356297 has its CatchHandler @ 003562e2 */
        (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
LAB_00356078:
                    /* try { // try from 00356078 to 0035615b has its CatchHandler @ 0035631b */
  cVar2 = _ZN2rg8haystack8Haystack11is_explicit17h64cc0399f7646269E(&local_1d8);
  if ((cVar2 == '\0') &&
     (cVar2 = _ZN2rg8haystack8Haystack7is_file17hc42aab8fa6a57301E
                        (CONCAT44(uStack_1d4,local_1d8),local_1a8 & 0xffffffff), cVar2 == '\0')) {
    cVar2 = _ZN2rg8haystack8Haystack6is_dir17hd6f752fd2c8f0e5cE(&local_1d8);
    if (cVar2 == '\0') {
      uVar4 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
      if (3 < uVar4) {
        local_1e8 = (*(code *)PTR__ZN6ignore4walk8DirEntry4path17he339916189ce99eaE_00526f50)
                              (&local_1d8);
        bVar5 = CONCAT44(uStack_1d4,local_1d8) != 0;
        if (bVar5) {
          local_1ec = (undefined4)local_1a8;
        }
        local_1f0 = (uint)bVar5;
        (*(code *)PTR__ZN6ignore4walk8DirEntry8metadata17hc400968e33669a36E_00527250)
                  (&local_d0,&local_1d8);
        local_130 = (undefined **)local_1e8;
        local_128 = (code *)
                    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00526dd0
        ;
        local_120 = &local_1f0;
        local_118 = 
        _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h24ef3ca1a42baf44E
        ;
        local_108 = 
        _ZN70__LT_core__result__Result_LT_T_C_E_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h55bf0728ee4a499bE
        ;
        local_100 = &PTR_DAT_004eb718;
        local_f8 = 3;
        local_e0 = 0;
        local_f0 = &local_130;
        local_e8 = 3;
        local_110 = &local_d0;
                    /* try { // try from 003561ee to 0035624b has its CatchHandler @ 003562d0 */
        local_138 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                              (&PTR_s_crates_core_haystack_rs_004eb748);
        local_158 = "rg::haystack: binary detection: ";
        local_150 = 0xc;
        local_148 = "rg::haystack: binary detection: ";
        local_140 = 0xc;
        _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_100,4,&local_158);
                    /* try { // try from 0035624c to 00356258 has its CatchHandler @ 0035631b */
        _ZN4core3ptr82drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_ignore__Error_GT__GT_17h4c49ce120ff9d2c9E
                  (&local_d0);
      }
    }
    *param_1 = 3;
    _ZN4core3ptr43drop_in_place_LT_rg__haystack__Haystack_GT_17h5f0cb9c54e389b81E(&local_1d8);
  }
  else {
    param_1[0xe] = CONCAT71(uStack_167,local_168);
    param_1[0xc] = local_178;
    param_1[0xd] = uStack_170;
    param_1[10] = local_188;
    param_1[0xb] = uStack_180;
    param_1[8] = CONCAT44(uStack_194,local_198);
    param_1[9] = CONCAT44(uStack_18c,uStack_190);
    param_1[6] = local_1a8;
    param_1[7] = uStack_1a0;
    param_1[4] = CONCAT44(uStack_1b4,local_1b8);
    param_1[5] = CONCAT44(uStack_1ac,uStack_1b0);
    param_1[2] = CONCAT44(uStack_1c4,local_1c8);
    param_1[3] = CONCAT44(uStack_1bc,uStack_1c0);
    *param_1 = CONCAT44(uStack_1d4,local_1d8);
    param_1[1] = CONCAT44(uStack_1cc,uStack_1d0);
  }
  return;
}