undefined8 __rustcall uu_dd::uu_app(undefined8 param_1)

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
  clap_builder::builder::command::Command::new(auStack_7f8,uVar1);
  clap_builder::builder::command::Command::version(local_530,auStack_7f8,&DAT_00123e12,6);
  clap_builder::builder::command::Command::about(auStack_7f8,local_530,&DAT_00123e18,0x34);
                    /* try { // try from 001d90a9 to 001d90c2 has its CatchHandler @ 001d9182 */
  uucore::format_usage(local_268,&DAT_00123e4c,0x19);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_7f8,local_268);
  clap_builder::builder::command::Command::after_help(auStack_7f8,local_530,&DAT_00123e65,0x13b7);
  (*(code *)PTR_memcpy_00266548)(local_530,auStack_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001d9136 to 001d9159 has its CatchHandler @ 001d918f */
  clap_builder::builder::arg::Arg::new(auStack_7f8,"operandsESTRPIPENotFoundTimedOut",8);
  clap_builder::builder::arg::Arg::num_args(local_268,auStack_7f8);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_268);
  return param_1;
}