undefined8 _ZN9uu_unlink6uu_app17h899c20ea912880cfE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_848 [3];
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [632];
  uint local_28;
  undefined4 local_24;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e2058)();
  _ZN12clap_builder7builder7command7Command3new17h6681795f670860c0E(local_568,uVar2);
  _ZN12clap_builder7builder7command7Command7version17hc072b0fb3970946dE(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17heb4661c01fb44ecfE(local_568,local_830);
                    /* try { // try from 001535ba to 001535d3 has its CatchHandler @ 001536c9 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e2108)(local_2a0,&DAT_0011811f,0x11)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17hc5c12236bbe48428E
            (local_830,local_568,local_2a0);
  puVar1 = PTR_memcpy_001e2018;
  (*(code *)PTR_memcpy_001e2018)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h48e9a654ad1b390aE(local_830);
  (*(code *)puVar1)(local_2a0,local_830,0x278);
  local_28 = local_5b8 | 5;
  local_24 = local_5b4;
  local_848[0] = 2;
                    /* try { // try from 0015367d to 0015369e has its CatchHandler @ 001536db */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hcbf50ed5fcfb3971E(local_830,local_2a0,local_848)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h72db5f6da84472b3E(local_2a0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17hb9152f2050b576a0E(param_1,local_568,local_2a0);
  return param_1;
}