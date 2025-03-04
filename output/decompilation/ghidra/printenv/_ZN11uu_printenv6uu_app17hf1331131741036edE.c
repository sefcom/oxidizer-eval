undefined8 _ZN11uu_printenv6uu_app17hf1331131741036edE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [700];
  ulong local_794;
  undefined4 local_78c;
  undefined local_788 [592];
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h756124d03d797937E(local_a50,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h2f0c204c3b28853eE(local_538,local_a50);
  _ZN12clap_builder7builder7command7Command5about17h6ce0240f9b0c168eE(local_a50,local_538);
                    /* try { // try from 001a3887 to 001a38a0 has its CatchHandler @ 001a39f0 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_788,"{} [OPTION]... [VARIABLE]...",0x1c);
  _ZN12clap_builder7builder7command7Command14override_usage17h89030b7305223480E
            (local_538,local_a50,local_788);
  (*(code *)PTR_memcpy_002064e0)(local_a50,local_538,700);
  local_794 = local_27c | 0x8000000080;
  local_78c = local_274;
  _ZN12clap_builder7builder3arg3Arg3new17h232af3154c6234e3E(local_538,&DAT_001124a8,4);
  _ZN12clap_builder7builder3arg3Arg5short17h4b8b75b37ac110d0E(local_788,local_538);
  _ZN12clap_builder7builder3arg3Arg4long17h26f18b50c67386c2E(local_538,local_788);
                    /* try { // try from 001a393b to 001a394a has its CatchHandler @ 001a39e1 */
  _ZN12clap_builder7builder3arg3Arg4help17h457dd636a188a524E(local_788,local_538);
  _ZN12clap_builder7builder3arg3Arg6action17hfac7705830aeadd1E(local_270,local_788,2);
  _ZN12clap_builder7builder7command7Command3arg17h825aeeae1f3493f2E(local_538,local_a50,local_270);
  _ZN12clap_builder7builder3arg3Arg3new17h232af3154c6234e3E(local_a50,"variables",9);
  _ZN12clap_builder7builder3arg3Arg6action17hfac7705830aeadd1E(local_788,local_a50,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h355828e295e06717E(local_a50,local_788);
  _ZN12clap_builder7builder7command7Command3arg17h825aeeae1f3493f2E(param_1,local_538,local_a50);
  return param_1;
}