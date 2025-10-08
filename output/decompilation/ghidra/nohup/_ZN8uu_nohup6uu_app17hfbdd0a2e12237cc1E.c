long _ZN8uu_nohup6uu_app17hfbdd0a2e12237cc1E(long param_1)

{
  undefined8 uVar1;
  undefined auStack_828 [632];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [632];
  uint local_2e8;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4d48)();
  _ZN12clap_builder7builder7command7Command3new17h981273b5e07a6a17E(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h718c87c5d51c1e7fE(auStack_828,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17hc21fc57f17db85f4E(local_2e0,auStack_828);
  _ZN12clap_builder7builder7command7Command10after_help17h644b19a871734a41E(auStack_828,local_2e0);
                    /* try { // try from 00156894 to 001568ad has its CatchHandler @ 0015699b */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e4e40)
            (local_560,"{} COMMAND [ARG]...\n{} OPTION",0x1d);
  _ZN12clap_builder7builder7command7Command14override_usage17h2684d3db08a78274E
            (local_2e0,auStack_828,local_560);
  _ZN12clap_builder7builder3arg3Arg3new17h548695783e35bc0eE(auStack_828);
  (*(code *)PTR_memcpy_001e4cf8)(local_560,auStack_828,0x278);
  local_2e8 = local_5b0 | 5;
  local_2e4 = local_5ac;
  _ZN12clap_builder7builder3arg3Arg6action17h44213a50f0145d8cE(auStack_828,local_560);
                    /* try { // try from 00156917 to 00156926 has its CatchHandler @ 00156989 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hdacfd02738c32f18E(local_560,auStack_828);
  _ZN12clap_builder7builder7command7Command3arg17ha415107f2087353eE(auStack_828,local_2e0,local_560)
  ;
  (*(code *)PTR_memcpy_001e4cf8)(param_1,auStack_828,700);
  *(ulong *)(param_1 + 700) = local_56c | 0x80000000a0;
  *(undefined4 *)(param_1 + 0x2c4) = local_564;
  return param_1;
}