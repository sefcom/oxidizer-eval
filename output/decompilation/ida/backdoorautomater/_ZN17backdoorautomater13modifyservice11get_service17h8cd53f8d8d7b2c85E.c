__int64 __fastcall backdoorautomater::modifyservice::get_service(
        __int128 *a1,
        __int128 *a2,
        int a3,
        __int128 *a4,
        __int128 *a5)
{
  __int128 *v8; // r15
  __int128 *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r13
  __int128 v14; // [rsp+20h] [rbp-198h] BYREF
  __m256i v15; // [rsp+30h] [rbp-188h]
  int v16; // [rsp+5Ch] [rbp-15Ch]
  __int128 v17; // [rsp+60h] [rbp-158h] BYREF
  __int64 v18; // [rsp+70h] [rbp-148h]
  __int128 v19; // [rsp+78h] [rbp-140h] BYREF
  __int64 v20; // [rsp+88h] [rbp-130h]
  __int128 v21; // [rsp+90h] [rbp-128h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-118h]
  __int128 v23; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-F8h]
  __int128 v25; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-E0h]
  __int128 v27; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-C8h]
  __int128 v29; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+110h] [rbp-A8h]
  __int128 v31; // [rsp+120h] [rbp-98h] BYREF
  __int64 v32; // [rsp+130h] [rbp-88h]
  __int128 v33; // [rsp+140h] [rbp-78h] BYREF
  __int64 v34; // [rsp+150h] [rbp-68h]
  __int128 v35; // [rsp+158h] [rbp-60h] BYREF
  __m256i v36; // [rsp+168h] [rbp-50h]

  v8 = a2;
  v9 = a1;
  v10 = *((_QWORD *)a2 + 1) + *((_QWORD *)a2 + 2);
  *(_QWORD *)&v14 = *((_QWORD *)a2 + 1);
  *((_QWORD *)&v14 + 1) = v10;
  v11 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v14);
  if ( v11 != 47 && v11 != 1114112 )
    alloc::string::String::push(a2);
  <alloc::string::String as core::clone::Clone>::clone(&v23, a1);
  <alloc::string::String as core::clone::Clone>::clone(&v33, a2);
  v15.m256i_i64[3] = v24;
  *(_OWORD *)&v15.m256i_u64[1] = v23;
  v14 = v33;
  v15.m256i_i64[0] = v34;
  alloc::str::join_generic_copy(&v17, &v14, 2LL, 1LL, 0LL);
  v22 = v18;
  v21 = v17;
  core::ptr::drop_in_place<[alloc::string::String; 2]>(&v14);
  std::fs::File::open(&v14, &v21);
  if ( (_DWORD)v14 )
  {
    v12 = *((_QWORD *)&v14 + 1);
  }
  else
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v35, 0x2000LL, DWORD1(v14));
    v16 = a3;
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 8LL;
    v20 = 0LL;
    v15 = v36;
    v14 = v35;
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v17, &v14);
      if ( (_QWORD)v17 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v14);
        v28 = *((_QWORD *)a1 + 2);
        v27 = *a1;
        v30 = *((_QWORD *)a2 + 2);
        v29 = *a2;
        v32 = v20;
        v31 = v19;
        v18 = *((_QWORD *)a4 + 2);
        v17 = *a4;
        v15.m256i_i64[0] = *((_QWORD *)a5 + 2);
        v14 = *a5;
        backdoorautomater::modifyservice::modify_service(&v27, &v29, (unsigned __int8)v16, &v31, &v17, &v14);
        core::ptr::drop_in_place<alloc::string::String>(&v21);
        return 0LL;
      }
      v12 = *((_QWORD *)&v17 + 1);
      if ( (_QWORD)v17 == 0x8000000000000000LL )
        break;
      v25 = v17;
      v26 = v18;
      alloc::vec::Vec<T,A>::push(&v19, &v25);
    }
    core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v14);
    v9 = a1;
    v8 = a2;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  core::ptr::drop_in_place<alloc::string::String>(a5);
  core::ptr::drop_in_place<alloc::string::String>(a4);
  core::ptr::drop_in_place<alloc::string::String>(v8);
  core::ptr::drop_in_place<alloc::string::String>(v9);
  return v12;
}