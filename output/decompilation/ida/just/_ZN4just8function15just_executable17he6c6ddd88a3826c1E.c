__int64 __fastcall just::function::just_executable(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]

  std::env::current_exe(v6);
  if ( __OFSUB__(0LL, *(_QWORD *)v6) )
  {
    just::function::just_executable::{{closure}}(&v7, *(_QWORD *)&v6[8]);
    v10 = v8;
    v1 = v7;
    v9 = v7;
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v1;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v2 = *(_QWORD *)&v6[16];
    v7 = *(_OWORD *)v6;
    v8 = *(_QWORD *)&v6[16];
    v3 = *(_QWORD *)&v6[8];
    core::str::converts::from_utf8(v6, *(_QWORD *)&v6[8], *(_QWORD *)&v6[16]);
    if ( *(_DWORD *)v6 == 1 )
    {
      just::which::which::{{closure}}(v6, v3, v2);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v6[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v6;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, *(_QWORD *)&v6[8]);
      v4 = *(_QWORD *)v6;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6[8];
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)a1 = 0LL;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v7);
  }
  return a1;
}