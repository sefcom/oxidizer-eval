long _ZN10uu_logname6uu_app17h0a5118412066b45cE(long param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001dba38)();
  _ZN12clap_builder7builder7command7Command3new17h1726bf8a563a64d8E(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4d89bad1eea2c3eaE(local_5a8,local_2e0);
                    /* try { // try from 0014ec45 to 0014ec5b has its CatchHandler @ 0014eccd */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001dbb80)(local_5c0,"{}",2);
  _ZN12clap_builder7builder7command7Command14override_usage17ha4889a5ab3c11964E
            (local_2e0,local_5a8,local_5c0);
  _ZN12clap_builder7builder7command7Command5about17h9f2ca867078d3eabE(local_5a8,local_2e0);
  (*(code *)PTR_memcpy_001dbaf8)(param_1,local_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}