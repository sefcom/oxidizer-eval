long _ZN9uu_whoami6uu_app17h74b0fb3ed938f565E(long param_1)

{
  undefined8 uVar1;
  undefined local_5c0 [24];
  undefined local_5a8 [700];
  ulong local_2ec;
  undefined4 local_2e4;
  undefined local_2e0 [712];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h140a7e7c798df51dE(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6d79b15dc0546f23E(local_5a8,local_2e0);
  _ZN12clap_builder7builder7command7Command5about17he894dc93fe7cb947E(local_2e0,local_5a8);
                    /* try { // try from 001a55f8 to 001a560e has its CatchHandler @ 001a5670 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_5c0,"{}",2);
  _ZN12clap_builder7builder7command7Command14override_usage17hab49b17853338a37E
            (local_5a8,local_2e0,local_5c0);
  (*(code *)PTR_memcpy_0020b650)(param_1,local_5a8,700);
  *(ulong *)(param_1 + 700) = local_2ec | 0x8000000080;
  *(undefined4 *)(param_1 + 0x2c4) = local_2e4;
  return param_1;
}