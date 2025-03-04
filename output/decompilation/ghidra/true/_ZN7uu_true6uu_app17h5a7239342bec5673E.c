undefined8 _ZN7uu_true6uu_app17h5a7239342bec5673E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h72e1b29d46a1b563E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h24840c368b480049E(local_538,local_800);
  _ZN12clap_builder7builder7command7Command5about17hc7b9ed5bad34d8a3E(local_800,local_538);
  (*(code *)PTR_memcpy_001fb3c0)(local_538,local_800,700);
  local_27c = local_544 | 0x14000000140000;
  local_274 = local_53c;
  _ZN12clap_builder7builder3arg3Arg3new17h1278cb3c9ee3e401E(local_800,&DAT_00111100,4);
  _ZN12clap_builder7builder3arg3Arg4long17h6a5d014ad2c63709E(local_270,local_800,&DAT_00111100,4);
                    /* try { // try from 0019e83f to 0019e857 has its CatchHandler @ 0019e92b */
  _ZN12clap_builder7builder3arg3Arg4help17h0b42e7173e3bc953E
            (local_800,local_270,"Print help information",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hc4228c65a5dc0bdbE(local_270,local_800,5);
  _ZN12clap_builder7builder7command7Command3arg17hd535666a5988fe6aE(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h1278cb3c9ee3e401E(local_538,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17h6a5d014ad2c63709E(local_270,local_538,"version",7);
                    /* try { // try from 0019e8c1 to 0019e8dc has its CatchHandler @ 0019e91c */
  _ZN12clap_builder7builder3arg3Arg4help17h0b42e7173e3bc953E
            (local_538,local_270,"Print version information",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17hc4228c65a5dc0bdbE(local_270,local_538,8);
  _ZN12clap_builder7builder7command7Command3arg17hd535666a5988fe6aE(param_1,local_800,local_270);
  return param_1;
}