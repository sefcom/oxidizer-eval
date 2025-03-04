undefined8 _ZN8uu_tsort6uu_app17he13fe654e24171ebE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  undefined local_2e0 [700];
  ulong local_24;
  undefined4 local_1c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h0f7f76504b62bfddE(local_2e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc65d08eaa2967e22E
            (auStack_7f8,local_2e0,"0.0.28",6);
                    /* try { // try from 001b64af to 001b64c8 has its CatchHandler @ 001b65d5 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_530,"{} [OPTIONS] FILE",0x11);
  _ZN12clap_builder7builder7command7Command14override_usage17h6100217c1dd68ad3E
            (local_2e0,auStack_7f8,local_530);
  _ZN12clap_builder7builder7command7Command5about17h80931b9713114aa4E
            (auStack_7f8,local_2e0,
             "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead."
             ,0x135);
  (*(code *)PTR_memcpy_00225018)(local_2e0,auStack_7f8,700);
  local_24 = local_53c | 0x8000000080;
  local_1c = local_534;
                    /* try { // try from 001b653c to 001b655f has its CatchHandler @ 001b65e2 */
  _ZN12clap_builder7builder3arg3Arg3new17h56a5d743255bfec1E(auStack_7f8,&DAT_001144ec,4);
  _ZN12clap_builder7builder3arg3Arg13default_value17h90c7bf8cefc20dbdE(local_530,auStack_7f8);
  (*(code *)PTR_memcpy_00225018)(auStack_7f8,local_530,0x248);
  local_5b0 = local_2e8 | 4;
  local_5ac = local_2e4;
                    /* try { // try from 001b6598 to 001b65ac has its CatchHandler @ 001b65e2 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h2431f684e8007877E(local_530,auStack_7f8,3);
  _ZN12clap_builder7builder7command7Command3arg17h807438ac2cd7a4f6E(param_1,local_2e0,local_530);
  return param_1;
}