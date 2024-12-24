undefined  [16] __rustcall uu_echo::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_370;
  undefined local_368 [56];
  long local_330 [8];
  undefined8 local_2f0 [89];
  
  (*(code *)PTR_uu_app_0020a528)(local_2f0);
  clap_builder::builder::command::Command::get_matches_from(local_368,local_2f0,param_1,param_2);
                    /* try { // try from 0015db9c to 0015dbe7 has its CatchHandler @ 0015dcd2 */
  uVar2 = (*(code *)PTR_get_flag_0020a530)(local_368,"no_newline",10);
  uVar4 = (ulong)uVar2;
  uVar1 = (*(code *)PTR_get_flag_0020a530)(local_368,"enable_backslash_escape",0x17);
  local_2f0[0] = (*(code *)PTR_stdout_0020a538)();
  local_370 = (*(code *)PTR_lock_0020a540)(local_2f0);
                    /* try { // try from 0015dbed to 0015dc7a has its CatchHandler @ 0015dcc3 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_2f0,local_368,"STRING",6);
  clap_builder::parser::error::MatchesError::unwrap(local_330,"STRING",6,local_2f0);
  if (local_330[0] == 0) {
    if (((char)uVar2 == '\0') &&
       (lVar3 = (*(code *)PTR_write_all_0020a550)(&local_370,"\n",1), lVar3 != 0)) {
      auVar5 = (*(code *)PTR_from_0020a558)(lVar3);
      goto LAB_0015dc7b;
    }
  }
  else {
    uVar4 = (ulong)uVar2 ^ 1;
    auVar5 = (*(code *)PTR_execute_0020a548)(&local_370,uVar4 & 0xff,uVar1,local_330);
    if (auVar5._0_8_ != 0) {
LAB_0015dc7b:
                    /* try { // try from 0015dc86 to 0015dc8a has its CatchHandler @ 0015dcd2 */
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_370);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_368);
      return auVar5;
    }
  }
                    /* try { // try from 0015dc9f to 0015dca3 has its CatchHandler @ 0015dcd2 */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_370);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_368);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5 << 0x40;
}