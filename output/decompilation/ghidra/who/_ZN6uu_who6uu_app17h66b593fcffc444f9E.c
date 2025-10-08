undefined8 _ZN6uu_who6uu_app17h66b593fcffc444f9E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [640];
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00205d00)();
  _ZN12clap_builder7builder7command7Command3new17hb56d3e04f04358c4E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hfaaa4691f515a37bE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h1a9e4810578678ecE(local_830,local_568);
                    /* try { // try from 0016927d to 00169293 has its CatchHandler @ 00169ccb */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00205ff8)(local_ab0,&DAT_0011acf1,0x23)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h6e8ddfabede3b89eE
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_00205c60)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011ad14,3);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_0011ad14,3);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,0x61);
                    /* try { // try from 0016933e to 00169356 has its CatchHandler @ 00169cb9 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011ad17,0x24)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_00119218,4);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_00119218,4);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x62);
                    /* try { // try from 001693d3 to 001693eb has its CatchHandler @ 00169ca7 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011ad3b,0x18)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_001191e0,4);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_001191e0,4);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,100);
                    /* try { // try from 00169468 to 00169480 has its CatchHandler @ 00169c95 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011ad53,0x14)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_0011ad67,7);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_0011ad67,7);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x48);
                    /* try { // try from 001694fd to 00169515 has its CatchHandler @ 00169c83 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011ad6e,0x1d)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011ad8b,5);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_0011ad8b,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,0x6c);
                    /* try { // try from 00169592 to 001695aa has its CatchHandler @ 00169c71 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011ad90,0x1c)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_0011adac,6);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_0011adac,6);
                    /* try { // try from 0016960f to 0016962a has its CatchHandler @ 00169c5f */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_830,local_ab0,&DAT_0011adb2,0x29)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011addb,0x12);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_ab0,local_568,0x6d);
                    /* try { // try from 00169689 to 001696a4 has its CatchHandler @ 00169c4a */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_568,local_ab0,&DAT_0011aded,0x2c)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_0011ae19,7);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_0011ae19,7);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x70);
                    /* try { // try from 00169721 to 00169739 has its CatchHandler @ 00169c35 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011ae20,0x26)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011ae46,5);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_0011ae46,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,0x71);
                    /* try { // try from 001697b6 to 001697ce has its CatchHandler @ 00169c20 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011ae4b,0x2d)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,"runlevel",8);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,"runlevel",8);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x72);
                    /* try { // try from 0016984b to 00169863 has its CatchHandler @ 00169c0b */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011ac88,0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011ae78,5);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_0011ae78,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,0x73);
                    /* try { // try from 001698e0 to 001698f8 has its CatchHandler @ 00169bf6 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011ae7d,0x29)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_001191cc,4);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_001191cc,4);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x74);
                    /* try { // try from 00169975 to 0016998d has its CatchHandler @ 00169be1 */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011aea6,0x1e)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011aec4,5);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_568,&DAT_0011aec4,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_568,local_ab0,0x75);
                    /* try { // try from 00169a0a to 00169a22 has its CatchHandler @ 00169bcc */
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_568,&DAT_0011aec9,0x14)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_568,local_830,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_830,&DAT_001191dc,4);
  _ZN12clap_builder7builder3arg3Arg4long17h6795c1d013a66766E(local_ab0,local_830,&DAT_001191dc,4);
  _ZN12clap_builder7builder3arg3Arg5short17h2f7e3ae00f80cc81E(local_830,local_ab0,0x54);
                    /* try { // try from 00169a9f to 00169b19 has its CatchHandler @ 00169cdd */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17hf9b4dc2642d5f4aeE(local_ab0,local_830);
  local_2a0 = &DAT_0011aedd;
  local_298 = 7;
  local_290 = "writable";
  local_288 = 8;
  _ZN12clap_builder7builder3arg3Arg15visible_aliases17h9f7a8a00320c3f39E
            (local_830,local_ab0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg4help17h9e4d171d1ae63483E(local_ab0,local_830,&DAT_0011aee4,0x26)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h5c2e56fbb657d7a1E(&local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(local_830,local_568,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he857f84cdbfee477E(local_568,&DAT_0011924c,4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h83c0589b56ffe420E(local_ab0,local_568,1,2);
                    /* try { // try from 00169b7d to 00169b8c has its CatchHandler @ 00169bb7 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h496899cfb4cae473E(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha1615bb48fb395ccE(param_1,local_830,local_568);
  return param_1;
}