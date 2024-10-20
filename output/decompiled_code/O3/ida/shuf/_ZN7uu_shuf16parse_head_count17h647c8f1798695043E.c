__int64 __fastcall uu_shuf::parse_head_count(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-F8h]
  __int64 v21; // [rsp+8h] [rbp-F0h]
  __int64 v22; // [rsp+10h] [rbp-E8h]
  char v23[8]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-B0h]
  _QWORD v25[2]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v26[3]; // [rsp+60h] [rbp-98h] BYREF
  char v27; // [rsp+78h] [rbp-80h]
  __int128 v28; // [rsp+80h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-68h]
  _QWORD v30[12]; // [rsp+98h] [rbp-60h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = v3 + 24 * v4;
  v22 = v2;
  if ( v4 )
  {
    v21 = v3 + 24 * v4;
    v20 = 24 * v4;
    v6 = -1LL;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + v7);
      if ( v8 == 0x8000000000000000LL )
      {
        v11 = v3 + v7 + 24;
        v5 = v21;
        goto LABEL_22;
      }
      v9 = *(_QWORD *)(v3 + v7 + 8);
      v10 = *(_QWORD *)(v3 + v7 + 16);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v23, v9, v10);
      if ( v23[0] )
        break;
      if ( v6 >= v24 )
        v6 = v24;
      if ( v8 )
        _rust_dealloc(v9, v8, 1LL);
      v7 += 24LL;
      if ( v20 == v7 )
      {
        v5 = v21;
        v11 = v21;
        goto LABEL_22;
      }
    }
    v26[0] = 0LL;
    v26[1] = v9;
    v26[2] = v10;
    v27 = 1;
    v25[0] = v26;
    v25[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v30[0] = &off_F24E0;
    v30[1] = 1LL;
    v30[4] = 0LL;
    v30[2] = v25;
    v30[3] = 1LL;
    alloc::fmt::format::format_inner(&v28, v30);
    v12 = a1;
    *(_QWORD *)(a1 + 16) = v29;
    *(_OWORD *)a1 = v28;
    if ( v8 )
      _rust_dealloc(v9, v8, 1LL);
    if ( v20 - 24 != v7 )
    {
      v13 = (_QWORD *)(v3 + v7 + 32);
      v14 = (v20 - v7 - 24) / 0x18uLL;
      do
      {
        v15 = *(v13 - 1);
        if ( v15 )
          _rust_dealloc(*v13, v15, 1LL);
        v13 += 3;
        --v14;
      }
      while ( v14 );
    }
    if ( v22 )
      _rust_dealloc(v3, 24 * v22, 8LL);
  }
  else
  {
    v6 = -1LL;
    v11 = v3;
LABEL_22:
    if ( v5 != v11 )
    {
      v16 = (v5 - v11) / 0x18uLL;
      v17 = (_QWORD *)(v11 + 8);
      do
      {
        v18 = *(v17 - 1);
        if ( v18 )
          _rust_dealloc(*v17, v18, 1LL);
        v17 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v22 )
      _rust_dealloc(v3, 24 * v22, 8LL);
    *(_QWORD *)(a1 + 8) = v6;
    v12 = a1;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return v12;
}
