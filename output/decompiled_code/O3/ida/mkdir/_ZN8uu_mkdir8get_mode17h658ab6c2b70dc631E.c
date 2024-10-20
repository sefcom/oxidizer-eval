__int64 __fastcall uu_mkdir::get_mode(__int64 a1, __int64 a2, char a3)
{
  signed __int64 v3; // r13
  __int64 v4; // r9
  unsigned __int64 v5; // r12
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  char **v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rbp
  unsigned __int8 *v17; // rcx
  int v18; // edx
  int v19; // esi
  int v20; // r8d
  int v21; // edi
  void *v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  void *v25; // r12
  __mode_t v26; // r15d
  char **v27; // rax
  __mode_t v28; // eax
  __int16 v29; // bp
  __int64 result; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-140h]
  __int64 v32; // [rsp+10h] [rbp-138h]
  unsigned int v35; // [rsp+28h] [rbp-120h]
  char v36; // [rsp+2Ch] [rbp-11Ch]
  char **v37; // [rsp+30h] [rbp-118h] BYREF
  __int128 v38; // [rsp+38h] [rbp-110h]
  __int64 v39; // [rsp+48h] [rbp-100h]
  __int64 v40; // [rsp+50h] [rbp-F8h]
  signed __int64 v41; // [rsp+60h] [rbp-E8h]
  signed __int64 v42; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v43; // [rsp+70h] [rbp-D8h]
  _OWORD v44[2]; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+98h] [rbp-B0h]
  _QWORD v46[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _OWORD v47[2]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-78h]
  _QWORD v49[3]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v50[10]; // [rsp+F8h] [rbp-50h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v44, a2, aMode, 4LL);
  v46[0] = aMode;
  v46[1] = 4LL;
  if ( LODWORD(v44[0]) != 2 )
  {
    v48 = v45;
    v47[1] = v44[1];
    v47[0] = v44[0];
    v50[0] = v46;
    v50[1] = <&T as core::fmt::Display>::fmt;
    v50[2] = v47;
    v50[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v37 = &anon_68f81dc5e29cafb7991e15110736eb51_4_llvm_9775616657504764871;
    *(_QWORD *)&v38 = 2LL;
    v40 = 0LL;
    *((_QWORD *)&v38 + 1) = v50;
    v39 = 2LL;
    core::panicking::panic_fmt(&v37, &anon_68f81dc5e29cafb7991e15110736eb51_6_llvm_9775616657504764871);
  }
  if ( !*((_QWORD *)&v44[0] + 1) )
  {
    v28 = umask(0);
    v29 = ~(_WORD)v28;
    umask(v28);
    v6 = v29 & 0x1FF;
LABEL_45:
    result = a1;
    *(_DWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v4 = *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 8LL);
  v5 = *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL);
  v6 = 511;
  v7 = 0LL;
  v8 = 0LL;
  v32 = v4;
  v43 = v5;
  while ( 1 )
  {
LABEL_6:
    if ( v5 < v8 )
    {
      v12 = 0;
      v31 = v7;
      goto LABEL_19;
    }
    v10 = v4 + v8;
    if ( v5 - v8 > 0xF )
      break;
    if ( v5 == v8 )
      goto LABEL_12;
    v11 = 0LL;
    while ( *(_BYTE *)(v10 + v11) != 44 )
    {
      if ( v5 - v8 == ++v11 )
        goto LABEL_12;
    }
LABEL_15:
    v3 = v11 + v8;
    v8 += v11 + 1;
    if ( v3 < v5 && *(_BYTE *)(v4 + v3) == 44 )
    {
      v12 = 1;
      v31 = v8;
      goto LABEL_20;
    }
  }
  v13 = core::slice::memchr::memchr_aligned(44LL, v10);
  if ( v13 == 1 )
  {
    v11 = v14;
    v4 = v32;
    goto LABEL_15;
  }
  v12 = 1;
  v8 = v5;
  v4 = v32;
  if ( !v13 )
  {
LABEL_12:
    v12 = 0;
    v31 = v7;
    v8 = v5;
LABEL_19:
    v3 = v5;
  }
LABEL_20:
  v36 = v12;
  v15 = (unsigned __int8 *)(v4 + v3);
  v3 -= v7;
  v16 = (unsigned __int8 *)(v4 + v7);
  *(_QWORD *)&v44[0] = v16;
  *((_QWORD *)&v44[0] + 1) = v3;
  v17 = v16;
  do
  {
    if ( v17 == v15 )
    {
LABEL_31:
      v35 = v6;
      if ( !a3 )
      {
        if ( v3 )
        {
          if ( v3 < 0 )
          {
            v23 = 0LL;
          }
          else
          {
            v23 = 1LL;
            v24 = _rust_alloc(v3, 1LL);
            if ( v24 )
            {
              v25 = (void *)v24;
LABEL_38:
              memcpy(v25, v16, v3);
              v41 = (signed __int64)v25;
              v22 = v25;
              v42 = v3;
              goto LABEL_39;
            }
            v41 = v3;
          }
          alloc::raw_vec::handle_error(v23, v41);
        }
        v25 = &dword_0 + 1;
        goto LABEL_38;
      }
      *(_QWORD *)&v47[0] = v44;
      *((_QWORD *)&v47[0] + 1) = <&T as core::fmt::Display>::fmt;
      v37 = (char **)&off_E50D8;
      *(_QWORD *)&v38 = 1LL;
      v40 = 0LL;
      *((_QWORD *)&v38 + 1) = v47;
      v39 = 1LL;
      alloc::fmt::format::format_inner(v49, &v37);
      v3 = v49[0];
      v22 = (void *)v49[1];
      v42 = v49[2];
LABEL_39:
      v26 = umask(0);
      umask(v26);
      uucore::features::mode::parse_symbolic(&v37, v35, v22, v42, v26, 1LL);
      v27 = v37;
      v6 = v38;
      v5 = v43;
      if ( v37 != (char **)0x8000000000000000LL )
      {
        *(_DWORD *)(a1 + 20) = HIDWORD(v38);
        *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v38 + 4);
        *(_QWORD *)a1 = v27;
        result = a1;
        *(_DWORD *)(a1 + 8) = v6;
        if ( v3 )
        {
          _rust_dealloc(v22, v3, 1LL);
          return a1;
        }
        return result;
      }
      if ( v3 )
        _rust_dealloc(v22, v3, 1LL);
LABEL_5:
      v4 = v32;
      v7 = v31;
      if ( !v36 )
        goto LABEL_45;
      goto LABEL_6;
    }
    v18 = *v17;
    if ( (v18 & 0x80u) == 0 )
    {
      ++v17;
    }
    else
    {
      v19 = v18 & 0x1F;
      v20 = v17[1] & 0x3F;
      if ( (unsigned __int8)v18 <= 0xDFu )
      {
        v17 += 2;
        v18 = v20 | (v19 << 6);
      }
      else
      {
        v21 = (v20 << 6) | v17[2] & 0x3F;
        if ( (unsigned __int8)v18 < 0xF0u )
        {
          v17 += 3;
          v18 = (v19 << 12) | v21;
        }
        else
        {
          v18 = ((v18 & 7) << 18) | (v21 << 6) | v17[3] & 0x3F;
          if ( v18 == 1114112 )
            goto LABEL_31;
          v17 += 4;
        }
      }
    }
  }
  while ( (unsigned int)(v18 - 58) < 0xFFFFFFF6 );
  uucore::features::mode::parse_numeric(&v37, v6, v4, v5, 1LL);
  v9 = v37;
  v6 = v38;
  if ( v37 == (char **)0x8000000000000000LL )
    goto LABEL_5;
  *(_DWORD *)(a1 + 20) = HIDWORD(v38);
  *(_QWORD *)(a1 + 12) = *(_QWORD *)((char *)&v38 + 4);
  *(_QWORD *)a1 = v9;
  result = a1;
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}
