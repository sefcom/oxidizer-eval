__int64 __fastcall rg::flags::parse::ngrams(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  _QWORD v10[3]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-28h]

  if ( !a3 )
  {
    v7 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
    if ( v7 )
    {
      v4 = v7;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v11, asc_87E6D);
      v14 = v12;
      v8 = v11;
      v13 = v11;
      *(_QWORD *)(v4 + 16) = v12;
      *(_OWORD *)v4 = v8;
      goto LABEL_13;
    }
    goto LABEL_16;
  }
  if ( a3 == 1 )
  {
    v6 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
    if ( v6 )
    {
      v4 = v6;
      v5 = alloc::alloc::Global::alloc_impl(1LL, 3LL, 0LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(1LL, 3LL);
      *(_BYTE *)v5 = *a2;
      *(_WORD *)(v5 + 1) = 8481;
      goto LABEL_10;
    }
LABEL_16:
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  }
  if ( a3 != 2 )
  {
    *(_QWORD *)&v11 = a2;
    *((_QWORD *)&v11 + 1) = a3;
    v12 = 3LL;
    core::iter::traits::iterator::Iterator::collect(v10, &v11);
    return ((__int64 (__fastcall *)(__int64, _QWORD *))<alloc::collections::btree::set::BTreeSet<T> as core::iter::traits::collect::FromIterator<T>>::from_iter)(
             a1,
             v10);
  }
  v3 = alloc::alloc::Global::alloc_impl(8LL, 24LL, 0LL);
  if ( !v3 )
    goto LABEL_16;
  v4 = v3;
  v5 = alloc::alloc::Global::alloc_impl(1LL, 3LL, 0LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(1LL, 3LL);
  *(_WORD *)v5 = *(_WORD *)a2;
  *(_BYTE *)(v5 + 2) = 33;
LABEL_10:
  *(_QWORD *)v4 = 3LL;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)(v4 + 16) = 3LL;
LABEL_13:
  v10[0] = 1LL;
  v10[1] = v4;
  v10[2] = 1LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))<alloc::collections::btree::set::BTreeSet<T> as core::iter::traits::collect::FromIterator<T>>::from_iter)(
           a1,
           v10);
}