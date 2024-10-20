__int64 __fastcall uu_test::parser::parse(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  char *v4; // rdx
  __int64 v5; // r12
  signed __int64 v6; // r14
  signed __int64 *v7; // rax
  __int64 *v8; // rax
  signed __int64 *v9; // r12
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r12
  char v17; // al
  __int128 v19; // [rsp+8h] [rbp-100h] BYREF
  __int64 v20; // [rsp+18h] [rbp-F0h]
  signed __int64 v21; // [rsp+20h] [rbp-E8h]
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-D0h]
  signed __int64 *v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+48h] [rbp-C0h]
  char *v26; // [rsp+50h] [rbp-B8h]
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int128 v29; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  _QWORD v31[3]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int128 *v35; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v36)(); // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  char v38; // [rsp+D8h] [rbp-30h]

  v2 = *a2;
  v3 = (_QWORD *)a2[1];
  v4 = (char *)&v3[3 * a2[2]];
  v21 = 0x8000000000000001LL;
  v23 = v3;
  v24 = v3;
  v25 = v2;
  v26 = v4;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  uu_test::parser::Parser::expr((__int64)&v32, (__int64)&v19);
  v5 = v32;
  if ( v32 != 7 )
  {
    v30 = v34;
    v29 = v33;
    goto LABEL_25;
  }
  v6 = v21;
  v21 = 0x8000000000000001LL;
  if ( v6 != 0x8000000000000001LL )
  {
    v8 = &v22;
    goto LABEL_7;
  }
  v7 = v24;
  if ( v24 != (signed __int64 *)v26 )
  {
    v24 += 3;
    v6 = *v7;
    v8 = v7 + 1;
LABEL_7:
    if ( v6 == 0x8000000000000000LL )
    {
      v9 = v24;
      v10 = v26;
      v11 = (0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v26 - (char *)v24)) >> 64;
      *(_QWORD *)(a1 + 24) = v20;
      *(_OWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = 7LL;
      if ( v10 != (char *)v9 )
      {
        v12 = v11 >> 4;
        v13 = v9 + 1;
        do
        {
          v14 = *(v13 - 1);
          if ( v14 )
            _rust_dealloc(*v13, v14, 1LL);
          v13 += 3;
          --v12;
        }
        while ( v12 );
      }
      goto LABEL_16;
    }
    v15 = *v8;
    v16 = v8[1];
    *(_QWORD *)&v27 = 0LL;
    *((_QWORD *)&v27 + 1) = 1LL;
    v28 = 0LL;
    v37 = 32LL;
    v38 = 3;
    v32 = 0LL;
    *((_QWORD *)&v33 + 1) = 0LL;
    v35 = &v27;
    v36 = &off_E1E70;
    std::sys::os_str::bytes::Slice::to_str(v31, v15, v16);
    if ( v31[0] )
      v17 = os_display::unix::write_escaped(&v32, v15, v16);
    else
      v17 = os_display::unix::write(&v32, v31[1], v31[2], 1LL);
    if ( v17 )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, v31, &unk_E1EB8, &off_E1EA0);
    v29 = v27;
    v30 = v28;
    v5 = 2LL;
    if ( v6 )
      _rust_dealloc(v15, v6, 1LL);
LABEL_25:
    *(_QWORD *)(a1 + 24) = v30;
    *(_OWORD *)(a1 + 8) = v29;
    *(_QWORD *)a1 = v5;
    core::ptr::drop_in_place<uu_test::parser::Parser>(&v19);
    return a1;
  }
  *(_QWORD *)(a1 + 24) = v20;
  *(_OWORD *)(a1 + 8) = v19;
  *(_QWORD *)a1 = 7LL;
LABEL_16:
  if ( v25 )
    _rust_dealloc(v23, 24 * v25, 8LL);
  if ( v21 >= (__int64)0x8000000000000002LL && v21 )
    _rust_dealloc(v22, v21, 1LL);
  return a1;
}
