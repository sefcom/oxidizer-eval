__int64 __fastcall uu_pr::read_stream_and_create_pages(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD v10[9]; // [rsp+0h] [rbp-118h] BYREF
  __int128 v11; // [rsp+48h] [rbp-D0h]
  __int128 v12; // [rsp+58h] [rbp-C0h]
  __int128 v13; // [rsp+68h] [rbp-B0h]
  __int64 v14; // [rsp+78h] [rbp-A0h]
  __int64 v15; // [rsp+80h] [rbp-98h]
  __int64 v16; // [rsp+88h] [rbp-90h]
  __int64 v17; // [rsp+90h] [rbp-88h]
  __int64 v18; // [rsp+98h] [rbp-80h]
  __int64 v19; // [rsp+A0h] [rbp-78h]
  __int64 v20; // [rsp+C0h] [rbp-58h]
  __int64 v21; // [rsp+E0h] [rbp-38h]
  __int64 v22; // [rsp+E8h] [rbp-30h]
  char v23; // [rsp+F0h] [rbp-28h]
  __int128 v24; // [rsp+F8h] [rbp-20h]
  __int64 v25; // [rsp+108h] [rbp-10h]
  char v26; // [rsp+110h] [rbp-8h]

  v3 = 1LL;
  v4 = 1LL;
  if ( !__OFSUB__(0LL, *((_QWORD *)a1 + 27)) )
    v4 = *((_QWORD *)a1 + 31);
  v5 = *((_QWORD *)a1 + 38);
  if ( !__OFSUB__(0LL, *((_QWORD *)a1 + 32)) )
    v3 = *((_QWORD *)a1 + 36);
  v6 = v3 * (*((_QWORD *)a1 + 39) >> *((_BYTE *)a1 + 320));
  v10[0] = 1LL;
  v10[1] = 0LL;
  v10[5] = 0LL;
  v7 = a2[1];
  v8 = a2[2];
  v11 = *a2;
  v12 = v7;
  v13 = v8;
  v14 = *((_QWORD *)a2 + 6);
  v15 = 0LL;
  v16 = v4;
  v17 = a3;
  v18 = v6;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = v5;
  v23 = 0;
  v26 = 0;
  v24 = *a1;
  v25 = v5;
  return alloc::boxed::Box<T>::new(v10);
}