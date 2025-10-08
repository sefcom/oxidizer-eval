undefined8 _ZN11uu_unexpand6uu_app17h8be29c5c59f3b421E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ee920)();
  _ZN12clap_builder7builder7command7Command3new17h6a135678a30b80beE(local_568,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h5a6048d963007458E(local_830,local_568);
                    /* try { // try from 0015c5ba to 0015c5d0 has its CatchHandler @ 0015c987 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001eebb8)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h78d2d73011e3bd83E
            (local_568,local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hc1fc754ec77b4291E(local_830,local_568);
  puVar1 = PTR_memcpy_001ee9f0;
  (*(code *)PTR_memcpy_001ee9f0)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h04942cb94bab7d73E(local_830,"file",4);
  (*(code *)puVar1)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 4;
  local_834 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg6action17h04ca4c374c9823e8E(local_830,local_ab0,1);
                    /* try { // try from 0015c6a9 to 0015c6b5 has its CatchHandler @ 0015c975 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h021147f1a3510956E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h62125d75bbc9d063E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h04942cb94bab7d73E(local_568,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17h0c533d41c3370822E(local_ab0,local_568,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hbc894fa31bd799dcE(local_568,local_ab0,"all",3);
                    /* try { // try from 0015c71f to 0015c737 has its CatchHandler @ 0015c963 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cecb8c80d494d92E
            (local_ab0,local_568,"convert all blanks, instead of just initial blanks",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h04ca4c374c9823e8E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h62125d75bbc9d063E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h04942cb94bab7d73E(local_830,"first-only",10);
  _ZN12clap_builder7builder3arg3Arg4long17hbc894fa31bd799dcE(local_ab0,local_830,"first-only",10);
                    /* try { // try from 0015c7a1 to 0015c7bc has its CatchHandler @ 0015c951 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cecb8c80d494d92E
            (local_830,local_ab0,"convert only leading sequences of blanks (overrides -a)",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17h04ca4c374c9823e8E(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h62125d75bbc9d063E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h04942cb94bab7d73E(local_568,"tabs",4);
  _ZN12clap_builder7builder3arg3Arg5short17h0c533d41c3370822E(local_ab0,local_568,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hbc894fa31bd799dcE(local_568,local_ab0,"tabs",4);
                    /* try { // try from 0015c83e to 0015c87d has its CatchHandler @ 0015c999 */
  _ZN12clap_builder7builder3arg3Arg4help17h2cecb8c80d494d92E
            (local_ab0,local_568,
             "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)"
             ,99);
  _ZN12clap_builder7builder3arg3Arg6action17h04ca4c374c9823e8E(local_568,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17ha8cdeac0839575b8E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h62125d75bbc9d063E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h04942cb94bab7d73E(local_830,"no-utf8",7);
  _ZN12clap_builder7builder3arg3Arg5short17h0c533d41c3370822E(local_ab0,local_830,0x55);
  _ZN12clap_builder7builder3arg3Arg4long17hbc894fa31bd799dcE(local_830,local_ab0,"no-utf8",7);
                    /* try { // try from 0015c8e7 to 0015c8ff has its CatchHandler @ 0015c93f */
  _ZN12clap_builder7builder3arg3Arg4help17h2cecb8c80d494d92E
            (local_ab0,local_830,"interpret input file as 8-bi",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h04ca4c374c9823e8E(local_830,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h62125d75bbc9d063E(param_1,local_568,local_830);
  return param_1;
}