undefined8 _ZN7uu_fold6uu_app17hfa78df7319f7c039E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h121b98b6d96da7a9E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h24d9a7ca32fdd4adE
            (local_7f8,local_530,"0.0.28",6);
                    /* try { // try from 001b11e4 to 001b11f8 has its CatchHandler @ 001b14f9 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h18d760c68336a81bE
            (local_530,local_7f8,auStack_a48);
  _ZN12clap_builder7builder7command7Command5about17h1c6534ca9f8e90fdE
            (local_7f8,local_530,
             "Writes each file (or standard input if no files are given)\nto standard output whilst breaking long lines"
             ,0x68);
  (*(code *)PTR_memcpy_0021e488)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001b1271 to 001b12d4 has its CatchHandler @ 001b152f */
  _ZN12clap_builder7builder3arg3Arg3new17hbeb9e909ddb12b0fE(local_7f8,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg4long17h030a686b44dedf14E(auStack_a48,local_7f8,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg5short17h82aa05e7fad831b1E(local_7f8,auStack_a48,0x62);
  _ZN12clap_builder7builder3arg3Arg4help17h1fd9c0a2ec06b765E
            (auStack_a48,local_7f8,
             "count using bytes rather than columns (meaning control characters such as newline are not treated specially)"
             ,0x6c);
  _ZN12clap_builder7builder3arg3Arg6action17h0f0b64d53278c1aeE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hd508bbbf326ffb39E(local_7f8,local_530,local_268);
                    /* try { // try from 001b1305 to 001b1368 has its CatchHandler @ 001b151d */
  _ZN12clap_builder7builder3arg3Arg3new17hbeb9e909ddb12b0fE(local_530,"spaces",6);
  _ZN12clap_builder7builder3arg3Arg4long17h030a686b44dedf14E(auStack_a48,local_530,"spaces",6);
  _ZN12clap_builder7builder3arg3Arg5short17h82aa05e7fad831b1E(local_530,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4help17h1fd9c0a2ec06b765E
            (auStack_a48,local_530,"break lines at word boundaries rather than a hard cut-off",0x39)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h0f0b64d53278c1aeE(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hd508bbbf326ffb39E(local_530,local_7f8,local_268);
                    /* try { // try from 001b1399 to 001b140c has its CatchHandler @ 001b1541 */
  _ZN12clap_builder7builder3arg3Arg3new17hbeb9e909ddb12b0fE(local_7f8,"width",5);
  _ZN12clap_builder7builder3arg3Arg4long17h030a686b44dedf14E(auStack_a48,local_7f8,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17h82aa05e7fad831b1E(local_7f8,auStack_a48,0x77);
  _ZN12clap_builder7builder3arg3Arg4help17h1fd9c0a2ec06b765E
            (auStack_a48,local_7f8,"set WIDTH as the maximum line width rather than 80",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6bb6a5099e9af500E(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0021e488)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x20;
  local_7fc = local_5ac;
  _ZN12clap_builder7builder7command7Command3arg17hd508bbbf326ffb39E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001b145d to 001b1475 has its CatchHandler @ 001b150b */
  _ZN12clap_builder7builder3arg3Arg3new17hbeb9e909ddb12b0fE(local_530,"file",4);
  (*(code *)PTR_memcpy_0021e488)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17h0f0b64d53278c1aeE(local_530,auStack_a48,1);
                    /* try { // try from 001b14c6 to 001b14d5 has its CatchHandler @ 001b150b */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4b1a98209220178fE(auStack_a48,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17hd508bbbf326ffb39E(param_1,local_7f8,auStack_a48);
  return param_1;
}