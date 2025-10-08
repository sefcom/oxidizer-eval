__int64 __fastcall just::function::source_file(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v9[8]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = std::path::Path::parent(*(_QWORD *)(*(_QWORD *)(*a2 + 24LL) + 8LL), *(_QWORD *)(*(_QWORD *)(*a2 + 24LL) + 16LL));
  if ( !v2 )
    core::option::unwrap_failed(&off_4300A0);
  v4 = a2[1];
  v5 = a2[2];
  std::path::Path::join(v9, v2, v3, v4, v5);
  core::str::converts::from_utf8(v8, v10, v11);
  if ( *(_DWORD *)v8 == 1 )
  {
    just::function::source_file::{{closure}}(v8, v4, v5);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v8[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v8;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, *(_QWORD *)&v8[8]);
    v6 = *(_QWORD *)v8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[8];
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0LL;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v9);
  return a1;
}