undefined8 _ZN9uu_unlink6uu_app17hdbcae0fc1396218fE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_818 [3];
  undefined local_800 [584];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [584];
  uint local_28;
  undefined4 local_24;
  
  uVar2 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h0612242c1aea96b0E(local_538,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h62767f57d7e778baE(local_800,local_538);
  _ZN12clap_builder7builder7command7Command5about17h0008fc200e6dd216E(local_538,local_800);
                    /* try { // try from 001a7a6a to 001a7a83 has its CatchHandler @ 001a7b89 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_270,"{} [FILE]\n{} OPTION",0x13);
  _ZN12clap_builder7builder7command7Command14override_usage17h9afbce5b934cea29E
            (local_800,local_538,local_270);
  puVar1 = PTR_memcpy_0020e3d0;
  (*(code *)PTR_memcpy_0020e3d0)(local_538,local_800,700);
  local_27c = local_544 | 0x8000000080;
  local_274 = local_53c;
  _ZN12clap_builder7builder3arg3Arg3new17h3131ba4629097389E(local_800);
  (*(code *)puVar1)(local_270,local_800,0x248);
  local_28 = local_5b8 | 5;
  local_24 = local_5b4;
  local_818[0] = 2;
                    /* try { // try from 001a7b2d to 001a7b3c has its CatchHandler @ 001a7b77 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2fdfdff095e21063E(local_800,local_270,local_818)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf1e0ee7812d8c3f9E(local_270,local_800);
  _ZN12clap_builder7builder7command7Command3arg17h6ba96fa9d71a8bbfE(param_1,local_538,local_270);
  return param_1;
}