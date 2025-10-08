unsigned __int64 __fastcall tabby_index_cli::commands::bench::read_query_file(_QWORD *a1)
{
  unsigned __int64 result; // rax
  _OWORD *v2; // rcx
  _QWORD *v3; // rax
  unsigned int v4; // [rsp+Ch] [rbp-ECh] BYREF
  _QWORD *v5; // [rsp+10h] [rbp-E8h]
  __int128 v6; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  _OWORD v8[3]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+68h] [rbp-90h] BYREF
  __int64 v10; // [rsp+70h] [rbp-88h]
  __int64 v11; // [rsp+78h] [rbp-80h]
  _QWORD v12[3]; // [rsp+80h] [rbp-78h] BYREF
  _OWORD v13[6]; // [rsp+98h] [rbp-60h] BYREF

  std::fs::File::open(v8);
  if ( LODWORD(v8[0]) == 1 )
  {
    a1[1] = *((_QWORD *)&v8[0] + 1);
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v5 = a1;
    v4 = DWORD1(v8[0]);
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v13, &v4);
    *(_QWORD *)&v6 = 0LL;
    *((_QWORD *)&v6 + 1) = 8LL;
    v7 = 0LL;
    v8[2] = v13[2];
    v8[1] = v13[1];
    v8[0] = v13[0];
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v9, v8);
      if ( v9 == 0x8000000000000001LL )
      {
        core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<&std::fs::File>>>(
          *(_QWORD *)&v8[0],
          *((_QWORD *)&v8[0] + 1));
        v2 = v5;
        v5[2] = v7;
        *v2 = v6;
        return core::ptr::drop_in_place<std::fs::File>(v4);
      }
      if ( v9 == 0x8000000000000000LL )
        break;
      v12[0] = v9;
      v12[1] = v10;
      v12[2] = v11;
      alloc::vec::Vec<T,A>::push(&v6, v12);
    }
    v3 = v5;
    v5[1] = v10;
    *v3 = 0x8000000000000000LL;
    core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<&std::fs::File>>>(
      *(_QWORD *)&v8[0],
      *((_QWORD *)&v8[0] + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
    return core::ptr::drop_in_place<std::fs::File>(v4);
  }
  return result;
}