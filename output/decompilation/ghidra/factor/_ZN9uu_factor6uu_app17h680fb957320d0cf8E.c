undefined8 _ZN9uu_factor6uu_app17h680fb957320d0cf8E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [700];
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [700];
  ulong local_4cc;
  undefined4 local_4c4;
  undefined local_4c0 [592];
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb5e4f03e9e5506b0E(local_a50,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7b2f787e58b4ee93E(local_788,local_a50);
  _ZN12clap_builder7builder7command7Command5about17h7edd897f24cf3586E(local_a50,local_788);
                    /* try { // try from 001fa257 to 001fa270 has its CatchHandler @ 001fa45e */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_4c0,&DAT_00123411,0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17ha9e3b5847de0e11aE
            (local_788,local_a50,local_4c0);
  (*(code *)PTR_memcpy_00293338)(local_a50,local_788,700);
  local_794 = local_4cc | 0x4008800040088;
  local_78c = local_4c4;
  _ZN12clap_builder7builder3arg3Arg3new17hc1edbe40a47f8a49E(local_788,&DAT_001233a5,6);
  _ZN12clap_builder7builder3arg3Arg6action17h326cdfe38f2ce453E(local_4c0,local_788,1);
  _ZN12clap_builder7builder7command7Command3arg17h7e95c5092dae0378E(local_788,local_a50,local_4c0);
  _ZN12clap_builder7builder3arg3Arg3new17hc1edbe40a47f8a49E(local_a50,&DAT_0012339c,9);
  _ZN12clap_builder7builder3arg3Arg5short17he98ee2dd7a709e3eE(local_4c0,local_a50);
  _ZN12clap_builder7builder3arg3Arg4long17hf6fb7bfc1a444d08E(local_a50,local_4c0,&DAT_0012339c,9);
                    /* try { // try from 001fa35a to 001fa375 has its CatchHandler @ 001fa44c */
  _ZN12clap_builder7builder3arg3Arg4help17h09a32e7dd5808c59E(local_4c0,local_a50,&DAT_0012342b,0x1d)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h326cdfe38f2ce453E(local_270,local_4c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h7e95c5092dae0378E(local_a50,local_788,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17hc1edbe40a47f8a49E(local_788,&DAT_00119678,4);
  _ZN12clap_builder7builder3arg3Arg4long17hf6fb7bfc1a444d08E(local_4c0,local_788,&DAT_00119678,4);
                    /* try { // try from 001fa3e2 to 001fa3fd has its CatchHandler @ 001fa43d */
  _ZN12clap_builder7builder3arg3Arg4help17h09a32e7dd5808c59E(local_788,local_4c0,&DAT_00123448,0x17)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h326cdfe38f2ce453E(local_4c0,local_788,5);
  _ZN12clap_builder7builder7command7Command3arg17h7e95c5092dae0378E(param_1,local_a50,local_4c0);
  return param_1;
}