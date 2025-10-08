undefined8 _ZN9uu_groups6uu_app17he4594228214da6d4E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_828 [700];
  ulong local_56c;
  undefined4 local_564;
  undefined local_560 [700];
  ulong local_2a4;
  undefined4 local_29c;
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e8948)();
  _ZN12clap_builder7builder7command7Command3new17hba7101efe3ab5e30E(auStack_828,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hff776f66e12095d8E(local_560,auStack_828);
  _ZN12clap_builder7builder7command7Command5about17h115288191613c7deE(auStack_828,local_560);
                    /* try { // try from 00157e51 to 00157e6a has its CatchHandler @ 00157f2a */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e8a28)
            (local_298,"{} [OPTION]... [USERNAME]...",0x1c);
  _ZN12clap_builder7builder7command7Command14override_usage17h15314e9673ad9714E
            (local_560,auStack_828,local_298);
  (*(code *)PTR_memcpy_001e88c8)(auStack_828,local_560,700);
  local_56c = local_2a4 | 0x8000000080;
  local_564 = local_29c;
  _ZN12clap_builder7builder3arg3Arg3new17h6fa0ce176ebf1297E(local_560);
  _ZN12clap_builder7builder3arg3Arg6action17h4f45c9ece1cf3ebfE(local_298,local_560);
                    /* try { // try from 00157ee2 to 00157f06 has its CatchHandler @ 00157f37 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hcea4a92290dafa1cE(local_560,local_298);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0b3246f705c0d9f2E(local_298,local_560);
  _ZN12clap_builder7builder7command7Command3arg17h5194433792eef060E(param_1,auStack_828,local_298);
  return param_1;
}