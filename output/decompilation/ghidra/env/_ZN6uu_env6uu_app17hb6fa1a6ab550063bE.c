undefined8 _ZN6uu_env6uu_app17hb6fa1a6ab550063bE(undefined8 param_1)

{
  undefined8 local_ac8 [3];
  undefined local_ab0 [640];
  undefined local_830 [700];
  uint local_574;
  ulong local_570;
  undefined local_568 [700];
  uint local_2ac;
  ulong local_2a8;
  undefined local_2a0 [640];
  
  _ZN12clap_builder7builder7command7Command3new17h10aea9e303bd291aE(local_568);
  _ZN12clap_builder7builder7command7Command7version17h548d9e2c477e34a1E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17ha91a0c840ad318c0E(local_568,local_830);
                    /* try { // try from 00172b84 to 00172b9a has its CatchHandler @ 00173392 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00219588)(local_ab0,&DAT_0011e901,0x35)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h48752a8915b66d73E
            (local_830,local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command10after_help17hf222361a8677e16fE(local_568,local_830);
  (*(code *)PTR_memcpy_002191a0)(local_830,local_568,700);
  local_570 = local_2a8 | 0x80;
  local_574 = local_2ac | 0xa0;
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_568,&DAT_0011e97a,0x12);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_568,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_568,local_ab0,&DAT_0011e97a,0x12)
  ;
                    /* try { // try from 00172c58 to 00172c70 has its CatchHandler @ 00173380 */
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_568,&DAT_0011e98c,0x1f)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_830,&DAT_0011e9ab,5);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_830,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_830,local_ab0,&DAT_0011e9ab,5);
                    /* try { // try from 00172cf2 to 00172d74 has its CatchHandler @ 001733fe */
  (*(code *)PTR__ZN12clap_builder7builder3arg3Arg16number_of_values17h6f25579c58eee1f7E_00219590)
            (local_ab0,local_830,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_830,local_ab0,&DAT_0011e9b0,3);
  local_ac8[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5fb82929a5fbcd71E(local_830,local_ab0,4);
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_830,&DAT_0011e9b3,0x1f)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_568,"nullXCPU",4);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_568,0x30);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_568,local_ab0,"nullXCPU",4);
                    /* try { // try from 00172dde to 00172df6 has its CatchHandler @ 0017336b */
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_568,&DAT_0011e9d2,99);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_830,"fileTSTP",4);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_830,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_830,local_ab0,"fileTSTP",4);
                    /* try { // try from 00172e78 to 00172eef has its CatchHandler @ 001733ec */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_ab0,local_830,&DAT_0011c7d0,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5fb82929a5fbcd71E(local_830,local_ab0,3);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_830,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_830,&DAT_0011ea35,0x5d)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_568,&DAT_0011ea92,5);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_568,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_568,local_ab0,&DAT_0011ea92,5);
                    /* try { // try from 00172f59 to 00172fb9 has its CatchHandler @ 001733c8 */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_ab0,local_568,&DAT_0011c800,4);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_568,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_ab0,local_568,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_2a0,local_ab0,&DAT_0011ea97,0x24)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_830,&DAT_0011eabb,5);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_830,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_830,local_ab0,&DAT_0011eabb,5);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_ab0,local_830,4);
                    /* try { // try from 0017303b to 00173056 has its CatchHandler @ 00173356 */
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_2a0,local_ab0,&DAT_0011eac0,0x32)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_568,&DAT_0011eaf2,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_ab0,local_568,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_568,local_ab0,&DAT_0011eaf2,0xc);
                    /* try { // try from 001730c3 to 00173120 has its CatchHandler @ 001733b6 */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_ab0,local_568,&DAT_0011eafe,1);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_568,local_ab0,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_ab0,local_568,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_2a0,local_ab0,&DAT_0011eaff,0x5d)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_830,&DAT_0011eb5c,5);
                    /* try { // try from 0017315a to 00173200 has its CatchHandler @ 001733da */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h6d3d945825dde353E(local_ab0,local_830);
  _ZN12clap_builder7builder3arg3Arg5short17hd544070060fd3e59E(local_830,local_ab0,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_ab0,local_830,&DAT_0011eb5c,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_830,local_ab0,&DAT_0011eb61,1);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_ab0,local_830,0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_830,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_830,&DAT_0011eb62,0x7c)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_568,&DAT_0011c7d4,4);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_ab0,local_568,1);
                    /* try { // try from 0017324c to 0017325e has its CatchHandler @ 00173341 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_2a0,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hceaf4f5b578f9174E(local_830,&DAT_0011ebde,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h6a02e8db24dd28ccE(local_ab0,local_830,&DAT_0011ebde,0xd);
                    /* try { // try from 001732b3 to 00173319 has its CatchHandler @ 001733a4 */
  _ZN12clap_builder7builder3arg3Arg10value_name17ha7d2cd473414745bE
            (local_830,local_ab0,&DAT_0011ebeb,3);
  _ZN12clap_builder7builder3arg3Arg6action17h210ba69996ba06d1E(local_ab0,local_830,1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h3c7b8e59c4682bfeE(local_830,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6b7392348b0724aeE(local_ab0,local_830,&DAT_0011ebee,0x2b)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h6d70f1bca0a3105cE(param_1,local_568,local_ab0);
  return param_1;
}