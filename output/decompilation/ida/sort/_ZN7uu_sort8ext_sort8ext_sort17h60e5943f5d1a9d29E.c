__int64 __fastcall uu_sort::ext_sort::ext_sort(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v14; // [rsp+8h] [rbp-210h]
  int v15; // [rsp+10h] [rbp-208h]
  int v16; // [rsp+18h] [rbp-200h]
  __int64 v17; // [rsp+28h] [rbp-1F0h]
  _QWORD v18[8]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-1A0h]
  __int64 v21; // [rsp+80h] [rbp-198h]
  __int64 v22; // [rsp+88h] [rbp-190h]
  _BYTE dest[160]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v24[24]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD src[26]; // [rsp+148h] [rbp-D0h] BYREF

  std::sync::mpmc::sync_channel(&v19, 1LL);
  v17 = a4;
  v5 = v19;
  v6 = v20;
  v18[2] = v19;
  v18[3] = v20;
  v15 = v21;
  v18[0] = v21;
  v16 = v22;
  v18[1] = v22;
  std::sync::mpmc::sync_channel(&v19, 1LL);
  v7 = v19;
  v8 = v21;
  v9 = v22;
  v18[4] = v19;
  v14 = v20;
  v18[5] = v20;
  v18[6] = v21;
  v18[7] = v22;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a2);
  v19 = v8;
  v20 = v9;
  v21 = v5;
  v22 = v6;
  memcpy(dest, src, sizeof(dest));
  src[2] = 0x8000000000000000LL;
  src[0] = 0LL;
  LOBYTE(src[5]) = 0;
  std::thread::Builder::spawn_unchecked(v24, src, &v19);
  core::result::Result<T,E>::expect(src, v24);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(src);
  if ( *(_QWORD *)(a2 + 48) == 0x8000000000000000LL )
    v10 = uu_sort::ext_sort::reader_writer(a1, a2, v15, v16, v7, v14, a3, v17);
  else
    v10 = uu_sort::ext_sort::reader_writer(a1, a2, v15, v16, v7, v14, a3, v17);
  v11 = v10;
  core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(v18);
  return v11;
}