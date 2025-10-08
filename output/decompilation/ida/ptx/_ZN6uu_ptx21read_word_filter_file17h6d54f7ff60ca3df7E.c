__int64 __fastcall uu_ptx::read_word_filter_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // bl
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rdx
  __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // [rsp+10h] [rbp-118h] BYREF
  __int128 v15; // [rsp+20h] [rbp-108h]
  __int128 v16; // [rsp+30h] [rbp-F8h]
  __int64 v17; // [rsp+40h] [rbp-E8h]
  _BYTE v18[8]; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-D8h]
  __int64 v20; // [rsp+58h] [rbp-D0h]
  __int128 v21; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+70h] [rbp-B8h]
  __int128 v23; // [rsp+80h] [rbp-A8h]
  __int64 v24; // [rsp+90h] [rbp-98h] BYREF
  __int64 v25; // [rsp+98h] [rbp-90h]
  __int64 v26; // [rsp+A0h] [rbp-88h]
  _QWORD v27[3]; // [rsp+A8h] [rbp-80h] BYREF
  _OWORD v28[3]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14);
  v6 = clap_builder::parser::error::MatchesError::unwrap(a3, a4, &v14);
  if ( !v6 )
    core::option::expect_failed(aParsingOptions, 23LL, &off_251668);
  <alloc::string::String as core::clone::Clone>::clone(v18, v6);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v20, asc_55AD1, 1LL) )
  {
    v7 = std::io::stdio::stdin();
    v8 = 1;
    v9 = alloc::boxed::Box<T>::new(v7);
    v10 = (__int64 (__fastcall **)())&unk_2516D8;
  }
  else
  {
    std::fs::File::open(&v14, v18);
    if ( (_DWORD)v14 == 1 )
    {
      result = *((_QWORD *)&v14 + 1);
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v14 + 1);
      *(_QWORD *)a1 = 0LL;
      return result;
    }
    v8 = 0;
    v9 = alloc::boxed::Box<T>::new(DWORD1(v14));
    v10 = &off_251680;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v28, v9, v10);
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v14);
  v23 = v16;
  v22 = v15;
  v21 = v14;
  v17 = v29;
  v16 = v28[2];
  v15 = v28[1];
  v14 = v28[0];
  while ( 1 )
  {
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v24, &v14);
    if ( v24 == 0x8000000000000001LL )
    {
      core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v14);
      v12 = v21;
      v13 = v22;
      result = a1;
      *(_OWORD *)(a1 + 32) = v23;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v12;
      if ( !v8 )
        return result;
      return core::ptr::drop_in_place<alloc::string::String>(v18);
    }
    if ( v24 == 0x8000000000000000LL )
      break;
    v27[0] = v24;
    v27[1] = v25;
    v27[2] = v26;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v21, v27);
  }
  *(_QWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>>(&v14);
  result = core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v21);
  if ( v8 )
    return core::ptr::drop_in_place<alloc::string::String>(v18);
  return result;
}