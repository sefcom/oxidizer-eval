__int64 __fastcall uu_more::Pager::seek_to_line(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = core::cmp::Ord::min(a2, a1[14]);
  v3 = a1[7];
  if ( v2 >= v3 )
    core::panicking::panic_bounds_check(v2, v3, &off_125470);
  v4 = 0LL;
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1[9] + 136LL))(a1[8], 0LL, *(_QWORD *)(a1[6] + 8 * v2)) & 1) != 0 )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
  return v4;
}