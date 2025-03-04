undefined8 _ZN9uu_numfmt6uu_app17hfdc8a28206314692E(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_a48;
  undefined8 local_a40;
  undefined *local_a38;
  undefined8 local_a30;
  char *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
  char *local_a08;
  undefined8 local_a00;
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
  char *local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h86b8567eb66d5204E(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha7ea0a52be8eb416E
            (local_7f8,local_530,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h95c32eb25fe1a46dE
            (local_530,local_7f8,"Convert numbers from/to human-readable strings",0x2e);
  _ZN12clap_builder7builder7command7Command10after_help17h5853cdd83b814a8bE
            (local_7f8,local_530,
             "UNIT options:\n\n- none: no auto-scaling is done; suffixes will trigger an error\n- auto: accept optional single/two letter suffix:\n\n    1K = 1000, 1Ki = 1024, 1M = 1000000, 1Mi = 1048576,\n\n- si: accept optional single letter suffix:\n\n    1K = 1000, 1M = 1000000, ...\n\n- iec: accept optional single letter suffix:\n\n    1K = 1024, 1M = 1048576, ...\n\n- iec-i: accept optional two-letter suffix:\n\n    1Ki = 1024, 1Mi = 1048576, ...\n\n- FIELDS supports cut(1) style field ranges:\n\n    N    N\'th field, counted from 1\n    N-   from N\'th field, to end of line\n    N-M  from N\'th to M\'th field (inclusive)\n    -M   from first to M\'th field (inclusive)\n    -    all fields\n\nMultiple fields/ranges can be separated with commas\n\nFORMAT must be suitable for printing one floating-point argument %f.\nOptional quote (%\'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision."
             ,0x43a);
                    /* try { // try from 001c1122 to 001c1136 has its CatchHandler @ 001c1b3d */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_a48,"{} [OPTION]... [NUMBER]...",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h3005ef682b859420E
            (local_530,local_7f8,&local_a48);
  (*(code *)PTR_memcpy_002398d8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000084;
  local_534 = local_26c;
                    /* try { // try from 001c1190 to 001c120f has its CatchHandler @ 001c1b91 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"delimiter",9);
  _ZN12clap_builder7builder3arg3Arg5short17h3d5a84e6a157cc7aE(&local_a48,local_530);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(local_530,&local_a48,"delimiter",9);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_530,"X",1);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (&local_268,&local_a48,"use X instead of whitespace for field delimiter",0x2f);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_268);
                    /* try { // try from 001c122d to 001c1299 has its CatchHandler @ 001c1c00 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,"field",5);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,"field",5);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,"replace the numbers in these input fields; see FIELDS below",0x3b
            );
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_7f8,"FIELDS",6)
  ;
  (*(code *)PTR_memcpy_002398d8)(local_7f8,&local_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 001c12d2 to 001c12e8 has its CatchHandler @ 001c1c00 */
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE(&local_a48,local_7f8,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1301 to 001c136d has its CatchHandler @ 001c1b7c */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"format",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_530,"format",6);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_530,&local_a48,
             "use printf style floating-point FORMAT; see FORMAT below for details",0x44);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_530,"FORMAT",6)
  ;
  (*(code *)PTR_memcpy_002398d8)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x20;
  local_1c = local_7fc;
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_268);
                    /* try { // try from 001c13be to 001c1446 has its CatchHandler @ 001c1bee */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,&DAT_00115848,4);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,&DAT_00115848,4);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,"auto-scale input numbers to UNITs; see UNIT below",0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE
            (&local_a48,local_7f8,&DAT_0011585c,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE
            (&local_268,&local_a48,&DAT_00115898,4);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_268);
                    /* try { // try from 001c1464 to 001c14ec has its CatchHandler @ 001c1bdc */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"from-unit",9);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_530,"from-unit",9);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_530,&local_a48,"specify the input unit size",0x1b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_530,"N",1);
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE(&local_268,&local_a48,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_268);
                    /* try { // try from 001c150a to 001c1592 has its CatchHandler @ 001c1bca */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,"to",2);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,"to",2);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,"auto-scale output numbers to UNITs; see UNIT below",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE
            (&local_a48,local_7f8,&DAT_0011585c,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE
            (&local_268,&local_a48,&DAT_00115898,4);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_268);
                    /* try { // try from 001c15b0 to 001c1638 has its CatchHandler @ 001c1bb8 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"to-unit",7);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_530,"to-unit",7);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_530,&local_a48,"the output unit size",0x14);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_530,"N",1);
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE(&local_268,&local_a48,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_268);
                    /* try { // try from 001c1656 to 001c16c2 has its CatchHandler @ 001c1b67 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,"padding",7);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,"padding",7);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,
             "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found"
             ,199);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_7f8,"N",1);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c16db to 001c1767 has its CatchHandler @ 001c1c24 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"header",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_530,"header",6);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_530,&local_a48,
             "print (without converting) the first N header lines; N defaults to 1 if not specified"
             ,0x55);
  _ZN12clap_builder7builder3arg3Arg8num_args17hc5743a8ddacd2d3eE(&local_a48,local_530);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(local_530,&local_a48,"N",1);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hd0da8f35d619a3c2E(&local_a48,local_530)
  ;
  (*(code *)PTR_memcpy_002398d8)(&local_268,&local_a48,0x248);
  local_20 = local_800 | 0x400;
  local_1c = local_7fc;
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_268);
                    /* try { // try from 001c17ba to 001c1845 has its CatchHandler @ 001c1ba6 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,"round",5);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,"round",5);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,"use METHOD for rounding when scaling",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_7f8,"METHOD",6)
  ;
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE
            (local_7f8,&local_a48,"from-zero",9);
  local_a48 = "up";
  local_a40 = 2;
  local_a38 = &DAT_0011589c;
  local_a30 = 4;
  local_a28 = "from-zero";
  local_a20 = 9;
  local_a18 = "towards-zero";
  local_a10 = 0xc;
  local_a08 = "nearest";
  local_a00 = 7;
                    /* try { // try from 001c18a7 to 001c18b6 has its CatchHandler @ 001c1b2b */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h4cd6baee175a61c7E
            (&local_268,&local_a48);
                    /* try { // try from 001c18b7 to 001c18ce has its CatchHandler @ 001c1b29 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h070c43e44d892b1bE
            (&local_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c18e7 to 001c1953 has its CatchHandler @ 001c1b52 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_530,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_530,&local_a48,
             "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX"
             ,0x59);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE(&local_a48,local_530,"SUFFIX",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_530,local_7f8,&local_a48);
                    /* try { // try from 001c196c to 001c1a74 has its CatchHandler @ 001c1c12 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_7f8,"invalid",7);
  _ZN12clap_builder7builder3arg3Arg4long17hd0fac2f3b501b599E(&local_a48,local_7f8,"invalid",7);
  _ZN12clap_builder7builder3arg3Arg4help17h6f7819c90452655aE
            (local_7f8,&local_a48,"set the failure mode for invalid input",0x26);
  _ZN12clap_builder7builder3arg3Arg13default_value17hedcfaeb74e8609bdE
            (&local_a48,local_7f8,"abort",5);
  local_268 = "abort";
  local_260 = 5;
  local_258 = &DAT_00115828;
  local_250 = 4;
  local_248 = &DAT_00115800;
  local_240 = 4;
  local_238 = "ignore";
  local_230 = 6;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hd70490473ffb4fb0E
            (local_7f8,&local_a48,&local_268);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1f55c923aa15197eE
            (&local_a48,local_7f8,"INVALID",7);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(local_7f8,local_530,&local_a48);
                    /* try { // try from 001c1a8d to 001c1aa5 has its CatchHandler @ 001c1b14 */
  _ZN12clap_builder7builder3arg3Arg3new17hc51db1606d097c0bE(local_530,"NUMBER",6);
  (*(code *)PTR_memcpy_002398d8)(&local_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17hc27cbaf071c08c27E(local_530,&local_a48);
  _ZN12clap_builder7builder7command7Command3arg17hf9393f763cdc0fc1E(param_1,local_7f8,local_530);
  return param_1;
}