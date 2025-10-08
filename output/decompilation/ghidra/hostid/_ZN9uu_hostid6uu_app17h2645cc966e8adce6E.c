long _ZN9uu_hostid6uu_app17h2645cc966e8adce6E(long param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001db580)();
  _ZN12clap_builder7builder7command7Command3new17h3f771ea0450d13cbE(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h86a5bea98b829b50E(local_5a8,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17hc316918f33dafaa7E(local_2e0,local_5a8);
                    /* try { // try from 0014e688 to 0014e69e has its CatchHandler @ 0014e700 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001db608)(local_5c0,&DAT_0011781b,0xc);
  _ZN12clap_builder7builder7command7Command14override_usage17h6c124f3890cb5a6bE
            (local_5a8,local_2e0,local_5c0);
  (*(code *)PTR_memcpy_001db558)(param_1,local_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}