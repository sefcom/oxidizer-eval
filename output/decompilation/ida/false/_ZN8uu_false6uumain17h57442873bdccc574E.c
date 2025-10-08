__int64 __fastcall uu_false::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = uucore::disable_rust_signal_handlers(a1);
  core::result::Result<T,E>::expect(v2);
  uu_false::uumain::uumain(a1, a2);
  return uucore::mods::error::get_exit_code();
}