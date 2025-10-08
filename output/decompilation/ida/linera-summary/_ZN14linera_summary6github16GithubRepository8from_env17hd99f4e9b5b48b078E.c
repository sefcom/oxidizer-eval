__int64 __fastcall linera_summary::github::GithubRepository::from_env(_QWORD *a1, int a2)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-E8h]
  __int128 v8; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B0h]
  __int16 v12; // [rsp+60h] [rbp-98h]
  _BYTE v13[8]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v14; // [rsp+78h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-70h]
  __int64 v16; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v17; // [rsp+98h] [rbp-60h]
  __int64 v18; // [rsp+A0h] [rbp-58h]
  __int64 v19; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-38h]
  __int128 v22; // [rsp+C8h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-20h]

  std::env::var(v13, aGithubReposito, 17LL);
  if ( a2 )
  {
    if ( (v13[0] & 1) != 0 )
    {
      linera_summary::github::GithubRepository::from_env::{{closure}}(&v6, v14, *((_QWORD *)&v14 + 1));
    }
    else
    {
      v7 = v15;
      v6 = v14;
    }
  }
  else
  {
    if ( (v13[0] & 1) != 0 )
    {
      a1[1] = linera_summary::github::GithubRepository::from_env::{{closure}}(v14, *((_QWORD *)&v14 + 1));
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
      return result;
    }
    v6 = v14;
    v7 = v15;
  }
  v2 = v7;
  <char as core::str::pattern::Pattern>::into_searcher(&v9, 47LL, *((_QWORD *)&v6 + 1), v7);
  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = v2;
  v12 = 1;
  core::iter::traits::iterator::Iterator::collect(&v16, &v8);
  v19 = v18;
  if ( v18 != 2 )
  {
    *(_QWORD *)&v8 = 0LL;
    core::panicking::assert_failed(0LL, &v19, &unk_133F38, &v8, &off_8F3428);
  }
  v3 = v17;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, *v17, v17[1]);
  v21 = v9;
  v20 = v8;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, v3[2], v3[3]);
  v11 = v23;
  v10 = v22;
  v9 = v21;
  v4 = v20;
  v8 = v20;
  a1[4] = *((_QWORD *)&v22 + 1);
  a1[5] = v11;
  a1[2] = v9;
  a1[3] = v10;
  *(_OWORD *)a1 = v4;
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v16, v3);
  return core::ptr::drop_in_place<alloc::string::String>(&v6);
}