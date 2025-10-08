undefined8 _ZN7uu_nice6uu_app17h9be1c328dcb05353E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_aa8 [700];
  ulong local_7ec;
  undefined4 local_7e4;
  undefined local_7e0 [632];
  uint local_568;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [632];
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e18e0)();
  _ZN12clap_builder7builder7command7Command3new17h684fda09fb142e92E(local_560,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h879b23b303bfa43bE(auStack_aa8,local_560);
                    /* try { // try from 001551c3 to 001551dc has its CatchHandler @ 00155375 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e19f8)
            (local_7e0,"{} [OPTIONS] [COMMAND [ARGS]]",0x1d);
  _ZN12clap_builder7builder7command7Command14override_usage17hc71ee2f5fed9b78eE
            (local_560,auStack_aa8,local_7e0);
  (*(code *)PTR_memcpy_001e1868)(auStack_aa8,local_560,700);
  local_7ec = local_2a4 | 0x80000000a0;
  local_7e4 = local_29c;
  _ZN12clap_builder7builder7command7Command7version17h73c08b61b2c9da9cE(local_560,auStack_aa8);
  _ZN12clap_builder7builder3arg3Arg3new17h2a25e7ae051e4a91E(auStack_aa8,"adjustment",10);
  _ZN12clap_builder7builder3arg3Arg5short17h8f8eb42d223de4c6E(local_7e0,auStack_aa8);
  _ZN12clap_builder7builder3arg3Arg4long17ha8f668455442febcE(auStack_aa8,local_7e0);
                    /* try { // try from 0015527c to 001552b0 has its CatchHandler @ 00155382 */
  _ZN12clap_builder7builder3arg3Arg4help17h8f632b5cafa5f66fE(local_7e0,auStack_aa8);
  _ZN12clap_builder7builder3arg3Arg6action17h7d18dc444781c540E(auStack_aa8,local_7e0,0);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h6d8e8ebb92d02981E(local_7e0,auStack_aa8);
  (*(code *)PTR_memcpy_001e1868)(local_298,local_7e0,0x278);
  local_20 = local_568 | 0x20;
  local_1c = local_564;
  _ZN12clap_builder7builder7command7Command3arg17hb9b3f097b6ee0774E(auStack_aa8,local_560,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h2a25e7ae051e4a91E(local_560,"COMMAND",7);
  _ZN12clap_builder7builder3arg3Arg6action17h7d18dc444781c540E(local_7e0,local_560,1);
                    /* try { // try from 00155335 to 00155344 has its CatchHandler @ 00155368 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h76e442fb5a95d770E(local_560,local_7e0);
  _ZN12clap_builder7builder7command7Command3arg17hb9b3f097b6ee0774E(param_1,auStack_aa8,local_560);
  return param_1;
}