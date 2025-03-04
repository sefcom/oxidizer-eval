__int64 __fastcall uu_sort::merge::reader(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  char v15; // [rsp+Fh] [rbp-209h] BYREF
  __int64 v16; // [rsp+10h] [rbp-208h] BYREF
  __int64 v17; // [rsp+18h] [rbp-200h]
  __int128 v18; // [rsp+20h] [rbp-1F8h]
  __int128 v19; // [rsp+30h] [rbp-1E8h]
  __int128 v20; // [rsp+40h] [rbp-1D8h]
  __int128 v21; // [rsp+50h] [rbp-1C8h]
  __int128 v22; // [rsp+60h] [rbp-1B8h]
  _BYTE v23[104]; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+D8h] [rbp-140h]
  _OWORD v25[7]; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v26; // [rsp+160h] [rbp-B8h]
  unsigned __int64 v27; // [rsp+168h] [rbp-B0h] BYREF
  __int128 v28[7]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+1E0h] [rbp-38h]

  v17 = a4;
  v16 = a1;
  <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27, &v16);
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
  {
    v8 = a5;
    do
    {
      v26 = v29;
      v25[6] = v28[6];
      v25[5] = v28[5];
      v25[4] = v28[4];
      v25[3] = v28[3];
      v25[2] = v28[2];
      v25[1] = v28[1];
      v25[0] = v28[0];
      if ( v27 >= a3 )
        core::panicking::panic_bounds_check(v27, a3, &off_200408);
      if ( *(_DWORD *)(a2 + 120 * v27) == 3 )
      {
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v25);
      }
      else
      {
        v9 = a2 + 120 * v27;
        v10 = (_DWORD *)<uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v9 + 16);
        uu_sort::chunks::read((__int64)v23, v9, v28, 0LL, (unsigned __int64)&v15, v9 + 96, v10, (int)&v15, v8, v17);
        result = *(_QWORD *)v23;
        if ( *(_QWORD *)v23 )
          return result;
        if ( !v23[8] )
        {
          v11 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 3LL;
          if ( v11 == 3 )
            core::option::unwrap_failed(&off_200420);
          *(_QWORD *)v23 = v11;
          v24 = *(_OWORD *)(v9 + 104);
          *(_OWORD *)&v23[88] = *(_OWORD *)(v9 + 88);
          *(_OWORD *)&v23[72] = *(_OWORD *)(v9 + 72);
          v12 = *(_OWORD *)(v9 + 8);
          v13 = *(_OWORD *)(v9 + 24);
          v14 = *(_OWORD *)(v9 + 40);
          *(_OWORD *)&v23[56] = *(_OWORD *)(v9 + 56);
          *(_OWORD *)&v23[40] = v14;
          *(_OWORD *)&v23[24] = v13;
          *(_OWORD *)&v23[8] = v12;
          v22 = *(_OWORD *)&v23[80];
          v21 = *(_OWORD *)&v23[64];
          v20 = *(_OWORD *)&v23[48];
          v19 = *(_OWORD *)&v23[32];
          v18 = *(_OWORD *)&v23[16];
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(v23);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23[96]);
          *(_OWORD *)&v23[64] = v22;
          *(_OWORD *)&v23[48] = v21;
          *(_OWORD *)&v23[32] = v20;
          *(_OWORD *)&v23[16] = v19;
          *(_OWORD *)v23 = v18;
          result = <uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(v23);
          if ( result )
            return result;
        }
      }
      <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27, &v16);
    }
    while ( *(_QWORD *)&v28[0] != 0x8000000000000000LL );
  }
  return 0LL;
}
