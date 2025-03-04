undefined8 _ZN5uu_wc6uu_app17h62af8873bd1507e0E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined *local_a48;
  undefined8 local_a40;
  char *local_a38;
  undefined8 local_a30;
  undefined *local_a28;
  undefined8 local_a20;
  char *local_a18;
  undefined8 local_a10;
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
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17heef53aa4e5d4acf1E(&local_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h42037cd52bcef4acE
            (local_530,&local_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h1782c64d94d23983E
            (&local_a48,local_530,
             "Display newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified. With no FILE, or when FILE is -, read standard input."
             ,0xa0);
                    /* try { // try from 001b969d to 001b96b6 has its CatchHandler @ 001b9d07 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h88329b020f4035f1E
            (local_530,&local_a48,local_780);
  (*(code *)PTR_memcpy_00235088)(&local_a48,local_530,700);
  local_78c = local_274 | 0x8800000088;
  local_784 = local_26c;
                    /* try { // try from 001b970f to 001b9781 has its CatchHandler @ 001b9d6d */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(local_530,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1821cb640058dc7eE(local_780,local_530,99);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E(local_530,local_780,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,local_530,"print the byte counts",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(local_530,&local_a48,&local_268)
  ;
                    /* try { // try from 001b97b4 to 001b981a has its CatchHandler @ 001b9d5b */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(&local_a48,"chars",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1821cb640058dc7eE(local_780,&local_a48,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E(&local_a48,local_780,"chars",5);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,&local_a48,"print the character counts",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(&local_a48,local_530,&local_268)
  ;
                    /* try { // try from 001b984d to 001b992f has its CatchHandler @ 001b9d8e */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(local_530,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E(local_780,local_530,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg10value_name17hc7d8e8b2a7daef84E(local_530,local_780,"F",1);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,local_530,
             "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input"
             ,0x78);
  local_a60 = 2;
  local_258 = local_a50;
  local_268 = 2;
  local_260 = local_a58;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h113a58cf051bb473E
            (local_530,local_780,&local_268);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4dbfb8abcb369b0bE(local_780,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(local_530,&local_a48,local_780);
                    /* try { // try from 001b994a to 001b99b0 has its CatchHandler @ 001b9d49 */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(&local_a48,"lines",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1821cb640058dc7eE(local_780,&local_a48,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E(&local_a48,local_780,"lines",5);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,&local_a48,"print the newline counts",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(&local_a48,local_530,&local_268)
  ;
                    /* try { // try from 001b99e3 to 001b9a55 has its CatchHandler @ 001b9d3a */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(local_530,"max-line-length",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h1821cb640058dc7eE(local_780,local_530,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E
            (local_530,local_780,"max-line-length",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,local_530,"print the length of the longest line",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(local_530,&local_a48,&local_268)
  ;
                    /* try { // try from 001b9a88 to 001b9abb has its CatchHandler @ 001b9d7c */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(&local_a48,"total",5);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E(local_780,&local_a48,"total",5);
  local_a48 = &DAT_00115794;
  local_a40 = 4;
  local_a38 = "always";
  local_a30 = 6;
  local_a28 = &DAT_001157c4;
  local_a20 = 4;
  local_a18 = "never";
  local_a10 = 5;
                    /* try { // try from 001b9b10 to 001b9b21 has its CatchHandler @ 001b9cf5 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17he94a2a0f1ec543acE
            (&local_268,&local_a48);
                    /* try { // try from 001b9b22 to 001b9b3b has its CatchHandler @ 001b9cf0 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb47b92374b06f664E
            (&local_a48,local_780,&local_268);
                    /* try { // try from 001b9b3c to 001b9b59 has its CatchHandler @ 001b9d7c */
  _ZN12clap_builder7builder3arg3Arg10value_name17hc7d8e8b2a7daef84E
            (local_780,&local_a48,&DAT_001157a8,4);
  (*(code *)PTR_memcpy_00235088)(&local_a48,local_780,0x248);
  local_800 = local_538 | 0x10;
  local_7fc = local_534;
                    /* try { // try from 001b9b94 to 001b9baf has its CatchHandler @ 001b9d7c */
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,&local_a48,
             "when to print a line with total counts;\n  WHEN can be: auto, always, only, never",
             0x50);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(&local_a48,local_530,local_780);
                    /* try { // try from 001b9bca to 001b9c3c has its CatchHandler @ 001b9d2b */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E
            (local_530,
             "wordscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
             ,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1821cb640058dc7eE(local_780,local_530,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h3c3a43fe85585989E
            (local_530,local_780,
             "wordscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
             ,5);
  _ZN12clap_builder7builder3arg3Arg4help17hda24e5bf42a6979bE
            (local_780,local_530,"print the word counts: ",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(&local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(local_530,&local_a48,&local_268)
  ;
                    /* try { // try from 001b9c6f to 001b9cc7 has its CatchHandler @ 001b9d19 */
  _ZN12clap_builder7builder3arg3Arg3new17h121854c2d7176118E(&local_a48,&DAT_0011e2e2,5);
  _ZN12clap_builder7builder3arg3Arg6action17hfee65dd4032c8feaE(local_780,&local_a48,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h113a58cf051bb473E
            (&local_a48,local_780,&local_a60);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4dbfb8abcb369b0bE(local_780,&local_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h6158f1000831def5E(param_1,local_530,local_780);
  return param_1;
}