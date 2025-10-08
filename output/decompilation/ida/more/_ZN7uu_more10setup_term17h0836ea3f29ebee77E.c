__int64 *__fastcall uu_more::setup_term(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = std::io::stdio::stdout(a1);
  v2 = crossterm::terminal::enable_raw_mode();
  if ( v2 )
  {
    v3 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    v1 = v4;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v1;
  *a1 = v3;
  return a1;
}