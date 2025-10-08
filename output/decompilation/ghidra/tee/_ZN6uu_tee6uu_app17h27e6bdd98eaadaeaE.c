undefined8 _ZN6uu_tee6uu_app17h27e6bdd98eaadaeaE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  char *local_b68;
  undefined8 uStack_b60;
  ulong local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined4 local_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 local_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 local_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 local_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined8 local_a80;
  uint local_920;
  undefined4 local_91c;
  ulong local_8dc;
  undefined4 local_8d4;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined local_7f0 [632];
  uint local_578;
  undefined4 local_574;
  undefined local_570 [700];
  ulong local_2b4;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0d00)();
  _ZN12clap_builder7builder7command7Command3new17h328c469f5f7641beE(local_570,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6e7669af9644fd20E(&local_b98,local_570);
  _ZN12clap_builder7builder7command7Command5about17hbf2525e22ea1334eE(local_570,&local_b98);
                    /* try { // try from 0015c74c to 0015c765 has its CatchHandler @ 0015cecb */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f0e88)
            (local_7f0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17he2ef76f1310b8d22E
            (&local_b98,local_570,local_7f0);
  _ZN12clap_builder7builder7command7Command10after_help17h725b28a97e67b6a1E(local_570,&local_b98);
  (*(code *)PTR_memcpy_001f0cd8)(&local_b98,local_570,700);
  local_8dc = local_2b4 | 0x8008000080080;
  local_8d4 = local_2ac;
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(local_570,"--help",6);
  _ZN12clap_builder7builder3arg3Arg5short17hfa2f3c724af3c5edE(local_7f0,local_570,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17h11dbbd7e7324fb23E(local_570,local_7f0,&DAT_00117e9c,4);
                    /* try { // try from 0015c824 to 0015c83f has its CatchHandler @ 0015cebc */
  _ZN12clap_builder7builder3arg3Arg4help17hcfcd1c1487fab995E(local_7f0,local_570,"Print help",10);
  _ZN12clap_builder7builder3arg3Arg6action17he07538a61b56f553E(&local_2a8,local_7f0,7);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(local_570,&local_b98,&local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(&local_b98,"append",6);
  _ZN12clap_builder7builder3arg3Arg4long17h11dbbd7e7324fb23E(local_7f0,&local_b98,"append",6);
  _ZN12clap_builder7builder3arg3Arg5short17hfa2f3c724af3c5edE(&local_b98,local_7f0,0x61);
                    /* try { // try from 0015c8be to 0015c8d9 has its CatchHandler @ 0015ceaa */
  _ZN12clap_builder7builder3arg3Arg4help17hcfcd1c1487fab995E
            (local_7f0,&local_b98,"append to the given FILEs, do not overwrite",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17he07538a61b56f553E(&local_2a8,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(&local_b98,local_570,&local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(local_570,"ignore-interrupts",0x11);
  _ZN12clap_builder7builder3arg3Arg4long17h11dbbd7e7324fb23E
            (local_7f0,local_570,"ignore-interrupts",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17hfa2f3c724af3c5edE(local_570,local_7f0,0x69);
                    /* try { // try from 0015c95e to 0015c979 has its CatchHandler @ 0015ce9b */
  _ZN12clap_builder7builder3arg3Arg4help17hcfcd1c1487fab995E
            (local_7f0,local_570,"ignore interrupt signals (ignored on non-Unix platforms)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17he07538a61b56f553E(&local_2a8,local_7f0,2);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(local_570,&local_b98,&local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(&local_b98,"file",4);
  _ZN12clap_builder7builder3arg3Arg6action17he07538a61b56f553E(local_7f0,&local_b98,1);
                    /* try { // try from 0015c9dd to 0015c9ec has its CatchHandler @ 0015ce89 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h1713aaa1f93f9b47E(&local_2a8,local_7f0);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(&local_b98,local_570,&local_2a8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(local_570,"ignore-pipe-errors",0x12);
  _ZN12clap_builder7builder3arg3Arg5short17hfa2f3c724af3c5edE(local_7f0,local_570,0x70);
                    /* try { // try from 0015ca3b to 0015ca56 has its CatchHandler @ 0015ce7a */
  _ZN12clap_builder7builder3arg3Arg4help17hcfcd1c1487fab995E
            (local_570,local_7f0,"set write error behavior (ignored on non-Unix platforms)",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17he07538a61b56f553E(local_7f0,local_570,2);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(local_570,&local_b98,local_7f0);
  _ZN12clap_builder7builder3arg3Arg3new17h64023fdfe3a3f6e8E(&local_b98,"output-error",0xc);
  _ZN12clap_builder7builder3arg3Arg4long17h11dbbd7e7324fb23E
            (local_7f0,&local_b98,"output-error",0xc);
  (*(code *)PTR_memcpy_001f0cd8)(&local_b98,local_7f0,0x278);
  local_920 = local_578 | 0x80;
  local_91c = local_574;
  _ZN12clap_builder7builder3arg3Arg8num_args17h6f84a2625b963170E(local_7f0,&local_b98,0,1);
  local_b68 = "warnZero\x1b[7mBool";
  uStack_b60 = 4;
  uStack_b80 = 0x8000000000000000;
  local_b98 = 0;
  uStack_b90 = 8;
  local_b88 = 0;
  local_b58 = local_b58 & 0xffffffffffffff00;
                    /* try { // try from 0015cb5b to 0015cb78 has its CatchHandler @ 0015cedd */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h7a85030acd765e74E
            (&local_8c8,&local_b98,"produce warnings for errors writing to any output",0x31);
  local_b68 = "warn-nopipe";
  uStack_b60 = 0xb;
  uStack_b80 = 0x8000000000000000;
  local_b98 = 0;
  uStack_b90 = 8;
  local_b88 = 0;
  local_b58 = local_b58 & 0xffffffffffffff00;
                    /* try { // try from 0015cbbc to 0015cbd9 has its CatchHandler @ 0015ce68 */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h7a85030acd765e74E
            (&local_880,&local_b98,
             "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)",
             0x54);
  local_b68 = "exit";
  uStack_b60 = 4;
  uStack_b80 = 0x8000000000000000;
  local_b98 = 0;
  uStack_b90 = 8;
  local_b88 = 0;
  local_b58 = local_b58 & 0xffffffffffffff00;
                    /* try { // try from 0015cc1d to 0015cc3a has its CatchHandler @ 0015ce56 */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h7a85030acd765e74E
            (&local_838,&local_b98,"exit on write errors to any output",0x22);
  local_b68 = "exit-nopipe";
  uStack_b60 = 0xb;
  uStack_b80 = 0x8000000000000000;
  local_b98 = 0;
  uStack_b90 = 8;
  local_b88 = 0;
  local_b58 = local_b58 & 0xffffffffffffff00;
                    /* try { // try from 0015cc7e to 0015cc9b has its CatchHandler @ 0015ce44 */
  _ZN12clap_builder7builder14possible_value13PossibleValue4help17h7a85030acd765e74E
            (&local_2a8,&local_b98,
             "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)"
             ,0x66);
  local_b98 = local_8c8;
  uStack_b90 = uStack_8c0;
  local_b88 = local_8b8;
  uStack_b80 = uStack_8b0;
  local_b78 = local_8a8;
  uStack_b70 = uStack_8a0;
  local_b68 = (char *)local_898;
  uStack_b60 = uStack_890;
  local_b58 = local_888;
  local_b50 = local_880;
  uStack_b48 = uStack_878;
  local_b40 = local_870;
  uStack_b38 = uStack_868;
  local_b30 = local_860;
  uStack_b28 = uStack_858;
  local_b20 = local_850;
  uStack_b18 = uStack_848;
  local_b10 = local_840;
  local_ac8 = local_7f8;
  local_ad8 = local_808;
  uStack_ad0 = uStack_800;
  local_ae8 = local_818;
  uStack_ae0 = uStack_810;
  local_af8 = local_828;
  uStack_af0 = uStack_820;
  local_b08 = local_838;
  uStack_b00 = uStack_830;
  local_a80 = local_268;
  local_a90 = local_278;
  uStack_a8c = uStack_274;
  uStack_a88 = uStack_270;
  uStack_a84 = uStack_26c;
  local_aa0 = local_288;
  uStack_a9c = uStack_284;
  uStack_a98 = uStack_280;
  uStack_a94 = uStack_27c;
  local_ab0 = local_298;
  uStack_aac = uStack_294;
  uStack_aa8 = uStack_290;
  uStack_aa4 = uStack_28c;
  local_ac0 = local_2a8;
  uStack_abc = uStack_2a4;
  uStack_ab8 = uStack_2a0;
  uStack_ab4 = uStack_29c;
                    /* try { // try from 0015cdc4 to 0015cdd5 has its CatchHandler @ 0015cedd */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17heb07f6468785cbc8E
            (&local_2a8,&local_b98);
                    /* try { // try from 0015cdd6 to 0015cdef has its CatchHandler @ 0015ce3c */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h549f72b672b0a153E
            (&local_b98,local_7f0,&local_2a8);
                    /* try { // try from 0015cdf0 to 0015ce0d has its CatchHandler @ 0015ce3a */
  _ZN12clap_builder7builder3arg3Arg4help17hcfcd1c1487fab995E
            (local_7f0,&local_b98,"set write error behavior",0x18);
  _ZN12clap_builder7builder7command7Command3arg17h7a160d1d679eb393E(param_1,local_570,local_7f0);
  return param_1;
}