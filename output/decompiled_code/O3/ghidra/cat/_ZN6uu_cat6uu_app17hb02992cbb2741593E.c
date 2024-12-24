undefined8 __rustcall uu_cat::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [700];
  ulong local_4c4;
  undefined4 local_4bc;
  undefined local_4b8 [584];
  uint local_270;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_780,uVar1);
  clap_builder::builder::command::Command::version(auStack_a48,local_780,"0.0.28",6);
                    /* try { // try from 001aea2f to 001aea48 has its CatchHandler @ 001af0ef */
  uucore::format_usage(local_4b8,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_780,auStack_a48,local_4b8);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_780,
             "Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input."
             ,0x70);
  (*(code *)PTR_memcpy_0021cba0)(local_780,auStack_a48,700);
  local_4c4 = local_78c | 0x8800000088;
  local_4bc = local_784;
                    /* try { // try from 001aeabc to 001aeacf has its CatchHandler @ 001af131 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"file",4);
  (*(code *)PTR_memcpy_0021cba0)(local_4b8,auStack_a48,0x248);
  local_270 = local_800 | 4;
  local_26c = local_7fc;
  clap_builder::builder::arg::Arg::action(auStack_a48,local_4b8,1);
                    /* try { // try from 001aeb1b to 001aeb2f has its CatchHandler @ 001af131 */
  clap_builder::builder::arg::Arg::value_hint(local_4b8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_4b8);
                    /* try { // try from 001aeb48 to 001aebba has its CatchHandler @ 001af1a5 */
  clap_builder::builder::arg::Arg::new
            (local_780,&anon_19e32f4e512e73e208342d63ba9f8c81_17_llvm_9462235691591888549,8);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x41);
  clap_builder::builder::arg::Arg::long
            (local_780,local_4b8,&anon_19e32f4e512e73e208342d63ba9f8c81_17_llvm_9462235691591888549,
             8);
  clap_builder::builder::arg::Arg::help(local_4b8,local_780,"equivalent to -vET",0x12);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001aebeb to 001aec49 has its CatchHandler @ 001af193 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"number-nonblank",0xf);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x62);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"number-nonblank",0xf);
  clap_builder::builder::arg::Arg::help
            (local_4b8,auStack_a48,"number nonempty output lines, overrides -n",0x2a);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001aec7a to 001aeccb has its CatchHandler @ 001af124 */
  clap_builder::builder::arg::Arg::new(local_780,"e",1);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x65);
  clap_builder::builder::arg::Arg::help(local_780,local_4b8,"equivalent to -vE",0x11);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_4b8);
                    /* try { // try from 001aecfc to 001aed5a has its CatchHandler @ 001af181 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"show-ends",9);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x45);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"show-ends",9);
  clap_builder::builder::arg::Arg::help(local_4b8,auStack_a48,"display $ at end of each line",0x1d);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001aed8b to 001aedfd has its CatchHandler @ 001af174 */
  clap_builder::builder::arg::Arg::new(local_780,"number",6);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x6e);
  clap_builder::builder::arg::Arg::long(local_780,local_4b8,"number",6);
  clap_builder::builder::arg::Arg::help(local_4b8,local_780,"number all output lines",0x17);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001aee2e to 001aee8c has its CatchHandler @ 001af162 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"squeeze-blank",0xd);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"squeeze-blank",0xd);
  clap_builder::builder::arg::Arg::help
            (local_4b8,auStack_a48,"suppress repeated empty output lines",0x24);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001aeebd to 001aef0e has its CatchHandler @ 001af114 */
  clap_builder::builder::arg::Arg::new(local_780,"t",1);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x74);
  clap_builder::builder::arg::Arg::help(local_780,local_4b8,"equivalent to -vT",0x11);
  clap_builder::builder::arg::Arg::action(local_4b8,local_780,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_4b8);
                    /* try { // try from 001aef3f to 001aef9d has its CatchHandler @ 001af150 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"show-tabs",9);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x54);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_4b8,"show-tabs",9);
  clap_builder::builder::arg::Arg::help(local_4b8,auStack_a48,"display TAB characters at ^I",0x1c);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_780,local_268);
                    /* try { // try from 001aefce to 001af040 has its CatchHandler @ 001af143 */
  clap_builder::builder::arg::Arg::new
            (local_780,anon_19e32f4e512e73e208342d63ba9f8c81_25_llvm_9462235691591888549,0x10);
  clap_builder::builder::arg::Arg::short(local_4b8,local_780,0x76);
  clap_builder::builder::arg::Arg::long
            (local_780,local_4b8,anon_19e32f4e512e73e208342d63ba9f8c81_25_llvm_9462235691591888549,
             0x10);
  clap_builder::builder::arg::Arg::help
            (local_4b8,local_780,"use ^ and M- notation, except for LF (\\n) and TAB (\\t)",0x36);
  clap_builder::builder::arg::Arg::action(local_268,local_4b8,2);
  clap_builder::builder::command::Command::arg(local_780,auStack_a48,local_268);
                    /* try { // try from 001af071 to 001af0b3 has its CatchHandler @ 001af0ff */
  clap_builder::builder::arg::Arg::new(auStack_a48,"ignored-u",9);
  clap_builder::builder::arg::Arg::short(local_4b8,auStack_a48,0x75);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_4b8,"(ignored)",9);
  clap_builder::builder::arg::Arg::action(local_4b8,auStack_a48,2);
  clap_builder::builder::command::Command::arg(param_1,local_780,local_4b8);
  return param_1;
}