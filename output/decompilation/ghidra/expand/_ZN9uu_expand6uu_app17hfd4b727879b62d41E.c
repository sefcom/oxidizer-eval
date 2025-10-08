undefined8 _ZN9uu_expand6uu_app17hfd4b727879b62d41E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef0d8)();
  _ZN12clap_builder7builder7command7Command3new17h2c36ebb26d3107f1E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h205329286085b7adE(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17hd4fe0f30bf6745a7E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command10after_help17h711791a9ebf717f5E(local_830,local_568);
                    /* try { // try from 0015ce40 to 0015ce56 has its CatchHandler @ 0015d162 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ef2d8)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hd38fcd2675bea24bE
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001ef0b8)(local_830,local_568,700);
  local_574 = local_2ac | 0x8800000088;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h3be8048476dd5590E(local_568,"initial",7);
  _ZN12clap_builder7builder3arg3Arg4long17ha352d0915a6bcb4eE(local_ab0,local_568,"initial",7);
  _ZN12clap_builder7builder3arg3Arg5short17h321390f63acd7725E(local_568,local_ab0,0x69);
                    /* try { // try from 0015cf01 to 0015cf19 has its CatchHandler @ 0015d150 */
  _ZN12clap_builder7builder3arg3Arg4help17h9711bed0115f2440E
            (local_ab0,local_568,"do not convert tabs after non blanks",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h256e0eeb6b69c5d6E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3641595d12c1bc0fE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3be8048476dd5590E(local_830,"tabs",4);
  _ZN12clap_builder7builder3arg3Arg4long17ha352d0915a6bcb4eE(local_ab0,local_830,"tabs",4);
  _ZN12clap_builder7builder3arg3Arg5short17h321390f63acd7725E(local_830,local_ab0,0x74);
                    /* try { // try from 0015cf9b to 0015cfda has its CatchHandler @ 0015d174 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1d0fa685e0fd205bE(local_ab0,local_830);
  _ZN12clap_builder7builder3arg3Arg6action17h256e0eeb6b69c5d6E(local_830,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg4help17h9711bed0115f2440E
            (local_ab0,local_830,
             "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions"
             ,0x59);
  _ZN12clap_builder7builder7command7Command3arg17h3641595d12c1bc0fE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h3be8048476dd5590E(local_568,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg4long17ha352d0915a6bcb4eE(local_ab0,local_568,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg5short17h321390f63acd7725E(local_568,local_ab0,0x55);
                    /* try { // try from 0015d044 to 0015d05c has its CatchHandler @ 0015d13e */
  _ZN12clap_builder7builder3arg3Arg4help17h9711bed0115f2440E
            (local_ab0,local_568,
             "interpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\n",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h256e0eeb6b69c5d6E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3641595d12c1bc0fE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3be8048476dd5590E(local_830,"FILES",5);
  _ZN12clap_builder7builder3arg3Arg6action17h256e0eeb6b69c5d6E(local_ab0,local_830,1);
  (*(code *)PTR_memcpy_001ef0b8)(local_830,local_ab0,0x278);
  local_5b8 = local_838 | 4;
  local_5b4 = local_834;
                    /* try { // try from 0015d0f8 to 0015d104 has its CatchHandler @ 0015d12c */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h43bcf93f0b81f1b4E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h3641595d12c1bc0fE(param_1,local_568,local_ab0);
  return param_1;
}