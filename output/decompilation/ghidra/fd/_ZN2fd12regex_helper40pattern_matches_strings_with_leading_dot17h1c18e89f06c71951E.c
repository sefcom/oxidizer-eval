uint _ZN2fd12regex_helper40pattern_matches_strings_with_leading_dot17h1c18e89f06c71951E
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined local_208;
  undefined4 uStack_207;
  undefined2 uStack_203;
  undefined uStack_201;
  uint uStack_200;
  undefined2 uStack_1fc;
  undefined uStack_1fa;
  undefined uStack_1f9;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined local_108 [240];
  
  uStack_200 = 0xfa;
  uStack_1fc = 0;
  uStack_1fa = 0;
  uStack_207 = 0x2020202;
  uStack_203 = 0x202;
  uStack_201 = 10;
  local_208 = 0;
  (*(code *)PTR__ZN12regex_syntax6parser13ParserBuilder5build17h4f1d8f33c91068d9E_00540988)
            (local_108,&local_208);
                    /* try { // try from 002f7832 to 002f7887 has its CatchHandler @ 002f7938 */
  (*(code *)PTR__ZN12regex_syntax6parser6Parser5parse17h5efb678b74ee433bE_00540990)
            (&local_208,local_108,param_1,param_2);
  if (CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT41(uStack_207,local_208))) ==
      -0x7fffffffffffffff) {
    local_168 = local_1e0;
    uStack_164 = uStack_1dc;
    uStack_160 = uStack_1d8;
    uStack_15c = uStack_1d4;
    local_178 = uStack_1f0;
    uStack_174 = uStack_1ec;
    uStack_170 = uStack_1e8;
    uStack_16c = uStack_1e4;
    local_188 = CONCAT44(CONCAT13(uStack_1f9,CONCAT12(uStack_1fa,uStack_1fc)),uStack_200);
    uStack_180 = CONCAT44(uStack_1f4,uStack_1f8);
    uVar1 = _ZN2fd12regex_helper40pattern_matches_strings_with_leading_dot28__u7b__u7b_closure_u7d__u7d_17h6819c55d63e255fbE
                      (&local_188);
  }
  else {
    local_188 = CONCAT17(uStack_201,CONCAT25(uStack_203,CONCAT41(uStack_207,local_208)));
    uStack_180 = CONCAT17(uStack_1f9,CONCAT16(uStack_1fa,CONCAT24(uStack_1fc,uStack_200)));
    local_118 = local_198;
    uStack_110 = uStack_190;
    local_128 = local_1a8;
    uStack_120 = uStack_1a0;
    local_138 = local_1b8;
    uStack_130 = uStack_1b0;
    local_148 = local_1c8;
    uStack_144 = uStack_1c4;
    uStack_140 = uStack_1c0;
    uStack_13c = uStack_1bc;
    local_158 = uStack_1d8;
    uStack_154 = uStack_1d4;
    uStack_150 = uStack_1d0;
    uStack_14c = uStack_1cc;
    local_168 = uStack_1e8;
    uStack_164 = uStack_1e4;
    uStack_160 = local_1e0;
    uStack_15c = uStack_1dc;
    local_178 = uStack_1f8;
    uStack_174 = uStack_1f4;
    uStack_170 = uStack_1f0;
    uStack_16c = uStack_1ec;
    if (local_188 == -0x7fffffffffffffff) {
      uVar1 = uStack_200 & 0xff;
    }
    else {
      _ZN4core3ptr82drop_in_place_LT_core__result__Result_LT_bool_C_regex_syntax__error__Error_GT__GT_17h980d190192d3b1f2E
                (&local_188);
      uVar1 = 0;
    }
  }
  _ZN4core3ptr49drop_in_place_LT_regex_syntax__parser__Parser_GT_17h264258e692885e03E(local_108);
  return uVar1 & 0xffffff01;
}