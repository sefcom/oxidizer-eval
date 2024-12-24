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
  clap_builder::builder::command::Command::version(local_530,auStack_7f8,&DAT_00123f0a,6);
  clap_builder::builder::command::Command::about(auStack_7f8,local_530,&DAT_00123f10,0x34);
                    /* try { // try from 001d9209 to 001d9222 has its CatchHandler @ 001d92e2 */
  uucore::format_usage(local_268,&DAT_00123f44,0x19);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_7f8,local_268);
  clap_builder::builder::command::Command::after_help(auStack_7f8,local_530,&DAT_00123f5d,0x13b7);
  (*(code *)PTR_memcpy_00266e08)(local_530,auStack_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 001d9296 to 001d92b9 has its CatchHandler @ 001d92ef */
  clap_builder::builder::arg::Arg::new(auStack_7f8,"operandsESTRPIPENotFoundTimedOut",8);
  clap_builder::builder::arg::Arg::num_args(local_268,auStack_7f8);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_268);
  return param_1;
}