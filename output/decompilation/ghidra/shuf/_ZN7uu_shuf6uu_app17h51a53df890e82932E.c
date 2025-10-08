undefined8 _ZN7uu_shuf6uu_app17h51a53df890e82932E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8 [3];
  undefined local_ab0 [640];
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200a70)();
  _ZN12clap_builder7builder7command7Command3new17he525f2d16f7c592cE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command5about17he9dd109632940d36E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command7version17h193152c0c6a36d08E(local_830,local_568);
                    /* try { // try from 0016833d to 00168353 has its CatchHandler @ 0016899e */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00200ca0)
            (local_ab0,"{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...",
             0x48);
  _ZN12clap_builder7builder7command7Command14override_usage17hafa2d2fdfc5b2830E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_00200980)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_568,"echo",4);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_568,0x65);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E(local_568,local_ab0,"echo",4);
                    /* try { // try from 001683fe to 00168467 has its CatchHandler @ 001689fb */
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_ab0,local_568,"treat each ARG as an input line",0x1f);
  _ZN12clap_builder7builder3arg3Arg6action17hffb57268b65c9d61E(local_568,local_ab0,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hfca4cf617092ebb9E
            (local_ab0,local_568,"echo",4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h4e216dbb8610b680E
            (local_2a0,local_ab0,"input-range",0xb);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_830,"input-range",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_830,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E(local_830,local_ab0,"input-range",0xb);
                    /* try { // try from 001684d4 to 0016853a has its CatchHandler @ 00168a31 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h8888e4bb70a48763E(local_ab0,local_830,"LO-HI",5);
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_830,local_ab0,"treat each number LO through HI as an input line",0x30);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h91a7f4c87881affdE(local_ab0,local_830);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h4e216dbb8610b680E
            (local_2a0,local_ab0,"file-or-args",0xc);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_568,"head-count",10);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_568,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E(local_568,local_ab0,"head-count",10);
                    /* try { // try from 001685a7 to 00168604 has its CatchHandler @ 001689e9 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h8888e4bb70a48763E(local_ab0,local_568,"COUNT",5);
  _ZN12clap_builder7builder3arg3Arg6action17hffb57268b65c9d61E(local_568,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_ab0,local_568,"output at most COUNT lines",0x1a);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0363fe67c242e18fE(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_830,"output",6);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_830,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E(local_830,local_ab0,"output",6);
                    /* try { // try from 00168671 to 001686d6 has its CatchHandler @ 00168a1f */
  _ZN12clap_builder7builder3arg3Arg10value_name17h8888e4bb70a48763E
            (local_ab0,local_830,&DAT_00119624,4);
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_830,local_ab0,"write result to FILE instead of standard output",0x2f);
  local_ac8[0] = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h01eabd9e29e73a60E(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0a5cef2bf431098aE(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_568,"random-source",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E
            (local_ab0,local_568,"random-source",0xd);
                    /* try { // try from 0016872b to 0016878b has its CatchHandler @ 00168a0d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h8888e4bb70a48763E
            (local_568,local_ab0,&DAT_00119624,4);
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_ab0,local_568,"get random bytes from FILE",0x1a);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h01eabd9e29e73a60E(local_568,local_ab0,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0a5cef2bf431098aE(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_830,"repeat",6);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_830,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E(local_830,local_ab0,"repeat",6);
                    /* try { // try from 001687f5 to 00168840 has its CatchHandler @ 001689d7 */
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_ab0,local_830,"output lines can be repeated",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17hffb57268b65c9d61E(local_830,local_ab0,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hfca4cf617092ebb9E
            (local_ab0,local_830,"repeat",6);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h20f82e4ce3213d68E(local_ab0,local_568,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h6c038a8193b70b66E
            (local_568,local_ab0,"zero-terminated",0xf);
                    /* try { // try from 001688aa to 001688f5 has its CatchHandler @ 001689c5 */
  _ZN12clap_builder7builder3arg3Arg4help17h89c7b37e938ef0aeE
            (local_ab0,local_568,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hffb57268b65c9d61E(local_568,local_ab0,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hfca4cf617092ebb9E
            (local_ab0,local_568,"zero-terminated",0xf);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h41ac3d7ddd8a32cdE(local_830,"file-or-args",0xc);
  _ZN12clap_builder7builder3arg3Arg6action17hffb57268b65c9d61E(local_ab0,local_830,1);
  local_2a0[0] = 2;
                    /* try { // try from 0016894d to 00168976 has its CatchHandler @ 001689b3 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h01eabd9e29e73a60E(local_830,local_ab0,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0a5cef2bf431098aE(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17hbddfebb704553839E(param_1,local_568,local_ab0);
  return param_1;
}