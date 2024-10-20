__int64 __fastcall uu_sync::syncfs(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  int v15; // [rsp+10h] [rbp-78h]
  __int16 v16; // [rsp+14h] [rbp-74h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  __int64 v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h] BYREF
  int fd; // [rsp+2Ch] [rbp-5Ch]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  __int64 v25; // [rsp+50h] [rbp-38h]

  v1 = *a1;
  v2 = a1[1];
  v3 = a1[2];
  v4 = v2 + 24 * v3;
  v22 = v2;
  v18 = v1;
  v24 = v1;
  v25 = v4;
  v17 = v2;
  if ( v3 )
  {
    v2 = v17 + 24;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 - 24);
      if ( v5 == 0x8000000000000000LL )
        break;
      v6 = v2 - 24;
      v7 = *(_QWORD *)(v2 - 24 + 8);
      v8 = *(_QWORD *)(v2 - 24 + 16);
      v14 = 0x1B600000000LL;
      v16 = 0;
      v15 = 1;
      std::fs::OpenOptions::_open(&v19, &v14, v7, v8);
      if ( v5 )
        _rust_dealloc(v7, v5, 1LL);
      if ( v19 )
      {
        v23 = v2;
        v14 = v21;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v14, &off_DC520, &off_DC570);
      }
      v9 = fd;
      syscall(306LL, (unsigned int)fd);
      close(v9);
      v2 += 24LL;
      if ( v6 + 24 == v4 )
        goto LABEL_14;
    }
  }
  v23 = v2;
  if ( v4 != v2 )
  {
    v10 = (v4 - v2) / 0x18uLL;
    v11 = (_QWORD *)(v2 + 8);
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
        _rust_dealloc(*v11, v12, 1LL);
      v11 += 3;
      --v10;
    }
    while ( v10 );
  }
LABEL_14:
  if ( v18 )
    _rust_dealloc(v17, 24 * v18, 8LL);
  return 0LL;
}
