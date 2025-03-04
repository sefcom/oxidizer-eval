undefined8 _ZN5uu_cp6uu_app17h07bd295c994b8bb6E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_a70;
  code *local_a68;
  undefined **local_a60;
  code *local_a58;
  char *local_a50;
  undefined8 local_a48;
  uint local_828;
  undefined4 local_824;
  undefined *local_820;
  undefined8 local_818;
  char *local_810;
  undefined8 local_808;
  char *local_800;
  undefined8 local_7f8;
  uint local_5d8;
  undefined4 local_5d4;
  ulong local_564;
  undefined4 local_55c;
  undefined *local_558;
  undefined8 local_550;
  undefined ***local_548;
  undefined8 local_540;
  undefined8 local_538;
  ulong local_29c;
  undefined4 local_294;
  undefined local_290 [24];
  undefined8 local_278;
  undefined8 local_270;
  undefined local_268;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h2bdc837409817e5fE(&local_558,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hf5d23409933cbf81E
            (&local_820,&local_558,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17hf6807aed0e4a68c3E
            (&local_558,&local_820,"Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.",0x38);
                    /* try { // try from 001ff8a7 to 001ff8bd has its CatchHandler @ 0020112a */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (&local_a70,
             "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE..."
             ,0x68);
  _ZN12clap_builder7builder7command7Command14override_usage17hb925896944b21ab7E
            (&local_820,&local_558,&local_a70);
  local_a70 = &PTR_DAT_002b5bc0;
  local_a68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
  local_a60 = &PTR_DAT_002b5bb0;
  local_a58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
  local_558 = &DAT_002b5bd0;
  local_550 = 2;
  local_538 = 0;
  local_540 = 2;
                    /* try { // try from 001ff93f to 001ff953 has its CatchHandler @ 00201115 */
  local_548 = &local_a70;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(local_290,&local_558);
  _ZN12clap_builder7builder7command7Command10after_help17h24742e0eb86c1defE
            (&local_558,&local_820,local_290);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_558,700);
  local_564 = local_29c | 0x8800000088;
  local_55c = local_294;
                    /* try { // try from 001ff9b2 to 001ffa97 has its CatchHandler @ 00201376 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x74);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h9f8f59e8a1d46781E
            (&local_558,&local_a70,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_558,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E
            (&local_558,&local_a70,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h909b89e502ddfc03E(&local_a70,&local_558,4);
  local_278 = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3f95aebc62bb149fE
            (&local_558,&local_a70,&local_278);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"copy all SOURCE arguments into target-directory",0x2f);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffab2 to 001ffb3c has its CatchHandler @ 0020132e */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_820,&local_a70,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h9f8f59e8a1d46781E
            (&local_a70,&local_820,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"Treat DEST as a regular file and not a directory",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffb6f to 001ffbf9 has its CatchHandler @ 0020131c */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_558,&local_a70,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_a70,&local_558,"no-clobber",10);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_558,&local_a70,"ask before overwriting files",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffc2c to 001ffcb6 has its CatchHandler @ 0020130a */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,&DAT_0011e218,4);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_820,&local_a70,&DAT_0011e218,4);
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc22e0e4512b020a1E
            (&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"hard-link files instead of copying",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffce9 to 001ffd73 has its CatchHandler @ 002012f8 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"no-clobber",10);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_558,&local_a70,"no-clobber",10);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_a70,&local_558,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_558,&local_a70,"don\'t overwrite a file that already exists",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffda6 to 001ffe29 has its CatchHandler @ 002012e3 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x52);
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17hd967a993c23685f5E
            (&local_820,&local_a70,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_820,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"copy directories recursively",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 001ffe5c to 001ffeb0 has its CatchHandler @ 002011fc */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE
            (&local_558,"strip-trailing-slashes",0x16);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_558,"strip-trailing-slashes",0x16);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_558,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 001ffee3 to 001fff37 has its CatchHandler @ 002011e7 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_820,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"explain how a file is copied. Implies -v",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 001fff6a to 001fffd6 has its CatchHandler @ 002011d2 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_558,&local_a70,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"explicitly state what is being done",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200009 to 00200093 has its CatchHandler @ 002012ce */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"symbolic-link",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_820,&local_a70,"symbolic-link",0xd);
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc22e0e4512b020a1E
            (&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"make symbolic links instead of copying",0x26);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 002000c6 to 00200132 has its CatchHandler @ 002011bd */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"force",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_558,&local_a70,"force",5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,
             "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows."
             ,0xaa);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200165 to 002001d7 has its CatchHandler @ 002012b9 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"remove-destination",0x12);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_820,"remove-destination",0x12);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_820,&local_a70,"force",5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_820,
             "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files."
             ,0x91);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_278);
                    /* try { // try from 0020020a to 00200214 has its CatchHandler @ 00201100 */
  _ZN6uucore8features14backup_control9arguments6backup17h804b9c4d220a6bfaE(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 0020022f to 00200239 has its CatchHandler @ 002010eb */
  _ZN6uucore8features14backup_control9arguments14backup_no_args17h7f5ee465b0f6b670E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 00200254 to 0020025e has its CatchHandler @ 002010d6 */
  _ZN6uucore8features14backup_control9arguments6suffix17h659b6e9a409bb614E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 00200279 to 00200283 has its CatchHandler @ 002010c1 */
  _ZN6uucore8features14update_control9arguments6update17h43d52bfaa3e04136E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 0020029e to 002002a8 has its CatchHandler @ 002010ac */
  _ZN6uucore8features14update_control9arguments14update_no_args17h0df581fe31ef9923E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 002002c3 to 00200335 has its CatchHandler @ 00201364 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"reflink",7);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_820,"reflink",7);
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E
            (&local_820,&local_a70,&DAT_0011e1ec,4);
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc22e0e4512b020a1E
            (&local_a70,&local_820,&PTR_DAT_002b5bf0,5);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 00200372 to 0020038d has its CatchHandler @ 00201364 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h9470ec4a0f010e70E
            (&local_a70,&local_820,"always",6);
  local_820 = &DAT_0011e1d8;
  local_818 = 4;
  local_810 = "always";
  local_808 = 6;
  local_800 = "never";
  local_7f8 = 5;
                    /* try { // try from 002003d8 to 002003ec has its CatchHandler @ 0020109a */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h5479b6a793fc35d5E
            (&local_278,&local_820);
                    /* try { // try from 002003ed to 00200406 has its CatchHandler @ 00201095 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h35d251af9fa43760E
            (&local_820,&local_a70,&local_278);
  local_278 = 0;
  local_270 = 1;
  local_268 = 0;
                    /* try { // try from 00200427 to 0020045e has its CatchHandler @ 00201364 */
  _ZN12clap_builder7builder3arg3Arg8num_args17ha657edc7ac01ffd3E(&local_a70,&local_820,&local_278);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_278,&local_a70,"control clone/CoW copies. See below",0x23);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_278);
                    /* try { // try from 0020047c to 002004ee has its CatchHandler @ 002012a4 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"attributes-only",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_558,"attributes-only",0xf);
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17hc22e0e4512b020a1E
            (&local_558,&local_a70,&PTR_DAT_002b5bf0,5);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"Don\'t copy the file data, just the attributes",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200521 to 00200584 has its CatchHandler @ 00201352 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"preserveENETDOWN",8);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_820,"preserveENETDOWN",8);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_820,&local_a70,1);
  _ZN12clap_builder7builder3arg3Arg19use_value_delimiter17h85c0efad243fa3a0E
            (&local_a70,&local_820,1);
                    /* try { // try from 00200585 to 0020059d has its CatchHandler @ 00201083 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hc716d1b08cb9a98eE
            (&local_278,&PTR_s_mode_002b5b40,7);
                    /* try { // try from 0020059e to 002005b7 has its CatchHandler @ 0020107e */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h35d251af9fa43760E
            (&local_820,&local_a70,&local_278);
                    /* try { // try from 002005b8 to 002005cb has its CatchHandler @ 00201352 */
  _ZN12clap_builder7builder3arg3Arg8num_args17h480a688d62002bcfE(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 00200608 to 0020065c has its CatchHandler @ 00201352 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E
            (&local_a70,&local_820,"ATTR_LIST",9);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h9470ec4a0f010e70E
            (&local_820,&local_a70,"mode,ownership,timestamp",0x18);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_820,
             "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all"
             ,0x93);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 00200677 to 002006e3 has its CatchHandler @ 002011a8 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE
            (&local_558,"preserve-default-attributes",0x1b);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_558,&local_a70,"preserve-default-attributes",0x1b);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"same as --preserve=mode,ownership(unix only),timestamps",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200716 to 00200779 has its CatchHandler @ 00201340 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"no-preserve",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_820,"no-preserve",0xb);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_820,&local_a70,1);
  _ZN12clap_builder7builder3arg3Arg19use_value_delimiter17h85c0efad243fa3a0E
            (&local_a70,&local_820,1);
                    /* try { // try from 0020077a to 00200792 has its CatchHandler @ 0020106c */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hc716d1b08cb9a98eE
            (&local_278,&PTR_s_mode_002b5b40,7);
                    /* try { // try from 00200793 to 002007ac has its CatchHandler @ 00201067 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h35d251af9fa43760E
            (&local_820,&local_a70,&local_278);
                    /* try { // try from 002007ad to 002007c0 has its CatchHandler @ 00201340 */
  _ZN12clap_builder7builder3arg3Arg8num_args17h480a688d62002bcfE(&local_a70,&local_820,0);
  (*(code *)PTR_memcpy_002bbe30)(&local_820,&local_a70,0x248);
  local_5d8 = local_828 | 0x80;
  local_5d4 = local_824;
                    /* try { // try from 002007fd to 00200833 has its CatchHandler @ 00201340 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E
            (&local_a70,&local_820,"ATTR_LIST",9);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_278,&local_a70,"don\'t preserve the specified attributes",0x27);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_278);
                    /* try { // try from 00200851 to 002008c3 has its CatchHandler @ 0020128f */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"parents",7);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_558,"parents",7);
  _ZN12clap_builder7builder3arg3Arg5alias17ha7b1f7201d9a47a3E(&local_558,&local_a70,"parent",6);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"use full source file name under DIRECTORY",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 002008f6 to 00200980 has its CatchHandler @ 0020127a */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_820,&local_a70,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_a70,&local_820,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"never follow symbolic links in SOURCE",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 002009b3 to 00200a3d has its CatchHandler @ 00201265 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_558,&local_a70,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_a70,&local_558,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_558,&local_a70,"always follow symbolic links in SOURCE",0x26);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_558,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_a70);
                    /* try { // try from 00200a70 to 00200abe has its CatchHandler @ 00201154 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"cli-symbolic-links",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,0x48);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"follow command-line symbolic links in SOURCE",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 00200af1 to 00200b5d has its CatchHandler @ 00201193 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"archive",7);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_558,&local_a70,"archive",7);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"Same as -dR --preserve=all",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200b90 to 00200bde has its CatchHandler @ 0020113f */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE
            (&local_820,"no-dereference-preserve-links",0x1d);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_820,100);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_820,&local_a70,"same as --no-dereference --preserve=links",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 00200c11 to 00200c7d has its CatchHandler @ 0020117e */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"one-file-system",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_a70,&local_558,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_558,&local_a70,"one-file-system",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"stay on this file system",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200cb0 to 00200d04 has its CatchHandler @ 00201250 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"sparse",6);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_820,"sparse",6);
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E
            (&local_820,&local_a70,&DAT_0011e1ec,4);
  local_a70 = (undefined **)0x12caed;
  local_a68 = (code *)0x5;
  local_a60 = (undefined **)&DAT_0011e1d8;
  local_a58 = (code *)0x4;
  local_a50 = "always";
  local_a48 = 6;
                    /* try { // try from 00200d2f to 00200d40 has its CatchHandler @ 00201052 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h5479b6a793fc35d5E
            (&local_278,&local_a70);
                    /* try { // try from 00200d41 to 00200d5a has its CatchHandler @ 0020104d */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h35d251af9fa43760E
            (&local_a70,&local_820,&local_278);
                    /* try { // try from 00200d5b to 00200d78 has its CatchHandler @ 00201250 */
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_278,&local_a70,"control creation of sparse files. See below",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_278);
                    /* try { // try from 00200d96 to 00200e08 has its CatchHandler @ 0020123b */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"copy-contents",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E
            (&local_a70,&local_558,"copy-contents",0xd);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f393ec1c0598f7fE
            (&local_558,&local_a70,"attributes-only",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_558,"NotImplemented: copy contents of special files when recursive",
             0x3d);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200e3b to 00200ead has its CatchHandler @ 00201226 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,&DAT_0012bfb1,7);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_820,&DAT_0012bfb1,7);
  _ZN12clap_builder7builder3arg3Arg10value_name17hcd2d8449df461482E(&local_820,&local_a70,"CTX",3);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_a70,&local_820,
             "NotImplemented: set SELinux security context of destination file to default type",0x50
            );
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_820,&local_558,&local_a70);
                    /* try { // try from 00200ec8 to 00200f49 has its CatchHandler @ 00201169 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_558,"progress",8);
  _ZN12clap_builder7builder3arg3Arg4long17h4bce140d2a4fe0f3E(&local_a70,&local_558,"progress",8);
  _ZN12clap_builder7builder3arg3Arg5short17h1fe10d2408911d32E(&local_558,&local_a70,0x67);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_558,2);
  _ZN12clap_builder7builder3arg3Arg4help17h15e2b335492f338cE
            (&local_278,&local_a70,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E
            (&local_558,&local_820,&local_278);
                    /* try { // try from 00200f67 to 00200fae has its CatchHandler @ 00201211 */
  _ZN12clap_builder7builder3arg3Arg3new17hb1795cde80765c3fE(&local_820,"paths",5);
  _ZN12clap_builder7builder3arg3Arg6action17h4bb0f48ece02220dE(&local_a70,&local_820,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h480a688d62002bcfE(&local_820,&local_a70,1);
  (*(code *)PTR_memcpy_002bbe30)(&local_a70,&local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 00200fe9 to 00201023 has its CatchHandler @ 00201211 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h909b89e502ddfc03E(&local_820,&local_a70,2);
  local_278 = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3f95aebc62bb149fE
            (&local_a70,&local_820,&local_278);
  _ZN12clap_builder7builder7command7Command3arg17h347f83ef948f5588E(param_1,&local_558,&local_a70);
  return param_1;
}