__int64 __fastcall just::function::path_exists(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  const char *v7; // rsi
  _QWORD v9[2]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v10[8]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+20h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D0h]
  __int128 dest; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-B8h]

  just::execution_context::ExecutionContext::working_directory(
    (__int64)v10,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    *(_QWORD *)(*(_QWORD *)a2 + 24LL));
  std::path::Path::join(v9, v11, v12, a3, a4);
  v6 = v9[1];
  std::fs::metadata(&dest);
  LODWORD(a4) = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v6);
  v7 = aTrue;
  if ( (_DWORD)a4 == 2 )
    v7 = aFalse;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v7);
  *(_QWORD *)(a1 + 24) = v14;
  *(_OWORD *)(a1 + 8) = dest;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<std::path::PathBuf>(v9);
  core::ptr::drop_in_place<std::path::PathBuf>(v10);
  return a1;
}