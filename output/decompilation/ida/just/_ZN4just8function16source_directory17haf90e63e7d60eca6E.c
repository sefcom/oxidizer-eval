__int64 __fastcall just::function::source_directory(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v11[8]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = std::path::Path::parent(*(_QWORD *)(*(_QWORD *)(*a2 + 24LL) + 8LL), *(_QWORD *)(*(_QWORD *)(*a2 + 24LL) + 16LL));
  if ( !v2 )
    core::option::unwrap_failed(&off_430060);
  v4 = a2[1];
  v5 = a2[2];
  std::path::Path::join(v11, v2, v3, v4, v5);
  v6 = std::path::Path::parent(v12, v13);
  if ( !v6 )
    core::option::unwrap_failed(&off_430078);
  core::str::converts::from_utf8(v10, v6, v7);
  if ( *(_DWORD *)v10 == 1 )
  {
    just::function::source_file::{{closure}}(v10, v4, v5);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v10[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v10;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, *(_QWORD *)&v10[8]);
    v8 = *(_QWORD *)v10;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v10[8];
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v11);
  return a1;
}