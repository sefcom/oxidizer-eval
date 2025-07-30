__int64 __fastcall backdoorautomater::modifyservice::get_service(
        __int128 *a1,
        __int128 *a2,
        int a3,
        __int128 *a4,
        __int128 *a5)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r13
  __int128 v12; // [rsp+20h] [rbp-198h] BYREF
  __m256i v13; // [rsp+30h] [rbp-188h]
  int v14; // [rsp+5Ch] [rbp-15Ch]
  __int128 v15; // [rsp+60h] [rbp-158h] BYREF
  __int64 v16; // [rsp+70h] [rbp-148h]
  __int128 v17; // [rsp+78h] [rbp-140h] BYREF
  __int64 v18; // [rsp+88h] [rbp-130h]
  __int128 v19; // [rsp+90h] [rbp-128h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-118h]
  __int128 v21; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-F8h]
  __int128 v23; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-E0h]
  __int128 v25; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-C8h]
  __int128 v27; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+110h] [rbp-A8h]
  __int128 v29; // [rsp+120h] [rbp-98h] BYREF
  __int64 v30; // [rsp+130h] [rbp-88h]
  __int128 v31; // [rsp+140h] [rbp-78h] BYREF
  __int64 v32; // [rsp+150h] [rbp-68h]
  __int128 v33; // [rsp+158h] [rbp-60h] BYREF
  __m256i v34; // [rsp+168h] [rbp-50h]

  v8 = *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2);
  *(_QWORD *)&v12 = *((_QWORD *)a2 + 1);
  *((_QWORD *)&v12 + 1) = v8;
  v9 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v12);
  if ( v9 != 47 && v9 != 1114112 )
    alloc::string::String::push(a2);
  <alloc::string::String as core::clone::Clone>::clone(&v21, a1);
  <alloc::string::String as core::clone::Clone>::clone(&v31, a2);
  v13.m256i_i64[3] = v22;
  *(_OWORD *)&v13.m256i_u64[1] = v21;
  v12 = v31;
  v13.m256i_i64[0] = v32;
  alloc::str::join_generic_copy(&v15, &v12, 2LL, 1LL, 0LL);
  v20 = v16;
  v19 = v15;
  core::ptr::drop_in_place<[alloc::string::String; 2]>(&v12);
  std::fs::File::open(&v12, &v19);
  if ( (_DWORD)v12 )
  {
    v10 = *((_QWORD *)&v12 + 1);
  }
  else
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v33, 0x2000LL, DWORD1(v12));
    v14 = a3;
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = 8LL;
    v18 = 0LL;
    v13 = v34;
    v12 = v33;
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v15, &v12);
      if ( (_QWORD)v15 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v12);
        v26 = *((_QWORD *)a1 + 2);
        v25 = *a1;
        v28 = *((_QWORD *)a2 + 2);
        v27 = *a2;
        v30 = v18;
        v29 = v17;
        v16 = *((_QWORD *)a4 + 2);
        v15 = *a4;
        v13.m256i_i64[0] = *((_QWORD *)a5 + 2);
        v12 = *a5;
        backdoorautomater::modifyservice::modify_service(&v25, &v27, v14, (__int64)&v29, &v15, &v12);
        core::ptr::drop_in_place<alloc::string::String>(&v19);
        return 0LL;
      }
      v10 = *((_QWORD *)&v15 + 1);
      if ( (_QWORD)v15 == 0x8000000000000000LL )
        break;
      v23 = v15;
      v24 = v16;
      alloc::vec::Vec<T,A>::push(&v17, &v23);
    }
    core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v12);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v17);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  core::ptr::drop_in_place<alloc::string::String>(a5);
  core::ptr::drop_in_place<alloc::string::String>(a4);
  core::ptr::drop_in_place<alloc::string::String>(a2);
  core::ptr::drop_in_place<alloc::string::String>(a1);
  return v10;
}