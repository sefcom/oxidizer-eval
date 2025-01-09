__int64 __fastcall uu_join::State::finalize(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 line; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int128 v10; // [rsp+0h] [rbp-C8h]
  __int64 v11; // [rsp+10h] [rbp-B8h]
  __m256i v12; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+40h] [rbp-88h]
  __m256i v14; // [rsp+58h] [rbp-70h] BYREF
  __int128 v15; // [rsp+78h] [rbp-50h]
  __int64 v16; // [rsp+88h] [rbp-40h]
  unsigned __int64 v17; // [rsp+90h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 16) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 89) )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    if ( line )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
  }
  uu_join::State::next_line((__int64)&v12, a1, a3);
  v10 = *(_OWORD *)&v12.m256i_u64[1];
  v11 = v12.m256i_i64[3];
  if ( v12.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_6:
    v12.m256i_i64[2] = v11;
    *(_OWORD *)v12.m256i_i8 = v10;
    return alloc::boxed::Box<T>::new(&v12);
  }
  v16 = a4;
  v15 = v13;
  v14 = v12;
  if ( v12.m256i_i64[0] == 0x8000000000000000LL )
  {
LABEL_13:
    core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v14);
    return 0LL;
  }
  v17 = 0x8000000000000001LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 89) )
    {
      v8 = uu_join::State::print_line(a1, a2, &v14, v16);
      if ( v8 )
        break;
    }
    v13 = v15;
    v12 = v14;
    uu_join::State::reset(a1, (__int128 *)v12.m256i_i8);
    uu_join::State::next_line((__int64)&v12, a1, a3);
    v10 = *(_OWORD *)&v12.m256i_u64[1];
    v11 = v12.m256i_i64[3];
    if ( v12.m256i_i64[0] == v17 )
      goto LABEL_6;
    v15 = v13;
    v14 = v12;
    if ( v12.m256i_i64[0] == 0x8000000000000000LL )
      goto LABEL_13;
  }
  v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
  core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v14);
  return v9;
}
