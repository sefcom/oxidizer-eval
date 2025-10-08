undefined8 _ZN9uu_uptime6uu_app17hf423f0f417b5740eE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_af0 [700];
  ulong local_834;
  undefined4 local_82c;
  undefined local_828 [700];
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [712];
  undefined8 local_298 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002102e8)();
  _ZN12clap_builder7builder7command7Command3new17h2a62d0fdf2fe13ddE(local_560,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h95874bd967985365E(local_828,local_560);
  _ZN12clap_builder7builder7command7Command5about17h5bcbed0ba5c4030eE(local_560,local_828);
                    /* try { // try from 001672cb to 001672e1 has its CatchHandler @ 00167497 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_002104e0)
            (local_af0,"{} [OPTION]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h64fb30a7d4623789E
            (local_828,local_560,local_af0);
  (*(code *)PTR_memcpy_002102b8)(local_af0,local_828,700);
  local_834 = local_56c | 0x8000000080;
  local_82c = local_564;
  _ZN12clap_builder7builder3arg3Arg3new17h98c87726383e8929E(local_560,"since",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6ddccd8dffcde1f3E(local_828,local_560);
  _ZN12clap_builder7builder3arg3Arg4long17hcc9377133c1d7111E(local_560,local_828);
                    /* try { // try from 0016737c to 00167397 has its CatchHandler @ 00167488 */
  _ZN12clap_builder7builder3arg3Arg4help17h35f00ec1a41f274fE
            (local_828,local_560,"system up since",0xf);
  _ZN12clap_builder7builder3arg3Arg6action17h9fe60c0ed19aae32E(local_298,local_828,2);
  _ZN12clap_builder7builder7command7Command3arg17h64429f92e02dd71dE(local_560,local_af0,local_298);
  _ZN12clap_builder7builder3arg3Arg3new17h98c87726383e8929E(local_828,&DAT_00119c1c,4);
                    /* try { // try from 001673e6 to 00167462 has its CatchHandler @ 001674a9 */
  _ZN12clap_builder7builder3arg3Arg4help17h35f00ec1a41f274fE
            (local_af0,local_828,"file to search boot time from: \n",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17h9fe60c0ed19aae32E(local_828,local_af0,0);
  _ZN12clap_builder7builder3arg3Arg8num_args17h2113c5f8a5acee8fE(local_af0,local_828,0,1);
  local_298[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4f35826d2cd75d97E(local_828,local_af0,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0f14ae961e261dbcE(local_af0,local_828);
  _ZN12clap_builder7builder7command7Command3arg17h64429f92e02dd71dE(param_1,local_560,local_af0);
  return param_1;
}