undefined8 __rustcall uu_tsort::uu_app(undefined8 param_1)

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
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_2e0,uVar1);
  clap_builder::builder::command::Command::version(auStack_7f8,local_2e0,"0.0.28",6);
                    /* try { // try from 001b68ef to 001b6908 has its CatchHandler @ 001b6a15 */
  uucore::format_usage(local_530,"{} [OPTIONS] FILE",0x11);
  clap_builder::builder::command::Command::override_usage(local_2e0,auStack_7f8,local_530);
  clap_builder::builder::command::Command::about
            (auStack_7f8,local_2e0,
             "Topological sort the strings in FILE.\nStrings are defined as any sequence of tokens separated by whitespace (tab, space, or newline), ordering them based on dependencies in a directed acyclic graph (DAG). \nUseful for scheduling and determining execution order.\nIf FILE is not passed in, stdin is used instead."
             ,0x135);
  (*(code *)PTR_memcpy_00226178)(local_2e0,auStack_7f8,700);
  local_24 = local_53c | 0x8000000080;
  local_1c = local_534;
                    /* try { // try from 001b697c to 001b699f has its CatchHandler @ 001b6a22 */
  clap_builder::builder::arg::Arg::new(auStack_7f8,&DAT_0011466c,4);
  clap_builder::builder::arg::Arg::default_value(local_530,auStack_7f8);
  (*(code *)PTR_memcpy_00226178)(auStack_7f8,local_530,0x248);
  local_5b0 = local_2e8 | 4;
  local_5ac = local_2e4;
                    /* try { // try from 001b69d8 to 001b69ec has its CatchHandler @ 001b6a22 */
  clap_builder::builder::arg::Arg::value_hint(local_530,auStack_7f8,3);
  clap_builder::builder::command::Command::arg(param_1,local_2e0,local_530);
  return param_1;
}