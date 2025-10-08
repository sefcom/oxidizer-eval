__int64 __fastcall uu_more::paging_add_back_message(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !*(_WORD *)(a1 + 32) )
    return 0LL;
  v2 = crossterm::command::write_command_ansi(a2);
  if ( v2 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  v2 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
  if ( v2 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  v2 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, aBack1Page, 17LL);
  if ( v2 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
  else
    return 0LL;
}