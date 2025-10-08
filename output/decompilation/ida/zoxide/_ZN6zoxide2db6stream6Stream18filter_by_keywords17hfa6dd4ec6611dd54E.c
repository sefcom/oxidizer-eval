__int64 __fastcall zoxide::db::stream::Stream::filter_by_keywords(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 back; // rax
  __int64 v16; // rdx
  char **v17; // r8
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  _QWORD v21[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( !a2 )
  {
    LOBYTE(v4) = 1;
    return v4;
  }
  v4 = a1;
  zoxide::util::to_lowercase(&v18, a3, a4);
  v5 = v19;
  v6 = v20;
  if ( (core::str::<impl str>::rfind(v19, v20, a1 + 24 * a2 - 24) & 1) != 0 )
  {
    v8 = v7;
    v9 = v7 + *(_QWORD *)(a1 + 24 * a2 - 8);
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v9,
            v5,
            v6);
    if ( v10 )
    {
      if ( (unsigned __int8)core::str::pattern::Pattern::is_contained_in(v10, v11) )
        goto LABEL_5;
      v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
              v8,
              v5,
              v6);
      if ( v13 )
      {
        v21[0] = a1;
        v21[1] = a1 + 24 * a2 - 24;
        v9 = 0LL;
        do
        {
          v6 = v14;
          v5 = v13;
          back = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v21);
          LOBYTE(v4) = back == 0;
          if ( !back || (core::str::<impl str>::rfind(v5, v6, back) & 1) == 0 )
            goto LABEL_6;
          v8 = v16;
          v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                  v16,
                  v5,
                  v6);
        }
        while ( v13 );
        v17 = &off_134A10;
      }
      else
      {
        v17 = &off_1349F8;
        v9 = 0LL;
      }
    }
    else
    {
      v17 = &off_1349E0;
      v8 = v6;
    }
    core::str::slice_error_fail(v5, v6, v9, v8, v17);
  }
LABEL_5:
  v4 = 0;
LABEL_6:
  core::ptr::drop_in_place<alloc::string::String>(&v18);
  return v4;
}