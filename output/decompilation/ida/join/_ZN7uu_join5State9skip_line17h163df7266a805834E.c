__int64 __fastcall uu_join::State::skip_line(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 line; // rax
  __int128 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 89) )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    if ( line )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
  }
  uu_join::State::reset_next_line((__int64)&v7, a1, a3);
  if ( (_QWORD)v7 == 0x8000000000000001LL )
    return 0LL;
  v10 = v8;
  v9 = v7;
  return alloc::boxed::Box<T>::new(&v9);
}
