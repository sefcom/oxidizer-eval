/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _ZN7uu_sort6uu_app17h48b389d7f2011a6fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined8 local_ab8;
  char *local_ab0;
  undefined8 uStack_aa8;
  char *local_aa0;
  undefined8 local_a98;
  char *local_a90;
  undefined8 local_a88;
  char *local_a80;
  undefined8 local_a78;
  char *local_a70;
  undefined8 local_a68;
  char *local_a60;
  undefined8 local_a58;
  char *local_a50;
  undefined8 local_a48;
  uint local_828;
  undefined4 local_824;
  char *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  char *local_7e0;
  undefined8 local_7d8;
  char *local_7d0;
  undefined8 local_7c8;
  ulong local_564;
  undefined4 local_55c;
  undefined8 local_558 [2];
  undefined8 local_548;
  uint local_310;
  undefined4 local_30c;
  ulong local_29c;
  undefined4 local_294;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  char *local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  char *local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined8 uStack_230;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hd1db7c2463193fc5E(&local_820,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h09678657269ecd73E
            (local_558,&local_820,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h8c84fbd2c531229aE
            (&local_820,local_558,
             "Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input."
             ,0x62);
  _ZN12clap_builder7builder7command7Command10after_help17h404ae101f851e81bE
            (local_558,&local_820,
             "The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by the first whitespace after a non-whitespace character. Use -t to specify a custom separator.\nIn the default case, whitespace is appended at the beginning of each field. Custom separators however are not included in fields.\n\nFIELD and CHAR both start at 1 (i.e. they are 1-indexed). If there is no end specified after a comma, the end will be the end of the line.\nIf CHAR is set 0, it means the end of the field. CHAR defaults to 1 for the start position and to 0 for the end position.\n\nValid options are: MbdfhnRrV. They override the global options for this key."
             ,0x297);
                    /* try { // try from 00222277 to 0022228d has its CatchHandler @ 002237a5 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_a70,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h6de7701807b0af4fE
            (&local_820,local_558,&local_a70);
  (*(code *)PTR_memcpy_00306c40)(local_558,&local_820,700);
  local_29c = local_564 | 0x14008800140088;
  local_294 = local_55c;
                    /* try { // try from 002222e9 to 0022233d has its CatchHandler @ 002238a1 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,&DAT_00124358,4);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_a70,&local_820,&DAT_00124358,4);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_820,&local_a70,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,&local_820,5);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222370 to 002223c7 has its CatchHandler @ 0022388c */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_a70,local_558,"version",7);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (local_558,&local_a70,"Print version information.",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,local_558,8);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 002223fa to 00222430 has its CatchHandler @ 00223877 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,&DAT_00124384,4);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_a70,&local_820,&DAT_00124384,4);
  local_820 = "general-numeric";
  local_818 = 0xf;
  local_810 = "human-numeric";
  local_808 = 0xd;
  local_800 = "month";
  local_7f8 = 5;
  local_7f0 = "numeric";
  local_7e8 = 7;
  local_7e0 = "version";
  local_7d8 = 7;
  local_7d0 = "random";
  local_7c8 = 6;
                    /* try { // try from 002224cc to 002224e0 has its CatchHandler @ 00223793 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h3f400171af95931dE
            (&local_288,&local_820);
                    /* try { // try from 002224e1 to 002224fa has its CatchHandler @ 0022378e */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hee521409f72fdc71E
            (&local_820,&local_a70,&local_288);
  local_238 = PTR_s_random_sort_002ffc48;
  uStack_230 = _UNK_002ffc50;
  local_248 = PTR_s_version_sort_002ffc38;
  uStack_240 = _UNK_002ffc40;
  local_258 = PTR_s_numeric_sort_002ffc28;
  uStack_250 = _UNK_002ffc30;
  local_268 = PTR_s_month_sort_002ffc18;
  uStack_260 = _UNK_002ffc20;
  local_278 = PTR_s_human_numeric_sort_002ffc08;
  uStack_270 = _UNK_002ffc10;
  local_288 = PTR_s_general_numeric_sort_002ffbf8._0_4_;
  uStack_284 = PTR_s_general_numeric_sort_002ffbf8._4_4_;
  uStack_280 = _UNK_002ffc00;
  uStack_27c = _UNK_002ffc04;
                    /* try { // try from 00222555 to 0022256e has its CatchHandler @ 00223877 */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17hecac1878624bc9b9E
            (&local_a70,&local_820,&local_288);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222589 to 002225b3 has its CatchHandler @ 00223779 */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"human-numeric-sort",0x12,0x68,
             "compare according to human readable sizes, eg 1M > 100k",0x37);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 002225ce to 002225f8 has its CatchHandler @ 00223764 */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"month-sort",10,0x4d,"compare according to month name abbreviation",0x2c);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222613 to 0022263d has its CatchHandler @ 0022374f */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"numeric-sort",0xc,0x6e,"compare according to string numerical value",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 00222658 to 00222682 has its CatchHandler @ 0022373a */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"general-numeric-sort",0x14,0x67,
             "compare according to string general numerical value",0x33);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 0022269d to 002226c4 has its CatchHandler @ 00223725 */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"version-sort",0xc,0x56,"Sort by SemVer version number, eg 1.12.2 > 1.1.2",
             0x30);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 002226df to 00222706 has its CatchHandler @ 00223710 */
  _ZN7uu_sort18make_sort_mode_arg17hacb2eeda6c9582b5E
            (&local_a70,"random-sort",0xb,0x52,"shuffle in random order",0x17);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222721 to 0022283a has its CatchHandler @ 00223943 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"dictionary-order",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,100);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (local_558,&local_a70,"dictionary-order",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"consider only blanks and alphanumeric characters",0x30);
  local_ab0 = "numeric-sort";
  uStack_aa8 = 0xc;
  local_aa0 = "general-numeric-sort";
  local_a98 = 0x14;
  local_a90 = "human-numeric-sort";
  local_a88 = 0x12;
  local_a80 = "month-sort";
  local_a78 = 10;
  local_258 = "month-sort";
  uStack_250 = 10;
  local_268 = "human-numeric-sort";
  uStack_260 = 0x12;
  local_278 = "general-numeric-sort";
  uStack_270 = 0x14;
  local_288 = 0x12f025;
  uStack_284 = 0;
  uStack_280 = 0xc;
  uStack_27c = 0;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17hf685bc3e3a40c93dE
            (local_558,&local_a70,&local_288);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 0022286d to 002228d9 has its CatchHandler @ 00223862 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"merge",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_820,&local_a70,"merge",5);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"merge already sorted files; do not sort",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 0022290c to 0022295a has its CatchHandler @ 0022398b */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"check",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,99);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(local_558,&local_a70,"check",5);
  (*(code *)PTR_memcpy_00306c40)(&local_a70,local_558,0x248);
  local_828 = local_310 | 0x80;
  local_824 = local_30c;
                    /* try { // try from 00222997 to 002229a6 has its CatchHandler @ 0022398b */
  _ZN12clap_builder7builder3arg3Arg8num_args17he2517ce56841ccd1E(local_558,&local_a70);
  local_a70 = "silent";
  local_a68 = 6;
  local_a60 = "quiet";
  local_a58 = 5;
  local_a50 = "diagnose-first";
  local_a48 = 0xe;
                    /* try { // try from 002229e9 to 002229fa has its CatchHandler @ 002236fb */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h63cf271f696422e6E
            (&local_288,&local_a70);
                    /* try { // try from 002229fb to 00222a14 has its CatchHandler @ 002236f6 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hee521409f72fdc71E
            (&local_a70,local_558,&local_288);
                    /* try { // try from 00222a15 to 00222a50 has its CatchHandler @ 0022398b */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h3b5bf0600745f61dE
            (local_558,&local_a70,"output",6);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"check for sorted input; do not sort",0x23);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 00222a6b to 00222af5 has its CatchHandler @ 00223931 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"check-silent",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_820,&local_a70,"check-silent",0xc);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h3b5bf0600745f61dE
            (&local_a70,&local_820,"output",6);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_820,&local_a70,
             "exit successfully if the given file is already sorted, and exit with status 1 otherwise."
             ,0x58);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222b28 to 00222b94 has its CatchHandler @ 0022384d */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(local_558,&local_a70,"ignore-case",0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"fold lower case to upper case characters",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_288)
  ;
                    /* try { // try from 00222bc7 to 00222c4a has its CatchHandler @ 0022391f */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"ignore-nonprinting",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_820,&local_a70,"ignore-nonprinting",0x12);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"ignore nonprinting characters",0x1d);
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17hf685bc3e3a40c93dE
            (&local_820,&local_a70,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222c7d to 00222ce9 has its CatchHandler @ 00223838 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"ignore-leading-blanks",0x15);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (local_558,&local_a70,"ignore-leading-blanks",0x15);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"ignore leading blanks when finding sort keys in each line",0x39);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_288)
  ;
                    /* try { // try from 00222d1c to 00222dbd has its CatchHandler @ 00223979 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"output",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_820,&local_a70,"output",6);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"write output to FILENAME instead of stdout",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_820,&local_a70,"FILENAME",8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd24e5e837954c77cE(&local_a70,&local_820,3);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00222dd8 to 00222e44 has its CatchHandler @ 00223823 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"reverse",7);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(local_558,&local_a70,"reverse",7);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"reverse the output",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_288)
  ;
                    /* try { // try from 00222e77 to 00222ee3 has its CatchHandler @ 0022380e */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"stable",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_820,&local_a70,"stable",6);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"stabilize sort by disabling last-resort comparison",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 00222f16 to 00222f82 has its CatchHandler @ 002237f9 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"unique",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(local_558,&local_a70,"unique",6);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"output only the first of an equal run",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_288)
  ;
                    /* try { // try from 00222fb5 to 00223048 has its CatchHandler @ 0022390a */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"key",3);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x6b);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_820,&local_a70,"key",3);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"sort by a key",0xd);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_820,&local_a70,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4ab686050c83fbf8E(&local_a70,&local_820);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_a70)
  ;
                    /* try { // try from 00223063 to 00223117 has its CatchHandler @ 002238f5 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"field-separator",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (local_558,&local_a70,"field-separator",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"custom separator for -k",0x17);
  local_ac8 = 2;
  local_548 = local_ab8;
  local_558[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h912096ca1f6ccb15E
            (&local_288,&local_a70,local_558);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_288)
  ;
                    /* try { // try from 00223135 to 002231a1 has its CatchHandler @ 002237e4 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_820,&local_a70,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_288,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 002231d4 to 00223246 has its CatchHandler @ 002238e0 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"parallelDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_a70,local_558,"parallelDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (local_558,&local_a70,"change the number of threads running concurrently to NUM_THREADS"
             ,0x40);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_a70,local_558,"NUM_THREADS",0xb);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 00223261 to 002232eb has its CatchHandler @ 002238cb */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"buffer-size",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,&local_820,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_820,&local_a70,"buffer-size",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,&local_820,"sets the maximum SIZE of each segment in number of sorted items"
             ,0x3f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_288,&local_a70,&DAT_001242cc,4);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 00223309 to 002233aa has its CatchHandler @ 00223967 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"temporary-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17h6aff1b9bbc32a78eE(&local_a70,local_558,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (local_558,&local_a70,"temporary-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_a70,local_558,"use DIR for temporaries, not $TMPDIR or /tmp",0x2c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E(local_558,&local_a70,"DIR",3);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd24e5e837954c77cE(&local_a70,local_558,4);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 002233c5 to 0022344e has its CatchHandler @ 00223955 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"compress-program",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_a70,&local_820,"compress-program",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_820,&local_a70,
             "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout"
             ,0x73);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_a70,&local_820,&DAT_00124314,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd24e5e837954c77cE(&local_288,&local_a70,6);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 0022346c to 002234de has its CatchHandler @ 002238b6 */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"batch-size",10);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_a70,local_558,"batch-size",10);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (local_558,&local_a70,"Merge at most N_MERGE inputs at once.",0x25);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_a70,local_558,"N_MERGE",7);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 002234f9 to 002235ca has its CatchHandler @ 0022399d */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E
            (&local_a70,&local_820,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (&local_820,&local_a70,"read input from the files specified by NUL-terminated NUL_FILES"
             ,0x3f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6e964bb8aa83d621E
            (&local_a70,&local_820,"NUL_FILES",9);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_820,&local_a70,1);
  local_278 = (char *)local_ab8;
  local_288 = (undefined4)local_ac8;
  uStack_284 = local_ac8._4_4_;
  uStack_280 = uStack_ac0;
  uStack_27c = uStack_abc;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h912096ca1f6ccb15E
            (&local_a70,&local_820,&local_288);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd24e5e837954c77cE(&local_288,&local_a70,3);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(&local_820,local_558,&local_288)
  ;
                    /* try { // try from 002235e8 to 0022363c has its CatchHandler @ 002237cf */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(local_558,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17hafe83a130e788d32E(&local_a70,local_558,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4help17h87289a78493f8587E
            (local_558,&local_a70,
             "underline the parts of the line that are actually used for sorting",0x42);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(local_558,&local_820,&local_a70)
  ;
                    /* try { // try from 0022366f to 002236cb has its CatchHandler @ 002237ba */
  _ZN12clap_builder7builder3arg3Arg3new17h12ee94dcd25b9d1cE(&local_820,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h7d1cfe4f93e3f399E(&local_a70,&local_820,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h912096ca1f6ccb15E
            (&local_820,&local_a70,&local_ac8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd24e5e837954c77cE(&local_a70,&local_820,3);
  _ZN12clap_builder7builder7command7Command3arg17h4abf436970c9cbc0E(param_1,local_558,&local_a70);
  return param_1;
}