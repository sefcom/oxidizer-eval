undefined8 _ZN5uu_cp6uu_app17h625d3e37003a837dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_ad8;
  code *local_ad0;
  undefined **local_ac8;
  code *local_ac0;
  char *local_ab8;
  undefined8 local_ab0;
  uint local_860;
  undefined4 local_85c;
  char *local_858;
  undefined8 local_850;
  char *local_848;
  undefined8 local_840;
  char *local_838;
  undefined8 local_830;
  uint local_5e0;
  undefined4 local_5dc;
  ulong local_59c;
  undefined4 local_594;
  undefined *local_590;
  undefined8 local_588;
  undefined *local_580;
  undefined8 local_578;
  undefined8 local_570;
  uint local_318;
  undefined4 local_314;
  ulong local_2d4;
  undefined4 local_2cc;
  undefined local_2c8 [24];
  undefined8 local_2b0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00267628)();
  _ZN12clap_builder7builder7command7Command3new17hc99276f3dca80dd9E(&local_590,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha377766369da11d3E(&local_858,&local_590);
  _ZN12clap_builder7builder7command7Command5about17h6c02d340335b54b4E(&local_590,&local_858);
                    /* try { // try from 0019c630 to 0019c644 has its CatchHandler @ 0019dedf */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00267b48)
            (&local_ad8,&DAT_00123aa1,0x68);
  _ZN12clap_builder7builder7command7Command14override_usage17h784f4a435dbfd3abE
            (&local_858,&local_590,&local_ad8);
  local_ad8 = &PTR_DAT_0025e938;
  local_ad0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
  local_ac8 = &PTR_DAT_0025e928;
  local_ac0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haac06c1252b30d1dE;
  local_590 = &DAT_0025e908;
  local_588 = 2;
  local_570 = 0;
  local_578 = 2;
                    /* try { // try from 0019c6c3 to 0019c6d7 has its CatchHandler @ 0019deca */
  local_580 = (undefined *)&local_ad8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(local_2c8,&local_590);
  _ZN12clap_builder7builder7command7Command10after_help17he39af2a693fd6357E
            (&local_590,&local_858,local_2c8);
  (*(code *)PTR_memcpy_00267610)(&local_858,&local_590,700);
  local_59c = local_2d4 | 0x8800000088;
  local_594 = local_2cc;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,&DAT_00120a80,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x74);
                    /* try { // try from 0019c765 to 0019c80f has its CatchHandler @ 0019e059 */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h3a9812deb98f96d9E
            (&local_590,&local_ad8,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_590,&DAT_00120a80,0x10);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE
            (&local_590,&local_ad8,&DAT_00120a80,0x10);
  _ZN12clap_builder7builder3arg3Arg10value_hint17had66afd17aa71df0E(&local_ad8,&local_590,4);
  local_2b0[0] = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9428519d57848c14E
            (&local_590,&local_ad8,local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"copy all SOURCE arguments into target-directory",0x2f);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_858,&local_ad8,"no-target-directory",0x13);
                    /* try { // try from 0019c875 to 0019c8a7 has its CatchHandler @ 0019dfff */
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h3a9812deb98f96d9E
            (&local_ad8,&local_858,&DAT_00120a80,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"Treat DEST as a regular file and not a directory",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_590,&local_ad8,"interactive",0xb);
                    /* try { // try from 0019c925 to 0019c957 has its CatchHandler @ 0019dfed */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_ad8,&local_590,"no-clobber",10);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_590,&local_ad8,"ask before overwriting files",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"link",4);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_858,&local_ad8,"link",4);
                    /* try { // try from 0019c9d5 to 0019c9fb has its CatchHandler @ 0019dfdb */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6650a898546d90c6E(&local_ad8,&local_858);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"hard-link files instead of copying",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"no-clobber",10);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_590,&local_ad8,"no-clobber",10);
                    /* try { // try from 0019ca79 to 0019caab has its CatchHandler @ 0019dfc6 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_ad8,&local_590,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_590,&local_ad8,"don\'t overwrite a file that already exists",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x52);
                    /* try { // try from 0019cb0b to 0019cb55 has its CatchHandler @ 0019dfb1 */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h5c4e4b19901dda50E(&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"recursive",9);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"copy directories recursively",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E
            (&local_590,"strip-trailing-slashes",0x16);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_590,"strip-trailing-slashes",0x16);
                    /* try { // try from 0019cbbb to 0019cbd6 has its CatchHandler @ 0019deb5 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_590,&local_ad8,"remove any trailing slashes from each SOURCE argument",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"debug",5);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"debug",5);
                    /* try { // try from 0019cc3c to 0019cc57 has its CatchHandler @ 0019dea0 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"explain how a file is copied. Implies -v",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_590,&local_ad8,"verbose",7);
                    /* try { // try from 0019ccd5 to 0019cceb has its CatchHandler @ 0019de8b */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"explicitly state what is being done",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"symbolic-link",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_858,&local_ad8,"symbolic-link",0xd);
                    /* try { // try from 0019cd69 to 0019cd8f has its CatchHandler @ 0019df9c */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6650a898546d90c6E(&local_ad8,&local_858);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"make symbolic links instead of copying",0x26);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"force",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_590,&local_ad8,"force",5);
                    /* try { // try from 0019ce0d to 0019ce23 has its CatchHandler @ 0019de76 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,
             "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows."
             ,0xaa);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"remove-destination",0x12);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_858,"remove-destination",0x12);
                    /* try { // try from 0019ce89 to 0019cec0 has its CatchHandler @ 0019df87 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_858,&local_ad8,"force",5);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_858,
             "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files."
             ,0x91);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_858,&local_590,local_2b0)
  ;
                    /* try { // try from 0019cef1 to 0019cef9 has its CatchHandler @ 0019de61 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6backup17h97e05fc730627326E_00267b50)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
                    /* try { // try from 0019cf12 to 0019cf1a has its CatchHandler @ 0019de4c */
  (*(code *)
    PTR__ZN6uucore8features14backup_control9arguments14backup_no_args17hfb21d07466a7545aE_00267b58)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
                    /* try { // try from 0019cf33 to 0019cf3b has its CatchHandler @ 0019de37 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6suffix17h87e85728d219a77fE_00267b60)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
                    /* try { // try from 0019cf54 to 0019cf5c has its CatchHandler @ 0019de22 */
  (*(code *)PTR__ZN6uucore8features14update_control9arguments6update17h042cd58a51ead532E_00267b68)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
                    /* try { // try from 0019cf75 to 0019cf7d has its CatchHandler @ 0019de0d */
  (*(code *)
    PTR__ZN6uucore8features14update_control9arguments14update_no_args17hb4e4463f3f7510d7E_00267b70)
            (&local_ad8);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"reflink",7);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"reflink",7);
                    /* try { // try from 0019cfcb to 0019cff6 has its CatchHandler @ 0019e047 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE
            (&local_858,&local_ad8,&DAT_00120db4,4);
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6650a898546d90c6E(&local_ad8,&local_858);
  (*(code *)PTR_memcpy_00267610)(&local_858,&local_ad8,0x278);
  local_5e0 = local_860 | 0x80;
  local_5dc = local_85c;
                    /* try { // try from 0019d031 to 0019d04a has its CatchHandler @ 0019e047 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h8b3b8a676a6dddb2E
            (&local_ad8,&local_858,"always",6);
  local_858 = "auto";
  local_850 = 4;
  local_848 = "always";
  local_840 = 6;
  local_838 = "never";
  local_830 = 5;
                    /* try { // try from 0019d095 to 0019d0a9 has its CatchHandler @ 0019ddfd */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h419ee950dc80f9b2E
            (local_2b0,&local_858);
                    /* try { // try from 0019d0aa to 0019d0c1 has its CatchHandler @ 0019ddf8 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h266f577f5d32e118E
            (&local_858,&local_ad8,local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h59b8910fc2c9d690E(&local_ad8,&local_858,0,1);
                    /* try { // try from 0019d0dc to 0019d0f7 has its CatchHandler @ 0019e047 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (local_2b0,&local_ad8,"control clone/CoW copies. See below",0x23);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_858,&local_590,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"attributes-only",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_590,"attributes-only",0xf);
                    /* try { // try from 0019d14a to 0019d175 has its CatchHandler @ 0019df72 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h6650a898546d90c6E(&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"Don\'t copy the file data, just the attributes",0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"preserve",8);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"preserve",8);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_858,&local_ad8,1);
                    /* try { // try from 0019d1f3 to 0019d203 has its CatchHandler @ 0019e035 */
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg19use_value_delimiter17hbc9e6ac97bf7a88bE_00267b78)
            (&local_ad8,&local_858,1);
                    /* try { // try from 0019d204 to 0019d210 has its CatchHandler @ 0019dde8 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17he961522e222ab679E
            (local_2b0);
                    /* try { // try from 0019d211 to 0019d228 has its CatchHandler @ 0019dde3 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h266f577f5d32e118E
            (&local_858,&local_ad8,local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3c060b7ce4033c91E(&local_ad8,&local_858,0);
  (*(code *)PTR_memcpy_00267610)(&local_858,&local_ad8,0x278);
  local_5e0 = local_860 | 0x80;
  local_5dc = local_85c;
                    /* try { // try from 0019d278 to 0019d2c6 has its CatchHandler @ 0019e035 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE
            (&local_ad8,&local_858,"ATTR_LIST",9);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h8b3b8a676a6dddb2E
            (&local_858,&local_ad8,"mode,ownership,timestamp",0x18);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_858,
             "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all"
             ,0x93);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E
            (&local_590,"preserve-default-attributes",0x1b);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_590,&local_ad8,"preserve-default-attributes",0x1b);
                    /* try { // try from 0019d32c to 0019d342 has its CatchHandler @ 0019ddce */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"same as --preserve=mode,ownership(unix only),timestamps",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"no-preserve",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_858,"no-preserve",0xb);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_858,&local_ad8,1);
                    /* try { // try from 0019d3c0 to 0019d3d0 has its CatchHandler @ 0019e011 */
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg19use_value_delimiter17hbc9e6ac97bf7a88bE_00267b78)
            (&local_ad8,&local_858,1);
                    /* try { // try from 0019d3d1 to 0019d3dd has its CatchHandler @ 0019ddbe */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17he961522e222ab679E
            (local_2b0);
                    /* try { // try from 0019d3de to 0019d3f5 has its CatchHandler @ 0019ddb9 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h266f577f5d32e118E
            (&local_858,&local_ad8,local_2b0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3c060b7ce4033c91E(&local_ad8,&local_858,0);
  (*(code *)PTR_memcpy_00267610)(&local_858,&local_ad8,0x278);
  local_5e0 = local_860 | 0x80;
  local_5dc = local_85c;
                    /* try { // try from 0019d445 to 0019d477 has its CatchHandler @ 0019e011 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE
            (&local_ad8,&local_858,"ATTR_LIST",9);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (local_2b0,&local_ad8,"don\'t preserve the specified attributes",0x27);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_858,&local_590,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"parents",7);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_590,"parents",7);
                    /* try { // try from 0019d4ca to 0019d4f5 has its CatchHandler @ 0019df5d */
  _ZN12clap_builder7builder3arg3Arg5alias17h1a7c9aaf6b5f8806E(&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"use full source file name under DIRECTORY",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_858,&local_ad8,"no-dereference",0xe);
                    /* try { // try from 0019d573 to 0019d5a5 has its CatchHandler @ 0019df48 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_ad8,&local_858,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"never follow symbolic links in SOURCE",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_590,&local_ad8,"dereference",0xb);
                    /* try { // try from 0019d623 to 0019d655 has its CatchHandler @ 0019df33 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_ad8,&local_590,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_590,&local_ad8,"always follow symbolic links in SOURCE",0x26);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"cli-symbolic-links",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,0x48);
                    /* try { // try from 0019d6b5 to 0019d6d0 has its CatchHandler @ 0019dda4 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"follow command-line symbolic links in SOURCE",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"archive",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_590,&local_ad8,"archive",7);
                    /* try { // try from 0019d74e to 0019d764 has its CatchHandler @ 0019dd8f */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"Same as -dR --preserve=all",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E
            (&local_858,"no-dereference-preserve-links",0x1d);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_858,100);
                    /* try { // try from 0019d7c4 to 0019d7df has its CatchHandler @ 0019dd7a */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,"same as --no-dereference --preserve=links",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_858,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"one-file-system",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_590,&local_ad8,"one-file-system",0xf);
                    /* try { // try from 0019d85d to 0019d873 has its CatchHandler @ 0019dd65 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_590,"stay on this file system",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"sparse",6);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"sparse",6);
                    /* try { // try from 0019d8d9 to 0019d8f4 has its CatchHandler @ 0019df1e */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE
            (&local_858,&local_ad8,&DAT_00120db4,4);
  local_ad8 = (undefined **)0x124589;
  local_ad0 = (code *)0x5;
  local_ac8 = (undefined **)0x120d9c;
  local_ac0 = (code *)0x4;
  local_ab8 = "always";
  local_ab0 = 6;
                    /* try { // try from 0019d925 to 0019d934 has its CatchHandler @ 0019dd50 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h419ee950dc80f9b2E
            (local_2b0,&local_ad8);
                    /* try { // try from 0019d935 to 0019d94c has its CatchHandler @ 0019dd4b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h266f577f5d32e118E
            (&local_ad8,&local_858,local_2b0);
                    /* try { // try from 0019d94d to 0019d968 has its CatchHandler @ 0019df1e */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (local_2b0,&local_ad8,"control creation of sparse files. See below",0x2b);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_858,&local_590,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"Z",1);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_ad8,&local_590,0x5a);
                    /* try { // try from 0019d9b5 to 0019d9d0 has its CatchHandler @ 0019dd36 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_590,&local_ad8,
             "set SELinux security context of destination file to default type",0x40);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_590,&local_858,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"context",7);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_858,"context",7);
                    /* try { // try from 0019da36 to 0019da91 has its CatchHandler @ 0019e023 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h2d78e7864a70a71aE(&local_858,&local_ad8,"CTX",3);
  local_2b0[0] = 1;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9428519d57848c14E
            (&local_ad8,&local_858,local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_858,&local_ad8,
             "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX"
             ,0x55);
  _ZN12clap_builder7builder3arg3Arg8num_args17h59b8910fc2c9d690E(&local_ad8,&local_858,0,1);
  (*(code *)PTR_memcpy_00267610)(&local_858,&local_ad8,0x278);
  local_5e0 = local_860 | 0x80;
  local_5dc = local_85c;
                    /* try { // try from 0019dae6 to 0019daf7 has its CatchHandler @ 0019e023 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h8b3b8a676a6dddb2E
            (&local_ad8,&local_858,1,0);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E
            (&local_858,&local_590,&local_ad8);
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"progress",8);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E(&local_ad8,&local_590,"progress",8);
  _ZN12clap_builder7builder3arg3Arg5short17hf6223e43e4c27034E(&local_590,&local_ad8,0x67);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,2);
                    /* try { // try from 0019db70 to 0019db8b has its CatchHandler @ 0019dd21 */
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (local_2b0,&local_ad8,
             "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.",0x4e)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_590,&local_858,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_858,"copy-contents",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17hcce0d53ef438b739E
            (&local_ad8,&local_858,"copy-contents",0xd);
                    /* try { // try from 0019dbde to 0019dc15 has its CatchHandler @ 0019df09 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbaf111a17e6e3fd6E
            (&local_858,&local_ad8,"attributes-only",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h4e6540dc10fba197E
            (&local_ad8,&local_858,"NotImplemented: copy contents of special files when recursive",
             0x3d);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(local_2b0,&local_ad8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(&local_858,&local_590,local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17hc2ddf9c6f1414dc9E(&local_590,"paths",5);
  _ZN12clap_builder7builder3arg3Arg6action17he62196abb477c5deE(&local_ad8,&local_590,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3c060b7ce4033c91E(&local_590,&local_ad8,1);
  (*(code *)PTR_memcpy_00267610)(&local_ad8,&local_590,0x278);
  local_860 = local_318 | 1;
  local_85c = local_314;
                    /* try { // try from 0019dcc0 to 0019dcf8 has its CatchHandler @ 0019def4 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17had66afd17aa71df0E(&local_590,&local_ad8,2);
  local_2b0[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h9428519d57848c14E
            (&local_ad8,&local_590,local_2b0);
  _ZN12clap_builder7builder7command7Command3arg17hf4f6327b64aac807E(param_1,&local_858,&local_ad8);
  return param_1;
}