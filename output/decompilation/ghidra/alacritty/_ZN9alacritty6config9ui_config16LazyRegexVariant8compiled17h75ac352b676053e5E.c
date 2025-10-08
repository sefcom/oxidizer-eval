long * _ZN9alacritty6config9ui_config16LazyRegexVariant8compiled17h75ac352b676053e5E(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_22b0;
  long local_22a8;
  long lStack_22a0;
  long local_2298;
  undefined8 *local_2290;
  code *local_2288;
  char *local_2280;
  undefined8 local_2278;
  char *local_2270;
  undefined8 local_2268;
  undefined8 local_2260;
  undefined **local_2258;
  undefined8 local_2250;
  undefined8 **local_2248;
  undefined8 local_2240;
  undefined8 local_2238;
  char local_2228;
  char cStack_2227;
  char cStack_2226;
  char cStack_2225;
  char cStack_2224;
  char cStack_2223;
  char cStack_2222;
  char cStack_2221;
  char cStack_2220;
  char cStack_221f;
  char cStack_221e;
  char cStack_221d;
  char cStack_221c;
  char cStack_221b;
  char cStack_221a;
  char cStack_2219;
  undefined8 local_2218;
  undefined8 local_2020;
  undefined local_1128 [264];
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
  plVar3 = (long *)0x0;
  plVar1 = (long *)(*param_1 + -0x7fffffffffffffff);
  if (-0x7fffffffffffffff < *param_1) {
    plVar1 = plVar3;
  }
  if (plVar1 == (long *)0x0) {
    plVar3 = (long *)param_1[3];
  }
  else if (plVar1 == (long *)&DAT_00000001) {
    local_2298 = param_1[3];
    local_22a8 = param_1[1];
    lStack_22a0 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
                    /* try { // try from 00538428 to 00538435 has its CatchHandler @ 00538605 */
    (*(code *)PTR__ZN18alacritty_terminal4term6search11RegexSearch3new17he62c7dc0d18da29aE_009dfd58)
              (&local_2228,lStack_22a0,local_2298);
    auVar5[0] = -(local_2228 == DAT_001e8640);
    auVar5[1] = -(cStack_2227 == UNK_001e8641);
    auVar5[2] = -(cStack_2226 == UNK_001e8642);
    auVar5[3] = -(cStack_2225 == UNK_001e8643);
    auVar5[4] = -(cStack_2224 == UNK_001e8644);
    auVar5[5] = -(cStack_2223 == UNK_001e8645);
    auVar5[6] = -(cStack_2222 == UNK_001e8646);
    auVar5[7] = -(cStack_2221 == UNK_001e8647);
    auVar5[8] = -(cStack_2220 == UNK_001e8648);
    auVar5[9] = -(cStack_221f == UNK_001e8649);
    auVar5[10] = -(cStack_221e == UNK_001e864a);
    auVar5[0xb] = -(cStack_221d == UNK_001e864b);
    auVar5[0xc] = -(cStack_221c == UNK_001e864c);
    auVar5[0xd] = -(cStack_221b == UNK_001e864d);
    auVar5[0xe] = -(cStack_221a == UNK_001e864e);
    auVar5[0xf] = -(cStack_2219 == UNK_001e864f);
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        == 0xffff) {
      local_22b0 = local_2218;
                    /* try { // try from 00538463 to 0053850c has its CatchHandler @ 0053861a */
      lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
      if (lVar2 != 0) {
        local_2290 = &local_22b0;
        local_2288 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf018bb3e98c684f0E
        ;
        local_2258 = &PTR_DAT_00981b40;
        local_2250 = 1;
        local_2238 = 0;
        local_2248 = &local_2290;
        local_2240 = 1;
        local_2260 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                               (&PTR_s_alacritty_src_config_ui_config_r_00981b68);
        local_2280 = "alacritty::config::ui_config";
        local_2278 = 0x1c;
        local_2270 = "alacritty::config::ui_config";
        local_2268 = 0x1c;
        _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_2258,1,&local_2280);
      }
                    /* try { // try from 0053850d to 00538518 has its CatchHandler @ 005385b9 */
      _ZN4core3ptr67drop_in_place_LT_alacritty__config__ui_config__LazyRegexVariant_GT_17he7d1beec7e24c0bcE
                (param_1);
      *param_1 = -0x7fffffffffffffff;
      param_1[3] = local_2298;
      param_1[1] = local_22a8;
      param_1[2] = lStack_22a0;
      _ZN4core3ptr87drop_in_place_LT_alloc__boxed__Box_LT_regex_automata__hybrid__error__BuildError_GT__GT_17hfe56c3e1d4cc11daE
                (local_22b0);
      plVar3 = (long *)0x0;
    }
    else {
      (*(code *)PTR_memcpy_009de0b0)(local_1128,&local_2228,0x1100);
                    /* try { // try from 00538561 to 00538568 has its CatchHandler @ 00538603 */
      plVar3 = (long *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h5bdfb2470c6173f5E(local_1128);
                    /* try { // try from 00538569 to 00538573 has its CatchHandler @ 005385e3 */
      _ZN4core3ptr67drop_in_place_LT_alacritty__config__ui_config__LazyRegexVariant_GT_17he7d1beec7e24c0bcE
                (param_1);
      *param_1 = local_22a8;
      param_1[1] = lStack_22a0;
      param_1[2] = local_2298;
      param_1[3] = (long)plVar3;
      if (*param_1 < -0x7ffffffffffffffe) {
        uVar4 = (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_009de0a0)
                          ("internal error: entered unreachable code",0x28,
                           &PTR_s_alacritty_src_config_ui_config_r_00981b50);
                    /* catch() { ... } // from try @ 0053850d with catch @ 005385b9 */
        *param_1 = -0x7fffffffffffffff;
        plVar3[2] = local_2298;
        *plVar3 = local_22a8;
        plVar3[1] = lStack_22a0;
        _ZN4core3ptr87drop_in_place_LT_alloc__boxed__Box_LT_regex_automata__hybrid__error__BuildError_GT__GT_17hfe56c3e1d4cc11daE
                  (local_22b0);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar4);
      }
    }
  }
  return plVar3;
}