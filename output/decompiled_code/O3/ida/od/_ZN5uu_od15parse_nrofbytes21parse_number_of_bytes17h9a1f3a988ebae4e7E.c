__int64 __fastcall uu_od::parse_nrofbytes::parse_number_of_bytes(__int64 a1, _BYTE *a2, size_t a3)
{
  int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // dl
  char v10; // di
  int v11; // eax
  __int64 v12; // r8
  __int128 v13; // xmm0
  _BYTE *v14; // r8
  char v15; // r9
  char v16; // r10
  char v17; // r11
  int v18; // r10d
  unsigned __int64 v19; // rax
  int v20; // r9d
  unsigned __int64 v21; // r12
  size_t v22; // rax
  int v23; // edx
  char v24; // al
  char v25; // r9
  int v26; // r9d
  bool v27; // zf
  __int64 v28; // r12
  void *v29; // rax
  void *v30; // r13
  int v32; // eax
  __int128 v33; // [rsp+8h] [rbp-100h] BYREF
  __int64 v34; // [rsp+18h] [rbp-F0h]
  __int16 v35; // [rsp+28h] [rbp-E0h]
  char v36; // [rsp+2Ah] [rbp-DEh]
  __int64 v37; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-D0h]
  size_t v39; // [rsp+40h] [rbp-C8h]
  char v40; // [rsp+48h] [rbp-C0h]
  __int128 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+60h] [rbp-A8h]
  _QWORD v43[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v44; // [rsp+80h] [rbp-88h]
  __int64 v45; // [rsp+88h] [rbp-80h]
  __int128 *v46; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall **v47)(); // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  char v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-48h]
  _QWORD v53[7]; // [rsp+D0h] [rbp-38h] BYREF

  if ( a3 < 2 )
  {
    if ( !a3 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v6 = *(unsigned __int16 *)a2;
  v7 = 2LL;
  v8 = 16LL;
  v9 = 1;
  if ( v6 != 30768 && *(_WORD *)a2 != 22576 )
  {
LABEL_6:
    if ( *a2 != 48 )
    {
LABEL_8:
      v35 = 0;
      v36 = 0;
      *(_QWORD *)&v33 = 0LL;
      v34 = 0LL;
      uucore::parser::parse_size::Parser::parse(&v41, &v33, a2, a3);
      if ( (_DWORD)v41 != 3 )
      {
        v13 = v41;
        *(_OWORD *)(a1 + 16) = v42;
        *(_OWORD *)a1 = v13;
        return a1;
      }
      if ( *((_QWORD *)&v42 + 1) )
      {
        v37 = 0LL;
        v38 = (unsigned __int64)a2;
        v39 = a3;
        v40 = 1;
        v53[0] = &v37;
        v53[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v43[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
        v43[1] = 2LL;
        v46 = 0LL;
        v44 = v53;
        v45 = 1LL;
        alloc::fmt::format::format_inner(&v51, v43);
        v50 = 2LL;
        *(_OWORD *)(a1 + 16) = v52;
        *(_QWORD *)a1 = v50;
        *(_QWORD *)(a1 + 8) = v51;
        return a1;
      }
      v19 = v42;
LABEL_59:
      *(_QWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = 3LL;
      return a1;
    }
    v10 = 1;
    v8 = 8LL;
    v9 = 0;
    v7 = 0LL;
    goto LABEL_12;
  }
  v10 = 0;
LABEL_12:
  v11 = (unsigned __int8)a2[a3 - 1];
  if ( (v11 & 0x80u) != 0 )
  {
    v14 = &a2[a3];
    v15 = a2[a3 - 2];
    if ( v15 >= -64 )
    {
      v12 = (__int64)(v14 - 2);
      v20 = v15 & 0x1F;
    }
    else
    {
      v16 = *(v14 - 3);
      if ( v16 >= -64 )
      {
        v12 = (__int64)(v14 - 3);
        v18 = v16 & 0xF;
      }
      else
      {
        v17 = *(v14 - 4);
        v12 = (__int64)(v14 - 4);
        v18 = ((v17 & 7) << 6) | v16 & 0x3F;
      }
      v20 = (v18 << 6) | v15 & 0x3F;
    }
    v11 = (v20 << 6) | v11 & 0x3F;
  }
  else
  {
    v12 = (__int64)&a2[a3 - 1];
  }
  v21 = 1LL;
  switch ( v11 )
  {
    case 'B':
      v22 = a3;
      if ( v9 )
        goto LABEL_41;
      if ( (_BYTE *)v12 != a2 )
      {
        v23 = *(unsigned __int8 *)(v12 - 1);
        if ( (v23 & 0x80u) != 0 )
        {
          v24 = *(_BYTE *)(v12 - 2);
          if ( v24 >= -64 )
          {
            v32 = v24 & 0x1F;
          }
          else
          {
            v25 = *(_BYTE *)(v12 - 3);
            if ( v25 >= -64 )
            {
              v26 = v25 & 0xF;
            }
            else
            {
              v12 = (unsigned __int8)(*(_BYTE *)(v12 - 4) & 7) << 6;
              v26 = v12 | v25 & 0x3F;
            }
            v32 = (v26 << 6) | v24 & 0x3F;
          }
          v23 = (v32 << 6) | v23 & 0x3F;
        }
        v22 = a3 - 2;
        switch ( v23 )
        {
          case 'E':
            v21 = 1000000000000000000LL;
            goto LABEL_41;
          case 'G':
            v21 = 1000000000LL;
            goto LABEL_41;
          case 'K':
          case 'k':
            v21 = 1000LL;
            goto LABEL_41;
          case 'M':
          case 'm':
            v21 = (unsigned __int64)&loc_F4240;
            goto LABEL_41;
          case 'P':
            v21 = 1000000000000000LL;
            goto LABEL_41;
          case 'T':
            v21 = 1000000000000LL;
            goto LABEL_41;
          default:
            break;
        }
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, a2, a3, v8);
      *(_QWORD *)a1 = 1LL;
      return a1;
    case 'E':
      v27 = v9 == 0;
      v21 = 0x1000000000000000LL;
      goto LABEL_37;
    case 'G':
      v22 = a3 - 1;
      v21 = 0x40000000LL;
      goto LABEL_41;
    case 'K':
    case 'k':
      v22 = a3 - 1;
      v21 = 1024LL;
      goto LABEL_41;
    case 'M':
    case 'm':
      v22 = a3 - 1;
      v21 = 0x100000LL;
      goto LABEL_41;
    case 'P':
      v22 = a3 - 1;
      v21 = 0x4000000000000LL;
      goto LABEL_41;
    case 'T':
      v22 = a3 - 1;
      v21 = 0x10000000000LL;
      goto LABEL_41;
    case 'b':
      v27 = v9 == 0;
      v21 = 512LL;
LABEL_37:
      if ( !v27 )
        v21 = 1LL;
      v22 = a3 - ((unsigned __int8)v9 ^ 1u);
      goto LABEL_41;
    default:
      v22 = a3;
LABEL_41:
      if ( v22 < v7 )
        goto LABEL_50;
      if ( v10 )
        goto LABEL_47;
      if ( v7 >= a3 )
      {
        if ( v7 != a3 )
          goto LABEL_50;
      }
      else if ( (char)a2[v7] <= -65 )
      {
LABEL_50:
        core::str::slice_error_fail(a2, a3, v7, v22, &off_103908);
      }
LABEL_47:
      if ( v22 )
      {
        if ( v22 >= a3 )
        {
          if ( v22 != a3 )
            goto LABEL_50;
        }
        else if ( (char)a2[v22] <= -65 )
        {
          goto LABEL_50;
        }
      }
      core::num::<impl u64>::from_str_radix(&v37, &a2[v7], v22 - v7, v8, v12);
      if ( !(_BYTE)v37 )
      {
        v19 = v38 * v21;
        if ( !is_mul_ok(v38, v21) )
        {
          if ( (a3 & 0x8000000000000000LL) != 0LL )
          {
            v28 = 0LL;
          }
          else
          {
            v28 = 1LL;
            v29 = (void *)_rust_alloc(a3, 1LL);
            if ( v29 )
            {
              v30 = v29;
              memcpy(v29, a2, a3);
              *(_QWORD *)a1 = 2LL;
              *(_QWORD *)(a1 + 8) = a3;
              *(_QWORD *)(a1 + 16) = v30;
              *(_QWORD *)(a1 + 24) = a3;
              return a1;
            }
          }
          alloc::raw_vec::handle_error(v28, a3);
        }
        goto LABEL_59;
      }
      LOBYTE(v41) = BYTE1(v37);
      *(_QWORD *)&v33 = 0LL;
      *((_QWORD *)&v33 + 1) = 1LL;
      v34 = 0LL;
      v48 = 32LL;
      v49 = 3;
      v43[0] = 0LL;
      v44 = 0LL;
      v46 = &v33;
      v47 = &off_1038A0;
      if ( (unsigned __int8)<core::num::error::ParseIntError as core::fmt::Display>::fmt(&v41, v43) )
        core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v50, &unk_1038E8, &off_1038D0);
      *(_QWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v33;
      *(_QWORD *)a1 = 1LL;
      return a1;
  }
}
