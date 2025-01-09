__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::new(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+0h] [rbp-38h]
  __int64 v5; // [rsp+10h] [rbp-28h]
  __int128 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 2);
  v4 = *a2;
  LOBYTE(v7) = 2;
  v2 = <alloc::sync::Arc<T> as core::default::Default>::default();
  *(_QWORD *)(a1 + 40) = v7;
  *(_OWORD *)(a1 + 24) = v6;
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = v2;
  return a1;
}
