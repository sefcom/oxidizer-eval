undefined8 _ZN10uu_dirname6uu_app17hdf88fbea4c615f4bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_aa8 [632];
  uint local_830;
  undefined4 local_82c;
  ulong local_7ec;
  undefined4 local_7e4;
  undefined local_7e0 [632];
  uint local_568;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001def90)();
  _ZN12clap_builder7builder7command7Command3new17h8698ed02b8869454E(auStack_aa8,uVar1);
  _ZN12clap_builder7builder7command7Command5about17hf08a86bed1757cacE(local_560,auStack_aa8);
  _ZN12clap_builder7builder7command7Command7version17hf30d40e661062fabE(auStack_aa8,local_560);
                    /* try { // try from 001518c1 to 001518da has its CatchHandler @ 00151a6a */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001df170)
            (local_7e0,"{} [OPTION] NAME...",0x13);
  _ZN12clap_builder7builder7command7Command14override_usage17hc42bd93bfca83f27E
            (local_560,auStack_aa8,local_7e0);
  (*(code *)PTR_memcpy_001df038)(auStack_aa8,local_560,700);
  local_7ec = local_2a4 | 0x8800000088;
  local_7e4 = local_29c;
  _ZN12clap_builder7builder3arg3Arg3new17h5d65d1815d9b9c8fE(local_560,&DAT_00116e10,4);
  _ZN12clap_builder7builder3arg3Arg4long17h9066a2217f62fe54E(local_7e0,local_560);
  _ZN12clap_builder7builder3arg3Arg5short17h4faa790b55975526E(local_560,local_7e0);
                    /* try { // try from 00151971 to 00151980 has its CatchHandler @ 00151a5d */
  _ZN12clap_builder7builder3arg3Arg4help17hb56ebc8c7a859d3eE(local_7e0,local_560);
  _ZN12clap_builder7builder3arg3Arg6action17hdf1044510f6143efE(local_298,local_7e0,2);
  _ZN12clap_builder7builder7command7Command3arg17hdd0ae0b9144b4a0cE(local_560,auStack_aa8,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h5d65d1815d9b9c8fE(auStack_aa8,"dir",3);
  (*(code *)PTR_memcpy_001df038)(local_7e0,auStack_aa8,0x278);
  local_568 = local_830 | 4;
  local_564 = local_82c;
  _ZN12clap_builder7builder3arg3Arg6action17hdf1044510f6143efE(auStack_aa8,local_7e0,1);
                    /* try { // try from 00151a13 to 00151a22 has its CatchHandler @ 00151a4b */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h327ea077447966d7E(local_7e0,auStack_aa8);
  _ZN12clap_builder7builder7command7Command3arg17hdd0ae0b9144b4a0cE(param_1,local_560,local_7e0);
  return param_1;
}