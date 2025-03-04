undefined8 _ZN8uu_paste6uu_app17h87aafd5fcd701ee2E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [584];
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h2d89901a4c11736fE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h1786ea0568577d16E
            (local_530,local_7f8,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17he37ac683e6989227E
            (local_7f8,local_530,
             "Write lines consisting of the sequentially corresponding lines from each\n`FILE`, separated by `TAB`s, to standard output."
             ,0x79);
                    /* try { // try from 001ab7a3 to 001ab7b7 has its CatchHandler @ 001abab4 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTIONS] [FILE]...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h36151491c16bc914E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00216e18)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001ab811 to 001ab874 has its CatchHandler @ 001abad8 */
  _ZN12clap_builder7builder3arg3Arg3new17h69c65de3dd0c85d1E(local_530,"serial",6);
  _ZN12clap_builder7builder3arg3Arg4long17h32a364c1d5e44f7aE(auStack_a48,local_530,"serial",6);
  _ZN12clap_builder7builder3arg3Arg5short17h50c6c71bc945f571E(local_530,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4help17hd0bdc3f2ccbb627dE
            (auStack_a48,local_530,"paste one file at a time instead of in parallel",0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h40df50799c878ac5E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h319b9505fad8ef44E(local_530,local_7f8,local_268);
                    /* try { // try from 001ab8a5 to 001ab936 has its CatchHandler @ 001abafc */
  _ZN12clap_builder7builder3arg3Arg3new17h69c65de3dd0c85d1E(local_7f8,"delimiters",10);
  _ZN12clap_builder7builder3arg3Arg4long17h32a364c1d5e44f7aE(auStack_a48,local_7f8,"delimiters",10);
  _ZN12clap_builder7builder3arg3Arg5short17h50c6c71bc945f571E(local_7f8,auStack_a48,100);
  _ZN12clap_builder7builder3arg3Arg4help17hd0bdc3f2ccbb627dE
            (auStack_a48,local_7f8,"reuse characters from LIST instead of TABs",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb77c6348bf2cf90fE
            (local_7f8,auStack_a48,&DAT_0010a4dc);
  _ZN12clap_builder7builder3arg3Arg13default_value17h5773730136277d55E(auStack_a48,local_7f8,"\t");
  (*(code *)PTR_memcpy_00216e18)(local_268,auStack_a48,0x248);
  local_20 = local_800 | 0x400;
  local_1c = local_7fc;
  _ZN12clap_builder7builder7command7Command3arg17h319b9505fad8ef44E(local_7f8,local_530,local_268);
                    /* try { // try from 001ab989 to 001ab9f7 has its CatchHandler @ 001abaea */
  _ZN12clap_builder7builder3arg3Arg3new17h69c65de3dd0c85d1E(local_530,"file",4);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb77c6348bf2cf90fE
            (auStack_a48,local_530,&DAT_0010a510);
  _ZN12clap_builder7builder3arg3Arg6action17h40df50799c878ac5E(local_530,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg13default_value17h5773730136277d55E(auStack_a48,local_530,"-");
  _ZN12clap_builder7builder3arg3Arg10value_hint17h9782c062f6c33716E(local_268,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h319b9505fad8ef44E(local_530,local_7f8,local_268);
                    /* try { // try from 001aba15 to 001aba78 has its CatchHandler @ 001abac6 */
  _ZN12clap_builder7builder3arg3Arg3new17h69c65de3dd0c85d1E(local_7f8,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h32a364c1d5e44f7aE
            (auStack_a48,local_7f8,"zero-terminated",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h50c6c71bc945f571E(local_7f8,auStack_a48,0x7a);
  _ZN12clap_builder7builder3arg3Arg4help17hd0bdc3f2ccbb627dE
            (auStack_a48,local_7f8,"line delimiter is NUL, not newline",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h40df50799c878ac5E(local_7f8,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h319b9505fad8ef44E(param_1,local_530,local_7f8);
  return param_1;
}