undefined8 _ZN7uu_expr6uu_app17hc20cc991bc2caa88E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [584];
  uint local_28;
  undefined4 local_24;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h76addc3ba26221e4E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h66ca2875f1466debE(local_538,local_800);
  _ZN12clap_builder7builder7command7Command5about17heb0ed7269ad341e1E(local_800,local_538);
                    /* try { // try from 00232c17 to 00232c30 has its CatchHandler @ 00232e4d */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_270,&DAT_0015f4cd,0x1c);
  _ZN12clap_builder7builder7command7Command14override_usage17h7cc06664601e5526E
            (local_538,local_800,local_270);
  _ZN12clap_builder7builder7command7Command10after_help17ha3b77d5d1d813194E(local_800,local_538);
  (*(code *)PTR_memcpy_002a7618)(local_538,local_800,700);
  local_27c = local_544 | 0x14008000140080;
  local_274 = local_53c;
  _ZN12clap_builder7builder3arg3Arg3new17h39d6d013c6f207caE(local_800,&DAT_0015fc68,7);
  _ZN12clap_builder7builder3arg3Arg4long17h013cd6110297798eE(local_270,local_800,&DAT_0015fc68,7);
                    /* try { // try from 00232cd3 to 00232ceb has its CatchHandler @ 00232e3b */
  _ZN12clap_builder7builder3arg3Arg4help17h6cc7c409285df083E(local_800,local_270,&DAT_0015fc6f,0x23)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h0a3764240212ffafE(local_270,local_800,8);
  _ZN12clap_builder7builder7command7Command3arg17hdabab5c48a2b492dE(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h39d6d013c6f207caE(local_538,&DAT_0010fe20,4);
  _ZN12clap_builder7builder3arg3Arg4long17h013cd6110297798eE(local_270,local_538,&DAT_0010fe20,4);
                    /* try { // try from 00232d55 to 00232d70 has its CatchHandler @ 00232e2c */
  _ZN12clap_builder7builder3arg3Arg4help17h6cc7c409285df083E(local_538,local_270,&DAT_0015fc92,0x1a)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h0a3764240212ffafE(local_270,local_538,5);
  _ZN12clap_builder7builder7command7Command3arg17hdabab5c48a2b492dE(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h39d6d013c6f207caE(local_800,&DAT_0015fcac,10);
  _ZN12clap_builder7builder3arg3Arg6action17h0a3764240212ffafE(local_270,local_800,1);
  (*(code *)PTR_memcpy_002a7618)(local_800,local_270,0x248);
  local_5b8 = local_28 | 0x20;
  local_5b4 = local_24;
  _ZN12clap_builder7builder7command7Command3arg17hdabab5c48a2b492dE(param_1,local_538,local_800);
  return param_1;
}