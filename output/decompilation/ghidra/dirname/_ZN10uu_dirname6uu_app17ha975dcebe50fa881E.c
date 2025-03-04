undefined8 _ZN10uu_dirname6uu_app17ha975dcebe50fa881E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [584];
  uint local_808;
  undefined4 local_804;
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [584];
  uint local_540;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hb046f67712759821E(local_a50,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h720b423c651aed08E(local_538,local_a50);
  _ZN12clap_builder7builder7command7Command7version17h69e0937e50c79d67E(local_a50,local_538);
                    /* try { // try from 001a6877 to 001a6890 has its CatchHandler @ 001a6a18 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION] NAME...",0x13);
  _ZN12clap_builder7builder7command7Command14override_usage17h0d65f62476436467E
            (local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_0020b7f0)(local_a50,local_538,700);
  local_794 = local_27c | 0x8800000088;
  local_78c = local_274;
  _ZN12clap_builder7builder3arg3Arg3new17hfb3207caa17ab004E(local_538,&DAT_001130b8,4);
  _ZN12clap_builder7builder3arg3Arg4long17h9ce92573d619fb83E(local_788,local_538);
  _ZN12clap_builder7builder3arg3Arg5short17hf6a78be7edbf3fcdE(local_538,local_788);
                    /* try { // try from 001a692b to 001a693a has its CatchHandler @ 001a6a09 */
  _ZN12clap_builder7builder3arg3Arg4help17h13a2fa72baf7454dE(local_788,local_538);
  _ZN12clap_builder7builder3arg3Arg6action17h9f538c7666116176E(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17hc7633f806f6cf228E(local_538,local_a50,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17hfb3207caa17ab004E(local_a50,"dir",3);
  (*(code *)PTR_memcpy_0020b7f0)(local_788,local_a50,0x248);
  local_540 = local_808 | 4;
  local_53c = local_804;
  _ZN12clap_builder7builder3arg3Arg6action17h9f538c7666116176E(local_a50,local_788,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h29d5c69655c28734E(local_788,local_a50);
  _ZN12clap_builder7builder7command7Command3arg17hc7633f806f6cf228E(param_1,local_538,local_788);
  return param_1;
}