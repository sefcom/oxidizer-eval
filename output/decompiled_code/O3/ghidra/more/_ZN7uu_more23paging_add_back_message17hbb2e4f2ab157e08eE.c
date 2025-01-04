undefined8 __rustcall uu_more::paging_add_back_message(short param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = crossterm::command::write_command_ansi(param_2,1);
  if (lVar1 == 0) {
    lVar1 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(param_2);
    if (lVar1 == 0) {
      lVar1 = _<std::io::stdio::Stdout_as_std::io::Write>::write_all
                        (param_2,"\n\r...back 1 page\n",0x11);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  uVar2 = uucore::mods::error::
          _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
          ::from(lVar1);
  return uVar2;
}