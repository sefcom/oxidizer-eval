__int64 __fastcall uu_join::State::skip_line(__int64 a1, _QWORD *a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  _OWORD v7[3]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v8; // [rsp+30h] [rbp-68h]
  __int128 v9; // [rsp+40h] [rbp-58h]
  _OWORD v10[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 89) )
  {
    if ( !*(_QWORD *)(a1 + 16) )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_FAFF8);
    v5 = uu_join::State::print_line(*(_QWORD *)(a1 + 64), *(_DWORD *)(a1 + 88), a2, *(_QWORD *)(a1 + 8), a4);
    if ( v5 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
  }
  uu_join::State::next_line((__int64)v10, a1, a3);
  v8 = v10[1];
  if ( *(_QWORD *)&v10[0] == 0x8000000000000001LL )
  {
    v9 = v8;
    if ( *((_QWORD *)&v10[0] + 1) == 0x8000000000000001LL )
    {
      return 0LL;
    }
    else
    {
      *(_OWORD *)((char *)v7 + 8) = v9;
      *(_QWORD *)&v7[0] = *((_QWORD *)&v10[0] + 1);
      result = _rust_alloc(24LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      *(_QWORD *)(result + 16) = *(_QWORD *)&v7[1];
      *(_OWORD *)result = v7[0];
    }
  }
  else
  {
    v7[2] = v10[2];
    v7[0] = v10[0];
    v7[1] = v8;
    uu_join::State::reset(a1, v7);
    return 0LL;
  }
  return result;
}
