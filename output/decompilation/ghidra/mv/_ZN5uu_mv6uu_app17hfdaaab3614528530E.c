undefined8 _ZN5uu_mv6uu_app17hfdaaab3614528530E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined **local_a70;
  code *local_a68;
  undefined **local_a60;
  code *local_a58;
  uint local_828;
  undefined4 local_824;
  undefined local_820 [584];
  uint local_5d8;
  undefined4 local_5d4;
  ulong local_564;
  undefined4 local_55c;
  undefined local_558 [24];
  undefined *local_540;
  undefined8 local_538;
  undefined ***local_530;
  undefined8 local_528;
  undefined8 local_520;
  ulong local_284;
  undefined4 local_27c;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h3ac40d4d2ba218e2E(&local_540,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h3a5176627196e52eE
            (local_820,&local_540,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h1d1180b4bea582edE
            (&local_540,local_820,"Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`."
             ,0x40);
                    /* try { // try from 001e8687 to 001e869d has its CatchHandler @ 001e9051 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (&local_a70,
             "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE..."
             ,0x68);
  _ZN12clap_builder7builder7command7Command14override_usage17h447655dada94692dE
            (local_820,&local_540,&local_a70);
  local_a70 = &PTR_DAT_00287db0;
  local_a68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
  local_a60 = &PTR_DAT_00287da0;
  local_a58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2fb83001df40ac3aE;
  local_540 = &DAT_00287dc0;
  local_538 = 2;
  local_520 = 0;
  local_528 = 2;
                    /* try { // try from 001e871f to 001e8733 has its CatchHandler @ 001e903c */
  local_530 = &local_a70;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h70402eff178ea70dE(local_558,&local_540);
  _ZN12clap_builder7builder7command7Command10after_help17hffed433d7565392eE
            (&local_540,local_820,local_558);
  (*(code *)PTR_memcpy_0028dbf0)(local_820,&local_540,700);
  local_564 = local_284 | 0x8000000080;
  local_55c = local_27c;
                    /* try { // try from 001e8792 to 001e8851 has its CatchHandler @ 001e90fc */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(&local_540,&DAT_0012622c,5);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,&local_540,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(&local_540,&local_a70,&DAT_0012622c,5);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,&local_540,&DAT_00120ff0,0x20);
  local_278 = &DAT_00126231;
  local_270 = 0xb;
  local_268 = &DAT_0012623c;
  local_260 = 10;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h23a4bf7baf701fb5E
            (&local_540,&local_a70,&local_278);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,&local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_a70)
  ;
                    /* try { // try from 001e8884 to 001e8935 has its CatchHandler @ 001e90ea */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(local_820,&DAT_00126231,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,local_820,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(local_820,&local_a70,&DAT_00126231,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,local_820,"prompt before override",0x16);
  local_278 = &DAT_0012622c;
  local_270 = 5;
  local_268 = &DAT_0012623c;
  local_260 = 10;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h23a4bf7baf701fb5E
            (local_820,&local_a70,&local_278);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8968 to 001e8a16 has its CatchHandler @ 001e90d8 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(&local_540,&DAT_0012623c,10);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,&local_540,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(&local_540,&local_a70,&DAT_0012623c,10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,&local_540,"do not overwrite an existing file",0x21);
  local_278 = &DAT_0012622c;
  local_270 = 5;
  local_268 = &DAT_00126231;
  local_260 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h23a4bf7baf701fb5E
            (&local_540,&local_a70,&local_278);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,&local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_a70)
  ;
                    /* try { // try from 001e8a49 to 001e8a9d has its CatchHandler @ 001e90b4 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(local_820,&DAT_00126246,0x16);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE
            (&local_a70,local_820,&DAT_00126246,0x16);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (local_820,&local_a70,"remove any trailing slashes from each SOURCE argument",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8ad0 to 001e8ada has its CatchHandler @ 001e9027 */
  _ZN6uucore8features14backup_control9arguments6backup17h804b9c4d220a6bfaE(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_a70)
  ;
                    /* try { // try from 001e8af5 to 001e8aff has its CatchHandler @ 001e9012 */
  _ZN6uucore8features14backup_control9arguments14backup_no_args17h7f5ee465b0f6b670E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8b1a to 001e8b24 has its CatchHandler @ 001e8ffd */
  _ZN6uucore8features14backup_control9arguments6suffix17h659b6e9a409bb614E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_a70)
  ;
                    /* try { // try from 001e8b3f to 001e8b49 has its CatchHandler @ 001e8fe8 */
  _ZN6uucore8features14update_control9arguments6update17h43d52bfaa3e04136E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8b64 to 001e8b6e has its CatchHandler @ 001e8fd3 */
  _ZN6uucore8features14update_control9arguments14update_no_args17h0df581fe31ef9923E(&local_a70);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_a70)
  ;
                    /* try { // try from 001e8b89 to 001e8c84 has its CatchHandler @ 001e910e */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(local_820,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,local_820,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE
            (local_820,&local_a70,"target-directory",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,local_820,"move all SOURCE arguments into DIRECTORY",0x28);
  _ZN12clap_builder7builder3arg3Arg10value_name17h6c7f718e13d12b61E(local_820,&local_a70);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd834dc4c6585e22dE(&local_a70,local_820,4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h84a620ed2b3e8926E
            (local_820,&local_a70,&DAT_0012625c,0x13);
  local_a88 = 2;
  local_268 = (undefined *)local_a78;
  local_278 = (undefined *)0x2;
  local_270 = local_a80;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h36c41d5fcbf32a50E
            (&local_a70,local_820,&local_278);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8c9f to 001e8d0b has its CatchHandler @ 001e90a2 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(&local_540,&DAT_0012625c,0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,&local_540,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE
            (&local_540,&local_a70,&DAT_0012625c,0x13);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,&local_540,"treat DEST as a normal file",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_278)
  ;
                    /* try { // try from 001e8d3e to 001e8daa has its CatchHandler @ 001e9090 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(local_820,&DAT_0012626f,7);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,local_820,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(local_820,&local_a70,&DAT_0012626f,7);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,local_820,"explain what is being done",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_278)
  ;
                    /* try { // try from 001e8ddd to 001e8e49 has its CatchHandler @ 001e907b */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(&local_540,"progress",8);
  _ZN12clap_builder7builder3arg3Arg5short17hdbbca410bd052cabE(&local_a70,&local_540,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(&local_540,&local_a70,"progress",8);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_a70,&local_540,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_278,&local_a70,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(&local_540,local_820,&local_278)
  ;
                    /* try { // try from 001e8e7c to 001e8ebe has its CatchHandler @ 001e90c6 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(local_820,&DAT_00126276,5);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,local_820,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17hf9359e8da3676a05E(local_820,&local_a70);
  (*(code *)PTR_memcpy_0028dbf0)(&local_a70,local_820,0x248);
  local_828 = local_5d8 | 1;
  local_824 = local_5d4;
                    /* try { // try from 001e8ef9 to 001e8f22 has its CatchHandler @ 001e90c6 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h36c41d5fcbf32a50E
            (local_820,&local_a70,&local_a88);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd834dc4c6585e22dE(&local_a70,local_820,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(local_820,&local_540,&local_a70)
  ;
                    /* try { // try from 001e8f3d to 001e8f91 has its CatchHandler @ 001e9066 */
  _ZN12clap_builder7builder3arg3Arg3new17h412655cb859ad9efE(&local_540,&DAT_0012627b,5);
  _ZN12clap_builder7builder3arg3Arg4long17hed17bfa77e83592dE(&local_a70,&local_540,&DAT_0012627b,5);
  _ZN12clap_builder7builder3arg3Arg4help17hfb37332b8e05b438E
            (&local_540,&local_a70,"explain how a file is copied. Implies -v",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h1e93e8b84edc4ec8E(&local_a70,&local_540,2);
  _ZN12clap_builder7builder7command7Command3arg17h6ced883a66281c56E(param_1,local_820,&local_a70);
  return param_1;
}