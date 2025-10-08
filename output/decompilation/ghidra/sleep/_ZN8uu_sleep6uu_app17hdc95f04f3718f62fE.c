undefined8 _ZN8uu_sleep6uu_app17hdc95f04f3718f62fE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_828 [700];
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00204398)();
  _ZN12clap_builder7builder7command7Command3new17hc286858e88ead0e1E(local_560,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd4d830548186eaeeE(auStack_828,local_560);
  _ZN12clap_builder7builder7command7Command5about17h35f2551108810745E(local_560,auStack_828);
  _ZN12clap_builder7builder7command7Command10after_help17hdb595e3094458c73E(auStack_828,local_560);
                    /* try { // try from 00160d74 to 00160d8d has its CatchHandler @ 00160e4d */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00204428)
            (local_298,"{} NUMBER[SUFFIX]...\n{} OPTION",0x1e);
  _ZN12clap_builder7builder7command7Command14override_usage17h374f4883a111a048E
            (local_560,auStack_828,local_298);
  (*(code *)PTR_memcpy_00204360)(auStack_828,local_560,700);
  local_56c = local_2a4 | 0x8000000080;
  local_564 = local_29c;
  _ZN12clap_builder7builder3arg3Arg3new17h4dc5f7c8a6ef0c45E(local_560);
                    /* try { // try from 00160df2 to 00160e16 has its CatchHandler @ 00160e5a */
  _ZN12clap_builder7builder3arg3Arg4help17hfed2f462879926abE(local_298,local_560);
  _ZN12clap_builder7builder3arg3Arg10value_name17h281bf2b409414bc1E(local_560,local_298);
  _ZN12clap_builder7builder3arg3Arg6action17hf51fa3d02e3f8b86E(local_298,local_560);
  _ZN12clap_builder7builder7command7Command3arg17h85d5030d363477a1E(param_1,auStack_828,local_298);
  return param_1;
}