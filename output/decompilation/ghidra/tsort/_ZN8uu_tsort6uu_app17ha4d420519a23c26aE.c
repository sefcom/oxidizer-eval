undefined8 _ZN8uu_tsort6uu_app17ha4d420519a23c26aE(undefined8 param_1)

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
  undefined local_2e0 [700];
  ulong local_24;
  undefined4 local_1c;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f1c48)();
  _ZN12clap_builder7builder7command7Command3new17h45f4103348fd7822E(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbd4546769b4e2c16E(auStack_828,local_2e0);
                    /* try { // try from 0015fe23 to 0015fe3c has its CatchHandler @ 0015ff2f */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f1dc0)
            (local_560,"{} [OPTIONS] FILE",0x11);
  _ZN12clap_builder7builder7command7Command14override_usage17habc30ca84a6959efE
            (local_2e0,auStack_828,local_560);
  _ZN12clap_builder7builder7command7Command5about17hbcf3408e663631b1E(auStack_828,local_2e0);
  (*(code *)PTR_memcpy_001f1c18)(local_2e0,auStack_828,700);
  local_24 = local_56c | 0x8000000080;
  local_1c = local_564;
  _ZN12clap_builder7builder3arg3Arg3new17h858a57d586b2f35cE(auStack_828);
                    /* try { // try from 0015feaf to 0015febe has its CatchHandler @ 0015ff3c */
  _ZN12clap_builder7builder3arg3Arg13default_value17h517e97fa20c60967E(local_560,auStack_828);
  (*(code *)PTR_memcpy_001f1c18)(auStack_828,local_560,0x278);
  local_5b0 = local_2e8 | 4;
  local_5ac = local_2e4;
                    /* try { // try from 0015fef7 to 0015ff06 has its CatchHandler @ 0015ff3c */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h29f1179a2e8da544E(local_560,auStack_828);
  _ZN12clap_builder7builder7command7Command3arg17hb9b4233638eaefbdE(param_1,local_2e0,local_560);
  return param_1;
}