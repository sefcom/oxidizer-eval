undefined8 _ZN9uu_printf6uu_app17hc502dcf642f8474cE(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_848 [3];
  undefined local_830 [700];
  uint local_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined local_568 [700];
  uint local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0021d358)();
  _ZN12clap_builder7builder7command7Command3new17heb58de7e9eea5151E(local_830,uVar1);
  (*(code *)PTR_memcpy_0021d178)(local_568,local_830,700);
  local_2ac = local_574 | 2;
  uStack_2a8 = uStack_570;
  uStack_2a4 = uStack_56c;
  _ZN12clap_builder7builder7command7Command7version17h25e05affe7fcdaefE(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17hf5d01faab90db822E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17hd7df0d891549bc8cE(local_830,local_568);
                    /* try { // try from 0016c321 to 0016c33a has its CatchHandler @ 0016c595 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0021d3e0)(local_2a0,&DAT_00112c53,0x21)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h043510330e051661E
            (local_568,local_830,local_2a0);
  (*(code *)PTR_memcpy_0021d178)(local_830,local_568,700);
  uVar2 = CONCAT44(uStack_2a8,local_2ac) | 0x28000000280000;
  local_574 = (uint)uVar2;
  uStack_570 = (undefined4)(uVar2 >> 0x20);
  uStack_56c = uStack_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h17954c765451ab13E(local_568,&DAT_0010f6d8,4);
  _ZN12clap_builder7builder3arg3Arg4long17hef0cbc6ab5f2a74eE(local_2a0,local_568,&DAT_0010f6d8,4);
                    /* try { // try from 0016c3cd to 0016c3e8 has its CatchHandler @ 0016c586 */
  _ZN12clap_builder7builder3arg3Arg4help17h8cc366da3094336aE(local_568,local_2a0,&DAT_00112c74,0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h186cc41e6647180eE(local_2a0,local_568,5);
  _ZN12clap_builder7builder7command7Command3arg17ha08d52e2263056c0E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h17954c765451ab13E(local_830,&DAT_00112c8a,7);
  _ZN12clap_builder7builder3arg3Arg4long17hef0cbc6ab5f2a74eE(local_2a0,local_830,&DAT_00112c8a,7);
                    /* try { // try from 0016c452 to 0016c46a has its CatchHandler @ 0016c574 */
  _ZN12clap_builder7builder3arg3Arg4help17h8cc366da3094336aE(local_830,local_2a0,&DAT_00112c91,0x19)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h186cc41e6647180eE(local_2a0,local_830,8);
  _ZN12clap_builder7builder7command7Command3arg17ha08d52e2263056c0E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h17954c765451ab13E(local_568,&DAT_00112caa,6);
  local_848[0] = 2;
                    /* try { // try from 0016c4be to 0016c4d0 has its CatchHandler @ 0016c565 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h29fdb055b863f542E(local_2a0,local_568,local_848)
  ;
  _ZN12clap_builder7builder7command7Command3arg17ha08d52e2263056c0E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h17954c765451ab13E(local_830,&DAT_0010fa08,8);
  _ZN12clap_builder7builder3arg3Arg6action17h186cc41e6647180eE(local_2a0,local_830,1);
                    /* try { // try from 0016c51c to 0016c52b has its CatchHandler @ 0016c553 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h29fdb055b863f542E(local_830,local_2a0,local_848)
  ;
  _ZN12clap_builder7builder7command7Command3arg17ha08d52e2263056c0E(param_1,local_568,local_830);
  return param_1;
}