void __rustcall uu_more::reset_term(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = crossterm::terminal::disable_raw_mode();
  core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00262948);
  uVar1 = crossterm::command::write_command_ansi(param_1,4);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00262960);
  local_38 = &PTR_DAT_00262938;
  local_30 = 1;
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  std::io::stdio::_print(&local_38);
  uVar1 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(param_1);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00262978);
  return;
}