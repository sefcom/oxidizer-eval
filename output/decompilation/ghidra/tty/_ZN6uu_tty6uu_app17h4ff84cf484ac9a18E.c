undefined8 _ZN6uu_tty6uu_app17h4ff84cf484ac9a18E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_828 [700];
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001d8308)();
  _ZN12clap_builder7builder7command7Command3new17hbeabfb11cd130195E(local_560,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he076559ff823ed19E(auStack_828,local_560);
  _ZN12clap_builder7builder7command7Command5about17hcc870ff1dd651671E(local_560,auStack_828);
                    /* try { // try from 0014dac6 to 0014dadf has its CatchHandler @ 0014dbb6 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001d83c0)
            (local_298,"{} [OPTION]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17he25e9f1332e35951E
            (auStack_828,local_560,local_298);
  (*(code *)PTR_memcpy_001d8250)(local_560,auStack_828,700);
  local_2a4 = local_56c | 0x8000000080;
  local_29c = local_564;
  _ZN12clap_builder7builder3arg3Arg3new17h2657f407a8aca4a6E(auStack_828);
  _ZN12clap_builder7builder3arg3Arg4long17hde16cda513edd7fdE(local_298,auStack_828);
                    /* try { // try from 0014db57 to 0014db7f has its CatchHandler @ 0014dbc8 */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17ha768bdaa413ae919E(auStack_828,local_298);
  _ZN12clap_builder7builder3arg3Arg5short17h21e0c959ad236f63E(local_298,auStack_828);
  _ZN12clap_builder7builder3arg3Arg4help17h0c3566801bd34b82E(auStack_828,local_298);
  _ZN12clap_builder7builder3arg3Arg6action17he293c9c0eccc313dE(local_298,auStack_828);
  _ZN12clap_builder7builder7command7Command3arg17h07548eb6fefd46f5E(param_1,local_560,local_298);
  return param_1;
}