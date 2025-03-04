undefined8 _ZN6uu_tac6uu_app17h578904e159ae3f9fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [700];
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h23398bef088cfbafE(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha59cf6e08d71e0f9E
            (auStack_a48,local_530,"0.0.28",6);
                    /* try { // try from 0029f60f to 0029f628 has its CatchHandler @ 0029f900 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h26239a61e5e501eaE
            (local_530,auStack_a48,local_780);
  _ZN12clap_builder7builder7command7Command5about17he1a280a914cac709E
            (auStack_a48,local_530,"Write each file to standard output, last line first.",0x34);
  (*(code *)PTR_memcpy_004065d0)(local_530,auStack_a48,700);
  local_274 = local_78c | 0x8000000080;
  local_26c = local_784;
                    /* try { // try from 0029f69c to 0029f6fa has its CatchHandler @ 0029f927 */
  _ZN12clap_builder7builder3arg3Arg3new17hc200d9bf5b1367b6E(auStack_a48,"before",6);
  _ZN12clap_builder7builder3arg3Arg5short17h2ad4688907a0f87fE(local_780,auStack_a48,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h840fb1f251239f03E(auStack_a48,local_780,"before",6);
  _ZN12clap_builder7builder3arg3Arg4help17h00e43a10ba33f9edE
            (local_780,auStack_a48,"attach the separator before instead of after",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h8da4d4706cdca830E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h9b586f807a88755eE(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 0029f72b to 0029f79d has its CatchHandler @ 0029f91a */
  _ZN12clap_builder7builder3arg3Arg3new17hc200d9bf5b1367b6E(local_530,"regex",5);
  _ZN12clap_builder7builder3arg3Arg5short17h2ad4688907a0f87fE(local_780,local_530,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h840fb1f251239f03E(local_530,local_780,"regex",5);
  _ZN12clap_builder7builder3arg3Arg4help17h00e43a10ba33f9edE
            (local_780,local_530,"interpret the sequence as a regular expression",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17h8da4d4706cdca830E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h9b586f807a88755eE(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 0029f7ce to 0029f841 has its CatchHandler @ 0029f939 */
  _ZN12clap_builder7builder3arg3Arg3new17hc200d9bf5b1367b6E(auStack_a48,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17h2ad4688907a0f87fE(local_780,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h840fb1f251239f03E(auStack_a48,local_780,"separator",9);
  _ZN12clap_builder7builder3arg3Arg4help17h00e43a10ba33f9edE
            (local_780,auStack_a48,"use STRING as the separator instead of newline",0x2e);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha4f3f4b83ea98725E(local_268,local_780);
  _ZN12clap_builder7builder7command7Command3arg17h9b586f807a88755eE(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 0029f85a to 0029f872 has its CatchHandler @ 0029f90d */
  _ZN12clap_builder7builder3arg3Arg3new17hc200d9bf5b1367b6E(local_530,"filemode",4);
  (*(code *)PTR_memcpy_004065d0)(local_780,local_530,0x248);
  local_538 = local_2e8 | 4;
  local_534 = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17h8da4d4706cdca830E(local_530,local_780,1);
                    /* try { // try from 0029f8c8 to 0029f8dc has its CatchHandler @ 0029f90d */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h3cf408ab9ed62d11E(local_780,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17h9b586f807a88755eE(param_1,auStack_a48,local_780);
  return param_1;
}