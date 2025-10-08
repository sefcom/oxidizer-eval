undefined8 _ZN11uu_printenv6uu_app17h7bc4be2a87c56121E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [700];
  ulong local_52c;
  undefined4 local_524;
  undefined local_520 [640];
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001d9f88)();
  _ZN12clap_builder7builder7command7Command3new17h599cbc146a0809b5E(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hb2e5f25d7bb7c337E(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17h27e2ccdf5f2fafc4E(local_ab0,local_7e8);
                    /* try { // try from 0014eed7 to 0014eef0 has its CatchHandler @ 0014f040 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001da140)
            (local_520,"{} [OPTION]... [VARIABLE]...",0x1c);
  _ZN12clap_builder7builder7command7Command14override_usage17h5a7075c9d08c3879E
            (local_7e8,local_ab0,local_520);
  (*(code *)PTR_memcpy_001da048)(local_ab0,local_7e8,700);
  local_7f4 = local_52c | 0x8000000080;
  local_7ec = local_524;
  _ZN12clap_builder7builder3arg3Arg3new17hbf40865558512300E(local_7e8,&DAT_001166ac,4);
  _ZN12clap_builder7builder3arg3Arg5short17he0c04823a82f5da3E(local_520,local_7e8);
  _ZN12clap_builder7builder3arg3Arg4long17hcc330f9367bbefd2E(local_7e8,local_520);
                    /* try { // try from 0014ef8b to 0014ef9a has its CatchHandler @ 0014f031 */
  _ZN12clap_builder7builder3arg3Arg4help17h42a1c5265d77db3bE(local_520,local_7e8);
  _ZN12clap_builder7builder3arg3Arg6action17h91b8347eab8de338E(local_2a0,local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17ha778d9f2bf478078E(local_7e8,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hbf40865558512300E(local_ab0,"variables",9);
  _ZN12clap_builder7builder3arg3Arg6action17h91b8347eab8de338E(local_520,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h3c22878311d2d648E(local_ab0,local_520);
  _ZN12clap_builder7builder7command7Command3arg17ha778d9f2bf478078E(param_1,local_7e8,local_ab0);
  return param_1;
}