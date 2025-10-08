long _ZN9uu_whoami6uu_app17hf0a425c263ca9714E(long param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001deab8)();
  _ZN12clap_builder7builder7command7Command3new17hbef2a085238f9babE(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbf2bdb3914761909E(local_5a8,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17hc48434e10b5e588dE(local_2e0,local_5a8);
                    /* try { // try from 00150d98 to 00150dae has its CatchHandler @ 00150e10 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001deb48)(local_5c0,"{}",2);
  _ZN12clap_builder7builder7command7Command14override_usage17hca2ead5206428053E
            (local_5a8,local_2e0,local_5c0);
  (*(code *)PTR_memcpy_001dea60)(param_1,local_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}