undefined8 _ZN8uu_users6uu_app17h7da0e4a9ca0670f1E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_840 [3];
  undefined local_828 [700];
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e2870)();
  _ZN12clap_builder7builder7command7Command3new17hc0efe52af6b7628cE(local_828,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hb27e1668c6adae4cE(local_560,local_828);
  _ZN12clap_builder7builder7command7Command5about17h93ae764a5ed7fdcbE(local_828,local_560);
                    /* try { // try from 00154dc5 to 00154dde has its CatchHandler @ 00154eb2 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e2938)(local_298,"{} [FILE]",9);
  _ZN12clap_builder7builder7command7Command14override_usage17he5981e4c48aeabc4E
            (local_560,local_828,local_298);
  (*(code *)PTR_memcpy_001e26d0)(local_828,local_560,700);
  local_56c = local_2a4 | 0x8000000080;
  local_564 = local_29c;
  _ZN12clap_builder7builder3arg3Arg3new17h8e9524100cdb6085E(local_560);
  _ZN12clap_builder7builder3arg3Arg8num_args17hf1a656598dc052a4E(local_298,local_560);
                    /* try { // try from 00154e5a to 00154e8c has its CatchHandler @ 00154ec1 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17he8a13223bc6720afE(local_560,local_298);
  local_840[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h403e6cf17af2c192E(local_298,local_560,local_840)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h0e3a33f2eea5278eE(param_1,local_828,local_298);
  return param_1;
}