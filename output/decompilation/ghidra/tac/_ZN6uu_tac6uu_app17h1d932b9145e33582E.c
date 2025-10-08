undefined8 _ZN6uu_tac6uu_app17h1d932b9145e33582E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00361ee0)();
  _ZN12clap_builder7builder7command7Command3new17ha98009625612c575E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4fb0160a833db3d0E(local_830,local_568);
                    /* try { // try from 002120da to 002120f0 has its CatchHandler @ 002123fd */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_003620e0)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hb49bde14204df719E
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17h3c60efaf1973baa1E(local_830,local_568);
  (*(code *)PTR_memcpy_00361ec0)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h4410aa8eb887514aE(local_830,"before",6);
  _ZN12clap_builder7builder3arg3Arg5short17h99ebfcf9d5ea07d2E(local_ab0,local_830,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h0dfbb530c88d9cdfE(local_830,local_ab0,"before",6);
                    /* try { // try from 002121ae to 002121c6 has its CatchHandler @ 002123eb */
  _ZN12clap_builder7builder3arg3Arg4help17h8f51bad8d84955a5E
            (local_ab0,local_830,"attach the separator before instead of after",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h55be912e0f677697E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17he15225bcf4a7ef60E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h4410aa8eb887514aE(local_568,"regex",5);
  _ZN12clap_builder7builder3arg3Arg5short17h99ebfcf9d5ea07d2E(local_ab0,local_568,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h0dfbb530c88d9cdfE(local_568,local_ab0,"regex",5);
                    /* try { // try from 00212248 to 00212260 has its CatchHandler @ 002123d9 */
  _ZN12clap_builder7builder3arg3Arg4help17h8f51bad8d84955a5E
            (local_ab0,local_568,"interpret the sequence as a regular expression",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17h55be912e0f677697E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17he15225bcf4a7ef60E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h4410aa8eb887514aE(local_830,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17h99ebfcf9d5ea07d2E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h0dfbb530c88d9cdfE(local_830,local_ab0,"separator",9);
                    /* try { // try from 002122e2 to 0021230c has its CatchHandler @ 0021240f */
  _ZN12clap_builder7builder3arg3Arg4help17h8f51bad8d84955a5E
            (local_ab0,local_830,"use STRING as the separator instead of newline",0x2e);
  _ZN12clap_builder7builder3arg3Arg10value_name17h07ebea8321eb664bE(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17he15225bcf4a7ef60E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h4410aa8eb887514aE(local_568,"filemode",4);
  (*(code *)PTR_memcpy_00361ec0)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder3arg3Arg6action17h55be912e0f677697E(local_568,local_ab0,1);
                    /* try { // try from 00212393 to 0021239f has its CatchHandler @ 002123c7 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h294c545d0e0a3d7bE(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17he15225bcf4a7ef60E(param_1,local_830,local_ab0);
  return param_1;
}