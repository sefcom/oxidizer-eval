undefined8 _ZN5uu_mv6uu_app17hb7098f4f79f9c6f5E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_af0 [3];
  undefined **local_ad8;
  code *local_ad0;
  undefined **local_ac8;
  code *local_ac0;
  uint local_860;
  undefined4 local_85c;
  undefined local_858 [24];
  undefined local_840 [632];
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined *local_578;
  undefined8 local_570;
  undefined ***local_568;
  undefined8 local_560;
  undefined8 local_558;
  ulong local_2bc;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
  _ZN12clap_builder7builder7command7Command3new17h7f82bb5b5e559a7bE(&local_578,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h3b729f3964ee6dcdE(local_840,&local_578);
  _ZN12clap_builder7builder7command7Command5about17h0a2c7ed6bf50f1d6E(&local_578,local_840);
                    /* try { // try from 00189e70 to 00189e86 has its CatchHandler @ 0018a83b */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0024aad8)
            (&local_ad8,&DAT_00121ab1,0x68);
  _ZN12clap_builder7builder7command7Command14override_usage17h5d5372cf9ec4bf4dE
            (local_840,&local_578,&local_ad8);
  local_ad8 = &PTR_DAT_00241610;
  local_ad0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
  local_ac8 = &PTR_DAT_00241600;
  local_ac0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h553019366b827b87E;
  local_578 = &DAT_002415e0;
  local_570 = 2;
  local_558 = 0;
  local_560 = 2;
                    /* try { // try from 00189f08 to 00189f1c has its CatchHandler @ 0018a829 */
  local_568 = &local_ad8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h26cd0638306e3785E(local_858,&local_578);
  _ZN12clap_builder7builder7command7Command10after_help17h7a09f767cdc36e1bE
            (&local_578,local_840,local_858);
  (*(code *)PTR_memcpy_0024a680)(local_840,&local_578,700);
  local_584 = local_2bc | 0x8000000080;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(&local_578,&DAT_00121a02,5);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,&local_578,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(&local_578,&local_ad8,&DAT_00121a02,5);
                    /* try { // try from 00189fca to 0018a032 has its CatchHandler @ 0018a883 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,&local_578,"do not prompt before overwriting",0x20);
  local_2b0 = &DAT_00121a07;
  local_2a8 = 0xb;
  local_2a0 = &DAT_00121a12;
  local_298 = 10;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h066b234cfcfb0907E
            (&local_578,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,&local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(local_840,&DAT_00121a07,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,local_840,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(local_840,&local_ad8,&DAT_00121a07,0xb)
  ;
                    /* try { // try from 0018a0b4 to 0018a10e has its CatchHandler @ 0018a871 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,local_840,"prompt before override",0x16);
  local_2b0 = &DAT_00121a02;
  local_2a8 = 5;
  local_2a0 = &DAT_00121a12;
  local_298 = 10;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h066b234cfcfb0907E
            (local_840,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(&local_578,&DAT_00121a12,10);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,&local_578,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(&local_578,&local_ad8,&DAT_00121a12,10)
  ;
                    /* try { // try from 0018a190 to 0018a1ea has its CatchHandler @ 0018a85f */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,&local_578,"do not overwrite an existing file",0x21);
  local_2b0 = &DAT_00121a02;
  local_2a8 = 5;
  local_2a0 = &DAT_00121a07;
  local_298 = 0xb;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h066b234cfcfb0907E
            (&local_578,&local_ad8,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,&local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(local_840,&DAT_00121a1c,0x16);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE
            (&local_ad8,local_840,&DAT_00121a1c,0x16);
                    /* try { // try from 0018a254 to 0018a26f has its CatchHandler @ 0018a817 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (local_840,&local_ad8,"remove any trailing slashes from each SOURCE argument",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
                    /* try { // try from 0018a2a2 to 0018a2ac has its CatchHandler @ 0018a802 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6backup17h97e05fc730627326E_0024aae0)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_ad8)
  ;
                    /* try { // try from 0018a2c7 to 0018a2d1 has its CatchHandler @ 0018a7ed */
  (*(code *)
    PTR__ZN6uucore8features14backup_control9arguments14backup_no_args17hfb21d07466a7545aE_0024aae8)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
                    /* try { // try from 0018a2ec to 0018a2f6 has its CatchHandler @ 0018a7d8 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6suffix17h87e85728d219a77fE_0024aaf0)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_ad8)
  ;
                    /* try { // try from 0018a311 to 0018a31b has its CatchHandler @ 0018a7c3 */
  (*(code *)PTR__ZN6uucore8features14update_control9arguments6update17h042cd58a51ead532E_0024aaf8)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
                    /* try { // try from 0018a336 to 0018a340 has its CatchHandler @ 0018a7ae */
  (*(code *)
    PTR__ZN6uucore8features14update_control9arguments14update_no_args17hb4e4463f3f7510d7E_0024ab00)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(local_840,&DAT_0011fd40,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,local_840,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE
            (local_840,&local_ad8,&DAT_0011fd40,0x10);
                    /* try { // try from 0018a3aa to 0018a41d has its CatchHandler @ 0018a895 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,local_840,"move all SOURCE arguments into DIRECTORY",0x28);
  _ZN12clap_builder7builder3arg3Arg10value_name17h61ff4659daedc090E(local_840,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf38580f9a462787eE(&local_ad8,local_840,4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h106e887abff37471E(local_840,&local_ad8);
  local_af0[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc31563990e94e401E
            (&local_ad8,local_840,local_af0);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(&local_578,&DAT_00121a32,0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,&local_578,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE
            (&local_578,&local_ad8,&DAT_00121a32,0x13);
                    /* try { // try from 0018a487 to 0018a49f has its CatchHandler @ 0018a799 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,&local_578,"treat DEST as a normal file",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(local_840,&DAT_00121a45,7);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,local_840,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(local_840,&local_ad8,&DAT_00121a45,7);
                    /* try { // try from 0018a521 to 0018a539 has its CatchHandler @ 0018a784 */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,local_840,"explain what is being done",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(&local_578,"progress",8);
  _ZN12clap_builder7builder3arg3Arg5short17hf820f8627e180b7aE(&local_ad8,&local_578,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(&local_578,&local_ad8,"progress",8);
                    /* try { // try from 0018a5bb to 0018a5d3 has its CatchHandler @ 0018a76f */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_ad8,&local_578,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(&local_578,local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(local_840,&DAT_00121a4c,5);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,local_840,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h6190fa01943e4143E(local_840,&local_ad8);
  (*(code *)PTR_memcpy_0024a680)(&local_ad8,local_840,0x278);
  local_860 = local_5c8 | 1;
  local_85c = local_5c4;
                    /* try { // try from 0018a67f to 0018a6aa has its CatchHandler @ 0018a84d */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc31563990e94e401E
            (local_840,&local_ad8,local_af0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf38580f9a462787eE(&local_ad8,local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(local_840,&local_578,&local_ad8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5dfcfea206c23747E(&local_578,&DAT_00121a51,5);
  _ZN12clap_builder7builder3arg3Arg4long17ha4464611d4cf3c3bE(&local_ad8,&local_578,&DAT_00121a51,5);
                    /* try { // try from 0018a6fc to 0018a717 has its CatchHandler @ 0018a75a */
  _ZN12clap_builder7builder3arg3Arg4help17haec559e6e974a82bE
            (&local_578,&local_ad8,"explain how a file is copied. Implies -v",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17h2bbd86678dedb4d7E(&local_ad8,&local_578,2);
  _ZN12clap_builder7builder7command7Command3arg17h8a7e81e38c8662a6E(param_1,local_840,&local_ad8);
  return param_1;
}