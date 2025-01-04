undefined  [16] __rustcall uu_hostname::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  
  (*(code *)PTR_uu_app_0021bac8)(&local_2e0);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_318,&local_2e0,param_1,param_2);
  if (local_318 == -0x8000000000000000) {
    auVar4 = (*(code *)PTR_from_0021bad0)();
    return auVar4;
  }
  local_2b0 = local_2e8;
  local_2c0 = local_2f8;
  uStack_2bc = uStack_2f4;
  uStack_2b8 = uStack_2f0;
  uStack_2b4 = uStack_2ec;
  local_2d0 = local_308;
  uStack_2cc = uStack_304;
  uStack_2c8 = uStack_300;
  uStack_2c4 = uStack_2fc;
  local_2e0 = local_318;
  local_2d8 = local_310;
  uVar3 = *(undefined8 *)PTR_OPT_HOST_0021bad8;
  uVar1 = *(undefined8 *)(PTR_OPT_HOST_0021bad8 + 8);
                    /* try { // try from 00160da1 to 00160de3 has its CatchHandler @ 00160e07 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_318,&local_2e0,uVar3,uVar1);
  lVar2 = clap_builder::parser::error::MatchesError::unwrap(uVar3,uVar1,&local_318);
  if (lVar2 == 0) {
    auVar4 = (*(code *)PTR_display_hostname_0021bae0)(&local_2e0);
  }
  else {
    uVar3 = hostname::set(lVar2);
    auVar4 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
             ::map_err_context(uVar3);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_2e0);
  return auVar4;
}