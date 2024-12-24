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
  clap_builder::builder::command::Command::about(local_7f8,local_530,&DAT_0015ee1f,0x108);
  clap_builder::builder::command::Command::version(local_530,local_7f8,&DAT_0015ef27,6);
                    /* try { // try from 002b8a23 to 002b8a37 has its CatchHandler @ 002b955a */
  uucore::format_usage(auStack_a48,&DAT_0015ef2d,0x3c);
  clap_builder::builder::command::Command::override_usage(local_7f8,local_530,auStack_a48);
  (*(code *)PTR_memcpy_0042cd18)(local_530,local_7f8,700);
  local_274 = local_53c | 0x8000000080;
  local_26c = local_534;
                    /* try { // try from 002b8a91 to 002b8aa9 has its CatchHandler @ 002b956f */
  clap_builder::builder::arg::Arg::new(local_7f8,"filemode",4);
  (*(code *)PTR_memcpy_0042cd18)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
  clap_builder::builder::arg::Arg::action(local_7f8,auStack_a48,1);
                    /* try { // try from 002b8afa to 002b8b09 has its CatchHandler @ 002b956f */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b8b22 to 002b8b8a has its CatchHandler @ 002b95ed */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_9_llvm_26549548904132577,0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x41);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_9_llvm_26549548904132577,
             0xe);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015ef69,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b8bbb to 002b8c23 has its CatchHandler @ 002b95d8 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_10_llvm_26549548904132577,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x47);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_10_llvm_26549548904132577,
             0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015ef92,0x1f);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b8c54 to 002b8cd8 has its CatchHandler @ 002b9674 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x46);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_11_llvm_26549548904132577,
             0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015efb1,0x28);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015efd9,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b8cf6 to 002b8d7a has its CatchHandler @ 002b9662 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x4d);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_12_llvm_26549548904132577,
             10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015efdf,0x21);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015efd9,6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b8d98 to 002b8e00 has its CatchHandler @ 002b95c3 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_13_llvm_26549548904132577,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x4f);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_13_llvm_26549548904132577,
             0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f000,0x22);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b8e31 to 002b8e99 has its CatchHandler @ 002b95ae */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_14_llvm_26549548904132577,0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x52);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_14_llvm_26549548904132577,
             0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f022,0x2a);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b8eca to 002b8f4e has its CatchHandler @ 002b9650 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_15_llvm_26549548904132577,0xf);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x53);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_15_llvm_26549548904132577,
             0xf);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f04c,0x24);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015f070,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b8f6c to 002b8fd4 has its CatchHandler @ 002b9599 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_16_llvm_26549548904132577,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x54);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_16_llvm_26549548904132577,
             10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f076,0x21);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b9005 to 002b9089 has its CatchHandler @ 002b963e */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x57);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_17_llvm_26549548904132577,
             0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use REGEXP to match each keyword",0x20);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015f070,6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b90a7 to 002b9140 has its CatchHandler @ 002b96aa */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_18_llvm_26549548904132577,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_18_llvm_26549548904132577,
             10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f097,0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0014f240,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b9159 to 002b91c1 has its CatchHandler @ 002b9584 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_19_llvm_26549548904132577,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x66);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_19_llvm_26549548904132577,
             0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f0b9,0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002b91f2 to 002b9276 has its CatchHandler @ 002b962c */
  clap_builder::builder::arg::Arg::new
            (local_7f8,&anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,8);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x67);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,&anon_2a006399170f7188a90d81ab0d3d1c41_20_llvm_26549548904132577,
             8);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f0e2,0x29);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_0015f10b,6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002b9294 to 002b932d has its CatchHandler @ 002b9698 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x69);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_21_llvm_26549548904132577,
             0xb);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f111,0x1f);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_0014f240,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_530,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002b9346 to 002b93df has its CatchHandler @ 002b9686 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6f);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_22_llvm_26549548904132577,9
            );
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f130,0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0014f240,4);
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_7f8,3);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002b93f8 to 002b947c has its CatchHandler @ 002b9617 */
  clap_builder::builder::arg::Arg::new
            (local_530,anon_2a006399170f7188a90d81ab0d3d1c41_23_llvm_26549548904132577,10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x72);
  clap_builder::builder::arg::Arg::long
            (local_530,auStack_a48,anon_2a006399170f7188a90d81ab0d3d1c41_23_llvm_26549548904132577,
             10);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_530,&DAT_0015f152,0x27);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,&DAT_0014f240,4);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002b94ad to 002b9531 has its CatchHandler @ 002b9602 */
  clap_builder::builder::arg::Arg::new
            (local_7f8,&anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long
            (local_7f8,auStack_a48,&anon_2a006399170f7188a90d81ab0d3d1c41_24_llvm_26549548904132577,
             5);
  clap_builder::builder::arg::Arg::help(auStack_a48,local_7f8,&DAT_0015f179,0x2b);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,&DAT_0015f10b,6);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}