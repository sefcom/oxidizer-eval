undefined8 __rustcall uu_ptx::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_0015ed0f,0x108);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0015ee17,6);
                    /* try { // try from 002b8f33 to 002b8f47 has its CatchHandler @ 002b9a6a */
  uucore::format_usage(auStack_a48,&DAT_0015ee1d,0x3c);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0042c340)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 002b8fa1 to 002b8fb9 has its CatchHandler @ 002b9a7f */
  clap_builder::builder::arg::Arg::new(local_7f8,"filemode",4);
  (*(code *)PTR_memcpy_0042c340)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
                    /* try { // try from 002b900a to 002b9019 has its CatchHandler @ 002b9a7f */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b9032 to 002b909a has its CatchHandler @ 002b9afd */
  clap_builder::builder::arg::Arg::new(local_530,"auto-reference",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x41);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"auto-reference",0xe);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015ee59,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b90cb to 002b9133 has its CatchHandler @ 002b9ae8 */
  clap_builder::builder::arg::Arg::new(local_7f8,"traditional",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x47);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"traditional",0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015ee82,0x1f);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b9164 to 002b91e8 has its CatchHandler @ 002b9b84 */
  clap_builder::builder::arg::Arg::new(local_530,"flag-truncation",0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x46);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"flag-truncation",0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015eea1,0x28);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015eec9,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b9206 to 002b928a has its CatchHandler @ 002b9b72 */
  clap_builder::builder::arg::Arg::new(local_7f8,"macro-name",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x4d);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"macro-name",10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015eecf,0x21);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015eec9,6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b92a8 to 002b9310 has its CatchHandler @ 002b9ad3 */
  clap_builder::builder::arg::Arg::new(local_530,"format=roff",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x4f);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"format=roff",0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015eef0,0x22);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b9341 to 002b93a9 has its CatchHandler @ 002b9abe */
  clap_builder::builder::arg::Arg::new(local_7f8,"right-side-refs",0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x52);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"right-side-refs",0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015ef12,0x2a);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b93da to 002b945e has its CatchHandler @ 002b9b60 */
  clap_builder::builder::arg::Arg::new(local_530,"sentence-regexp",0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x53);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"sentence-regexp",0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015ef3c,0x24);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015ef60,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b947c to 002b94e4 has its CatchHandler @ 002b9aa9 */
  clap_builder::builder::arg::Arg::new(local_7f8,"format=tex",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x54);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"format=tex",10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015ef66,0x21);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b9515 to 002b9599 has its CatchHandler @ 002b9b4e */
  clap_builder::builder::arg::Arg::new(local_530,"word-regexp",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x57);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"word-regexp",0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use REGEXP to match each keyword",0x20);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015ef60,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b95b7 to 002b9650 has its CatchHandler @ 002b9bba */
  clap_builder::builder::arg::Arg::new(local_7f8,"break-file",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"break-file",10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015ef87,0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0014f0c0,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b9669 to 002b96d1 has its CatchHandler @ 002b9a94 */
  clap_builder::builder::arg::Arg::new(local_530,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x66);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"ignore-case",0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015efa9,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b9702 to 002b9786 has its CatchHandler @ 002b9b3c */
  clap_builder::builder::arg::Arg::new
            (local_7f8,&anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x67);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,
             &anon_7bad5d3cfcfc6941f72c3bc4e85b9543_29_llvm_7942943287365551935,8);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015efd2,0x29);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015effb,6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b97a4 to 002b983d has its CatchHandler @ 002b9ba8 */
  clap_builder::builder::arg::Arg::new(local_530,"ignore-file",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x69);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"ignore-file",0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f001,0x1f);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_0014f0c0,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_530,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002b9856 to 002b98ef has its CatchHandler @ 002b9b96 */
  clap_builder::builder::arg::Arg::new(local_7f8,"only-file",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6f);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"only-file",9);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f020,0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0014f0c0,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b9908 to 002b998c has its CatchHandler @ 002b9b27 */
  clap_builder::builder::arg::Arg::new(local_530,"references",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x72);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"references",10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f042,0x27);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_0014f0c0,4);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002b99bd to 002b9a41 has its CatchHandler @ 002b9b12 */
  clap_builder::builder::arg::Arg::new(local_7f8,"width",5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"width",5);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f069,0x2b);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0015effb,6);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}