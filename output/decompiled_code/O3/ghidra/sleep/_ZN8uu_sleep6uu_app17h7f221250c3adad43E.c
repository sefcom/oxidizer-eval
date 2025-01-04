undefined8 __rustcall uu_sleep::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(auStack_7f8,local_530,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_530,auStack_7f8,"Pause for NUMBER seconds.",0x19);
  clap_builder::builder::command::Command::after_help
            (auStack_7f8,local_530,
             "Pause for NUMBER seconds.  SUFFIX may be \'s\' for seconds (the default),\n\'m\' for minutes, \'h\' for hours or \'d\' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values."
             ,0x14f);
                    /* try { // try from 001abe58 to 001abe71 has its CatchHandler @ 001abf3f */
  uucore::format_usage(local_268,"{} NUMBER[SUFFIX]...\n{} OPTION",0x1e);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_7f8,local_268);
  (*(code *)PTR_memcpy_0021aa80)(auStack_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001abec6 to 001abf08 has its CatchHandler @ 001abf4c */
  clap_builder::builder::arg::Arg::new(local_530,"NUMBER",6);
  clap_builder::builder::arg::Arg::help(local_268,local_530);
  clap_builder::builder::arg::Arg::value_name(local_530,local_268);
  clap_builder::builder::arg::Arg::action(local_268,local_530);
  clap_builder::builder::command::Command::arg(param_1,auStack_7f8,local_268);
  return param_1;
}