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
  
  (*(code *)PTR_uu_app_002091a8)(local_2f0);
  clap_builder::builder::command::Command::get_matches_from(local_368,local_2f0,param_1,param_2);
                    /* try { // try from 0015d6bc to 0015d707 has its CatchHandler @ 0015d7e6 */
  uVar2 = (*(code *)PTR_get_flag_002091b0)(local_368,"no_newline",10);
  uVar4 = (ulong)uVar2;
  uVar1 = (*(code *)PTR_get_flag_002091b0)(local_368,"enable_backslash_escape",0x17);
  local_2f0[0] = (*(code *)PTR_stdout_002091b8)();
  local_370 = (*(code *)PTR_lock_002091c0)(local_2f0);
                    /* try { // try from 0015d70d to 0015d78e has its CatchHandler @ 0015d7d7 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_2f0,local_368,"STRING",6);
  clap_builder::parser::error::MatchesError::unwrap(local_330,local_2f0);
  if (local_330[0] == 0) {
    if (((char)uVar2 == '\0') &&
       (lVar3 = (*(code *)PTR_write_all_002091d0)(&local_370,"\n",1), lVar3 != 0)) {
      auVar5 = (*(code *)PTR_from_002091d8)(lVar3);
      goto LAB_0015d78f;
    }
  }
  else {
    uVar4 = (ulong)uVar2 ^ 1;
    auVar5 = (*(code *)PTR_execute_002091c8)(&local_370,uVar4 & 0xff,uVar1,local_330);
    if (auVar5._0_8_ != 0) {
LAB_0015d78f:
                    /* try { // try from 0015d79a to 0015d79e has its CatchHandler @ 0015d7e6 */
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_370);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_368);
      return auVar5;
    }
  }
                    /* try { // try from 0015d7b3 to 0015d7b7 has its CatchHandler @ 0015d7e6 */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_370);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_368);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5 << 0x40;
}