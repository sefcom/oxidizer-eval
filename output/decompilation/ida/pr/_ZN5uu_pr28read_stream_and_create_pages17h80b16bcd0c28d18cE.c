__int64 __fastcall uu_pr::read_stream_and_create_pages(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _QWORD src[9]; // [rsp+8h] [rbp-140h] BYREF
  __int128 v11; // [rsp+50h] [rbp-F8h]
  __int128 v12; // [rsp+60h] [rbp-E8h]
  __int128 v13; // [rsp+70h] [rbp-D8h]
  __int64 v14; // [rsp+80h] [rbp-C8h]
  __int64 v15; // [rsp+88h] [rbp-C0h]
  __int64 v16; // [rsp+90h] [rbp-B8h]
  __int64 v17; // [rsp+98h] [rbp-B0h]
  __int64 v18; // [rsp+A0h] [rbp-A8h]
  __int64 v19; // [rsp+A8h] [rbp-A0h]
  __int64 v20; // [rsp+C8h] [rbp-80h]
  __int64 v21; // [rsp+E8h] [rbp-60h]
  __int64 v22; // [rsp+F0h] [rbp-58h]
  char v23; // [rsp+F8h] [rbp-50h]
  __int128 v24; // [rsp+100h] [rbp-48h]
  __int64 v25; // [rsp+110h] [rbp-38h]
  char v26; // [rsp+118h] [rbp-30h]

  v4 = *((_QWORD *)a1 + 38);
  v5 = 1LL;
  if ( *((_QWORD *)a1 + 27) != 0x8000000000000000LL )
    v5 = *((_QWORD *)a1 + 31);
  v6 = uu_pr::lines_to_read_for_page((__int64)a1);
  v14 = *((_QWORD *)a2 + 6);
  v7 = *a2;
  v8 = a2[1];
  v13 = a2[2];
  v12 = v8;
  v11 = v7;
  src[0] = 1LL;
  src[1] = 0LL;
  src[5] = 0LL;
  v15 = 0LL;
  v16 = v5;
  v17 = a3;
  v18 = v6;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = v4;
  v23 = 0;
  v26 = 0;
  v24 = *a1;
  v25 = v4;
  return alloc::boxed::Box<T>::new(src);
}
