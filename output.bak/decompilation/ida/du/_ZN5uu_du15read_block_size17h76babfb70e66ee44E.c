__int64 *__fastcall uu_du::read_block_size(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v4)(); // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  _OWORD v10[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v11; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+30h] [rbp-98h]
  const char *v13; // [rsp+40h] [rbp-88h]
  __int64 v14; // [rsp+48h] [rbp-80h]
  __int64 v15; // [rsp+50h] [rbp-78h]
  __int64 v16; // [rsp+58h] [rbp-70h]
  __int128 v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+70h] [rbp-58h]
  __int64 v19; // [rsp+78h] [rbp-50h] BYREF
  __int128 v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+90h] [rbp-38h]

  if ( a2 )
  {
    uucore::parser::parse_size::parse_size_u64(v10, a2);
    if ( LODWORD(v10[0]) == 3 )
    {
      v4 = (__int64 (__fastcall **)())*((_QWORD *)&v10[0] + 1);
      v5 = 0LL;
    }
    else
    {
      v12 = v10[1];
      v11 = v10[0];
      v5 = uu_du::read_block_size::{{closure}}(a2, a3, &v11);
      v4 = &off_184310;
    }
    a1[1] = (__int64)v4;
    *a1 = v5;
    return a1;
  }
  *(_QWORD *)&v11 = aDuBlockSize;
  *((_QWORD *)&v11 + 1) = 13LL;
  *(_QWORD *)&v12 = aBlockSize_0;
  *((_QWORD *)&v12 + 1) = 10LL;
  v13 = aBlocksize;
  v14 = 9LL;
  v15 = 0LL;
  v16 = 3LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v11);
      if ( !v6 )
      {
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&v11);
        std::env::var(&v11, aPosixlyCorrect, 15LL);
        v8 = v11;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v11);
        if ( v8 )
          a1[1] = 1024LL;
        else
          a1[1] = 512LL;
        *a1 = 0LL;
        return a1;
      }
      std::env::var(&v19, v6, v7);
      if ( !v19 )
        break;
LABEL_5:
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v19);
    }
    v18 = v21;
    v17 = v20;
    uucore::parser::parse_size::parse_size_u64(v10, *((_QWORD *)&v20 + 1));
    if ( LODWORD(v10[0]) == 3 )
      break;
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(v10);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    if ( v19 )
      goto LABEL_5;
  }
  a1[1] = *((_QWORD *)&v10[0] + 1);
  *a1 = 0LL;
  core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(v10);
  core::ptr::drop_in_place<alloc::string::String>(&v17);
  if ( v19 )
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v19);
  core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>(&v11);
  return a1;
}
