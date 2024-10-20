_BYTE *__fastcall uu_split::strategy::NumberType::from(__int64 a1, const void *a2, signed __int64 a3)
{
  _QWORD *v4; // rbp
  _BYTE *v5; // rbp
  unsigned __int8 *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int8 *v9; // rcx
  _BYTE *v10; // rax
  int v11; // edx
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // r15
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // r15
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // r15
  _BYTE *result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r15
  unsigned __int8 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int8 *v26; // rbx
  unsigned __int8 *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rax
  void *v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  unsigned __int8 *v34; // r15
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // r12
  unsigned __int8 *v38; // r13
  _QWORD *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  _QWORD *v43; // [rsp+0h] [rbp-198h]
  __int64 v44; // [rsp+8h] [rbp-190h] BYREF
  _BYTE v45[24]; // [rsp+10h] [rbp-188h] BYREF
  __int16 v46; // [rsp+28h] [rbp-170h]
  char v47; // [rsp+2Ah] [rbp-16Eh]
  __int128 v48; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int8 *v49; // [rsp+40h] [rbp-158h]
  char v50; // [rsp+48h] [rbp-150h]
  __int128 v51; // [rsp+50h] [rbp-148h] BYREF
  __int128 v52; // [rsp+60h] [rbp-138h]
  __int64 *v53; // [rsp+70h] [rbp-128h]
  __int64 (__fastcall **v54)(); // [rsp+78h] [rbp-120h]
  __int64 v55; // [rsp+80h] [rbp-118h]
  char v56; // [rsp+88h] [rbp-110h]
  __int64 v57; // [rsp+90h] [rbp-108h] BYREF
  __int64 v58; // [rsp+98h] [rbp-100h]
  __int128 v59; // [rsp+A0h] [rbp-F8h]
  __int128 *v60; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+B8h] [rbp-E0h]
  __int64 v62; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-C8h]
  __int128 v64; // [rsp+E0h] [rbp-B8h]
  __int128 v65; // [rsp+F0h] [rbp-A8h]
  __int64 v66; // [rsp+108h] [rbp-90h] BYREF
  unsigned __int8 **v67; // [rsp+110h] [rbp-88h]
  __int64 v68; // [rsp+118h] [rbp-80h]
  _QWORD v69[7]; // [rsp+120h] [rbp-78h] BYREF
  char v70; // [rsp+158h] [rbp-40h]
  __int16 v71; // [rsp+160h] [rbp-38h]

  v69[0] = 0LL;
  v69[1] = a3;
  v69[2] = a2;
  v69[3] = a3;
  v69[4] = 0LL;
  v69[5] = a3;
  v69[6] = 0x2F0000002FLL;
  v70 = 1;
  v71 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v66, v69);
  v4 = v67;
  if ( v68 != 3 )
  {
    if ( v68 != 2 )
    {
      if ( v68 == 1 )
      {
        v5 = *v67;
        v43 = v67;
        v6 = v67[1];
        v46 = 0;
        v47 = 0;
        v44 = 0LL;
        *(_QWORD *)&v45[8] = 0LL;
        uucore::parser::parse_size::Parser::parse(&v57, &v44, v5, v6);
        if ( (_DWORD)v57 != 3 )
        {
          v7 = v58;
          v8 = v59;
LABEL_24:
          v44 = 0LL;
          *(_QWORD *)v45 = 1LL;
          *(_QWORD *)&v45[8] = 0LL;
          v55 = 32LL;
          v56 = 3;
          *(_QWORD *)&v51 = 0LL;
          *(_QWORD *)&v52 = 0LL;
          v53 = &v44;
          v54 = &off_10BFC8;
          v4 = v43;
          if ( (unsigned __int8)<str as core::fmt::Display>::fmt(*v43, v43[1], &v51) )
            core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
LABEL_87:
          result = v45;
          v42 = v44;
          v48 = *(_OWORD *)v45;
          if ( v7 )
            result = (_BYTE *)_rust_dealloc(v8, v7, 1LL);
          *(_OWORD *)(a1 + 16) = v48;
          *(_QWORD *)a1 = 0LL;
LABEL_90:
          *(_QWORD *)(a1 + 8) = v42;
          goto LABEL_91;
        }
        if ( *((_QWORD *)&v59 + 1) )
        {
          *(_QWORD *)&v48 = 0LL;
          *((_QWORD *)&v48 + 1) = v5;
          v49 = v6;
          v50 = 1;
          v60 = &v48;
          v61 = <os_display::Quoted as core::fmt::Display>::fmt;
          *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
          *((_QWORD *)&v51 + 1) = 2LL;
          v53 = 0LL;
          *(_QWORD *)&v52 = &v60;
          *((_QWORD *)&v52 + 1) = 1LL;
          alloc::fmt::format::format_inner(&v62, &v51);
          v7 = v62;
          v8 = v63;
          goto LABEL_24;
        }
        result = (_BYTE *)v59;
        if ( (_QWORD)v59 )
        {
          *(_QWORD *)(a1 + 8) = 0LL;
LABEL_35:
          *(_QWORD *)(a1 + 16) = result;
          *(_QWORD *)a1 = 2LL;
LABEL_74:
          v4 = v43;
          goto LABEL_91;
        }
        if ( !a3 )
        {
          v30 = &dword_0 + 1;
          v4 = v43;
          goto LABEL_51;
        }
        if ( a3 < 0 )
        {
          v28 = 0LL;
          goto LABEL_106;
        }
        v28 = 1LL;
        v29 = _rust_alloc(a3, 1LL);
        v4 = v43;
        if ( !v29 )
LABEL_106:
          alloc::raw_vec::handle_error(v28, a3);
        goto LABEL_49;
      }
LABEL_46:
      if ( !a3 )
      {
        v30 = &dword_0 + 1;
        goto LABEL_51;
      }
      if ( a3 < 0 )
      {
        v28 = 0LL;
        goto LABEL_106;
      }
      v28 = 1LL;
      v29 = _rust_alloc(a3, 1LL);
      if ( !v29 )
        goto LABEL_106;
LABEL_49:
      v30 = (void *)v29;
LABEL_51:
      result = memcpy(v30, a2, a3);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = v30;
      *(_QWORD *)(a1 + 24) = a3;
      goto LABEL_91;
    }
    v9 = v67[1];
    if ( v9 )
    {
      v10 = *v67;
      v11 = **v67;
      if ( v11 == 108 || v11 == 114 )
      {
        if ( v9 == (_BYTE *)&dword_0 + 1 )
        {
          if ( *v10 == 108 )
          {
            v12 = v67[2];
            v43 = v67;
            v13 = v67[3];
            v46 = 0;
            v47 = 0;
            v44 = 0LL;
            *(_QWORD *)&v45[8] = 0LL;
            uucore::parser::parse_size::Parser::parse(&v57, &v44, v12, v13);
            if ( (_DWORD)v57 == 3 )
            {
              if ( !*((_QWORD *)&v59 + 1) )
              {
                result = (_BYTE *)v59;
                *(_QWORD *)(a1 + 8) = 2LL;
                goto LABEL_35;
              }
              *(_QWORD *)&v48 = 0LL;
              *((_QWORD *)&v48 + 1) = v12;
              v49 = v13;
              v50 = 1;
              v60 = &v48;
              v61 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
              *((_QWORD *)&v51 + 1) = 2LL;
              v53 = 0LL;
              *(_QWORD *)&v52 = &v60;
              *((_QWORD *)&v52 + 1) = 1LL;
              alloc::fmt::format::format_inner(&v62, &v51);
              v7 = v62;
              v8 = v63;
            }
            else
            {
              v7 = v58;
              v8 = v59;
            }
            v4 = v43;
            v44 = 0LL;
            *(_QWORD *)v45 = 1LL;
            *(_QWORD *)&v45[8] = 0LL;
            v55 = 32LL;
            v56 = 3;
            *(_QWORD *)&v51 = 0LL;
            *(_QWORD *)&v52 = 0LL;
            v53 = &v44;
            v54 = &off_10BFC8;
            if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[2], v43[3], &v51) )
              core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
            goto LABEL_87;
          }
          if ( *v10 == 114 )
          {
            v26 = v67[2];
            v43 = v67;
            v27 = v67[3];
            v46 = 0;
            v47 = 0;
            v44 = 0LL;
            *(_QWORD *)&v45[8] = 0LL;
            uucore::parser::parse_size::Parser::parse(&v57, &v44, v26, v27);
            if ( (_DWORD)v57 == 3 )
            {
              if ( !*((_QWORD *)&v59 + 1) )
              {
                result = (_BYTE *)v59;
                *(_QWORD *)(a1 + 8) = 4LL;
                goto LABEL_35;
              }
              *(_QWORD *)&v48 = 0LL;
              *((_QWORD *)&v48 + 1) = v26;
              v49 = v27;
              v50 = 1;
              v60 = &v48;
              v61 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
              *((_QWORD *)&v51 + 1) = 2LL;
              v53 = 0LL;
              *(_QWORD *)&v52 = &v60;
              *((_QWORD *)&v52 + 1) = 1LL;
              alloc::fmt::format::format_inner(&v62, &v51);
              v7 = v62;
              v8 = v63;
            }
            else
            {
              v7 = v58;
              v8 = v59;
            }
            v4 = v43;
            v44 = 0LL;
            *(_QWORD *)v45 = 1LL;
            *(_QWORD *)&v45[8] = 0LL;
            v55 = 32LL;
            v56 = 3;
            *(_QWORD *)&v51 = 0LL;
            *(_QWORD *)&v52 = 0LL;
            v53 = &v44;
            v54 = &off_10BFC8;
            if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[2], v43[3], &v51) )
              core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
            goto LABEL_87;
          }
        }
        goto LABEL_46;
      }
    }
    v16 = v67[2];
    v43 = v67;
    v17 = v67[3];
    v46 = 0;
    v47 = 0;
    v44 = 0LL;
    *(_QWORD *)&v45[8] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v57, &v44, v16, v17);
    if ( (_DWORD)v57 != 3 )
    {
      v7 = v58;
      v8 = v59;
LABEL_27:
      v4 = v43;
      v44 = 0LL;
      *(_QWORD *)v45 = 1LL;
      *(_QWORD *)&v45[8] = 0LL;
      v55 = 32LL;
      v56 = 3;
      *(_QWORD *)&v51 = 0LL;
      *(_QWORD *)&v52 = 0LL;
      v53 = &v44;
      v54 = &off_10BFC8;
      if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[2], v43[3], &v51) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
      goto LABEL_87;
    }
    if ( *((_QWORD *)&v59 + 1) )
    {
      *(_QWORD *)&v48 = 0LL;
      *((_QWORD *)&v48 + 1) = v16;
      v49 = v17;
      v50 = 1;
      v60 = &v48;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      *((_QWORD *)&v51 + 1) = 2LL;
      v53 = 0LL;
      *(_QWORD *)&v52 = &v60;
      *((_QWORD *)&v52 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v62, &v51);
      v7 = v62;
      v8 = v63;
      goto LABEL_27;
    }
    v21 = v59;
    v22 = *v43;
    v23 = (unsigned __int8 *)v43[1];
    v46 = 0;
    v47 = 0;
    v44 = 0LL;
    *(_QWORD *)&v45[8] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v57, &v44, v22, v23);
    v24 = v57;
    if ( v57 == 3 )
    {
      if ( !*((_QWORD *)&v59 + 1) )
      {
        result = (_BYTE *)v59;
LABEL_69:
        v4 = v43;
        if ( (unsigned __int64)(result - 1) < v21 )
        {
          *(_QWORD *)(a1 + 8) = 1LL;
LABEL_71:
          *(_QWORD *)(a1 + 16) = result;
          *(_QWORD *)(a1 + 24) = v21;
          *(_QWORD *)a1 = 2LL;
          goto LABEL_91;
        }
        <T as alloc::string::ToString>::to_string(&v51, v43);
        goto LABEL_73;
      }
      *(_QWORD *)&v48 = 0LL;
      *((_QWORD *)&v48 + 1) = v22;
      v49 = v23;
      v50 = 1;
      v60 = &v48;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      *((_QWORD *)&v51 + 1) = 2LL;
      v53 = 0LL;
      *(_QWORD *)&v52 = &v60;
      *((_QWORD *)&v52 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v62, &v51);
      v25 = v62;
      v64 = v63;
      v24 = 2LL;
    }
    else
    {
      v25 = v58;
      v64 = v59;
    }
    *(_QWORD *)&v51 = v24;
    *((_QWORD *)&v51 + 1) = v25;
    v52 = v64;
    uu_split::strategy::NumberType::from::{{closure}}(&v44, v43, &v51);
    v31 = v44;
    result = *(_BYTE **)v45;
    v65 = *(_OWORD *)&v45[8];
    if ( v44 != 2 )
    {
LABEL_58:
      *(_OWORD *)(a1 + 16) = v65;
      *(_QWORD *)a1 = v31;
      *(_QWORD *)(a1 + 8) = result;
      goto LABEL_74;
    }
    goto LABEL_69;
  }
  if ( v67[1] != (_BYTE *)&dword_0 + 1 )
    goto LABEL_46;
  if ( **v67 != 108 )
  {
    if ( **v67 != 114 )
      goto LABEL_46;
    v18 = v67[4];
    v43 = v67;
    v19 = v67[5];
    v46 = 0;
    v47 = 0;
    v44 = 0LL;
    *(_QWORD *)&v45[8] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v57, &v44, v18, v19);
    if ( (_DWORD)v57 != 3 )
    {
      v7 = v58;
      v8 = v59;
LABEL_63:
      v4 = v43;
      v44 = 0LL;
      *(_QWORD *)v45 = 1LL;
      *(_QWORD *)&v45[8] = 0LL;
      v55 = 32LL;
      v56 = 3;
      *(_QWORD *)&v51 = 0LL;
      *(_QWORD *)&v52 = 0LL;
      v53 = &v44;
      v54 = &off_10BFC8;
      if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[4], v43[5], &v51) )
        core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
      goto LABEL_87;
    }
    if ( *((_QWORD *)&v59 + 1) )
    {
      *(_QWORD *)&v48 = 0LL;
      *((_QWORD *)&v48 + 1) = v18;
      v49 = v19;
      v50 = 1;
      v60 = &v48;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      *((_QWORD *)&v51 + 1) = 2LL;
      v53 = 0LL;
      *(_QWORD *)&v52 = &v60;
      *((_QWORD *)&v52 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v62, &v51);
      v7 = v62;
      v8 = v63;
      goto LABEL_63;
    }
    v21 = v59;
    v37 = v43[2];
    v38 = (unsigned __int8 *)v43[3];
    v46 = 0;
    v47 = 0;
    v44 = 0LL;
    *(_QWORD *)&v45[8] = 0LL;
    uucore::parser::parse_size::Parser::parse(&v57, &v44, v37, v38);
    v4 = v43;
    v39 = v43 + 2;
    v40 = v57;
    if ( v57 == 3 )
    {
      if ( !*((_QWORD *)&v59 + 1) )
      {
        result = (_BYTE *)v59;
LABEL_101:
        if ( (unsigned __int64)(result - 1) < v21 )
        {
          *(_QWORD *)(a1 + 8) = 5LL;
          goto LABEL_71;
        }
        <T as alloc::string::ToString>::to_string(&v51, v39);
LABEL_73:
        result = (_BYTE *)v52;
        *(_QWORD *)(a1 + 24) = v52;
        *(_OWORD *)(a1 + 8) = v51;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_74;
      }
      *(_QWORD *)&v48 = 0LL;
      *((_QWORD *)&v48 + 1) = v37;
      v49 = v38;
      v50 = 1;
      v60 = &v48;
      v61 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
      *((_QWORD *)&v51 + 1) = 2LL;
      v53 = 0LL;
      *(_QWORD *)&v52 = &v60;
      *((_QWORD *)&v52 + 1) = 1LL;
      alloc::fmt::format::format_inner(&v62, &v51);
      v41 = v62;
      v64 = v63;
      v40 = 2LL;
    }
    else
    {
      v41 = v58;
      v64 = v59;
    }
    *(_QWORD *)&v51 = v40;
    *((_QWORD *)&v51 + 1) = v41;
    v52 = v64;
    uu_split::strategy::NumberType::from::{{closure}}(&v44, v39, &v51);
    v31 = v44;
    result = *(_BYTE **)v45;
    v65 = *(_OWORD *)&v45[8];
    if ( v44 != 2 )
      goto LABEL_58;
    v4 = v43;
    goto LABEL_101;
  }
  v14 = v67[4];
  v43 = v67;
  v15 = v67[5];
  v46 = 0;
  v47 = 0;
  v44 = 0LL;
  *(_QWORD *)&v45[8] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v57, &v44, v14, v15);
  if ( (_DWORD)v57 != 3 )
  {
    v7 = v58;
    v8 = v59;
LABEL_40:
    v4 = v43;
    v44 = 0LL;
    *(_QWORD *)v45 = 1LL;
    *(_QWORD *)&v45[8] = 0LL;
    v55 = 32LL;
    v56 = 3;
    *(_QWORD *)&v51 = 0LL;
    *(_QWORD *)&v52 = 0LL;
    v53 = &v44;
    v54 = &off_10BFC8;
    if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[4], v43[5], &v51) )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
    goto LABEL_87;
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    *(_QWORD *)&v48 = 0LL;
    *((_QWORD *)&v48 + 1) = v14;
    v49 = v15;
    v50 = 1;
    v60 = &v48;
    v61 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    *((_QWORD *)&v51 + 1) = 2LL;
    v53 = 0LL;
    *(_QWORD *)&v52 = &v60;
    *((_QWORD *)&v52 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v62, &v51);
    v7 = v62;
    v8 = v63;
    goto LABEL_40;
  }
  v32 = v59;
  v33 = v43[2];
  v34 = (unsigned __int8 *)v43[3];
  v46 = 0;
  v47 = 0;
  v44 = 0LL;
  *(_QWORD *)&v45[8] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v57, &v44, v33, v34);
  if ( (_DWORD)v57 != 3 )
  {
    v35 = v58;
    v36 = v59;
    goto LABEL_80;
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    *(_QWORD *)&v48 = 0LL;
    *((_QWORD *)&v48 + 1) = v33;
    v49 = v34;
    v50 = 1;
    v60 = &v48;
    v61 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    *((_QWORD *)&v51 + 1) = 2LL;
    v53 = 0LL;
    *(_QWORD *)&v52 = &v60;
    *((_QWORD *)&v52 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v62, &v51);
    v35 = v62;
    v36 = v63;
LABEL_80:
    v4 = v43;
    v44 = 0LL;
    *(_QWORD *)v45 = 1LL;
    *(_QWORD *)&v45[8] = 0LL;
    v55 = 32LL;
    v56 = 3;
    *(_QWORD *)&v51 = 0LL;
    *(_QWORD *)&v52 = 0LL;
    v53 = &v44;
    v54 = &off_10BFC8;
    if ( (unsigned __int8)<str as core::fmt::Display>::fmt(v43[2], v43[3], &v51) )
      core::result::unwrap_failed(aADisplayImplem_1, 55LL, &v48, &unk_10C010, &off_10BFF8);
    result = v45;
    v42 = v44;
    v48 = *(_OWORD *)v45;
    if ( v35 )
      result = (_BYTE *)_rust_dealloc(v36, v35, 1LL);
    *(_OWORD *)(a1 + 16) = v48;
    *(_QWORD *)a1 = 1LL;
    goto LABEL_90;
  }
  result = (_BYTE *)v59;
  v4 = v43;
  if ( (__int64)v59 - 1 >= v32 )
  {
    <T as alloc::string::ToString>::to_string(&v51, v43 + 2);
    goto LABEL_73;
  }
  *(_QWORD *)(a1 + 8) = 3LL;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = v32;
  *(_QWORD *)a1 = 2LL;
LABEL_91:
  if ( v66 )
    return (_BYTE *)_rust_dealloc(v4, 16 * v66, 8LL);
  return result;
}
