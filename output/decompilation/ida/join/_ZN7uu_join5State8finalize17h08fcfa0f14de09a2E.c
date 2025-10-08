__int64 __fastcall uu_join::State::finalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 line; // rax
  __int128 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __m256i v11; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+30h] [rbp-A8h]
  __int64 v14; // [rsp+38h] [rbp-A0h]
  __m256i v15; // [rsp+40h] [rbp-98h] BYREF
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int128 v17; // [rsp+70h] [rbp-68h] BYREF
  __int64 v18; // [rsp+80h] [rbp-58h]
  __int128 v19; // [rsp+90h] [rbp-48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 16) )
    return 0LL;
  if ( *(_BYTE *)(a1 + 89) )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    if ( line )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(line);
  }
  uu_join::State::next_line(&v15, a1, a3);
  v17 = *(_OWORD *)&v15.m256i_u64[1];
  v18 = v15.m256i_i64[3];
  if ( v15.m256i_i64[0] == 0x8000000000000001LL )
  {
    v8 = &v17;
    return alloc::boxed::Box<T>::new(v8);
  }
  v13 = a2;
  v14 = a4;
  v12 = v16;
  *(_OWORD *)&v11.m256i_u64[1] = v17;
  v11.m256i_i64[3] = v18;
  v11.m256i_i64[0] = v15.m256i_i64[0];
  if ( v15.m256i_i64[0] == 0x8000000000000000LL )
  {
LABEL_13:
    core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v11);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 89) )
    {
      v9 = uu_join::State::print_line(a1, v13, &v11, v14);
      if ( v9 )
        break;
    }
    v16 = v12;
    v15 = v11;
    uu_join::State::reset(a1, &v15);
    uu_join::State::next_line(&v15, a1, a3);
    v19 = *(_OWORD *)&v15.m256i_u64[1];
    v20 = v15.m256i_i64[3];
    if ( v15.m256i_i64[0] == 0x8000000000000001LL )
    {
      v8 = &v19;
      return alloc::boxed::Box<T>::new(v8);
    }
    v12 = v16;
    v11.m256i_i64[3] = v20;
    *(_OWORD *)&v11.m256i_u64[1] = v19;
    v11.m256i_i64[0] = v15.m256i_i64[0];
    if ( v15.m256i_i64[0] == 0x8000000000000000LL )
      goto LABEL_13;
  }
  v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
  core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v11);
  return v10;
}