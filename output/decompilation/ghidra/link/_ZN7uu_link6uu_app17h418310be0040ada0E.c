undefined8 _ZN7uu_link6uu_app17h418310be0040ada0E(undefined8 param_1)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e2e50)();
  _ZN12clap_builder7builder7command7Command3new17hac022b9a8d3b232fE(local_568,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h255607b1fcdf44f3E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17h076a24e249de2314E(local_568,local_830);
                    /* try { // try from 0015413a to 00154153 has its CatchHandler @ 00154259 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e2f00)(local_2a0,"{",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h6acc69e058c2125cE
            (local_830,local_568,local_2a0);
  puVar1 = PTR_memcpy_001e2e10;
  (*(code *)PTR_memcpy_001e2e10)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h36fd2188dafea7d4E(local_830);
  (*(code *)puVar1)(local_2a0,local_830,0x278);
  local_28 = local_5b8 | 5;
  local_24 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg8num_args17h03cb521ffc085937E(local_830,local_2a0);
                    /* try { // try from 00154205 to 00154231 has its CatchHandler @ 0015426b */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h4ab4f2c0c4396713E(local_2a0,local_830);
  local_848[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h501d9c2114dce07aE(local_830,local_2a0,local_848)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hed794b8a2daf25f1E(param_1,local_568,local_830);
  return param_1;
}