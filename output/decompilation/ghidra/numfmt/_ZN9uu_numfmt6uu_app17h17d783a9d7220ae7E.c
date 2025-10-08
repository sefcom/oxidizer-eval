undefined8 _ZN9uu_numfmt6uu_app17h17d783a9d7220ae7E(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ab0;
  undefined8 local_aa8;
  undefined *local_aa0;
  undefined8 local_a98;
  char *local_a90;
  undefined8 local_a88;
  char *local_a80;
  undefined8 local_a78;
  char *local_a70;
  undefined8 local_a68;
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  char *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  char *local_270;
  undefined8 local_268;
  uint local_28;
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209818)();
  _ZN12clap_builder7builder7command7Command3new17hd4aa3d50c2b3ebb5E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h65f9ae31c75a1f13E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17h29965a2561e854e1E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17he7b36b9534028bf3E(local_830,local_568);
                    /* try { // try from 0016d530 to 0016d546 has its CatchHandler @ 0016e04a */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_002099c0)
            (&local_ab0,"{} [OPTION]... [NUMBER]...",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h60b38f6a906c750fE
            (local_568,local_830,&local_ab0);
  (*(code *)PTR_memcpy_002097a8)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000084;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"delimiter",9);
  _ZN12clap_builder7builder3arg3Arg5short17hb07776535c4064a9E(&local_ab0,local_568,100);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(local_568,&local_ab0,"delimiter",9);
                    /* try { // try from 0016d5f1 to 0016d627 has its CatchHandler @ 0016e09e */
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_568,"X",1);
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (&local_2a0,&local_ab0,"use X instead of whitespace for field delimiter",0x2f);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"field",5);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"field",5);
                    /* try { // try from 0016d67c to 0016d6b5 has its CatchHandler @ 0016e11f */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,"replace the numbers in these input fields; see FIELDS below",0x3b
            );
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_830,"FIELDS",6)
  ;
  (*(code *)PTR_memcpy_002097a8)(local_830,&local_ab0,0x278);
  local_5b8 = local_838 | 0x20;
  local_5b4 = local_834;
                    /* try { // try from 0016d6f0 to 0016d708 has its CatchHandler @ 0016e11f */
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E(&local_ab0,local_830,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"format",6);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_568,"format",6);
                    /* try { // try from 0016d75a to 0016d793 has its CatchHandler @ 0016e089 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_568,&local_ab0,
             "use printf style floating-point FORMAT; see FORMAT below for details",0x44);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_568,"FORMAT",6)
  ;
  (*(code *)PTR_memcpy_002097a8)(&local_2a0,&local_ab0,0x278);
  local_28 = local_838 | 0x20;
  local_24 = local_834;
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"from",4);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"from",4);
                    /* try { // try from 0016d81d to 0016d874 has its CatchHandler @ 0016e10d */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,"auto-scale input numbers to UNITs; see UNIT below",0x31);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E
            (&local_ab0,local_830,&DAT_00118ed0,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E
            (&local_2a0,&local_ab0,&DAT_00118f14,4);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"from-unit",9);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_568,"from-unit",9);
                    /* try { // try from 0016d8c9 to 0016d920 has its CatchHandler @ 0016e0fb */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_568,&local_ab0,"specify the input unit size",0x1b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_568,"N",1);
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E(&local_2a0,&local_ab0,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"to",2);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"to",2);
                    /* try { // try from 0016d975 to 0016d9cc has its CatchHandler @ 0016e0e9 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,"auto-scale output numbers to UNITs; see UNIT below",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E
            (&local_ab0,local_830,&DAT_00118ed0,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E
            (&local_2a0,&local_ab0,&DAT_00118f14,4);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"to-unit",7);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_568,"to-unit",7);
                    /* try { // try from 0016da21 to 0016da78 has its CatchHandler @ 0016e0d7 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_568,&local_ab0,"the output unit size",0x14);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_568,"N",1);
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E(&local_2a0,&local_ab0,"1",1);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"padding",7);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"padding",7);
                    /* try { // try from 0016dacd to 0016db06 has its CatchHandler @ 0016e074 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,
             "pad the output to N characters; positive N will right-align; negative N will left-align; padding is ignored if the output is wider than N; the default is to automatically pad if a whitespace is found"
             ,199);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_830,"N",1);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"header",6);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_568,"header",6);
                    /* try { // try from 0016db58 to 0016dbb6 has its CatchHandler @ 0016e0c5 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_568,&local_ab0,
             "print (without converting) the first N header lines; N defaults to 1 if not specified"
             ,0x55);
  _ZN12clap_builder7builder3arg3Arg8num_args17h6ad762ef558a42d9E(&local_ab0,local_568);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(local_568,&local_ab0,"N",1);
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hf7cff759fc6b1d65E(&local_ab0,local_568)
  ;
  (*(code *)PTR_memcpy_002097a8)(&local_2a0,&local_ab0,0x278);
  local_28 = local_838 | 0x400;
  local_24 = local_834;
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"round",5);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"round",5);
                    /* try { // try from 0016dc42 to 0016dc9c has its CatchHandler @ 0016e0b3 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,"use METHOD for rounding when scaling",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_830,"METHOD",6)
  ;
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E
            (local_830,&local_ab0,"from-zero",9);
  local_ab0 = "up";
  local_aa8 = 2;
  local_aa0 = &DAT_00118f18;
  local_a98 = 4;
  local_a90 = "from-zero";
  local_a88 = 9;
  local_a80 = "towards-zero";
  local_a78 = 0xc;
  local_a70 = "nearest";
  local_a68 = 7;
                    /* try { // try from 0016dcff to 0016dd10 has its CatchHandler @ 0016e038 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hc35a50c645406067E
            (&local_2a0,&local_ab0);
                    /* try { // try from 0016dd11 to 0016dd2a has its CatchHandler @ 0016e036 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb3bb9f292253c5f8E
            (&local_ab0,local_830,&local_2a0);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_568,"suffix",6);
                    /* try { // try from 0016dd7c to 0016ddb5 has its CatchHandler @ 0016e05f */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_568,&local_ab0,
             "print SUFFIX after each formatted number, and accept inputs optionally ending with SUFFIX"
             ,0x59);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E(&local_ab0,local_568,"SUFFIX",6)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"invalid",7);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E(&local_ab0,local_830,"invalid",7);
                    /* try { // try from 0016de07 to 0016dee0 has its CatchHandler @ 0016e131 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (local_830,&local_ab0,"set the failure mode for invalid input",0x26);
  _ZN12clap_builder7builder3arg3Arg13default_value17hb3311da4cde74683E
            (&local_ab0,local_830,"abort",5);
  local_2a0 = "abort";
  local_298 = 5;
  local_290 = &DAT_00118e94;
  local_288 = 4;
  local_280 = &DAT_00118e70;
  local_278 = 4;
  local_270 = "ignore";
  local_268 = 6;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h8ebfb6cb29cb1cdfE
            (local_830,&local_ab0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg10value_name17h0438544fd33361a2E
            (&local_ab0,local_830,"INVALID",7);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_830,local_568,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17hfeb8ebcd71024214E
            (&local_ab0,local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hb07776535c4064a9E(local_568,&local_ab0,0x7a);
                    /* try { // try from 0016df4a to 0016df62 has its CatchHandler @ 0016e021 */
  _ZN12clap_builder7builder3arg3Arg4help17h288b8f3846a27dc5E
            (&local_ab0,local_568,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h5e426cf5bd95badfE(&local_2a0,&local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h6e2e53945c4f26b2E(local_830,"NUMBER",6);
  (*(code *)PTR_memcpy_002097a8)(&local_ab0,local_830,0x278);
  local_838 = local_5b8 | 4;
  local_834 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg6action17h5e426cf5bd95badfE(local_830,&local_ab0,1);
  _ZN12clap_builder7builder7command7Command3arg17hec16206f3ca3d61aE(param_1,local_568,local_830);
  return param_1;
}