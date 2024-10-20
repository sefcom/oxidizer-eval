__int64 __fastcall uu_join::State::finalize(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 v10; // [rsp+0h] [rbp-C8h]
  __int128 v11; // [rsp+0h] [rbp-C8h]
  __int64 v12; // [rsp+10h] [rbp-B8h]
  __m256i v13; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+40h] [rbp-88h]
  __m256i v15; // [rsp+58h] [rbp-70h] BYREF
  __int128 v16; // [rsp+78h] [rbp-50h]
  __int64 v17; // [rsp+88h] [rbp-40h]
  unsigned __int64 v18; // [rsp+90h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 16) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 89) )
  {
    v5 = uu_join::State::print_line(*(_QWORD *)(a1 + 64), *(_DWORD *)(a1 + 88), a2, *(_QWORD *)(a1 + 8), a4);
    if ( v5 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
  }
  uu_join::State::next_line(&v13);
  v10 = *(_OWORD *)&v13.m256i_u64[1];
  v12 = v13.m256i_i64[3];
  if ( v13.m256i_i64[0] == 0x8000000000000001LL )
  {
    v13.m256i_i64[2] = v13.m256i_i64[3];
    *(_OWORD *)v13.m256i_i8 = v10;
    result = _rust_alloc(24LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)(result + 16) = v12;
    v7 = v10;
LABEL_8:
    *(_OWORD *)result = v7;
    return result;
  }
  v17 = a4;
  v16 = v14;
  v15 = v13;
  if ( v13.m256i_i64[0] == 0x8000000000000000LL )
    return 0LL;
  v18 = 0x8000000000000001LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 89) )
    {
      v8 = uu_join::State::print_line(*(_QWORD *)(a1 + 64), *(_DWORD *)(a1 + 88), a2, (__int64)&v15, v17);
      if ( v8 )
        break;
    }
    v14 = v16;
    v13 = v15;
    uu_join::State::reset(a1, &v13);
    uu_join::State::next_line(&v13);
    v11 = *(_OWORD *)&v13.m256i_u64[1];
    if ( v13.m256i_i64[0] == v18 )
    {
      v13.m256i_i64[2] = v13.m256i_i64[3];
      *(_OWORD *)v13.m256i_i8 = v11;
      result = _rust_alloc(24LL, 8LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      *(_QWORD *)(result + 16) = v13.m256i_i64[2];
      v7 = *(_OWORD *)v13.m256i_i8;
      goto LABEL_8;
    }
    v16 = v14;
    v15 = v13;
    if ( v13.m256i_i64[0] == 0x8000000000000000LL )
      return 0LL;
  }
  result = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
  if ( v15.m256i_i64[0] != 0x8000000000000000LL )
  {
    v9 = result;
    core::ptr::drop_in_place<uu_join::Line>(&v15);
    return v9;
  }
  return result;
}
