undefined8 _ZN7uu_fold6uu_app17h371d51ec06c336aeE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ed210)();
  _ZN12clap_builder7builder7command7Command3new17he0d8a7a234d11b51E(local_568,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h841f696677733c1aE(local_830,local_568);
                    /* try { // try from 0015b1ea to 0015b200 has its CatchHandler @ 0015b543 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ed368)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h6a660578258f91a8E
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17h9c2c1570a0e81e99E(local_830,local_568);
  (*(code *)PTR_memcpy_001ed1d0)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h5bfc88a50d80b43bE(local_830,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg4long17hd214d50c7f98960bE(local_ab0,local_830,"bytes",5);
  _ZN12clap_builder7builder3arg3Arg5short17h3b589c6cc2fb815eE(local_830,local_ab0,0x62);
                    /* try { // try from 0015b2be to 0015b2d6 has its CatchHandler @ 0015b531 */
  _ZN12clap_builder7builder3arg3Arg4help17h2c834e5f28612f46E
            (local_ab0,local_830,
             "count using bytes rather than columns (meaning control characters such as newline are not treated specially)"
             ,0x6c);
  _ZN12clap_builder7builder3arg3Arg6action17hc005373d1cb1d88fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e4bb752cb68fd7aE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5bfc88a50d80b43bE(local_568,"spaces",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd214d50c7f98960bE(local_ab0,local_568,"spaces",6);
  _ZN12clap_builder7builder3arg3Arg5short17h3b589c6cc2fb815eE(local_568,local_ab0,0x73);
                    /* try { // try from 0015b358 to 0015b370 has its CatchHandler @ 0015b51f */
  _ZN12clap_builder7builder3arg3Arg4help17h2c834e5f28612f46E
            (local_ab0,local_568,"break lines at word boundaries rather than a hard cut-off",0x39);
  _ZN12clap_builder7builder3arg3Arg6action17hc005373d1cb1d88fE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9e4bb752cb68fd7aE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5bfc88a50d80b43bE(local_830,"width",5);
  _ZN12clap_builder7builder3arg3Arg4long17hd214d50c7f98960bE(local_ab0,local_830,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17h3b589c6cc2fb815eE(local_830,local_ab0,0x77);
                    /* try { // try from 0015b3f2 to 0015b41c has its CatchHandler @ 0015b555 */
  _ZN12clap_builder7builder3arg3Arg4help17h2c834e5f28612f46E
            (local_ab0,local_830,"set WIDTH as the maximum line width rather th",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17he709a22c7e5abc30E(local_830,local_ab0);
  puVar1 = PTR_memcpy_001ed1d0;
  (*(code *)PTR_memcpy_001ed1d0)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x20;
  local_834 = local_5b4;
  _ZN12clap_builder7builder7command7Command3arg17h9e4bb752cb68fd7aE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h5bfc88a50d80b43bE(local_568,"file",4);
  (*(code *)puVar1)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17hc005373d1cb1d88fE(local_568,local_ab0,1);
                    /* try { // try from 0015b4d9 to 0015b4e5 has its CatchHandler @ 0015b50d */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h840b1ec8a060257dE(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h9e4bb752cb68fd7aE(param_1,local_830,local_ab0);
  return param_1;
}