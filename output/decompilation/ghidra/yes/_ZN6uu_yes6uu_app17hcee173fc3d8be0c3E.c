long _ZN6uu_yes6uu_app17hcee173fc3d8be0c3E(long param_1)

{
  undefined8 uVar1;
  undefined auStack_aa8 [700];
  ulong local_7ec;
  undefined4 local_7e4;
  undefined local_7e0 [640];
  undefined local_560 [712];
  undefined8 local_298 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001de200)();
  _ZN12clap_builder7builder7command7Command3new17h49aac3302981be37E(auStack_aa8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h344c2ac0241135cfE(local_560,auStack_aa8);
  _ZN12clap_builder7builder7command7Command5about17h90a4fc34032dfe74E(auStack_aa8,local_560);
                    /* try { // try from 00151281 to 0015129a has its CatchHandler @ 00151369 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001de2b8)
            (local_7e0,"{} [STRING]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h9853b23b3f2882fbE
            (local_560,auStack_aa8,local_7e0);
  _ZN12clap_builder7builder3arg3Arg3new17h38a78d2059930b20E(auStack_aa8);
  local_298[0] = 2;
                    /* try { // try from 001512ca to 001512e1 has its CatchHandler @ 00151357 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hd4bf3a752f7d00b9E
            (local_7e0,auStack_aa8,local_298);
  _ZN12clap_builder7builder3arg3Arg6action17h6b46e0cedbe1953aE(local_298,local_7e0);
  _ZN12clap_builder7builder7command7Command3arg17h2ecf1aeda6f8bc73E(auStack_aa8,local_560,local_298)
  ;
  (*(code *)PTR_memcpy_001de1c8)(param_1,auStack_aa8,700);
  *(ulong *)(param_1 + 700) = local_7ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_7e4;
  return param_1;
}