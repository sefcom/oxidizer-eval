undefined8 _ZN10uu_hashsum13uu_app_common17haf156add4ae409e5E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [592];
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268 [74];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h279cb1764e092cfcE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h1915c97be964726eE
            (local_530,local_7f8,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h32eb9af4213b0aa4E
            (local_7f8,local_530,"Compute and check message digests.",0x22);
                    /* try { // try from 002dab03 to 002dab17 has its CatchHandler @ 002db229 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTIONS] [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h3074fb1ea9187600E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0047f5e0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 002dab71 to 002dabd9 has its CatchHandler @ 002db2b3 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"binary",6);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_530,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_530,auStack_a48,"binary",6);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_530,"read in binary mode",0x13);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_530,local_7f8,local_268);
                    /* try { // try from 002dac0a to 002daca1 has its CatchHandler @ 002db2fb */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_7f8,"check",5);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_7f8,99);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_7f8,auStack_a48,"check",5);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_7f8,"read hashsums from the FILEs and check them",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_7f8,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hd582e73503419645E
            (auStack_a48,local_7f8,"tag",3);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002dacba to 002dad3e has its CatchHandler @ 002db2e9 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"tag",3);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(auStack_a48,local_530,"tag",3);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (local_530,auStack_a48,"create a BSD-style checksum",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hd582e73503419645E
            (local_268,auStack_a48,"text",4);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_530,local_7f8,local_268);
                    /* try { // try from 002dad5c to 002dade0 has its CatchHandler @ 002db2d7 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_7f8,"text",4);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_7f8,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_7f8,auStack_a48,"text",4);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_7f8,"read in text mode (default)",0x1b);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hd582e73503419645E
            (local_7f8,auStack_a48,"binary",6);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002dae11 to 002dae79 has its CatchHandler @ 002db2a1 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_530,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_530,auStack_a48,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_530,"don\'t print OK for each successfully verified file",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_530,local_7f8,local_268);
                    /* try { // try from 002daeaa to 002daf12 has its CatchHandler @ 002db28f */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_7f8,"status",6);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_7f8,auStack_a48,"status",6);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_7f8,"don\'t output anything, status code shows success",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_7f8,local_530,local_268);
                    /* try { // try from 002daf43 to 002daf93 has its CatchHandler @ 002db27d */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"strict",6);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(auStack_a48,local_530,"strict",6);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (local_530,auStack_a48,"exit non-zero for improperly formatted checksum lines",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002dafc4 to 002db014 has its CatchHandler @ 002db268 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_7f8,"ignore-missing",0xe);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE
            (auStack_a48,local_7f8,"ignore-missing",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (local_7f8,auStack_a48,"don\'t fail or report status for missing files",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002db045 to 002db0ad has its CatchHandler @ 002db253 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"warnZeroV",4);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_530,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_530,auStack_a48,"warnZeroV",4);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_530,"warn about improperly formatted checksum lines",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_530,local_7f8,local_268);
                    /* try { // try from 002db0de to 002db146 has its CatchHandler @ 002db23e */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_7f8,"zero",4);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(auStack_a48,local_7f8,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_7f8,auStack_a48,"zero",4);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (auStack_a48,local_7f8,"end each output line with NUL, not newline",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(local_7f8,local_530,local_268);
                    /* try { // try from 002db177 to 002db205 has its CatchHandler @ 002db2c5 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_530,"fileEDOMmode",4);
  _ZN12clap_builder7builder3arg3Arg5index17h80fba87efb994c29E(auStack_a48,local_530);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_530,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h91d0b43819df8b7bE
            (auStack_a48,local_530,"fileEDOMmode");
  _ZN12clap_builder7builder3arg3Arg10value_hint17h03ccd5ef06a1424dE(local_530,auStack_a48,3);
  local_268[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hdd3734fe96556585E
            (auStack_a48,local_530,local_268);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(param_1,local_7f8,auStack_a48);
  return param_1;
}