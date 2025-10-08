undefined8 _ZN8uu_false6uu_app17h955a8eeecc3e670dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001d0938)();
  _ZN12clap_builder7builder7command7Command3new17h8ce23c60413c67bcE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hf04954f790989f2fE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h48a6398cb6a7afc7E(local_830,local_568);
  (*(code *)PTR_memcpy_001d08d0)(local_568,local_830,700);
  local_2ac = local_574 | 0x28000000280000;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h1d6b8bdc58eb74d0E(local_830,&DAT_001153c4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h66871fb1b16489e3E(local_2a0,local_830,&DAT_001153c4,4);
                    /* try { // try from 0014a4bf to 0014a4d7 has its CatchHandler @ 0014a5ab */
  _ZN12clap_builder7builder3arg3Arg4help17h62314f4fbec9a314E
            (local_830,local_2a0,"Print help information",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17h68a2c9a1d7501fdcE(local_2a0,local_830,5);
  _ZN12clap_builder7builder7command7Command3arg17hb068e5c29a7ce33cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h1d6b8bdc58eb74d0E(local_568,"version",7);
  _ZN12clap_builder7builder3arg3Arg4long17h66871fb1b16489e3E(local_2a0,local_568,"version",7);
                    /* try { // try from 0014a541 to 0014a55c has its CatchHandler @ 0014a59c */
  _ZN12clap_builder7builder3arg3Arg4help17h62314f4fbec9a314E
            (local_568,local_2a0,"Print version information",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17h68a2c9a1d7501fdcE(local_2a0,local_568,8);
  _ZN12clap_builder7builder7command7Command3arg17hb068e5c29a7ce33cE(param_1,local_830,local_2a0);
  return param_1;
}