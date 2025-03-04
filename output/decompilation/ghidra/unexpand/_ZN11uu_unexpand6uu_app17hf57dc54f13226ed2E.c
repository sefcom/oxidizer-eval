undefined8 _ZN11uu_unexpand6uu_app17hf57dc54f13226ed2E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h28dd3cfb9d9488aeE(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h355bf77e2495619cE
            (auStack_a48,local_530,"0.0.28",6);
                    /* try { // try from 001b213f to 001b2158 has its CatchHandler @ 001b24c4 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hf2f0e350a24f1370E
            (local_530,auStack_a48,local_780);
  _ZN12clap_builder7builder7command7Command5about17h00cbd4c2b3a59d68E
            (auStack_a48,local_530,
             "Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input."
             ,0x7e);
  (*(code *)PTR_memcpy_00220cd8)(local_530,auStack_a48,700);
  local_274 = local_78c | 0x8000000080;
  local_26c = local_784;
                    /* try { // try from 001b21cc to 001b21df has its CatchHandler @ 001b24d1 */
  _ZN12clap_builder7builder3arg3Arg3new17h15ce46045f956ddbE(auStack_a48,"file",4);
  (*(code *)PTR_memcpy_00220cd8)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 4;
  local_534 = local_7fc;
  _ZN12clap_builder7builder3arg3Arg6action17hf2a3dd329a520a97E(auStack_a48,local_780,1);
                    /* try { // try from 001b222b to 001b223f has its CatchHandler @ 001b24d1 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h8dcf2e063716e891E(local_780,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h3ea0b298cf10b6bdE(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b2258 to 001b22ca has its CatchHandler @ 001b2507 */
  _ZN12clap_builder7builder3arg3Arg3new17h15ce46045f956ddbE(local_530,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17h1813a64849a712c9E(local_780,local_530,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h934749995bbd4579E(local_530,local_780,"all",3);
  _ZN12clap_builder7builder3arg3Arg4help17hd6381f05586d0790E
            (local_780,local_530,"convert all blanks, instead of just initial blanks",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hf2a3dd329a520a97E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h3ea0b298cf10b6bdE(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b22fb to 001b2346 has its CatchHandler @ 001b24f5 */
  _ZN12clap_builder7builder3arg3Arg3new17h15ce46045f956ddbE(auStack_a48,"first-only",10);
  _ZN12clap_builder7builder3arg3Arg4long17h934749995bbd4579E(local_780,auStack_a48,"first-only",10);
  _ZN12clap_builder7builder3arg3Arg4help17hd6381f05586d0790E
            (auStack_a48,local_780,"convert only leading sequences of blanks (overrides -a)",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17hf2a3dd329a520a97E(local_780,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h3ea0b298cf10b6bdE(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b2372 to 001b2411 has its CatchHandler @ 001b2514 */
  _ZN12clap_builder7builder3arg3Arg3new17h15ce46045f956ddbE(local_530,&DAT_001148ac,4);
  _ZN12clap_builder7builder3arg3Arg5short17h1813a64849a712c9E(local_780,local_530,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h934749995bbd4579E(local_530,local_780,&DAT_001148ac,4);
  _ZN12clap_builder7builder3arg3Arg4help17hd6381f05586d0790E
            (local_780,local_530,
             "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)"
             ,99);
  _ZN12clap_builder7builder3arg3Arg6action17hf2a3dd329a520a97E(local_530,local_780,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h980cba47b642b4d6E(local_780,local_530);
  _ZN12clap_builder7builder7command7Command3arg17h3ea0b298cf10b6bdE(local_530,auStack_a48,local_780)
  ;
                    /* try { // try from 001b242a to 001b2488 has its CatchHandler @ 001b24e3 */
  _ZN12clap_builder7builder3arg3Arg3new17h15ce46045f956ddbE(auStack_a48,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg5short17h1813a64849a712c9E(local_780,auStack_a48,0x55);
  _ZN12clap_builder7builder3arg3Arg4long17h934749995bbd4579E(auStack_a48,local_780,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg4help17hd6381f05586d0790E
            (local_780,auStack_a48,"interpret input file as 8-bit ASCII rather than UTF-8: \n",0x35)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hf2a3dd329a520a97E(auStack_a48,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h3ea0b298cf10b6bdE(param_1,local_530,auStack_a48);
  return param_1;
}