undefined8 _ZN7uu_true6uu_app17he71b321b5ffe34f5E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001d0940)();
  _ZN12clap_builder7builder7command7Command3new17hc87e4909c4c858e6E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h9a4c3b19fe5a89ecE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17hef80e6afefea7a46E(local_830,local_568);
  (*(code *)PTR_memcpy_001d08e0)(local_568,local_830,700);
  local_2ac = local_574 | 0x28000000280000;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17hfda42851990e6d76E(local_830,&DAT_001153c4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h9aff8c3492eec2c6E(local_2a0,local_830,&DAT_001153c4,4);
                    /* try { // try from 0014a4cf to 0014a4e7 has its CatchHandler @ 0014a5bb */
  _ZN12clap_builder7builder3arg3Arg4help17h787143956e027ce0E(local_830,local_2a0,&DAT_0011647a,0x16)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h602356f3b14b8056E(local_2a0,local_830,5);
  _ZN12clap_builder7builder7command7Command3arg17h7db3d395ae49ba1fE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hfda42851990e6d76E(local_568,&DAT_00116490,7);
  _ZN12clap_builder7builder3arg3Arg4long17h9aff8c3492eec2c6E(local_2a0,local_568,&DAT_00116490,7);
                    /* try { // try from 0014a551 to 0014a56c has its CatchHandler @ 0014a5ac */
  _ZN12clap_builder7builder3arg3Arg4help17h787143956e027ce0E(local_568,local_2a0,&DAT_00116497,0x19)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h602356f3b14b8056E(local_2a0,local_568,8);
  _ZN12clap_builder7builder7command7Command3arg17h7db3d395ae49ba1fE(param_1,local_830,local_2a0);
  return param_1;
}