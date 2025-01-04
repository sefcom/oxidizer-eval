__int64 __fastcall uu_join::State::finalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 line; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int128 v9; // [rsp+0h] [rbp-C8h]
  __int64 v10; // [rsp+10h] [rbp-B8h]
  __m256i v11; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+40h] [rbp-88h]
  __m256i v13; // [rsp+58h] [rbp-70h] BYREF
  __int128 v14; // [rsp+78h] [rbp-50h]
  __int64 v15; // [rsp+88h] [rbp-40h]
  unsigned __int64 v16; // [rsp+90h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 16) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 89) )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    if ( line )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
  }
  uu_join::State::next_line(&v11);
  v9 = *(_OWORD *)&v11.m256i_u64[1];
  v10 = v11.m256i_i64[3];
  if ( v11.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_6:
    v11.m256i_i64[2] = v10;
    *(_OWORD *)v11.m256i_i8 = v9;
    return alloc::boxed::Box<T>::new(&v11);
  }
  v15 = a4;
  v14 = v12;
  v13 = v11;
  if ( v11.m256i_i64[0] == 0x8000000000000000LL )
  {
LABEL_13:
    core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v13);
    return 0LL;
  }
  v16 = 0x8000000000000001LL;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 89) )
    {
      v7 = uu_join::State::print_line(a1, a2, (__int64)&v13, v15);
      if ( v7 )
        break;
    }
    v12 = v14;
    v11 = v13;
    uu_join::State::reset(a1, &v11);
    uu_join::State::next_line(&v11);
    v9 = *(_OWORD *)&v11.m256i_u64[1];
    v10 = v11.m256i_i64[3];
    if ( v11.m256i_i64[0] == v16 )
      goto LABEL_6;
    v14 = v12;
    v13 = v11;
    if ( v11.m256i_i64[0] == 0x8000000000000000LL )
      goto LABEL_13;
  }
  v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
  core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v13);
  return v8;
}
