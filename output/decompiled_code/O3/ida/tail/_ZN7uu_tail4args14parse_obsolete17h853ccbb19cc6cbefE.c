__int64 __fastcall uu_tail::args::parse_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  void *v15; // rax
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rsi
  int v23; // eax
  int v24; // ecx
  int v25; // edi
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int128 v31; // [rsp+0h] [rbp-138h] BYREF
  __int128 v32; // [rsp+10h] [rbp-128h] BYREF
  __int64 v33; // [rsp+20h] [rbp-118h]
  __int64 v34; // [rsp+28h] [rbp-110h]
  __int128 v35; // [rsp+30h] [rbp-108h]
  __int128 v36; // [rsp+40h] [rbp-F8h]
  __m256i *v37; // [rsp+50h] [rbp-E8h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+58h] [rbp-E0h]
  __m256i v39; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+80h] [rbp-B8h]
  __int64 v41; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int8 v42; // [rsp+98h] [rbp-A0h]
  char v43; // [rsp+99h] [rbp-9Fh]
  char v44; // [rsp+9Ah] [rbp-9Eh]
  __int64 v45; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-90h]
  _BYTE v47[24]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v48[24]; // [rsp+D0h] [rbp-68h] BYREF
  _BYTE v49[24]; // [rsp+E8h] [rbp-50h] BYREF
  _BYTE v50[56]; // [rsp+100h] [rbp-38h] BYREF

  uu_tail::parse::parse_obsolete(&v41);
  if ( v44 != 2 )
  {
    if ( v44 == 3 )
    {
      *(_QWORD *)a1 = 5LL;
    }
    else
    {
      *(_QWORD *)&v36 = 5LL;
      BYTE8(v36) = 0;
      *(_QWORD *)&v35 = 1LL;
      DWORD2(v35) = 0;
      *(_DWORD *)((char *)&v36 + 9) = 0x2000000;
      *((_QWORD *)&v32 + 1) = 0LL;
      v33 = 8LL;
      v34 = 0LL;
      if ( v44 )
        BYTE12(v36) = a3 != 0;
      v12 = v41;
      v13 = 10LL;
      if ( !v43 )
      {
        v13 = v41;
        v12 = v42;
      }
      v14 = 4LL;
      if ( v43 )
        v14 = v42;
      *(_QWORD *)&v31 = v14;
      *((_QWORD *)&v31 + 1) = v12;
      *(_QWORD *)&v32 = v13;
      if ( a3 )
      {
        uu_tail::paths::Input::from(&v39, a3);
      }
      else
      {
        v15 = (void *)_rust_alloc(14LL, 1LL);
        if ( !v15 )
          alloc::raw_vec::handle_error(1LL, 14LL);
        qmemcpy(v15, "standard input", 14);
        v39.m256i_i64[3] = 0x8000000000000000LL;
        v39.m256i_i64[0] = 14LL;
        v39.m256i_i64[1] = (__int64)v15;
        v39.m256i_i64[2] = 14LL;
      }
      alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v32 + 8);
      v16 = (_OWORD *)v33;
      v17 = *(_OWORD *)v39.m256i_i8;
      v18 = *(_OWORD *)&v39.m256i_u64[2];
      *(_OWORD *)(v33 + 32) = v40;
      v16[1] = v18;
      *v16 = v17;
      v34 = 1LL;
      v19 = v31;
      v20 = v32;
      v21 = v35;
      *(_OWORD *)(a1 + 64) = v36;
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 16) = v20;
      *(_OWORD *)a1 = v19;
      *(_QWORD *)(a1 + 32) = v33;
      *(_QWORD *)(a1 + 40) = v34;
    }
    return a1;
  }
  v6 = (unsigned __int8)v41;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v45, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v5);
  switch ( v6 )
  {
    case 0LL:
      v39.m256i_i64[0] = 0LL;
      *(_OWORD *)&v39.m256i_u64[1] = v46;
      v39.m256i_i8[24] = 1;
      v37 = &v39;
      v38 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &off_15BAD0;
      *((_QWORD *)&v31 + 1) = 2LL;
      v33 = 0LL;
      *(_QWORD *)&v32 = &v37;
      *((_QWORD *)&v32 + 1) = 1LL;
      v11 = v47;
      alloc::fmt::format::format_inner(v47, &v31, v7, v8, v9, v10);
      goto LABEL_30;
    case 1LL:
      v39.m256i_i64[0] = 0LL;
      *(_OWORD *)&v39.m256i_u64[1] = v46;
      v39.m256i_i8[24] = 1;
      v37 = &v39;
      v38 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &off_15BAF0;
      *((_QWORD *)&v31 + 1) = 1LL;
      v33 = 0LL;
      *(_QWORD *)&v32 = &v37;
      *((_QWORD *)&v32 + 1) = 1LL;
      v11 = v48;
      alloc::fmt::format::format_inner(v48, &v31, v7, v8, v9, v10);
      goto LABEL_30;
    case 2LL:
      if ( !*((_QWORD *)&v46 + 1) )
        goto LABEL_19;
      v7 = v46;
      v8 = *(unsigned __int8 *)v46;
      v22 = byte_22732[v8];
      if ( *((_QWORD *)&v46 + 1) == v22 )
        goto LABEL_19;
      v23 = *(unsigned __int8 *)(v46 + v22);
      if ( (v23 & 0x80u) != 0 )
      {
        v24 = v23 & 0x1F;
        v9 = *(_BYTE *)(v46 + v22 + 1) & 0x3F;
        if ( (unsigned __int8)v23 <= 0xDFu )
        {
          v8 = (unsigned int)v9 | (v24 << 6);
          v23 = v8;
        }
        else
        {
          v9 = (unsigned int)((_DWORD)v9 << 6);
          v25 = v9 | *(_BYTE *)(v46 + v22 + 2) & 0x3F;
          if ( (unsigned __int8)v23 < 0xF0u )
          {
            v8 = (unsigned int)(v24 << 12);
            v23 = v8 | v25;
          }
          else
          {
            v8 = (unsigned __int8)(v23 & 7) << 18;
            v23 = v8 | (v25 << 6) | *(_BYTE *)(v46 + v22 + 3) & 0x3F;
            if ( v23 == 1114112 )
LABEL_19:
              v23 = 0;
          }
        }
      }
      LODWORD(v37) = v23;
      v39.m256i_i64[0] = (__int64)&v37;
      v39.m256i_i64[1] = (__int64)<char as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &off_15BB00;
      *((_QWORD *)&v31 + 1) = 1LL;
      v33 = 0LL;
      *(_QWORD *)&v32 = &v39;
      *((_QWORD *)&v32 + 1) = 1LL;
      v11 = v49;
      alloc::fmt::format::format_inner(v49, &v31, v7, v8, v9, v10);
      goto LABEL_30;
    case 3LL:
      v39.m256i_i64[0] = (__int64)&v45;
      v39.m256i_i64[1] = (__int64)<alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &off_15BB10;
      *((_QWORD *)&v31 + 1) = 2LL;
      v33 = 0LL;
      *(_QWORD *)&v32 = &v39;
      *((_QWORD *)&v32 + 1) = 1LL;
      v11 = v50;
      alloc::fmt::format::format_inner(v50, &v31, v7, v8, v9, v10);
LABEL_30:
      v26 = *(_QWORD *)v11;
      v27 = *((_QWORD *)v11 + 1);
      v28 = *((_QWORD *)v11 + 2);
      v29 = _rust_alloc(32LL, 8LL);
      if ( !v29 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *(_QWORD *)v29 = v26;
      *(_QWORD *)(v29 + 8) = v27;
      *(_QWORD *)(v29 + 16) = v28;
      *(_DWORD *)(v29 + 24) = 1;
      *(_QWORD *)(a1 + 8) = v29;
      *(_QWORD *)(a1 + 16) = &off_15B870;
      *(_QWORD *)a1 = 6LL;
      if ( v45 != 0x8000000000000000LL && v45 )
        _rust_dealloc(v46, v45, 1LL);
      return a1;
  }
}
