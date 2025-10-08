undefined8 _ZN8uu_mkdir6uu_app17h4c3be6890209a1daE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [632];
  uint local_570;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f4908)();
  _ZN12clap_builder7builder7command7Command3new17h0e729747a2c294dfE(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h64b68f09cdfcde29E(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17he437bb4356d87ffeE(local_ab0,local_568);
                    /* try { // try from 0015fd77 to 0015fd90 has its CatchHandler @ 001601be */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f4a70)
            (local_7e8,"{} [OPTION]... DIRECTORY...",0x1b);
  _ZN12clap_builder7builder7command7Command14override_usage17he61b13701732a500E
            (local_568,local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001f4820)(local_ab0,local_568,700);
  local_7f4 = local_2ac | 0x8000000080;
  local_7ec = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_568,"mode",4);
  _ZN12clap_builder7builder3arg3Arg5short17h794a52cbac9eeb1cE(local_7e8,local_568,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h63798b7700cb9e97E(local_568,local_7e8,"mode",4);
                    /* try { // try from 0015fe3b to 0015fe56 has its CatchHandler @ 001601af */
  _ZN12clap_builder7builder3arg3Arg4help17h9f30c3b4a9544fa8E
            (local_7e8,local_568,"set file mode (not implemented on windows)",0x2a);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_ab0,"parents",7);
  _ZN12clap_builder7builder3arg3Arg5short17h794a52cbac9eeb1cE(local_7e8,local_ab0,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h63798b7700cb9e97E(local_ab0,local_7e8,"parents",7);
                    /* try { // try from 0015febd to 0015feea has its CatchHandler @ 001601ee */
  _ZN12clap_builder7builder3arg3Arg4help17h9f30c3b4a9544fa8E
            (local_7e8,local_ab0,"make parent directories as needed",0x21);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h4f80c54f6a988437E(local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg6action17hfb326fb76d16f3d4E(local_7e8,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_568,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h794a52cbac9eeb1cE(local_7e8,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h63798b7700cb9e97E(local_568,local_7e8,"verbose",7);
                    /* try { // try from 0015ff6c to 0015ff87 has its CatchHandler @ 001601a0 */
  _ZN12clap_builder7builder3arg3Arg4help17h9f30c3b4a9544fa8E
            (local_7e8,local_568,"print a message for each printed directory",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17hfb326fb76d16f3d4E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_ab0,"z",1);
  _ZN12clap_builder7builder3arg3Arg5short17h794a52cbac9eeb1cE(local_7e8,local_ab0,0x5a);
                    /* try { // try from 0015ffeb to 00160003 has its CatchHandler @ 0016018e */
  _ZN12clap_builder7builder3arg3Arg4help17h9f30c3b4a9544fa8E
            (local_ab0,local_7e8,
             "set SELinux security context of each created directory to the default type",0x4a);
  _ZN12clap_builder7builder3arg3Arg6action17hfb326fb76d16f3d4E(local_7e8,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_568,"context",7);
  _ZN12clap_builder7builder3arg3Arg4long17h63798b7700cb9e97E(local_7e8,local_568,"context",7);
                    /* try { // try from 0016006d to 0016009d has its CatchHandler @ 001601df */
  _ZN12clap_builder7builder3arg3Arg10value_name17h66b7ae27c6cccbb2E(local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg4help17h9f30c3b4a9544fa8E
            (local_7e8,local_568,
             "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX: \n"
             ,0x55);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17ha0a90d1c9ea5726aE(local_ab0,&DAT_0011828c,4);
  _ZN12clap_builder7builder3arg3Arg6action17hfb326fb76d16f3d4E(local_7e8,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3159c93b1d7f3131E(local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001f4820)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 1;
  local_56c = local_834;
  local_2a0[0] = 2;
                    /* try { // try from 0016013d to 00160163 has its CatchHandler @ 001601cd */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3b312421b418b606E(local_ab0,local_7e8,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hfff52fa0bf176b07E(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc762977cc90e0a11E(param_1,local_568,local_7e8);
  return param_1;
}