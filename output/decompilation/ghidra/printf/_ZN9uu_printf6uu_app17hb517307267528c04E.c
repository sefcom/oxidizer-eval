undefined8 _ZN9uu_printf6uu_app17hb517307267528c04E(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined local_800 [700];
  uint local_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined local_538 [700];
  uint local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb929ef207e30f73bE(local_800,uVar1);
  (*(code *)PTR_memcpy_00224620)(local_538,local_800,700);
  local_27c = local_544 | 2;
  uStack_278 = uStack_540;
  uStack_274 = uStack_53c;
  _ZN12clap_builder7builder7command7Command7version17h4a1a2c1f13d79a9fE(local_800,local_538);
  _ZN12clap_builder7builder7command7Command5about17h816a3bedc6d880bdE(local_538,local_800);
  _ZN12clap_builder7builder7command7Command10after_help17h48bb6db18ae6c072E(local_800,local_538);
                    /* try { // try from 001b92e1 to 001b92fa has its CatchHandler @ 001b9501 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_270,&DAT_00116e9c,0x21);
  _ZN12clap_builder7builder7command7Command14override_usage17hdc0c293549a5ea36E
            (local_538,local_800,local_270);
  (*(code *)PTR_memcpy_00224620)(local_800,local_538,700);
  uVar2 = CONCAT44(uStack_278,local_27c) | 0x14000000140000;
  local_544 = (uint)uVar2;
  uStack_540 = (undefined4)(uVar2 >> 0x20);
  uStack_53c = uStack_274;
  _ZN12clap_builder7builder3arg3Arg3new17h1e35cf4a330f5baeE(local_538,&DAT_0010ab58,4);
  _ZN12clap_builder7builder3arg3Arg4long17h4bf6946a41ac2d48E(local_270,local_538,&DAT_0010ab58,4);
                    /* try { // try from 001b938d to 001b93a8 has its CatchHandler @ 001b94f2 */
  _ZN12clap_builder7builder3arg3Arg4help17hd2e95c0038444722E(local_538,local_270,&DAT_00116ebd,0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h41c3e58fb8362d36E(local_270,local_538,5);
  _ZN12clap_builder7builder7command7Command3arg17h4233fc0fe841c025E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h1e35cf4a330f5baeE(local_800,&DAT_00116ed3,7);
  _ZN12clap_builder7builder3arg3Arg4long17h4bf6946a41ac2d48E(local_270,local_800,&DAT_00116ed3,7);
                    /* try { // try from 001b9412 to 001b942a has its CatchHandler @ 001b94e0 */
  _ZN12clap_builder7builder3arg3Arg4help17hd2e95c0038444722E(local_800,local_270,&DAT_00116eda,0x19)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h41c3e58fb8362d36E(local_270,local_800,8);
  _ZN12clap_builder7builder7command7Command3arg17h4233fc0fe841c025E(local_800,local_538,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h1e35cf4a330f5baeE(local_270,&DAT_00116ef3,6);
  _ZN12clap_builder7builder7command7Command3arg17h4233fc0fe841c025E(local_538,local_800,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h1e35cf4a330f5baeE(local_800,&DAT_0010b358,8);
  _ZN12clap_builder7builder3arg3Arg6action17h41c3e58fb8362d36E(local_270,local_800,1);
  _ZN12clap_builder7builder7command7Command3arg17h4233fc0fe841c025E(param_1,local_538,local_270);
  return param_1;
}