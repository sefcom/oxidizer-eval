undefined8 * _ZN4just7signals7Signals3new17he7a9f7e370667484E(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int __fd;
  undefined **local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined local_b0 [152];
  
  uVar3 = (*(code *)PTR__ZN3nix6unistd4pipe17ha88edbfd9369bc9eE_00566cd8)();
  __fd = (int)uVar3;
  if (__fd == -1) {
    *(undefined *)param_1 = 0x2d;
    *(undefined8 *)((long)param_1 + 4) = 0x2ffffffff;
    *(int *)((long)param_1 + 0xc) = (int)(uVar3 >> 0x20);
  }
  else {
    iVar2 = _ZN4core4sync6atomic23atomic_compare_exchange17h011a5b8c8280061cE(uVar3 >> 0x20);
    if (iVar2 != 0) {
      local_208 = &PTR_DAT_00530fc8;
      local_200 = 1;
      local_1f8 = 8;
      local_1f0 = 0;
      uStack_1e8 = 0;
                    /* try { // try from 0038b312 to 0038b321 has its CatchHandler @ 0038b326 */
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00565d88)
                (&local_208,&PTR_DAT_00530fd8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 0038b161 to 0038b169 has its CatchHandler @ 0038b326 */
    (*(code *)PTR__ZN3nix3sys6signal6SigSet5empty17h8c6cb2d0385ffbcaE_00566ce0)(&local_208);
    _ZN3nix3sys6signal9SigAction3new17h0121b4983f47f7b3E(local_b0,&local_208);
                    /* try { // try from 0038b17d to 0038b227 has its CatchHandler @ 0038b324 */
    (*(code *)PTR__ZN3nix3sys6signal9sigaction17h1579c992c8c24378E_00566ce8)(&local_208,1,local_b0);
    if ((int)local_208 == 1) {
      uVar4 = 0x10000002e;
    }
    else {
      (*(code *)PTR__ZN3nix3sys6signal9sigaction17h1579c992c8c24378E_00566ce8)
                (&local_208,2,local_b0);
      if (((ulong)local_208 & 1) == 0) {
        (*(code *)PTR__ZN3nix3sys6signal9sigaction17h1579c992c8c24378E_00566ce8)
                  (&local_208,3,local_b0);
        if (((ulong)local_208 & 1) == 0) {
          (*(code *)PTR__ZN3nix3sys6signal9sigaction17h1579c992c8c24378E_00566ce8)
                    (&local_208,0xf,local_b0);
          if (((ulong)local_208 & 1) == 0) {
            *(int *)((long)param_1 + 4) = __fd;
            *(undefined *)param_1 = 0x38;
            return param_1;
          }
          uVar4 = 0xf0000002e;
        }
        else {
          uVar4 = 0x30000002e;
        }
      }
      else {
        uVar4 = 0x20000002e;
      }
    }
    local_168 = local_108;
    uStack_160 = uStack_100;
    local_158 = local_f8;
    uStack_150 = uStack_f0;
    local_148 = local_e8;
    uStack_140 = uStack_e0;
    local_138 = local_d8;
    uStack_130 = uStack_d0;
    local_128 = local_c8;
    uStack_120 = uStack_c0;
    local_118 = local_b8;
    param_1[0xc] = local_b8;
    param_1[10] = local_c8;
    param_1[0xb] = uStack_c0;
    param_1[8] = local_d8;
    param_1[9] = uStack_d0;
    param_1[6] = local_e8;
    param_1[7] = uStack_e0;
    param_1[4] = local_f8;
    param_1[5] = uStack_f0;
    param_1[2] = local_108;
    param_1[3] = uStack_100;
    *param_1 = uVar4;
    param_1[1] = (ulong)local_208 & 0xffffffff00000000 | 2;
    _ZN4core3ptr48drop_in_place_LT_std__os__fd__owned__OwnedFd_GT_17hf2ebce843f0e980cE(__fd);
  }
  return param_1;
}