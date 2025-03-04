undefined8 *
_ZN5uu_du22build_exclude_patterns17h0244be58956798cbE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 **local_268;
  code *local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined4 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined **local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *local_188;
  undefined **local_178;
  char *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_118;
  undefined local_f8 [136];
  undefined local_70 [64];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h953ea969162f50f8E
            (local_f8,param_2,&DAT_0011ceb3,0xc);
  puVar4 = &DAT_0011ceb3;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb780f1080a7373feE
            (&local_2e8,&DAT_0011ceb3,0xc,local_f8);
  if (local_2e8 == (undefined **)0x0) {
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028a650
                      ,0);
    uStack_164 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028a650
                 >> 0x20);
    uStack_160 = 0;
    uStack_15c = 0;
    local_170 = "a Display implementation returned an error unexpectedly";
    local_140 = 0;
    local_178 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17h72c1b05cc1f9fa6cE;
  }
  else {
    local_178 = local_2e8;
    local_170 = uStack_2e0;
    local_140 = local_2b0;
    puVar4 = local_2b8;
    local_158 = (undefined4)local_2c8;
    uStack_154 = local_2c8._4_4_;
    uStack_150 = uStack_2c0;
    uStack_14c = uStack_2bc;
    local_168 = (undefined4)local_2d8;
    uStack_164 = local_2d8._4_4_;
    uStack_160 = (undefined4)uStack_2d0;
    uStack_15c = uStack_2d0._4_4_;
  }
  local_138 = 0;
  local_118 = 0;
                    /* try { // try from 001f2dc0 to 001f2df7 has its CatchHandler @ 001f30e5 */
  local_148 = puVar4;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h953ea969162f50f8E
            (local_f8,param_2,&DAT_0011cebf,7);
  puVar4 = &DAT_0011cebf;
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hb780f1080a7373feE
            (&local_2e8,&DAT_0011cebf,7,local_f8);
  if (local_2e8 == (undefined **)0x0) {
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1e8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028a650
                      ,0);
    uStack_1e4 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_0028a650
                 >> 0x20);
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1f0 = "a Display implementation returned an error unexpectedly";
    local_2b0 = 0;
    local_1f8 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17h72c1b05cc1f9fa6cE;
  }
  else {
    local_1f8 = local_2e8;
    local_1f0 = uStack_2e0;
    puVar4 = local_2b8;
    local_1d8 = (undefined4)local_2c8;
    uStack_1d4 = local_2c8._4_4_;
    uStack_1d0 = uStack_2c0;
    uStack_1cc = uStack_2bc;
    local_1e8 = (undefined4)local_2d8;
    uStack_1e4 = local_2d8._4_4_;
    uStack_1e0 = (undefined4)uStack_2d0;
    uStack_1dc = uStack_2d0._4_4_;
  }
  local_2a0 = 0;
  uStack_298 = 8;
  local_290 = 0;
  local_2a8 = param_1;
  local_1c8 = puVar4;
  local_1c0 = local_2b0;
  _ZN4core4iter6traits8iterator8Iterator5chain17h824cd8d0da99cd57E(local_f8,&local_1f8,&local_178);
  while( true ) {
                    /* try { // try from 001f2ed0 to 001f2ef7 has its CatchHandler @ 001f30f7 */
    _ZN4core4iter8adapters5chain17and_then_or_clear17h7b1f33d6297e46ccE(&local_2e8,local_70);
    _ZN4core6option15Option_LT_T_GT_7or_else17h579344e00d3a2941E(&local_230,&local_2e8,local_f8);
    if (CONCAT44(uStack_22c,local_230) == -0x8000000000000000) {
                    /* try { // try from 001f2fff to 001f300b has its CatchHandler @ 001f30e0 */
      _ZN4core3ptr421drop_in_place_LT_core__iter__adapters__chain__Chain_LT_core__iter__adapters__cloned__Cloned_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__GT__C_core__iter__adapters__flatten__FlatMap_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__C_alloc__vec__Vec_LT_alloc__string__String_GT__C_uu_du__file_as_vec_LT__RF_alloc__string__String_GT__GT__GT__GT_17h744c40be5be13de6E
                (local_f8);
      local_2a8[2] = local_290;
      *local_2a8 = local_2a0;
      local_2a8[1] = uStack_298;
      return local_2a8;
    }
    local_278 = local_220;
    local_288 = local_230;
    uStack_284 = uStack_22c;
    uStack_280 = uStack_228;
    uStack_27c = uStack_224;
                    /* try { // try from 001f2f20 to 001f2ff1 has its CatchHandler @ 001f30fc */
    cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_0011cee3,7);
    if (cVar2 != '\0') {
      local_268 = &local_248;
      local_260 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h8051b657d9275cd0E;
      local_2e8 = &PTR_DAT_00284500;
      uStack_2e0 = (char *)0x2;
      local_2c8 = 0;
      local_2d8 = &local_268;
      uStack_2d0 = 1;
      local_248 = &local_288;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_2e8);
    }
    _ZN6uucore6parser10parse_glob8from_str17h2653254823aa606fE
              (&local_2e8,CONCAT44(uStack_27c,uStack_280),local_278);
    if (local_2e8 == (undefined **)0x8000000000000000) break;
    local_188 = local_2b8;
    local_198 = (undefined4)local_2c8;
    uStack_194 = local_2c8._4_4_;
    uStack_190 = uStack_2c0;
    uStack_18c = uStack_2bc;
    local_1a8 = (undefined4)local_2d8;
    uStack_1a4 = local_2d8._4_4_;
    uStack_1a0 = (undefined4)uStack_2d0;
    uStack_19c = uStack_2d0._4_4_;
    local_1b8 = (undefined4)local_2e8;
    uStack_1b4 = local_2e8._4_4_;
    uStack_1b0 = (undefined4)uStack_2e0;
    uStack_1ac = uStack_2e0._4_4_;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hac7bdcf882db601aE(&local_2a0,&local_1b8);
                    /* try { // try from 001f2ff2 to 001f2ff9 has its CatchHandler @ 001f30f7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_288);
  }
  local_208 = uStack_2d0;
  local_218 = (undefined4)uStack_2e0;
  uStack_214 = uStack_2e0._4_4_;
  uStack_210 = (undefined4)local_2d8;
  uStack_20c = local_2d8._4_4_;
                    /* try { // try from 001f3041 to 001f308e has its CatchHandler @ 001f30de */
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h9c7f10ebc418a7a6E
            (&local_248,&local_218);
  local_250 = local_238;
  local_260 = (code *)local_248;
  uStack_258 = uStack_240;
  uStack_254 = uStack_23c;
  local_268 = (undefined4 **)0x4;
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h19aedf1648b3dc3bE(&local_268);
  puVar1 = local_2a8;
  local_2a8[1] = uVar3;
  local_2a8[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h55943e498f41d83eE_00284558
  ;
  *local_2a8 = 0x8000000000000000;
                    /* try { // try from 001f30a6 to 001f30af has its CatchHandler @ 001f30dc */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_288);
                    /* try { // try from 001f30b0 to 001f30bc has its CatchHandler @ 001f30e0 */
  _ZN4core3ptr421drop_in_place_LT_core__iter__adapters__chain__Chain_LT_core__iter__adapters__cloned__Cloned_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__GT__C_core__iter__adapters__flatten__FlatMap_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__C_alloc__vec__Vec_LT_alloc__string__String_GT__C_uu_du__file_as_vec_LT__RF_alloc__string__String_GT__GT__GT__GT_17h744c40be5be13de6E
            (local_f8);
  _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_glob__Pattern_GT__GT_17h2295170400e3c987E
            (&local_2a0);
  return puVar1;
}