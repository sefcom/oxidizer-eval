undefined8 _ZN8uu_paste6uu_app17hcf547b4b95fcc990E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [632];
  uint local_28;
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e5288)();
  _ZN12clap_builder7builder7command7Command3new17ha0006b2a09687934E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6daaa4221af4aedaE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h44280210000d88a1E(local_830,local_568);
                    /* try { // try from 0015629d to 001562b3 has its CatchHandler @ 001565ef */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e53f0)
            (local_ab0,"{} [OPTIONS] [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17hc6c959c1ac4cfee4E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001e5258)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h1aec1364b21fe991E(local_568,"serial",6);
  _ZN12clap_builder7builder3arg3Arg4long17h06f45b742eca4bbdE(local_ab0,local_568,"serial",6);
  _ZN12clap_builder7builder3arg3Arg5short17h7df6928530e89bc3E(local_568,local_ab0,0x73);
                    /* try { // try from 0015635e to 00156376 has its CatchHandler @ 001565dd */
  _ZN12clap_builder7builder3arg3Arg4help17h6d312ec7af59890aE
            (local_ab0,local_568,"paste one file at a time instead of in parallel",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17hdb93ab76a2042cb8E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd737ec6d8b15faaaE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h1aec1364b21fe991E(local_830,"delimiters",10);
  _ZN12clap_builder7builder3arg3Arg4long17h06f45b742eca4bbdE(local_ab0,local_830,"delimiters",10);
  _ZN12clap_builder7builder3arg3Arg5short17h7df6928530e89bc3E(local_830,local_ab0,100);
                    /* try { // try from 001563f8 to 00156442 has its CatchHandler @ 00156613 */
  _ZN12clap_builder7builder3arg3Arg4help17h6d312ec7af59890aE
            (local_ab0,local_830,"reuse characters from L",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17he92a89ccbd5c1525E(local_830,local_ab0,"LIST");
  _ZN12clap_builder7builder3arg3Arg13default_value17h3f89a2b105195cf7E(local_ab0,local_830,"\t");
  (*(code *)PTR_memcpy_001e5258)(local_2a0,local_ab0,0x278);
  local_28 = local_838 | 0x400;
  local_24 = local_834;
  _ZN12clap_builder7builder7command7Command3arg17hd737ec6d8b15faaaE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h1aec1364b21fe991E(local_568,"file",4);
                    /* try { // try from 001564b3 to 00156506 has its CatchHandler @ 00156601 */
  _ZN12clap_builder7builder3arg3Arg10value_name17he92a89ccbd5c1525E
            (local_ab0,local_568,&DAT_00117384);
  _ZN12clap_builder7builder3arg3Arg6action17hdb93ab76a2042cb8E(local_568,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg13default_value17h3f89a2b105195cf7E(local_ab0,local_568,"-");
  _ZN12clap_builder7builder3arg3Arg10value_hint17h140e114f9c600271E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hd737ec6d8b15faaaE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h1aec1364b21fe991E(local_830,"ze",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h06f45b742eca4bbdE(local_ab0,local_830,"ze",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h7df6928530e89bc3E(local_830,local_ab0,0x7a);
                    /* try { // try from 00156573 to 0015658b has its CatchHandler @ 001565cb */
  _ZN12clap_builder7builder3arg3Arg4help17h6d312ec7af59890aE(local_ab0,local_830,"l",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hdb93ab76a2042cb8E(local_830,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hd737ec6d8b15faaaE(param_1,local_568,local_830);
  return param_1;
}