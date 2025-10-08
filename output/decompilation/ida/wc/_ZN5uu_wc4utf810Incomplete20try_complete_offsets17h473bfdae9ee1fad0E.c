__int64 __fastcall uu_wc::utf8::Incomplete::try_complete_offsets(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int8 v13; // r12
  _BYTE v15[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]
  char v17; // [rsp+20h] [rbp-38h]
  unsigned __int8 v18; // [rsp+21h] [rbp-37h]

  v3 = *(unsigned __int8 *)(a1 + 4);
  if ( v3 > 4 )
    core::slice::index::slice_start_index_len_fail(*(unsigned __int8 *)(a1 + 4), 4LL, &off_F9048);
  v5 = core::cmp::Ord::min(4 - v3, a3);
  v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
         v5,
         a1 + v3,
         4 - v3,
         &off_F8FB8);
  v8 = v7;
  v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v5, a2, a3, &off_F8FD0);
  core::slice::<impl [T]>::copy_from_slice(v6, v8, v9, v10, &off_F8FE8);
  v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
          0LL,
          v3 + v5,
          a1,
          4LL,
          &off_F9000);
  v13 = v12;
  core::str::converts::from_utf8(v15, v11, v12);
  if ( (v15[0] & 1) != 0 )
  {
    if ( v16 )
    {
      v5 = v16 - v3;
      if ( v16 < v3 )
        core::option::unwrap_failed(&off_F9030);
      v13 = v16;
    }
    else if ( (v17 & 1) != 0 )
    {
      v13 = v18;
      if ( v18 < (unsigned __int8)v3 )
        core::option::unwrap_failed(&off_F9018);
      v5 = (unsigned __int8)(v18 - v3);
    }
  }
  *(_BYTE *)(a1 + 4) = v13;
  return v5;
}