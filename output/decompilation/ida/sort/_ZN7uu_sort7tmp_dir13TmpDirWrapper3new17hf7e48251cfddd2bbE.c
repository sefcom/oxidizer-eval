__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+0h] [rbp-28h]
  __int64 v5; // [rsp+10h] [rbp-18h]

  LOBYTE(v5) = 2;
  v2 = <alloc::sync::Arc<T> as core::default::Default>::default();
  *(_QWORD *)(a1 + 40) = v5;
  *(_OWORD *)(a1 + 24) = v4;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v2;
  return a1;
}