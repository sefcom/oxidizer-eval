undefined8 __rustcall uu_more::setup_term(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::io::stdio::stdout();
  uVar2 = crossterm::terminal::enable_raw_mode();
  core::result::Result<T,E>::unwrap(uVar2,&PTR_DAT_00262920);
  return uVar1;
}