__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  char v15; // [rsp+Fh] [rbp-1A9h] BYREF
  __int64 v16; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-1A0h]
  _BYTE v18[56]; // [rsp+20h] [rbp-198h] BYREF
  __int128 v19; // [rsp+58h] [rbp-160h]
  __int128 v20; // [rsp+70h] [rbp-148h]
  __int128 v21; // [rsp+80h] [rbp-138h]
  _OWORD v22[7]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v23; // [rsp+100h] [rbp-B8h]
  unsigned __int64 v24; // [rsp+108h] [rbp-B0h] BYREF
  __int128 v25[7]; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+180h] [rbp-38h]

  v17 = a4;
  v16 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24, &v16);
  if ( *(_QWORD *)&v25[0] != 0x8000000000000000LL )
  {
    v8 = a5;
    do
    {
      v23 = v26;
      v22[6] = v25[6];
      v22[5] = v25[5];
      v22[4] = v25[4];
      v22[3] = v25[3];
      v22[2] = v25[2];
      v22[1] = v25[1];
      v22[0] = v25[0];
      if ( v24 >= a3 )
        core::panicking::panic_bounds_check(v24, a3, &off_1FF8E0);
      if ( *(_DWORD *)(a2 + 72 * v24) == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v22);
      }
      else
      {
        v9 = a2 + 72 * v24;
        v10 = (_DWORD *)<uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v9 + 16);
        uu_sort::chunks::read((__int64)v18, v9, v25, 0LL, (unsigned __int64)&v15, v9 + 48, v10, (int)&v15, v8, v17);
        result = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
          return result;
        if ( !v18[8] )
        {
          v11 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 3LL;
          if ( v11 == 3 )
            core::option::unwrap_failed(&off_1FF8F8);
          *(_QWORD *)v18 = v11;
          v12 = *(_OWORD *)(v9 + 8);
          v13 = *(_OWORD *)(v9 + 24);
          v14 = *(_OWORD *)(v9 + 40);
          v19 = *(_OWORD *)(v9 + 56);
          *(_OWORD *)&v18[40] = v14;
          *(_OWORD *)&v18[24] = v13;
          *(_OWORD *)&v18[8] = v12;
          v21 = *(_OWORD *)&v18[32];
          v20 = *(_OWORD *)&v18[16];
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(v18);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v18[48]);
          *(_OWORD *)&v18[16] = v21;
          *(_OWORD *)v18 = v20;
          <uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(v18);
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24, &v16);
    }
    while ( *(_QWORD *)&v25[0] != 0x8000000000000000LL );
  }
  return 0LL;
}
