undefined8 *
_ZN5uu_du22build_exclude_patterns17he2599e522f595380E(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined **local_278;
  undefined4 *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  char *local_248;
  undefined8 local_240;
  undefined4 *local_238;
  code *pcStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_210;
  code *local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  char *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1a8;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined **local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  char *local_140;
  undefined8 local_138;
  long local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_f8 [136];
  undefined local_70 [64];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hffc82f800b8d5ff7E
            (local_f8,param_2,"exclude-from",0xc);
  pcVar4 = "exclude-from";
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hd06a4304e8cd1bc3E
            (&local_208,"exclude-from",0xc,local_f8);
  if (local_208 == (code *)0x0) {
    local_1e8 = 0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1f8 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
                      ,0);
    uStack_1f4 = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
                 >> 0x20);
    uStack_1f0 = 0;
    uStack_1ec = 0;
    local_208 = _ZN4core3ops8function6FnOnce9call_once17h88fd7425ccd33063E;
    local_1d0 = 0;
    local_200 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
    ;
    local_1d8 = pcVar4;
  }
  local_1c8 = 0;
  local_1a8 = 0;
                    /* try { // try from 0019776a to 001977a5 has its CatchHandler @ 00197a5e */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hffc82f800b8d5ff7E
            (local_f8,param_2,"exclude",7);
  pcVar4 = "exclude";
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hd06a4304e8cd1bc3E
            (&local_278,"exclude",7,local_f8);
  if (local_278 == (undefined **)0x0) {
    local_150 = 0;
    uStack_14c = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    local_160 = SUB84(PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
                      ,0);
    uStack_15c = (undefined4)
                 ((ulong)
                  PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
                 >> 0x20);
    uStack_158 = 0;
    uStack_154 = 0;
    local_240 = 0;
    local_170 = (undefined **)_ZN4core3ops8function6FnOnce9call_once17h88fd7425ccd33063E;
    local_168 = 
    PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17he135a60093c36a3aE_0024eba0
    ;
  }
  else {
    local_170 = local_278;
    local_168 = (undefined *)local_270;
    pcVar4 = local_248;
    local_150 = (undefined4)local_258;
    uStack_14c = local_258._4_4_;
    local_160 = (undefined4)uStack_268;
    uStack_15c = uStack_268._4_4_;
    uStack_158 = (undefined4)uStack_260;
    uStack_154 = uStack_260._4_4_;
  }
  local_2b0 = 0;
  uStack_2a8 = 8;
  local_2a0 = 0;
  uStack_148 = uStack_250;
  uStack_144 = uStack_24c;
  local_140 = pcVar4;
  local_138 = local_240;
  _ZN4core4iter6traits8iterator8Iterator5chain17hc2d8f9bed774c849E(local_f8,&local_170,&local_208);
  puVar1 = PTR__ZN6uucore8features6parser10parse_glob8from_str17hec6dc6cec3d01504E_0024eba8;
  while( true ) {
                    /* try { // try from 00197890 to 001978b7 has its CatchHandler @ 00197a70 */
    _ZN4core4iter8adapters5chain17and_then_or_clear17ha9bcf56eba07ca86E(&local_278,local_70);
    _ZN4core6option15Option_LT_T_GT_7or_else17hc21355b2981d1bf1E(&local_220,&local_278,local_f8);
    if (CONCAT44(uStack_21c,local_220) == -0x8000000000000000) {
                    /* try { // try from 00197980 to 0019798c has its CatchHandler @ 00197a59 */
      _ZN4core3ptr421drop_in_place_LT_core__iter__adapters__chain__Chain_LT_core__iter__adapters__cloned__Cloned_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__GT__C_core__iter__adapters__flatten__FlatMap_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__C_alloc__vec__Vec_LT_alloc__string__String_GT__C_uu_du__file_as_vec_LT__RF_alloc__string__String_GT__GT__GT__GT_17h72377d95b1f15e7eE
                (local_f8);
      param_1[2] = local_2a0;
      *param_1 = local_2b0;
      param_1[1] = uStack_2a8;
      return param_1;
    }
    local_288 = local_210;
    local_298 = local_220;
    uStack_294 = uStack_21c;
    uStack_290 = uStack_218;
    uStack_28c = uStack_214;
                    /* try { // try from 001978e0 to 00197972 has its CatchHandler @ 00197a75 */
    cVar2 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0024e8b0
            )(param_2,
              "verbose: \n\ttotal\t: read error: Is a directorycannot open \'\' for reading: No such file or directory:"
              ,7);
    if (cVar2 != '\0') {
      pcStack_230 = 
      _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h71b66d641ee8f111E;
      local_278 = &PTR_s_adding_to_the_exclude_list_00245d38;
      local_270 = (undefined4 *)0x2;
      local_258 = 0;
      uStack_268 = &local_238;
      uStack_260 = 1;
      local_238 = &local_298;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_278);
    }
    (*(code *)puVar1)(&local_130,CONCAT44(uStack_28c,uStack_290),local_288);
    if (local_130 == -0x8000000000000000) break;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he69de0360f501721E(&local_2b0,&local_130);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(&local_298);
  }
  local_178 = local_118;
  local_188 = local_128;
  uStack_184 = uStack_124;
  uStack_180 = uStack_120;
  uStack_17c = uStack_11c;
                    /* try { // try from 001979c8 to 00197a09 has its CatchHandler @ 00197a57 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h68e4476d86227a73E
            (&local_238,&local_188);
  uStack_260 = local_228;
  local_270 = local_238;
  uStack_268 = (undefined4 **)pcStack_230;
  local_278 = (undefined **)0x4;
  uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a707cc2bcbdfcb0E(&local_278);
  param_1[1] = uVar3;
  param_1[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h2285cec56b29122cE_00245d90;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(&local_298);
                    /* try { // try from 00197a2b to 00197a37 has its CatchHandler @ 00197a59 */
  _ZN4core3ptr421drop_in_place_LT_core__iter__adapters__chain__Chain_LT_core__iter__adapters__cloned__Cloned_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__GT__C_core__iter__adapters__flatten__FlatMap_LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_alloc__string__String_GT__C_alloc__vec__Vec_LT_alloc__string__String_GT__C_uu_du__file_as_vec_LT__RF_alloc__string__String_GT__GT__GT__GT_17h72377d95b1f15e7eE
            (local_f8);
  _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_glob__Pattern_GT__GT_17h3aac2b22f80fd30dE
            (&local_2b0);
  return param_1;
}