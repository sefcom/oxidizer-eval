undefined8 _ZN8uu_false6uu_app17he23c4502b9c9f7a3E(undefined8 param_1)

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
  _ZN12clap_builder7builder7command7Command3new17hf0f143c7c60ae8b9E(local_800,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc3a426a510f4aa12E(local_538,local_800);
  _ZN12clap_builder7builder7command7Command5about17h44199b518ccd190dE(local_800,local_538);
  (*(code *)PTR_memcpy_001fb3b0)(local_538,local_800,700);
  local_27c = local_544 | 0x14000000140000;
  local_274 = local_53c;
  _ZN12clap_builder7builder3arg3Arg3new17h1673065d1d9f1523E(local_800,&DAT_00111100,4);
  _ZN12clap_builder7builder3arg3Arg4long17hcccdcf21d1a5ce73E(local_270,local_800,&DAT_00111100,4);
                    /* try { // try from 0019e82f to 0019e847 has its CatchHandler @ 0019e91b */
  _ZN12clap_builder7builder3arg3Arg4help17he5bc9eec78bee47cE
            (local_800,local_270,"Print help information",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17h92abc2fbc7b890bdE(local_270,local_800,5);
  _ZN12clap_builder7builder7command7Command3arg17h631a2dc306f6ea00E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h1673065d1d9f1523E(local_538,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17hcccdcf21d1a5ce73E(local_270,local_538,"version",7);
                    /* try { // try from 0019e8b1 to 0019e8cc has its CatchHandler @ 0019e90c */
  _ZN12clap_builder7builder3arg3Arg4help17he5bc9eec78bee47cE
            (local_538,local_270,"Print version information",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17h92abc2fbc7b890bdE(local_270,local_538,8);
  _ZN12clap_builder7builder7command7Command3arg17h631a2dc306f6ea00E(param_1,local_800,local_270);
  return param_1;
}