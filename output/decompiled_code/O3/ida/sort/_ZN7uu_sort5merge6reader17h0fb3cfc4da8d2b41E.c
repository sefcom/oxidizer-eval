__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r14
  char v14; // [rsp+Fh] [rbp-179h] BYREF
  __int64 v15; // [rsp+10h] [rbp-178h]
  __int64 v16; // [rsp+18h] [rbp-170h] BYREF
  __int64 v17; // [rsp+20h] [rbp-168h]
  __int64 v18; // [rsp+28h] [rbp-160h] BYREF
  _OWORD v19[2]; // [rsp+30h] [rbp-158h] BYREF
  __int128 v20; // [rsp+50h] [rbp-138h]
  _OWORD v21[7]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v23; // [rsp+D8h] [rbp-B0h] BYREF
  __int128 v24[7]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+150h] [rbp-38h]

  v16 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23, &v16);
  if ( *(_QWORD *)&v24[0] != 0x8000000000000000LL )
  {
    v17 = a5;
    do
    {
      v22 = v25;
      v21[6] = v24[6];
      v21[5] = v24[5];
      v21[4] = v24[4];
      v21[3] = v24[3];
      v21[2] = v24[2];
      v21[1] = v24[1];
      v21[0] = v24[0];
      if ( v23 >= a3 )
        core::panicking::panic_bounds_check(v23, a3, &off_1FF8E0);
      if ( *(_DWORD *)(a2 + 56 * v23) == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v21);
      }
      else
      {
        v9 = a2 + 56 * v23;
        uu_sort::chunks::read(
          (__int64)&v18,
          v9,
          v24,
          0LL,
          (unsigned __int64)&v14,
          v9 + 16,
          (_QWORD *)(v9 + 40),
          (int)&v14,
          v17,
          a4);
        result = v18;
        if ( v18 )
          return result;
        if ( !LOBYTE(v19[0]) )
        {
          v10 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 3LL;
          if ( v10 == 3 )
            core::option::unwrap_failed(&off_1FF8F8);
          v18 = v10;
          v11 = *(_OWORD *)(v9 + 8);
          v12 = *(_OWORD *)(v9 + 24);
          v20 = *(_OWORD *)(v9 + 40);
          v19[1] = v12;
          v19[0] = v11;
          v15 = *((_QWORD *)&v20 + 1);
          v13 = v20;
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v18);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>((char *)v19 + 8);
          <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading(v13, v15);
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v23, &v16);
    }
    while ( *(_QWORD *)&v24[0] != 0x8000000000000000LL );
  }
  return 0LL;
}
