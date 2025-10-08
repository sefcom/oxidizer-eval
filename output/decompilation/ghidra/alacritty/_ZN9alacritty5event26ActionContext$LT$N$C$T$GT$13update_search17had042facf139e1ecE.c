void _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_13update_search17had042facf139e1ecE
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined auVar3 [16];
  char local_2218;
  char cStack_2217;
  char cStack_2216;
  char cStack_2215;
  char cStack_2214;
  char cStack_2213;
  char cStack_2212;
  char cStack_2211;
  char cStack_2210;
  char cStack_220f;
  char cStack_220e;
  char cStack_220d;
  char cStack_220c;
  char cStack_220b;
  char cStack_220a;
  char cStack_2209;
  undefined local_2208 [488];
  undefined8 local_2020;
  undefined local_1118 [248];
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  lVar2 = _ZN9alacritty5event11SearchState5regex17h987f2ff06a62c5a5E(puVar1);
  if (lVar2 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x40) + 0x1d0) != '\0') {
      _ZN9alacritty7display6window6Window17set_mouse_visible17h0708ccda880bd802E
                (*(long *)(param_1 + 0x30) + 800,0);
    }
    if (*(long *)(lVar2 + 0x10) == 0) {
      _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_18search_reset_state17h60fb25255eb6c066E
                (param_1);
                    /* try { // try from 00554850 to 00554857 has its CatchHandler @ 005548cd */
      _ZN4core3ptr94drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__search__RegexSearch_GT__GT_17h70cc142e910b72fdE
                (puVar1);
      puVar1[1] = 0;
      *puVar1 = 2;
    }
    else {
      (*(code *)
        PTR__ZN18alacritty_terminal4term6search11RegexSearch3new17he62c7dc0d18da29aE_009dfd58)
                (&local_2218,*(undefined8 *)(lVar2 + 8));
      auVar3[0] = -(local_2218 == DAT_001e8640);
      auVar3[1] = -(cStack_2217 == UNK_001e8641);
      auVar3[2] = -(cStack_2216 == UNK_001e8642);
      auVar3[3] = -(cStack_2215 == UNK_001e8643);
      auVar3[4] = -(cStack_2214 == UNK_001e8644);
      auVar3[5] = -(cStack_2213 == UNK_001e8645);
      auVar3[6] = -(cStack_2212 == UNK_001e8646);
      auVar3[7] = -(cStack_2211 == UNK_001e8647);
      auVar3[8] = -(cStack_2210 == UNK_001e8648);
      auVar3[9] = -(cStack_220f == UNK_001e8649);
      auVar3[10] = -(cStack_220e == UNK_001e864a);
      auVar3[0xb] = -(cStack_220d == UNK_001e864b);
      auVar3[0xc] = -(cStack_220c == UNK_001e864c);
      auVar3[0xd] = -(cStack_220b == UNK_001e864d);
      auVar3[0xe] = -(cStack_220a == UNK_001e864e);
      auVar3[0xf] = -(cStack_2209 == UNK_001e864f);
      if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        _ZN4core3ptr163drop_in_place_LT_core__result__Result_LT_alacritty_terminal__term__search__RegexSearch_C_alloc__boxed__Box_LT_regex_automata__hybrid__error__BuildError_GT__GT__GT_17hd27b4184502a0baeE
                  (&local_2218);
      }
      else {
        (*(code *)PTR_memcpy_009de0b0)(local_1118,local_2208,0x10f0);
      }
                    /* try { // try from 00554881 to 00554888 has its CatchHandler @ 005548e4 */
      _ZN4core3ptr94drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__search__RegexSearch_GT__GT_17h70cc142e910b72fdE
                (puVar1);
      *puVar1 = CONCAT17(cStack_2211,
                         CONCAT16(cStack_2212,
                                  CONCAT15(cStack_2213,
                                           CONCAT14(cStack_2214,
                                                    CONCAT13(cStack_2215,
                                                             CONCAT12(cStack_2216,
                                                                      CONCAT11(cStack_2217,
                                                                               local_2218)))))));
      puVar1[1] = CONCAT17(cStack_2209,
                           CONCAT16(cStack_220a,
                                    CONCAT15(cStack_220b,
                                             CONCAT14(cStack_220c,
                                                      CONCAT13(cStack_220d,
                                                               CONCAT12(cStack_220e,
                                                                        CONCAT11(cStack_220f,
                                                                                 cStack_2210)))))));
      (*(code *)PTR_memcpy_009de0b0)(puVar1 + 2,local_1118,0x10f0);
      _ZN9alacritty5event26ActionContext_LT_N_C_T_GT_10goto_match17h27bd0aa40a0316cfE(param_1,1);
    }
    **(undefined **)(param_1 + 0x78) = 1;
  }
  return;
}