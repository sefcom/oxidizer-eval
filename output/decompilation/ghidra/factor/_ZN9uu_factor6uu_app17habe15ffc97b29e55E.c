undefined8 _ZN9uu_factor6uu_app17habe15ffc97b29e55E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [700];
  ulong local_52c;
  undefined4 local_524;
  undefined local_520 [640];
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024d258)();
  _ZN12clap_builder7builder7command7Command3new17hdcaab8b65a9e1cb0E(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17ha8f1d239386b7a97E(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hdc20847c42ed6625E(local_ab0,local_7e8);
                    /* try { // try from 00194d97 to 00194db0 has its CatchHandler @ 00194f9e */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0024d338)
            (local_520,"{} [OPTION]... [NUMBER]...",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17h5d6a5e2c1e9f2fb2E
            (local_7e8,local_ab0,local_520);
  (*(code *)PTR_memcpy_0024d0d0)(local_ab0,local_7e8,700);
  local_7f4 = local_52c | 0x8008800080088;
  local_7ec = local_524;
  _ZN12clap_builder7builder3arg3Arg3new17he7cb9d6ab12ea59fE(local_7e8,"NUMBER",6);
  _ZN12clap_builder7builder3arg3Arg6action17he667cf7a08f99051E(local_520,local_7e8,1);
  _ZN12clap_builder7builder7command7Command3arg17h5aadfb14ec5e8a6dE(local_7e8,local_ab0,local_520);
  _ZN12clap_builder7builder3arg3Arg3new17he7cb9d6ab12ea59fE(local_ab0,"exponents",9);
  _ZN12clap_builder7builder3arg3Arg5short17h5310cc559ac3d9ddE(local_520,local_ab0);
  _ZN12clap_builder7builder3arg3Arg4long17h063e0b890c83162bE(local_ab0,local_520,"exponents",9);
                    /* try { // try from 00194e9a to 00194eb5 has its CatchHandler @ 00194f8c */
  _ZN12clap_builder7builder3arg3Arg4help17hdce2363f08632f55E
            (local_520,local_ab0,"Print factors in the form p^e",0x1d);
  _ZN12clap_builder7builder3arg3Arg6action17he667cf7a08f99051E(local_2a0,local_520,2);
  _ZN12clap_builder7builder7command7Command3arg17h5aadfb14ec5e8a6dE(local_ab0,local_7e8,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he7cb9d6ab12ea59fE(local_7e8,&DAT_0011b72c,4);
  _ZN12clap_builder7builder3arg3Arg4long17h063e0b890c83162bE(local_520,local_7e8,&DAT_0011b72c,4);
                    /* try { // try from 00194f22 to 00194f3d has its CatchHandler @ 00194f7d */
  _ZN12clap_builder7builder3arg3Arg4help17hdce2363f08632f55E
            (local_7e8,local_520,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17he667cf7a08f99051E(local_520,local_7e8,5);
  _ZN12clap_builder7builder7command7Command3arg17h5aadfb14ec5e8a6dE(param_1,local_ab0,local_520);
  return param_1;
}