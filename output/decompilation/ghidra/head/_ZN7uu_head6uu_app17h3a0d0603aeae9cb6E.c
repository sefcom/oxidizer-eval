undefined8 _ZN7uu_head6uu_app17h3a0d0603aeae9cb6E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [584];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_27c;
  undefined4 local_274;
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  uint local_28;
  undefined4 local_24;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h92d2f05e153a1c13E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd889f9a77ef45556E
            (local_538,local_800,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h0758d50f0a7c01fbE
            (local_800,local_538,
             "Print the first 10 lines of each `FILE` to standard output.\nWith more than one `FILE`, precede each with a header giving the file name.\nWith no `FILE`, or when `FILE` is `-`, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too."
             ,0x109);
                    /* try { // try from 001b8625 to 001b863b has its CatchHandler @ 001b8ca5 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_a50,"{} [FLAG]... [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h6fbe14a44972d743E
            (local_538,local_800,local_a50);
  (*(code *)PTR_memcpy_00230c88)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
                    /* try { // try from 001b8697 to 001b8761 has its CatchHandler @ 001b8d23 */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_538,"BYTES",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf9d7039566942140E(local_a50,local_538,99);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E(local_538,local_a50,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg10value_name17h969f407953d1ea5aE(local_a50,local_538);
  _ZN12clap_builder7builder3arg3Arg4help17h4492d3acb8148a98E
            (local_538,local_a50,
             "print the first NUM bytes of each file;\nwith the leading \'-\', print all but the last\nNUM bytes of each file"
             ,0x6b);
  local_270 = "BYTES";
  local_268 = 5;
  local_260 = "LINES";
  local_258 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h79905db2ba7272b2E
            (local_a50,local_538,&local_270);
  (*(code *)PTR_memcpy_00230c88)(&local_270,local_a50,0x248);
  local_28 = local_808 | 0x20;
  local_24 = local_804;
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_538,local_800,&local_270);
                    /* try { // try from 001b87b4 to 001b8877 has its CatchHandler @ 001b8d11 */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_800,"LINES",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf9d7039566942140E(local_a50,local_800,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E(local_800,local_a50,"lines",5);
  _ZN12clap_builder7builder3arg3Arg10value_name17h969f407953d1ea5aE(local_a50,local_800);
  _ZN12clap_builder7builder3arg3Arg4help17h4492d3acb8148a98E
            (local_800,local_a50,
             "print the first NUM lines instead of the first 10;\nwith the leading \'-\', print all but the last\nNUM lines of each file"
             ,0x76);
  local_270 = "LINES";
  local_268 = 5;
  local_260 = "BYTES";
  local_258 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h79905db2ba7272b2E
            (local_a50,local_800,&local_270);
  (*(code *)PTR_memcpy_00230c88)(&local_270,local_a50,0x248);
  local_28 = local_808 | 0x20;
  local_24 = local_804;
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_800,local_538,&local_270);
                    /* try { // try from 001b88ca to 001b89a0 has its CatchHandler @ 001b8cff */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_538,"QUIET",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf9d7039566942140E(local_a50,local_538,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E(local_538,local_a50,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h090d3a09074674d5E
            (local_a50,local_538,"silent",6);
  _ZN12clap_builder7builder3arg3Arg4help17h4492d3acb8148a98E
            (local_538,local_a50,"never print headers giving file names",0x25);
  local_270 = "VERBOSE";
  local_268 = 7;
  local_260 = "QUIET";
  local_258 = 5;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h79905db2ba7272b2E
            (local_a50,local_538,&local_270);
  _ZN12clap_builder7builder3arg3Arg6action17hae44a49fe036f8a4E(&local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_538,local_800,&local_270);
                    /* try { // try from 001b89d3 to 001b8a84 has its CatchHandler @ 001b8ced */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_800,"VERBOSE",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf9d7039566942140E(local_a50,local_800,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E(local_800,local_a50,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4help17h4492d3acb8148a98E
            (local_a50,local_800,"always print headers giving file names",0x26);
  local_270 = "QUIET";
  local_268 = 5;
  local_260 = "VERBOSE";
  local_258 = 7;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h79905db2ba7272b2E
            (local_800,local_a50,&local_270);
  _ZN12clap_builder7builder3arg3Arg6action17hae44a49fe036f8a4E(local_a50,local_800,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_800,local_538,local_a50);
                    /* try { // try from 001b8ab7 to 001b8b0b has its CatchHandler @ 001b8cc9 */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_538,"-PRESUME-INPUT-PIPE",0x13);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E
            (local_a50,local_538,"presume-input-pipe",0x12);
  _ZN12clap_builder7builder3arg3Arg5alias17h74bee99b7cf05cc8E
            (local_538,local_a50,"-presume-input-pipe",0x13);
  (*(code *)PTR_memcpy_00230c88)(local_a50,local_538,0x248);
  local_808 = local_2f0 | 4;
  local_804 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17hae44a49fe036f8a4E(&local_270,local_a50,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_538,local_800,&local_270);
                    /* try { // try from 001b8b76 to 001b8c00 has its CatchHandler @ 001b8cdb */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_800,&DAT_00114b80,4);
  _ZN12clap_builder7builder3arg3Arg5short17hf9d7039566942140E(local_a50,local_800,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h63177cb4cc0e3da3E
            (local_800,local_a50,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h4492d3acb8148a98E
            (local_a50,local_800,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h3dbbfa0259380c5aE
            (local_800,local_a50,&DAT_00114b80,4);
  _ZN12clap_builder7builder3arg3Arg6action17hae44a49fe036f8a4E(local_a50,local_800,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(local_800,local_538,local_a50);
                    /* try { // try from 001b8c33 to 001b8c7a has its CatchHandler @ 001b8cb7 */
  _ZN12clap_builder7builder3arg3Arg3new17h141bffb01021e0baE(local_538,&DAT_00114bd8,4);
  _ZN12clap_builder7builder3arg3Arg6action17hae44a49fe036f8a4E(local_a50,local_538,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h445744d0bc011d63E(local_538,local_a50,3);
  _ZN12clap_builder7builder7command7Command3arg17h9e3dea01d7b0e9e5E(param_1,local_800,local_538);
  return param_1;
}