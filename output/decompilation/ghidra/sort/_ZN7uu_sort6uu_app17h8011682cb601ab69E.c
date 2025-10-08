undefined8 _ZN7uu_sort6uu_app17h8011682cb601ab69E(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ad8;
  undefined8 local_ad0;
  char *local_ac8;
  undefined8 local_ac0;
  char *local_ab8;
  undefined8 local_ab0;
  uint local_860;
  undefined4 local_85c;
  undefined8 local_858 [3];
  char *local_840;
  undefined8 local_838;
  char *local_830;
  undefined8 local_828;
  char *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00296eb8)();
  _ZN12clap_builder7builder7command7Command3new17h3afb6968de38ac72E(&local_840,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc1447f01f7548aa4E(local_578,&local_840);
  _ZN12clap_builder7builder7command7Command5about17haf464902c00aa0f8E(&local_840,local_578);
  _ZN12clap_builder7builder7command7Command10after_help17hb123e56d034381b8E(local_578,&local_840);
                    /* try { // try from 001d4333 to 001d4349 has its CatchHandler @ 001d58ed */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_002975e0)
            (&local_ad8,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h10c615c8b61416e1E
            (&local_840,local_578,&local_ad8);
  (*(code *)PTR_memcpy_00296e48)(local_578,&local_840,700);
  local_2bc = local_584 | 0x28008800280088;
  local_2b4 = local_57c;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,&DAT_00126bb8,4);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_ad8,&local_840,&DAT_00126bb8,4);
                    /* try { // try from 001d43dc to 001d43f7 has its CatchHandler @ 001d58d8 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_840,&local_ad8,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,&local_840,5);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_ad8,local_578,"version",7);
                    /* try { // try from 001d4461 to 001d447c has its CatchHandler @ 001d58c3 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (local_578,&local_ad8,"Print version information.",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,local_578,8);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,&DAT_00126be4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_ad8,&local_840,&DAT_00126be4,4);
  local_840 = "general-numeric";
  local_838 = 0xf;
  local_830 = "human-numeric";
  local_828 = 0xd;
  local_820 = "month";
  local_818 = 5;
  local_810 = "numeric";
  local_808 = 7;
  local_800 = "version";
  local_7f8 = 7;
  local_7f0 = "random";
  local_7e8 = 6;
                    /* try { // try from 001d457e to 001d4592 has its CatchHandler @ 001d58a4 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h3ded132934dfc845E
            (&local_2b0,&local_840);
                    /* try { // try from 001d4593 to 001d45ac has its CatchHandler @ 001d589f */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h13a0652c92d041afE
            (&local_840,&local_ad8,&local_2b0);
                    /* try { // try from 001d45ad to 001d45c5 has its CatchHandler @ 001d589a */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h747c377cbe357a2eE
            (&local_ad8,&local_840,&PTR_s_general_numeric_sort_0028d1d0);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
                    /* try { // try from 001d45e0 to 001d460a has its CatchHandler @ 001d5885 */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"human-numeric-sort",0x12,0x68,
             "compare according to human readable sizes, eg 1M > 100k",0x37);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
                    /* try { // try from 001d4625 to 001d464f has its CatchHandler @ 001d5870 */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"month-sort",10,0x4d,"compare according to month name abbreviation",0x2c);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
                    /* try { // try from 001d466a to 001d4694 has its CatchHandler @ 001d585b */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"numeric-sort",0xc,0x6e,"compare according to string numerical value",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
                    /* try { // try from 001d46af to 001d46d6 has its CatchHandler @ 001d5846 */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"general-numeric-sort",0x14,0x67,
             "compare according to string general numerical value",0x33);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
                    /* try { // try from 001d46f1 to 001d4718 has its CatchHandler @ 001d5831 */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"version-sort",0xc,0x56,"Sort by SemVer version number, eg 1.12.2 > 1.1.2",
             0x30);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
                    /* try { // try from 001d4738 to 001d475f has its CatchHandler @ 001d581c */
  _ZN7uu_sort18make_sort_mode_arg17ha1a076c92d3e898bE
            (&local_ad8,"random-sort",0xb,0x52,"shuffle in random order",0x17);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"dictionary-order",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,100);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (local_578,&local_ad8,"dictionary-order",0x10);
                    /* try { // try from 001d47c9 to 001d4852 has its CatchHandler @ 001d59a1 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"consider only blanks and alphanumeric characters",0x30);
  local_2b0 = "numeric-sort";
  local_2a8 = 0xc;
  local_2a0 = "general-numeric-sort";
  local_298 = 0x14;
  local_290 = "human-numeric-sort";
  local_288 = 0x12;
  local_280 = "month-sort";
  local_278 = 10;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h65890bb380829d1eE
            (local_578,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"merge",5);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_840,&local_ad8,"merge",5);
                    /* try { // try from 001d48d4 to 001d48ec has its CatchHandler @ 001d5807 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"merge already sorted files; do not sort",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"check",5);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,99);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(local_578,&local_ad8,"check",5);
  (*(code *)PTR_memcpy_00296e48)(&local_ad8,local_578,0x278);
  local_860 = local_300 | 0x80;
  local_85c = local_2fc;
  _ZN12clap_builder7builder3arg3Arg8num_args17h8bea5c2512e5ebc9E(local_578,&local_ad8);
  local_ad8 = "silent";
  local_ad0 = 6;
  local_ac8 = "quiet";
  local_ac0 = 5;
  local_ab8 = "diagnose-first";
  local_ab0 = 0xe;
                    /* try { // try from 001d49f4 to 001d4a05 has its CatchHandler @ 001d57f2 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h1aad84c19dbbd8e7E
            (&local_2b0,&local_ad8);
                    /* try { // try from 001d4a06 to 001d4a1f has its CatchHandler @ 001d57ed */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h13a0652c92d041afE
            (&local_ad8,local_578,&local_2b0);
  local_2b0 = "output";
  local_2a8 = 6;
  local_2a0 = "check-silent";
  local_298 = 0xc;
                    /* try { // try from 001d4a59 to 001d4a90 has its CatchHandler @ 001d598f */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h9c1cb115a19a47e9E
            (local_578,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"check for sorted input; do not sort",0x23);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"check-silent",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_840,&local_ad8,"check-silent",0xc);
  local_2b0 = "output";
  local_2a8 = 6;
  local_2a0 = "check";
  local_298 = 5;
                    /* try { // try from 001d4b22 to 001d4b54 has its CatchHandler @ 001d597d */
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h9c1cb115a19a47e9E
            (&local_ad8,&local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_840,&local_ad8,
             "exit successfully if the given file is already sorted, and exit with status 1 otherwise."
             ,0x58);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,&local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"ignore-case",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(local_578,&local_ad8,"ignore-case",0xb)
  ;
                    /* try { // try from 001d4bd6 to 001d4bee has its CatchHandler @ 001d57d8 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"fold lower case to upper case characters",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"ignore-nonprinting",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_840,&local_ad8,"ignore-nonprinting",0x12);
                    /* try { // try from 001d4c70 to 001d4d07 has its CatchHandler @ 001d596b */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"ignore nonprinting characters",0x1d);
  local_2b0 = "numeric-sort";
  local_2a8 = 0xc;
  local_2a0 = "general-numeric-sort";
  local_298 = 0x14;
  local_290 = "human-numeric-sort";
  local_288 = 0x12;
  local_280 = "month-sort";
  local_278 = 10;
  _ZN12clap_builder7builder3arg3Arg18conflicts_with_all17h65890bb380829d1eE
            (&local_840,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,&local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"ignore-leading-blanks",0x15);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (local_578,&local_ad8,"ignore-leading-blanks",0x15);
                    /* try { // try from 001d4d89 to 001d4da1 has its CatchHandler @ 001d57c3 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"ignore leading blanks when finding sort keys in each line",0x39);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"output",6);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_840,&local_ad8,"output",6);
                    /* try { // try from 001d4e23 to 001d4e70 has its CatchHandler @ 001d59d7 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"write output to FILENAME instead of stdout",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_840,&local_ad8,"FILENAME",8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf119227bbe679b8dE(&local_ad8,&local_840,3);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"reverse",7);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(local_578,&local_ad8,"reverse",7);
                    /* try { // try from 001d4eda to 001d4ef2 has its CatchHandler @ 001d57ae */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"reverse the output",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"stable",6);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_840,&local_ad8,"stable",6);
                    /* try { // try from 001d4f74 to 001d4f8c has its CatchHandler @ 001d5799 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"stabilize sort by disabling last-resort comparison",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"unique",6);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(local_578,&local_ad8,"unique",6);
                    /* try { // try from 001d500e to 001d5026 has its CatchHandler @ 001d5784 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"output only the first of an equal run",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"key",3);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x6b);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_840,&local_ad8,"key",3);
                    /* try { // try from 001d50a8 to 001d50c0 has its CatchHandler @ 001d576f */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"sort by a key",0xd);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_840,&local_ad8,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h6bc57b13c0c852fcE(&local_ad8,&local_840);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"field-separator",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (local_578,&local_ad8,"field-separator",0xf);
                    /* try { // try from 001d5152 to 001d5190 has its CatchHandler @ 001d5956 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"custom separator for -k",0x17);
  local_858[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb352e97d3c5df919E
            (&local_2b0,&local_ad8,local_858);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_840,&local_ad8,"zero-terminated",0xf);
                    /* try { // try from 001d51fd to 001d5215 has its CatchHandler @ 001d575a */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"parallel\' existsDeadlock",8)
  ;
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_ad8,local_578,"parallel\' existsDeadlock",8);
                    /* try { // try from 001d527f to 001d52b8 has its CatchHandler @ 001d5941 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (local_578,&local_ad8,"change the number of threads running concurrently to NUM_THREADS"
             ,0x40);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_ad8,local_578,"NUM_THREADS",0xb);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"buffer-size",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,&local_840,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_840,&local_ad8,"buffer-size",0xb);
                    /* try { // try from 001d5322 to 001d5358 has its CatchHandler @ 001d592c */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,&local_840,"sets the maximum SIZE of each segment in number of sorted items"
             ,0x3f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_2b0,&local_ad8,&DAT_00126b24,4);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"temporary-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17h23e3272a2cf3bf02E(&local_ad8,local_578,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (local_578,&local_ad8,"temporary-directory",0x13);
                    /* try { // try from 001d53c5 to 001d5412 has its CatchHandler @ 001d59c5 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_ad8,local_578,"use DIR for temporaries, not $TMPDIR or /tmp",0x2c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E(local_578,&local_ad8,"DIR",3);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf119227bbe679b8dE(&local_ad8,local_578,4);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"compress-program",0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_ad8,&local_840,"compress-program",0x10);
                    /* try { // try from 001d5464 to 001d54b4 has its CatchHandler @ 001d59b3 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_840,&local_ad8,
             "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdout"
             ,0x73);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_ad8,&local_840,&DAT_00126b6c,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf119227bbe679b8dE(&local_2b0,&local_ad8,6);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"batch-size",10);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_ad8,local_578,"batch-size",10);
                    /* try { // try from 001d5509 to 001d5542 has its CatchHandler @ 001d5917 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (local_578,&local_ad8,"Merge at most N_MERGE inputs at once.",0x25);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_ad8,local_578,"N_MERGE",7);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE
            (&local_ad8,&local_840,"files0-from",0xb);
                    /* try { // try from 001d5594 to 001d5613 has its CatchHandler @ 001d59e9 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (&local_840,&local_ad8,"read input from the files specified by NUL-terminated NUL_FILES"
             ,0x3f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h168c1fc386d25a03E
            (&local_ad8,&local_840,"NUL_FILES",9);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_840,&local_ad8,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb352e97d3c5df919E
            (&local_ad8,&local_840,local_858);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf119227bbe679b8dE(&local_2b0,&local_ad8,3);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(local_578,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17h33c1b8ab7e9b931bE(&local_ad8,local_578,"debug",5);
                    /* try { // try from 001d5668 to 001d5683 has its CatchHandler @ 001d5745 */
  _ZN12clap_builder7builder3arg3Arg4help17hbab65183f30f8c6dE
            (local_578,&local_ad8,
             "underline the parts of the line that are actually used for sorting",0x42);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(local_578,&local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h66e7469a5d9ab259E(&local_840,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17hfbaf4498b00a0a7cE(&local_ad8,&local_840,1);
                    /* try { // try from 001d56e7 to 001d5715 has its CatchHandler @ 001d5902 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb352e97d3c5df919E
            (&local_840,&local_ad8,local_858);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf119227bbe679b8dE(&local_ad8,&local_840,3);
  _ZN12clap_builder7builder7command7Command3arg17hfe5bbe8a9b0830d7E(param_1,local_578,&local_ad8);
  return param_1;
}