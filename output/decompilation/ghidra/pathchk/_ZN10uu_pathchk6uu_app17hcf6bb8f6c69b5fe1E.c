undefined8 _ZN10uu_pathchk6uu_app17hcf6bb8f6c69b5fe1E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_828 [632];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [632];
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4f10)();
  _ZN12clap_builder7builder7command7Command3new17h108d16f88444b04fE(auStack_828,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha28cfa0df1d5e907E(local_560,auStack_828);
  _ZN12clap_builder7builder7command7Command5about17hd4eb1035e7d5c7e2E(auStack_828,local_560);
                    /* try { // try from 00155b41 to 00155b5a has its CatchHandler @ 00155df3 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e50d8)
            (local_298,"{} [OPTION]... NAME...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h9bc2e28f370bf6faE
            (local_560,auStack_828,local_298);
  (*(code *)PTR_memcpy_001e5030)(auStack_828,local_560,700);
  local_56c = local_2a4 | 0x8000000080;
  local_564 = local_29c;
  _ZN12clap_builder7builder3arg3Arg3new17hb0d06e89861b0540E(local_560,"posix",5);
  _ZN12clap_builder7builder3arg3Arg5short17h0ff203cd4e7d5188E(local_298,local_560,0x70);
                    /* try { // try from 00155be3 to 00155bfe has its CatchHandler @ 00155de6 */
  _ZN12clap_builder7builder3arg3Arg4help17ha8c53d2e96b2b8a1E
            (local_560,local_298,"check for most POSIX systems",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h92f160cda9e5d116E(local_298,local_560,2);
  _ZN12clap_builder7builder7command7Command3arg17h1b024aa5a69862f4E(local_560,auStack_828,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb0d06e89861b0540E(auStack_828,"posix-special",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h0ff203cd4e7d5188E(local_298,auStack_828,0x50);
                    /* try { // try from 00155c5e to 00155c74 has its CatchHandler @ 00155dd4 */
  _ZN12clap_builder7builder3arg3Arg4help17ha8c53d2e96b2b8a1E
            (auStack_828,local_298,"check for empty names and leading \"-\"",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h92f160cda9e5d116E(local_298,auStack_828,2);
  _ZN12clap_builder7builder7command7Command3arg17h1b024aa5a69862f4E(auStack_828,local_560,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb0d06e89861b0540E(local_560,"portability",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h0970928516bf3767E(local_298,local_560);
                    /* try { // try from 00155ccf to 00155cea has its CatchHandler @ 00155dc7 */
  _ZN12clap_builder7builder3arg3Arg4help17ha8c53d2e96b2b8a1E
            (local_560,local_298,"check for all POSIX systems (equivalent to -p -P)",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h92f160cda9e5d116E(local_298,local_560,2);
  _ZN12clap_builder7builder7command7Command3arg17h1b024aa5a69862f4E(local_560,auStack_828,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hb0d06e89861b0540E(auStack_828,&DAT_0011706c,4);
  (*(code *)PTR_memcpy_001e5030)(local_298,auStack_828,0x278);
  local_20 = local_5b0 | 4;
  local_1c = local_5ac;
  _ZN12clap_builder7builder3arg3Arg6action17h92f160cda9e5d116E(auStack_828,local_298,1);
                    /* try { // try from 00155d7d to 00155d8c has its CatchHandler @ 00155db5 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hb1308a231f546382E(local_298,auStack_828);
  _ZN12clap_builder7builder7command7Command3arg17h1b024aa5a69862f4E(param_1,local_560,local_298);
  return param_1;
}