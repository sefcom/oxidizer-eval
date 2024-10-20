__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::new(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int128 v7; // [rsp+0h] [rbp-38h]
  __int64 v8; // [rsp+10h] [rbp-28h]

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  LOBYTE(v8) = 2;
  v5 = (_QWORD *)_rust_alloc(24LL, 8LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  *v5 = 1LL;
  v5[1] = 1LL;
  v5[2] = 0LL;
  *(_QWORD *)(a1 + 40) = v8;
  *(_OWORD *)(a1 + 24) = v7;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v5;
  return a1;
}
