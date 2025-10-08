__int64 __fastcall just::function::canonicalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // xmm0
  __int128 *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h]
  _BYTE v16[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  __int128 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+60h] [rbp-48h]

  just::execution_context::ExecutionContext::working_directory(
    (__int64)v16,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    *(_QWORD *)(*(_QWORD *)a2 + 24LL));
  std::path::Path::join(v13, v17, v18, a3, a4);
  std::fs::canonicalize(&v14, v13);
  if ( __OFSUB__(0LL, (_QWORD)v14) )
  {
    just::function::canonicalize::{{closure}}(v13, *((_QWORD *)&v14 + 1));
    v7 = *(_OWORD *)v13;
    v19 = *(_OWORD *)v13;
    v20 = *(_QWORD *)&v13[16];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v13[16];
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
    v8 = (__int128 *)v16;
  }
  else
  {
    v19 = v14;
    v20 = v15;
    core::ptr::drop_in_place<std::path::PathBuf>(v16);
    v9 = *((_QWORD *)&v14 + 1);
    v10 = v15;
    core::str::converts::from_utf8(v13, *((_QWORD *)&v14 + 1), v15);
    if ( *(_DWORD *)v13 == 1 )
    {
      just::function::canonicalize::{{closure}}(v13, v9, v10);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v13[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v13;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, *(_QWORD *)&v13[8]);
      v11 = *(_QWORD *)v13;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v13[8];
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = 0LL;
    }
    v8 = &v14;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v8);
  return a1;
}