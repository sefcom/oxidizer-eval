__int64 __fastcall uu_sort::ext_sort::ext_sort(int a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int128 v5; // kr00_16
  int v6; // ebp
  __int128 v7; // kr10_16
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r14
  int v12; // [rsp+10h] [rbp-208h]
  _OWORD v14[4]; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-198h]
  _BYTE dest[160]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v18[24]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD src[26]; // [rsp+148h] [rbp-D0h] BYREF

  std::sync::mpmc::sync_channel(&v15, 1LL);
  v5 = v15;
  v14[1] = v15;
  v14[0] = v16;
  std::sync::mpmc::sync_channel(&v15, 1LL);
  v6 = v15;
  v7 = v16;
  v12 = DWORD2(v15);
  v14[2] = v15;
  v14[3] = v16;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a2);
  v15 = v7;
  v16 = v5;
  memcpy(dest, src, sizeof(dest));
  src[2] = 0x8000000000000000LL;
  src[0] = 0LL;
  std::thread::Builder::spawn_unchecked(v18, src, &v15);
  core::result::Result<T,E>::expect(src, v18);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(src);
  v8 = *a3;
  if ( *(_QWORD *)(a2 + 48) == 0x8000000000000000LL )
  {
    v16 = a3[1];
    v15 = v8;
    v9 = uu_sort::ext_sort::reader_writer(a1, a2, (unsigned int)v14, v6, v12, (unsigned int)&v15, a4);
  }
  else
  {
    v16 = a3[1];
    v15 = v8;
    v9 = uu_sort::ext_sort::reader_writer(a1, a2, (unsigned int)v14, v6, v12, (unsigned int)&v15, a4);
  }
  v10 = v9;
  core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(v14);
  return v10;
}
