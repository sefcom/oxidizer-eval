undefined8 __rustcall uu_readlink::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_a50 [592];
  undefined local_800 [700];
  ulong local_544;
  undefined4 local_53c;
  undefined local_538 [700];
  ulong local_27c;
  undefined4 local_274;
  undefined local_270 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_800,uVar1);
  clap_builder::builder::command::Command::version(local_538,local_800);
  clap_builder::builder::command::Command::about(local_800,local_538);
                    /* try { // try from 001b67ed to 001b6803 has its CatchHandler @ 001b6e29 */
  uucore::format_usage(local_a50,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_538,local_800,local_a50);
  (*(code *)PTR_memcpy_0021f6b0)(local_800,local_538,700);
  local_544 = local_27c | 0x8000000080;
  local_53c = local_274;
  clap_builder::builder::arg::Arg::new(local_538,"canonicalize",0xc);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,0x66);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"canonicalize",0xc);
                    /* try { // try from 001b68ae to 001b68c6 has its CatchHandler @ 001b6e17 */
  clap_builder::builder::arg::Arg::help
            (local_a50,local_538,
             "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist"
             ,0x7f);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,"canonicalize-existing",0x15);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x65);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"canonicalize-existing",0x15);
                    /* try { // try from 001b6948 to 001b6960 has its CatchHandler @ 001b6e05 */
  clap_builder::builder::arg::Arg::help
            (local_a50,local_800,
             "canonicalize by following every symlink in every component of the given name recursively, all components must exist"
             ,0x73);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"canonicalize-missing",0x14);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,0x6d);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"canonicalize-missing",0x14);
                    /* try { // try from 001b69e2 to 001b69fa has its CatchHandler @ 001b6df3 */
  clap_builder::builder::arg::Arg::help
            (local_a50,local_538,
             "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence"
             ,0x86);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,"no-newline",10);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x6e);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"no-newline",10);
                    /* try { // try from 001b6a7c to 001b6a94 has its CatchHandler @ 001b6de1 */
  clap_builder::builder::arg::Arg::help
            (local_a50,local_800,"do not output the trailing delimiter",0x24);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"quiet",5);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,0x71);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"quiet",5);
                    /* try { // try from 001b6b16 to 001b6b2e has its CatchHandler @ 001b6dcf */
  clap_builder::builder::arg::Arg::help(local_a50,local_538,"suppress most error messages",0x1c);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,"silent",6);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x73);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,"silent",6);
                    /* try { // try from 001b6bb0 to 001b6bc8 has its CatchHandler @ 001b6dbd */
  clap_builder::builder::arg::Arg::help(local_a50,local_800,"suppress most error messages",0x1c);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"verbose",7);
  clap_builder::builder::arg::Arg::short(local_a50,local_538,0x76);
  clap_builder::builder::arg::Arg::long(local_538,local_a50,"verbose",7);
                    /* try { // try from 001b6c4a to 001b6c62 has its CatchHandler @ 001b6dab */
  clap_builder::builder::arg::Arg::help(local_a50,local_538,"report error message",0x14);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_538,local_800,local_270);
  clap_builder::builder::arg::Arg::new(local_800,&DAT_00114730,4);
  clap_builder::builder::arg::Arg::short(local_a50,local_800,0x7a);
  clap_builder::builder::arg::Arg::long(local_800,local_a50,&DAT_00114730,4);
                    /* try { // try from 001b6ce4 to 001b6cfc has its CatchHandler @ 001b6d96 */
  clap_builder::builder::arg::Arg::help
            (local_a50,local_800,"separate output with NUL rather than newline",0x2c);
  clap_builder::builder::arg::Arg::action(local_270,local_a50,2);
  clap_builder::builder::command::Command::arg(local_800,local_538,local_270);
  clap_builder::builder::arg::Arg::new(local_538,"files",5);
  clap_builder::builder::arg::Arg::action(local_a50,local_538,1);
  clap_builder::builder::arg::Arg::value_hint(local_538,local_a50);
  clap_builder::builder::command::Command::arg(param_1,local_800,local_538);
  return param_1;
}