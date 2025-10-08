_QWORD *__fastcall linera_summary::ci_runtime_comparison::CiRuntimeComparison::from_jobs(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+8h] [rbp-A0h]
  __int64 v11; // [rsp+18h] [rbp-90h] BYREF
  __int128 v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h]
  __int64 *v18; // [rsp+90h] [rbp-18h]

  linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(&v15);
  if ( (_DWORD)v15 == 1 )
  {
    a1[1] = v16;
    *a1 = 1LL;
    core::ptr::drop_in_place<alloc::vec::Vec<octocrab::models::workflows::Job>>(a3);
  }
  else
  {
    v10 = v17;
    v9 = v16;
    linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes(&v15);
    if ( (_DWORD)v15 == 1 )
    {
      a1[1] = v16;
      *a1 = 1LL;
    }
    else
    {
      v12 = v17;
      v11 = v16;
      ((void (__fastcall *)(__int64 *, __int64 *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD))<alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter)(
        &v15,
        &v11,
        v4,
        v5,
        v6,
        v7,
        v9,
        v10,
        *((_QWORD *)&v10 + 1));
      v18 = &v9;
      core::iter::traits::iterator::Iterator::collect(&v13, &v15);
      a1[3] = v14;
      *(_OWORD *)(a1 + 1) = v13;
      *a1 = 0LL;
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::collections::btree::map::BTreeMap<alloc::string::String,u64>>>(&v9);
  }
  return a1;
}