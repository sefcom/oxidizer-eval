__int64 __fastcall uu_dd::parseargs::Parser::parse_output_flags(_QWORD *a1, _BYTE *a2, _BYTE *a3, size_t a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  _BYTE *v8; // rcx
  unsigned __int64 v9; // r12
  char v10; // bl
  unsigned __int64 v11; // r14
  size_t v12; // rdx
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  size_t v17; // r14
  size_t v18; // r14
  char *v19; // r12
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  void *v26; // r14
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // [rsp+10h] [rbp-98h]
  size_t v31; // [rsp+18h] [rbp-90h]
  _BYTE *v32; // [rsp+20h] [rbp-88h]
  _BYTE *v33; // [rsp+28h] [rbp-80h]
  _BYTE *v34; // [rsp+30h] [rbp-78h]
  _BYTE *v35; // [rsp+38h] [rbp-70h]
  _BYTE *v36; // [rsp+40h] [rbp-68h]
  _BYTE *v37; // [rsp+48h] [rbp-60h]
  _BYTE *v38; // [rsp+50h] [rbp-58h]
  _BYTE *v39; // [rsp+58h] [rbp-50h]
  _BYTE *v40; // [rsp+60h] [rbp-48h]
  _BYTE *v41; // [rsp+68h] [rbp-40h]
  _BYTE *v42; // [rsp+70h] [rbp-38h]

  v41 = a2 + 207;
  v32 = a2 + 193;
  v35 = a2 + 203;
  v34 = a2 + 202;
  v33 = a2 + 201;
  v40 = a2 + 200;
  v39 = a2 + 199;
  v38 = a2 + 198;
  v37 = a2 + 197;
  v36 = a2 + 196;
  v42 = a2 + 195;
  v6 = 0LL;
  v7 = 0LL;
  while ( 2 )
  {
    v9 = v6;
    if ( v7 > a4 )
    {
LABEL_6:
      v10 = 0;
      v6 = v9;
LABEL_22:
      v17 = a4;
      goto LABEL_23;
    }
    v11 = v7;
    while ( 1 )
    {
      v12 = a4 - v11;
      v13 = &a3[v11];
      if ( a4 - v11 > 0xF )
        break;
      if ( a4 == v11 )
        goto LABEL_21;
      v14 = 0LL;
      while ( v13[v14] != 44 )
      {
        if ( v12 == ++v14 )
          goto LABEL_21;
      }
LABEL_17:
      v7 = v11 + v14 + 1;
      v17 = v14 + v11;
      if ( v17 < a4 && a3[v17] == 44 )
      {
        v10 = 1;
        v6 = v7;
        v31 = v17;
        v30 = v7;
        goto LABEL_23;
      }
      v11 = v7;
      if ( v7 > a4 )
        goto LABEL_6;
    }
    v15 = core::slice::memchr::memchr_aligned(44LL, v13, v12);
    if ( v15 == 1 )
    {
      v14 = v16;
      goto LABEL_17;
    }
    if ( !v15 )
    {
LABEL_21:
      v10 = 0;
      v6 = v9;
      v7 = a4;
      goto LABEL_22;
    }
    v10 = 1;
    v6 = v30;
    v7 = a4;
    v17 = v31;
LABEL_23:
    v18 = v17 - v9;
    v19 = &a3[v9];
    switch ( v18 )
    {
      case 3uLL:
        v27 = 3LL;
        if ( *(_WORD *)v19 ^ 0x6963 | (unsigned __int8)v19[2] ^ 0x6F )
          goto LABEL_58;
        if ( a4 )
        {
          if ( (a4 & 0x8000000000000000LL) != 0LL )
          {
            v24 = 0LL;
          }
          else
          {
            v24 = 1LL;
            v25 = _rust_alloc(a4, 1LL);
            if ( v25 )
            {
              v26 = (void *)v25;
              goto LABEL_60;
            }
          }
          alloc::raw_vec::handle_error(v24, a4);
        }
        v26 = &dword_0 + 1;
LABEL_60:
        memcpy(v26, a3, a4);
        result = (__int64)a1;
        *a1 = 11LL;
        a1[1] = a4;
        a1[2] = v26;
        a1[3] = a4;
        return result;
      case 4uLL:
        v8 = v38;
        if ( *(_DWORD *)v19 == 1668184435 )
          goto LABEL_3;
        v28 = bcmp(v19, &unk_152DC, v18);
        v27 = 4LL;
        if ( !v28 )
          goto LABEL_57;
        goto LABEL_58;
      case 5uLL:
        v8 = v37;
        if ( !(*(_DWORD *)v19 ^ 0x6E797364 | (unsigned __int8)v19[4] ^ 0x63) )
          goto LABEL_3;
        v27 = 5LL;
        goto LABEL_58;
      case 6uLL:
        v8 = v42;
        if ( !(*(_DWORD *)v19 ^ 0x65726964 | *((unsigned __int16 *)v19 + 2) ^ 0x7463) )
          goto LABEL_3;
        v20 = bcmp(v19, &unk_1E59F, v18);
        v8 = v34;
        if ( !v20 )
          goto LABEL_3;
        if ( !bcmp(v19, &unk_1E5AC, v18) )
          goto LABEL_57;
        v21 = bcmp(v19, &unk_1E5BB, v18);
        v8 = v32;
        if ( !v21 )
        {
LABEL_3:
          *v8 = 1;
LABEL_4:
          if ( !v10 )
          {
            result = (__int64)a1;
            *a1 = 14LL;
            return result;
          }
          continue;
        }
        v27 = 6LL;
LABEL_58:
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 1, v19, v27);
        *a1 = 5LL;
        return result;
      case 7uLL:
        v8 = v39;
        if ( !(*(_DWORD *)v19 ^ 0x61636F6E | *(_DWORD *)(v19 + 3) ^ 0x65686361) )
          goto LABEL_3;
        v8 = v33;
        if ( !(*(_DWORD *)v19 ^ 0x74616F6E | *(_DWORD *)(v19 + 3) ^ 0x656D6974) )
          goto LABEL_3;
        v29 = bcmp(v19, &unk_1E5A5, v18);
        v27 = 7LL;
        if ( v29 )
          goto LABEL_58;
LABEL_57:
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 1, v19, v18);
        *a1 = 11LL;
        return result;
      case 8uLL:
        v8 = v40;
        if ( *(_QWORD *)v19 == 0x6B636F6C626E6F6ELL )
          goto LABEL_3;
        v22 = bcmp(v19, aNofollow, v18);
        v8 = v35;
        if ( !v22 )
          goto LABEL_3;
        v27 = 8LL;
        goto LABEL_58;
      case 9uLL:
        v8 = v36;
        if ( !(*(_QWORD *)v19 ^ 0x726F746365726964LL | (unsigned __int8)v19[8] ^ 0x79LL) )
          goto LABEL_3;
        if ( !bcmp(v19, &unk_1E5B2, v18) )
          goto LABEL_4;
        v27 = 9LL;
        goto LABEL_58;
      case 0xAuLL:
        v8 = v41;
        if ( !(*(_QWORD *)v19 ^ 0x7479625F6B656573LL | *((unsigned __int16 *)v19 + 4) ^ 0x7365LL) )
          goto LABEL_3;
        if ( !(*(_QWORD *)v19 ^ 0x7479625F70696B73LL | *((unsigned __int16 *)v19 + 4) ^ 0x7365LL) )
          goto LABEL_4;
        v27 = 10LL;
        goto LABEL_58;
      case 0xBuLL:
        if ( !(*(_QWORD *)v19 ^ 0x79625F746E756F63LL | *(_QWORD *)(v19 + 3) ^ 0x73657479625F746ELL) )
          goto LABEL_4;
        v27 = 11LL;
        goto LABEL_58;
      default:
        v27 = v18;
        goto LABEL_58;
    }
  }
}
