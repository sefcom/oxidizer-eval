undefined8 _ZN12uu_dircolors6uu_app17h0ca3ae80d0f731e8E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fe0b0)();
  _ZN12clap_builder7builder7command7Command3new17h0481e77084ed4fa1E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5d1bab49a16f3851E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17ha2ea6114e3327dfdE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17h7fda3194ef831d88E(local_830,local_568);
                    /* try { // try from 00168930 to 00168946 has its CatchHandler @ 00168d43 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fe2a8)(local_ab0,&DAT_0011c515,0x15)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h2af400fcff1c9755E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001fe1a0)(local_830,local_568,700);
  local_574 = local_2ac | 0x8800000088;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17hfdc80a6b586b39e3E(local_568,&DAT_0011c52a,0xc);
  _ZN12clap_builder7builder3arg3Arg4long17hd5d8fb053b3642deE(local_ab0,local_568,&DAT_0011c536,2);
  _ZN12clap_builder7builder3arg3Arg5short17hda298a5fe99b7383E(local_568,local_ab0,0x62);
                    /* try { // try from 001689f5 to 00168a45 has its CatchHandler @ 00168d67 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h4bb7dba027ee7519E
            (local_ab0,local_568,&DAT_0011c52a,0xc);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h289a151075eeea40E
            (local_568,local_ab0,&DAT_0011c538,7);
  _ZN12clap_builder7builder3arg3Arg4help17hc43a6b8a87e60c21E(local_ab0,local_568,&DAT_0011c53f,0x29)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc4d355298d420abeE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h10f8fb720cf0f9a0E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hfdc80a6b586b39e3E(local_830,&DAT_0011c538,7);
  _ZN12clap_builder7builder3arg3Arg4long17hd5d8fb053b3642deE(local_ab0,local_830,&DAT_0011c0a1,3);
  _ZN12clap_builder7builder3arg3Arg5short17hda298a5fe99b7383E(local_830,local_ab0,99);
                    /* try { // try from 00168acb to 00168b1b has its CatchHandler @ 00168d55 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17h4bb7dba027ee7519E
            (local_ab0,local_830,&DAT_0011c538,7);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h289a151075eeea40E
            (local_830,local_ab0,&DAT_0011c52a,0xc);
  _ZN12clap_builder7builder3arg3Arg4help17hc43a6b8a87e60c21E(local_ab0,local_830,&DAT_0011c568,0x24)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc4d355298d420abeE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h10f8fb720cf0f9a0E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hfdc80a6b586b39e3E(local_568,&DAT_0011c58c,0xe);
  _ZN12clap_builder7builder3arg3Arg4long17hd5d8fb053b3642deE(local_ab0,local_568,&DAT_0011c58c,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hda298a5fe99b7383E(local_568,local_ab0,0x70);
                    /* try { // try from 00168b9d to 00168bb5 has its CatchHandler @ 00168d31 */
  _ZN12clap_builder7builder3arg3Arg4help17hc43a6b8a87e60c21E(local_ab0,local_568,&DAT_0011c59a,0x15)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc4d355298d420abeE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h10f8fb720cf0f9a0E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hfdc80a6b586b39e3E(local_830,&DAT_0011c5af,0xf);
  _ZN12clap_builder7builder3arg3Arg4long17hd5d8fb053b3642deE(local_ab0,local_830,&DAT_0011c5af,0xf);
                    /* try { // try from 00168c1f to 00168c3a has its CatchHandler @ 00168d1f */
  _ZN12clap_builder7builder3arg3Arg4help17hc43a6b8a87e60c21E(local_830,local_ab0,&DAT_0011c5be,0x27)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hc4d355298d420abeE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h10f8fb720cf0f9a0E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hfdc80a6b586b39e3E(local_568,&DAT_0011a390,4);
  (*(code *)PTR_memcpy_001fe1a0)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
                    /* try { // try from 00168cbe to 00168ccd has its CatchHandler @ 00168d0d */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h186ea72d8a850fe6E(local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg6action17hc4d355298d420abeE(local_ab0,local_568,1);
  _ZN12clap_builder7builder7command7Command3arg17h10f8fb720cf0f9a0E(param_1,local_830,local_ab0);
  return param_1;
}