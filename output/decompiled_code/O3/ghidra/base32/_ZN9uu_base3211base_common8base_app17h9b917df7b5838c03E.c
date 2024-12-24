undefined8 __rustcall
uu_base32::base_common::base_app
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  char *local_838;
  code *local_830;
  undefined local_828 [24];
  undefined **local_810;
  undefined8 local_808;
  char **local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  ulong local_554;
  undefined4 local_54c;
  undefined local_548 [592];
  undefined local_2f8 [700];
  ulong local_3c;
  undefined4 local_34;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_2f8,uVar1);
  clap_builder::builder::command::Command::version(&local_810,local_2f8,&DAT_00118b83,6);
  clap_builder::builder::command::Command::about(local_2f8,&local_810,param_2,param_3);
                    /* try { // try from 001c16fd to 001c1710 has its CatchHandler @ 001c1a8c */
  uucore::format_usage(local_548,param_4,param_5);
  clap_builder::builder::command::Command::override_usage(&local_810,local_2f8,local_548);
  (*(code *)PTR_memcpy_0024eb48)(local_2f8,&local_810,700);
  local_3c = local_554 | 0x8000000080;
  local_34 = local_54c;
                    /* try { // try from 001c176c to 001c1808 has its CatchHandler @ 001c1ace */
  clap_builder::builder::arg::Arg::new(&local_810,"decode",6);
  clap_builder::builder::arg::Arg::short(local_548,&local_810,100);
  clap_builder::builder::arg::Arg::long(&local_810,local_548,"decode",6);
  clap_builder::builder::arg::Arg::help(local_548,&local_810,&DAT_00118b89,0xb);
  clap_builder::builder::arg::Arg::action(&local_810,local_548,2);
  clap_builder::builder::arg::Arg::overrides_with(local_548,&local_810,"decode",6);
  clap_builder::builder::command::Command::arg(&local_810,local_2f8,local_548);
                    /* try { // try from 001c1823 to 001c18ce has its CatchHandler @ 001c1abf */
  clap_builder::builder::arg::Arg::new(local_2f8,"ignore-garbage",0xe);
  clap_builder::builder::arg::Arg::short(local_548,local_2f8,0x69);
  clap_builder::builder::arg::Arg::long(local_2f8,local_548,"ignore-garbage",0xe);
  clap_builder::builder::arg::Arg::help(local_548,local_2f8,&DAT_00118b94,0x2f);
  clap_builder::builder::arg::Arg::action(local_2f8,local_548,2);
  clap_builder::builder::arg::Arg::overrides_with(local_548,local_2f8,"ignore-garbage",0xe);
  clap_builder::builder::command::Command::arg(local_2f8,&local_810,local_548);
                    /* try { // try from 001c18e9 to 001c1943 has its CatchHandler @ 001c1aad */
  clap_builder::builder::arg::Arg::new
            (&local_810,&anon_0042c4fb131193d352280bb9a37e85a0_25_llvm_14663537404383231718,4);
  clap_builder::builder::arg::Arg::short(local_548,&local_810,0x77);
  clap_builder::builder::arg::Arg::long
            (&local_810,local_548,
             &anon_0042c4fb131193d352280bb9a37e85a0_25_llvm_14663537404383231718,4);
  clap_builder::builder::arg::Arg::value_name(local_548,&local_810);
  local_838 = "L";
  local_830 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
  local_810 = &PTR_DAT_0024a3b8;
  local_808 = 2;
  local_7f0 = 0;
  local_800 = &local_838;
  local_7f8 = 1;
                    /* try { // try from 001c198d to 001c199b has its CatchHandler @ 001c1a7a */
  core::option::Option<T>::map_or_else(local_828,&local_810);
                    /* try { // try from 001c199c to 001c19b2 has its CatchHandler @ 001c1a78 */
  clap_builder::builder::arg::Arg::help(&local_810,local_548,local_828);
                    /* try { // try from 001c19b3 to 001c19d0 has its CatchHandler @ 001c1aad */
  clap_builder::builder::arg::Arg::overrides_with
            (local_548,&local_810,
             &anon_0042c4fb131193d352280bb9a37e85a0_25_llvm_14663537404383231718,4);
  clap_builder::builder::command::Command::arg(&local_810,local_2f8,local_548);
                    /* try { // try from 001c19eb to 001c1a48 has its CatchHandler @ 001c1a9e */
  clap_builder::builder::arg::Arg::new
            (local_2f8,&anon_0042c4fb131193d352280bb9a37e85a0_27_llvm_14663537404383231718,4);
  clap_builder::builder::arg::Arg::index(local_548,local_2f8);
  clap_builder::builder::arg::Arg::action(local_2f8,local_548,1);
  clap_builder::builder::arg::Arg::value_hint(local_548,local_2f8,3);
  clap_builder::builder::command::Command::arg(param_1,&local_810,local_548);
  return param_1;
}