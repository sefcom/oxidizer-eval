__int64 __fastcall uu_ptx::read_word_filter_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // [rsp+10h] [rbp-108h] BYREF
  __int128 v11; // [rsp+20h] [rbp-F8h]
  __int128 v12; // [rsp+30h] [rbp-E8h]
  __int128 v13; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+50h] [rbp-C8h]
  __int128 v15; // [rsp+60h] [rbp-B8h]
  __int64 v16; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+78h] [rbp-A0h]
  __int64 v18; // [rsp+80h] [rbp-98h]
  _QWORD v19[3]; // [rsp+88h] [rbp-90h] BYREF
  _OWORD v20[3]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v21[72]; // [rsp+D0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10);
  v6 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, &v10);
  if ( !v6 )
    core::option::expect_failed(aParsingOptions, 23LL, &off_2EDB68);
  <alloc::string::String as core::clone::Clone>::clone(v21, v6);
  std::fs::File::open(&v10, v21);
  if ( (_DWORD)v10 )
  {
    result = *((_QWORD *)&v10 + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10 + 1);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v20, 0x2000LL, DWORD1(v10));
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v10);
    v15 = v12;
    v14 = v11;
    v13 = v10;
    v12 = v20[2];
    v11 = v20[1];
    v10 = v20[0];
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v16, &v10);
      if ( v16 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v10);
        v8 = v13;
        v9 = v14;
        result = a1;
        *(_OWORD *)(a1 + 32) = v15;
        *(_OWORD *)(a1 + 16) = v9;
        *(_OWORD *)a1 = v8;
        return result;
      }
      if ( v16 == 0x8000000000000000LL )
        break;
      v19[0] = v16;
      v19[1] = v17;
      v19[2] = v18;
      hashbrown::map::HashMap<K,V,S,A>::insert(&v13, v19);
    }
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v10);
    return core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v13);
  }
  return result;
}
