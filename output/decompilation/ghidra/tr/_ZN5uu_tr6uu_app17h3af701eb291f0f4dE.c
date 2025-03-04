undefined8 _ZN5uu_tr6uu_app17h3af701eb291f0f4dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  uint local_53c;
  ulong local_538;
  undefined local_530 [700];
  uint local_274;
  ulong local_270;
  undefined8 local_268 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h2b1a2506ad96ce2eE(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h1751fe121aab407eE(local_7f8,local_530);
  _ZN12clap_builder7builder7command7Command5about17h4aa2782e572a7218E(local_530,local_7f8);
                    /* try { // try from 001ca92b to 001ca93f has its CatchHandler @ 001cacd1 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]... SET1 [SET2]",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h1d9cbc076f39daceE
            (local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_00232df8)(local_530,local_7f8,700);
  local_270 = local_538 | 0x80;
  local_274 = local_53c | 0xa0;
                    /* try { // try from 001ca999 to 001caa43 has its CatchHandler @ 001cad2b */
  _ZN12clap_builder7builder3arg3Arg3new17h17d308826a1ad663E(local_7f8,"complement",10);
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h79f7ab34598ca4dbE
            (auStack_a48,local_7f8,0x43);
  _ZN12clap_builder7builder3arg3Arg5short17hc6b179fac0449cf8E(local_7f8,auStack_a48,99);
  _ZN12clap_builder7builder3arg3Arg4long17h4b4008770abf8107E(auStack_a48,local_7f8,"complement",10);
  _ZN12clap_builder7builder3arg3Arg4help17hf117a19d4ee4de0dE
            (local_7f8,auStack_a48,"use the complement of SET1",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h6df1ea845cf3fb37E(auStack_a48,local_7f8);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb91f7415621b931fE
            (local_268,auStack_a48,"complement",10);
  _ZN12clap_builder7builder7command7Command3arg17he1593578f80e1d63E(local_7f8,local_530,local_268);
                    /* try { // try from 001caa61 to 001caaf1 has its CatchHandler @ 001cad19 */
  _ZN12clap_builder7builder3arg3Arg3new17h17d308826a1ad663E(local_530,"delete",6);
  _ZN12clap_builder7builder3arg3Arg5short17hc6b179fac0449cf8E(auStack_a48,local_530,100);
  _ZN12clap_builder7builder3arg3Arg4long17h4b4008770abf8107E(local_530,auStack_a48,"delete",6);
  _ZN12clap_builder7builder3arg3Arg4help17hf117a19d4ee4de0dE
            (auStack_a48,local_530,"delete characters in SET1, do not translate",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17h6df1ea845cf3fb37E(local_530,auStack_a48);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb91f7415621b931fE
            (auStack_a48,local_530,"delete",6);
  _ZN12clap_builder7builder7command7Command3arg17he1593578f80e1d63E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001cab0a to 001cab9a has its CatchHandler @ 001cad07 */
  _ZN12clap_builder7builder3arg3Arg3new17h17d308826a1ad663E(local_7f8,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h4b4008770abf8107E
            (auStack_a48,local_7f8,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hc6b179fac0449cf8E(local_7f8,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4help17hf117a19d4ee4de0dE
            (auStack_a48,local_7f8,
             "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character"
             ,0x82);
  _ZN12clap_builder7builder3arg3Arg6action17h6df1ea845cf3fb37E(local_7f8,auStack_a48);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb91f7415621b931fE
            (auStack_a48,local_7f8,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder7command7Command3arg17he1593578f80e1d63E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001cabb3 to 001cac43 has its CatchHandler @ 001cacf5 */
  _ZN12clap_builder7builder3arg3Arg3new17h17d308826a1ad663E(local_530,"truncate-set1",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h4b4008770abf8107E
            (auStack_a48,local_530,"truncate-set1",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hc6b179fac0449cf8E(local_530,auStack_a48,0x74);
  _ZN12clap_builder7builder3arg3Arg4help17hf117a19d4ee4de0dE
            (auStack_a48,local_530,"first truncate SET1 to length of SET2",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h6df1ea845cf3fb37E(local_530,auStack_a48);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hb91f7415621b931fE
            (auStack_a48,local_530,"truncate-set1",0xd);
  _ZN12clap_builder7builder7command7Command3arg17he1593578f80e1d63E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 001cac5c to 001caca8 has its CatchHandler @ 001cace3 */
  _ZN12clap_builder7builder3arg3Arg3new17h17d308826a1ad663E(local_7f8,&DAT_00115170,4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h2f5839c3c8fea95fE(auStack_a48,local_7f8);
  local_268[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hf95785a2d1e1359aE
            (local_7f8,auStack_a48,local_268);
  _ZN12clap_builder7builder7command7Command3arg17he1593578f80e1d63E(param_1,local_530,local_7f8);
  return param_1;
}