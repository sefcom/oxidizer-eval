undefined8 __rustcall uu_env::uu_app(undefined8 param_1)

{
  undefined8 local_a68;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined8 local_a58;
  undefined local_a50 [592];
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  ulong local_27c;
  undefined4 local_274;
  undefined8 local_268 [2];
  undefined8 local_258;
  
  clap_builder::builder::command::Command::new(&local_538,&DAT_001245c5,6);
  clap_builder::builder::command::Command::version(local_800,&local_538,&DAT_001245cb,6);
  clap_builder::builder::command::Command::about(&local_538,local_800,&DAT_001245d1,0x39);
                    /* try { // try from 001ccc46 to 001ccc5c has its CatchHandler @ 001cd502 */
  uucore::format_usage(local_a50,&DAT_0012460a,0x35);
  clap_builder::builder::command::Command::override_usage(local_800,&local_538,local_a50);
  clap_builder::builder::command::Command::after_help(&local_538,local_800,&DAT_0012463f,0x44);
  (*(code *)PTR_memcpy_0024da40)(local_800,&local_538,700);
  local_544 = local_27c | 0x80000000a0;
  local_53c = local_274;
                    /* try { // try from 001cccd7 to 001ccd43 has its CatchHandler @ 001cd553 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_00124683,0x12);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x69);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_00124683,0x12);
  clap_builder::builder::arg::Arg::help(local_a50,&local_538,&DAT_00124695,0x1f);
  clap_builder::builder::arg::Arg::action(local_268,local_a50,2);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001ccd76 to 001cce77 has its CatchHandler @ 001cd5bf */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001246b4,5);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x43);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_001246b4,5);
  clap_builder::builder::arg::Arg::number_of_values(local_a50,local_800,1);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_001246b9,3);
  local_a68 = 2;
  local_258 = local_a58;
  local_268[0] = 2;
  clap_builder::builder::arg::Arg::value_parser(local_a50,local_800,local_268);
  clap_builder::builder::arg::Arg::value_hint(local_800,local_a50,4);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_001246bc,0x1f);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001cce92 to 001ccefe has its CatchHandler @ 001cd541 */
  clap_builder::builder::arg::Arg::new(&local_538,"nullXCPU",4);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x30);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,"nullXCPU",4);
  clap_builder::builder::arg::Arg::help(local_a50,&local_538,&DAT_001246db,99);
  clap_builder::builder::arg::Arg::action(local_268,local_a50,2);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001ccf31 to 001cd01a has its CatchHandler @ 001cd5ad */
  clap_builder::builder::arg::Arg::new(local_800,"fileTSTP",4);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x66);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"fileTSTP",4);
  clap_builder::builder::arg::Arg::value_name(local_a50,local_800,&DAT_00117820,4);
  clap_builder::builder::arg::Arg::value_hint(local_800,local_a50,3);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,local_800,local_268);
  clap_builder::builder::arg::Arg::action(local_800,local_a50,1);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_0012473e,0x5d);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001cd035 to 001cd107 has its CatchHandler @ 001cd589 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_0012479b,5);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x75);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_0012479b,5);
  clap_builder::builder::arg::Arg::value_name(local_a50,&local_538,&DAT_00117848,4);
  clap_builder::builder::arg::Arg::action(&local_538,local_a50,1);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,&local_538,local_268);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_001247a0,0x24);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cd125 to 001cd1a9 has its CatchHandler @ 001cd52c */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001247c4,5);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x76);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_001247c4,5);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,4);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_001247c9,0x32);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_268);
                    /* try { // try from 001cd1c7 to 001cd296 has its CatchHandler @ 001cd577 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_001247fb,0xc);
  clap_builder::builder::arg::Arg::short(local_a50,&local_538,0x53);
  clap_builder::builder::arg::Arg::long(&local_538,local_a50,&DAT_001247fb,0xc);
  clap_builder::builder::arg::Arg::value_name(local_a50,&local_538,&DAT_00124807,1);
  clap_builder::builder::arg::Arg::action(&local_538,local_a50,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_a50,&local_538,local_268);
  clap_builder::builder::arg::Arg::help(local_268,local_a50,&DAT_00124808,0x5d);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cd2b4 to 001cd3a1 has its CatchHandler @ 001cd59b */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00124865,5);
  clap_builder::builder::arg::Arg::overrides_with(local_a50,local_800,&DAT_00124865,5);
  clap_builder::builder::arg::Arg::short(local_800,local_a50,0x61);
  clap_builder::builder::arg::Arg::long(local_a50,local_800,&DAT_00124865,5);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_0012486a,1);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,0);
  local_258 = local_a58;
  local_268[0] = local_a68;
  clap_builder::builder::arg::Arg::value_parser(local_800,local_a50,local_268);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_0012486b,0x7c);
  clap_builder::builder::command::Command::arg(local_800,&local_538,local_a50);
                    /* try { // try from 001cd3bc to 001cd41f has its CatchHandler @ 001cd517 */
  clap_builder::builder::arg::Arg::new(&local_538,&DAT_00117824,4);
  clap_builder::builder::arg::Arg::action(local_a50,&local_538,1);
  local_528 = local_a58;
  local_538 = (undefined4)local_a68;
  uStack_534 = local_a68._4_4_;
  uStack_530 = uStack_a60;
  uStack_52c = uStack_a5c;
  clap_builder::builder::arg::Arg::value_parser(local_268,local_a50,&local_538);
  clap_builder::builder::command::Command::arg(&local_538,local_800,local_268);
                    /* try { // try from 001cd43d to 001cd4dc has its CatchHandler @ 001cd565 */
  clap_builder::builder::arg::Arg::new(local_800,&DAT_001248e7,0xd);
  clap_builder::builder::arg::Arg::long(local_a50,local_800,&DAT_001248e7,0xd);
  clap_builder::builder::arg::Arg::value_name(local_800,local_a50,&DAT_001248f4,3);
  clap_builder::builder::arg::Arg::action(local_a50,local_800,1);
  clap_builder::builder::arg::Arg::value_parser(local_800,local_a50,&local_a68);
  clap_builder::builder::arg::Arg::help(local_a50,local_800,&DAT_001248f7,0x2b);
  clap_builder::builder::command::Command::arg(param_1,&local_538,local_a50);
  return param_1;
}