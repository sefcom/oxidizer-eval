__int64 __fastcall just::function::read(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // [rsp+8h] [rbp-70h] BYREF
  __int64 v8; // [rsp+18h] [rbp-60h]
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  _QWORD v14[5]; // [rsp+50h] [rbp-28h] BYREF

  v14[0] = a3;
  v14[1] = a4;
  just::execution_context::ExecutionContext::working_directory(
    (__int64)v9,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    *(_QWORD *)(*(_QWORD *)a2 + 24LL));
  std::path::Path::join(&v12, v10, v11, a3, a4);
  std::fs::read_to_string(&v7, &v12);
  if ( __OFSUB__(0LL, (_QWORD)v7) )
  {
    just::function::read::{{closure}}(&v12, v14, *((_QWORD *)&v7 + 1));
    *(_QWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v9);
  return a1;
}