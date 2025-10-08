undefined8 _ZN6uu_cut6uu_app17h38d211b96a5c967dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8 [3];
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcc0)();
  _ZN12clap_builder7builder7command7Command3new17h98cf7591c0e51e56E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4fe1ad0f1596b1fcE(local_568,local_830);
                    /* try { // try from 0016a2ea to 0016a300 has its CatchHandler @ 0016aaed */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ffee0)(local_ab0,&DAT_0011ed43,0x16)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h0da63754526c3693E
            (local_830,local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hcbc22126b07d6f0cE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17h36d6ffcbdfd1fa59E(local_830,local_568);
  (*(code *)PTR_memcpy_001ffca0)(local_568,local_830,700);
  local_2ac = local_574 | 0x8800000088;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_830,&DAT_0011f9b5,5);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_830,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_830,local_ab0,&DAT_0011f9b5,5);
                    /* try { // try from 0016a3d1 to 0016a3e9 has its CatchHandler @ 0016ab35 */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_830,&DAT_0011f9ba,0x29)
  ;
  (*(code *)PTR_memcpy_001ffca0)(local_830,local_ab0,0x278);
  local_5b8 = local_838 | 0x20;
  local_5b4 = local_834;
                    /* try { // try from 0016a424 to 0016a43c has its CatchHandler @ 0016ab35 */
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E(local_ab0,local_830,"LIST",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,1);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_568,&DAT_0011f9e3,10);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_568,99);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_568,local_ab0,&DAT_0011f9e3,10);
                    /* try { // try from 0016a4be to 0016a4d6 has its CatchHandler @ 0016ab23 */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_568,&DAT_0011f9ed,0x18)
  ;
  (*(code *)PTR_memcpy_001ffca0)(local_568,local_ab0,0x278);
  local_2f0 = local_838 | 0x20;
  local_2ec = local_834;
                    /* try { // try from 0016a511 to 0016a529 has its CatchHandler @ 0016ab23 */
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E(local_ab0,local_568,"LIST",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,1);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_830,"delimiter",9);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_830,100);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_830,local_ab0,"delimiter",9);
  local_ac8[0] = 2;
                    /* try { // try from 0016a5b3 to 0016a5fe has its CatchHandler @ 0016ab59 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4b2baea4c9e6aa93E(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_830,local_ab0,&DAT_0011fa05,0x5b)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E
            (local_ab0,local_830,&DAT_0011fa60,5);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_568,"whitespace-delimited",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_568,0x77);
                    /* try { // try from 0016a64a to 0016a683 has its CatchHandler @ 0016ab11 */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_568,local_ab0,&DAT_0011fa65,0x65)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E
            (local_ab0,local_568,&DAT_0011faca,10);
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_830,&DAT_0011fad4,6);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_830,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_830,local_ab0,&DAT_0011fad4,6);
                    /* try { // try from 0016a705 to 0016a71d has its CatchHandler @ 0016aaff */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_830,&DAT_0011fada,0x2a)
  ;
  (*(code *)PTR_memcpy_001ffca0)(local_830,local_ab0,0x278);
  local_5b8 = local_838 | 0x20;
  local_5b4 = local_834;
                    /* try { // try from 0016a758 to 0016a770 has its CatchHandler @ 0016aaff */
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E(local_ab0,local_830,"LIST",4);
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,1);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_568,&DAT_0011fb04,10);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_ab0,local_568,&DAT_0011fb04,10);
                    /* try { // try from 0016a7da to 0016a7f5 has its CatchHandler @ 0016aadb */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_568,local_ab0,&DAT_0011fb0e,0x62)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_830,&DAT_0011fb70,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_830,local_ab0,&DAT_0011fb70,0xe);
                    /* try { // try from 0016a877 to 0016a88f has its CatchHandler @ 0016aac6 */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_830,&DAT_0011fb7e,0x3b)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_568,&DAT_0011fbb9,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h95a83c3989ede8ffE(local_ab0,local_568,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_568,local_ab0,&DAT_0011fbb9,0xf);
                    /* try { // try from 0016a911 to 0016a929 has its CatchHandler @ 0016aab1 */
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_568,&DAT_0011fbc8,0x57)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_830,&DAT_0011d5b0,0x10);
  _ZN12clap_builder7builder3arg3Arg4long17h4dacd1adb08e31f2E(local_ab0,local_830,&DAT_0011d5b0,0x10)
  ;
                    /* try { // try from 0016a993 to 0016a9e1 has its CatchHandler @ 0016ab47 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4b2baea4c9e6aa93E(local_830,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hcd134fb7ee096f6eE(local_ab0,local_830,&DAT_0011fc1f,0x50)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17he8e06892cd7583b7E
            (local_2a0,local_ab0,&DAT_0011fc6f,9);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hc20e8c3e57337cdbE(local_568,"file",4);
  (*(code *)PTR_memcpy_001ffca0)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17hcde07eb213a7f2a2E(local_568,local_ab0,1);
                    /* try { // try from 0016aa68 to 0016aa74 has its CatchHandler @ 0016aa9c */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h8a7b5a5cfbe5adbdE(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17hc2d3343ded138905E(param_1,local_830,local_ab0);
  return param_1;
}