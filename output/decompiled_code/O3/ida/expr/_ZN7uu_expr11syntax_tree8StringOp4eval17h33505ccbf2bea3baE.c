char __fastcall uu_expr::syntax_tree::StringOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // r15
  char v10; // dl
  char v11; // dl
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int128 v15; // xmm0
  _OWORD *v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // r15
  __int64 v22; // rbp
  int v23; // r12d
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  unsigned __int64 v27; // rsi
  __int64 v28; // r13
  unsigned __int8 *v29; // rcx
  __int64 v30; // rdx
  int v31; // esi
  int v32; // r8d
  int v33; // edi
  __int64 v34; // rdx
  bool v35; // zf
  __int128 v36; // xmm0
  char is_truthy; // al
  _OWORD *v38; // rcx
  __int128 v39; // xmm0
  __int128 *v40; // rdi
  __int64 v41; // rdx
  __int128 v42; // xmm0
  void *v43; // r13
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int128 v49; // [rsp+0h] [rbp-1E8h] BYREF
  __int128 v50; // [rsp+10h] [rbp-1D8h]
  _BYTE ptr[48]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-198h]
  __int128 v53; // [rsp+60h] [rbp-188h] BYREF
  __int128 v54; // [rsp+70h] [rbp-178h]
  __int128 v55; // [rsp+80h] [rbp-168h]
  __int64 v56; // [rsp+90h] [rbp-158h]
  __int128 v57; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-138h]
  __int64 v59; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-120h]
  __int64 v61; // [rsp+D0h] [rbp-118h]
  unsigned __int8 *v62; // [rsp+D8h] [rbp-110h]
  __int64 v63; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-100h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-F8h]
  __int128 v66; // [rsp+100h] [rbp-E8h]
  __int64 v67; // [rsp+110h] [rbp-D8h]
  __int64 v68; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+120h] [rbp-C8h]
  __int64 v70; // [rsp+128h] [rbp-C0h]
  __int128 v71; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+140h] [rbp-A8h]
  __int128 v73; // [rsp+150h] [rbp-98h] BYREF
  __int128 v74; // [rsp+160h] [rbp-88h]
  __int128 v75; // [rsp+170h] [rbp-78h] BYREF
  __int128 v76; // [rsp+180h] [rbp-68h]
  __int128 v77; // [rsp+190h] [rbp-58h] BYREF
  __int128 v78; // [rsp+1A0h] [rbp-48h]

  switch ( a2 )
  {
    case 0:
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a3);
      v71 = *(_OWORD *)&ptr[8];
      v72 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
      {
        v7 = v71;
        v8 = v72;
        goto LABEL_14;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v59, &v71);
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a4);
      v73 = *(_OWORD *)&ptr[8];
      v74 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
      {
        v12 = v73;
        *(_OWORD *)(a1 + 24) = v74;
        *(_OWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string(&v64, &v73);
        *(_QWORD *)&v53 = &v64;
        *((_QWORD *)&v53 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)ptr = &off_16A920;
        *(_QWORD *)&ptr[8] = 1LL;
        *(_QWORD *)&ptr[32] = 0LL;
        *(_QWORD *)&ptr[16] = &v53;
        *(_QWORD *)&ptr[24] = 1LL;
        alloc::fmt::format::format_inner(&v68, ptr);
        v18 = v68;
        v19 = v69;
        LOBYTE(v6) = onig::Regex::with_options_and_encoding(ptr, v69, v70, 0LL, &OnigSyntaxGrep);
        if ( *(_QWORD *)ptr == 0x8000000000000000LL )
        {
          v43 = *(void **)&ptr[8];
          v63 = *(_QWORD *)&ptr[8];
          if ( (unsigned int)onig_number_of_captures(*(_QWORD *)&ptr[8]) )
          {
            v44 = v60;
            onig::find::<impl onig::Regex>::captures(&v53, &v63, v60, v61);
            if ( (_QWORD)v53 )
            {
              v52 = v56;
              *(_OWORD *)&ptr[32] = v55;
              *(_OWORD *)&ptr[16] = v54;
              *(_OWORD *)ptr = v53;
              v46 = uu_expr::syntax_tree::StringOp::eval::{{closure}}(ptr);
            }
            else
            {
              v46 = 0LL;
            }
            if ( !v46 )
              v45 = 0LL;
            v47 = 1LL;
            if ( v46 )
              v47 = v46;
            <T as alloc::slice::hack::ConvertVec>::to_vec(ptr, v47, v45);
            *(_QWORD *)&v50 = *(_QWORD *)&ptr[16];
            v49 = *(_OWORD *)ptr;
          }
          else
          {
            v44 = v60;
            onig::Regex::find(&v57, &v63, v60, v61);
            <T as alloc::slice::hack::ConvertVec>::to_vec(ptr, a0_0, 1LL);
            *(_QWORD *)&v54 = *(_QWORD *)&ptr[16];
            v53 = *(_OWORD *)ptr;
            core::option::Option<T>::map_or(&v49, &v57, &v53);
          }
          *(_QWORD *)(a1 + 32) = v50;
          *(_OWORD *)(a1 + 16) = v49;
          *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0LL;
          LOBYTE(v6) = onig_free(v43);
          if ( v18 )
            LOBYTE(v6) = _rust_dealloc(v19, v18, 1LL);
          if ( v64 )
            LOBYTE(v6) = _rust_dealloc(v65, v64, 1LL);
          if ( v59 )
            LOBYTE(v6) = _rust_dealloc(v44, v59, 1LL);
          return (char)v6;
        }
        if ( *(_QWORD *)ptr )
          LOBYTE(v6) = _rust_dealloc(*(_QWORD *)&ptr[8], *(_QWORD *)ptr, 1LL);
        *(_QWORD *)(a1 + 8) = 5LL;
        *(_QWORD *)a1 = 1LL;
        if ( v18 )
          LOBYTE(v6) = _rust_dealloc(v19, v18, 1LL);
        if ( v64 )
          LOBYTE(v6) = _rust_dealloc(v65, v64, 1LL);
      }
      v13 = v59;
      if ( v59 )
      {
        v14 = v60;
        goto LABEL_85;
      }
      return (char)v6;
    case 1:
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a3);
      v75 = *(_OWORD *)&ptr[8];
      v76 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
      {
        v7 = v75;
        v8 = v76;
        goto LABEL_14;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v49, &v75);
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a4);
      v77 = *(_OWORD *)&ptr[8];
      v78 = *(_OWORD *)&ptr[24];
      if ( !*(_QWORD *)ptr )
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string(&v57, &v77);
        LOBYTE(v6) = BYTE8(v49);
        v62 = (unsigned __int8 *)*((_QWORD *)&v49 + 1);
        if ( (_QWORD)v50 )
        {
          v20 = v62;
          v21 = &v62[v50];
          v22 = 0LL;
          do
          {
            v23 = *v20;
            if ( (v23 & 0x80u) != 0 )
            {
              v24 = v23 & 0x1F;
              v25 = v20[1] & 0x3F;
              if ( (unsigned __int8)v23 <= 0xDFu )
              {
                v20 += 2;
                v23 = v25 | (v24 << 6);
              }
              else
              {
                v26 = (v25 << 6) | v20[2] & 0x3F;
                if ( (unsigned __int8)v23 < 0xF0u )
                {
                  v23 = (v24 << 12) | v26;
                  v20 += 3;
                }
                else
                {
                  LODWORD(v6) = (v23 & 7) << 18;
                  v23 = (unsigned int)v6 | (v26 << 6) | v20[3] & 0x3F;
                  if ( v23 == 1114112 )
                    break;
                  v20 += 4;
                }
              }
            }
            else
            {
              ++v20;
            }
            v27 = (unsigned __int64)&v57;
            <alloc::string::String as core::clone::Clone>::clone(&v53, &v57);
            ++v22;
            v28 = *((_QWORD *)&v53 + 1);
            v6 = (unsigned __int8 *)(*((_QWORD *)&v53 + 1) + v54);
            v29 = (unsigned __int8 *)*((_QWORD *)&v53 + 1);
            while ( v29 != v6 )
            {
              v30 = *v29;
              if ( (v30 & 0x80u) == 0LL )
              {
                ++v29;
              }
              else
              {
                v31 = v30 & 0x1F;
                v32 = v29[1] & 0x3F;
                if ( (unsigned __int8)v30 <= 0xDFu )
                {
                  v29 += 2;
                  v27 = v32 | (unsigned int)(v31 << 6);
                  v30 = (unsigned int)v27;
                }
                else
                {
                  v33 = (v32 << 6) | v29[2] & 0x3F;
                  if ( (unsigned __int8)v30 < 0xF0u )
                  {
                    v29 += 3;
                    v27 = (unsigned int)(v31 << 12);
                    v30 = (unsigned int)v27 | v33;
                  }
                  else
                  {
                    v27 = (unsigned __int8)(v30 & 7) << 18;
                    v30 = (unsigned int)v27 | (v33 << 6) | v29[3] & 0x3F;
                    if ( (_DWORD)v30 == 1114112 )
                      break;
                    v29 += 4;
                  }
                }
              }
              if ( (_DWORD)v30 == v23 )
              {
                if ( v22 )
                {
                  *(_OWORD *)ptr = xmmword_648E8;
                  *(_QWORD *)&ptr[16] = 0LL;
                  alloc::raw_vec::RawVec<T,A>::grow_one(ptr, v27, v30, v29);
                  **(_QWORD **)&ptr[8] = v22;
                  v66 = *(_OWORD *)ptr;
                  v67 = 1LL;
                  LOBYTE(v6) = 2;
                }
                else
                {
                  v66 = xmmword_603F8;
                  v67 = 0LL;
                  LOBYTE(v6) = 1;
                }
                *(_QWORD *)(a1 + 24) = v67;
                *(_OWORD *)(a1 + 8) = v66;
                *(_BYTE *)(a1 + 32) = (_BYTE)v6;
                *(_DWORD *)(a1 + 33) = 0;
                *(_DWORD *)(a1 + 36) = 0;
                *(_QWORD *)a1 = 0LL;
                if ( (_QWORD)v53 )
                  LOBYTE(v6) = _rust_dealloc(v28, v53, 1LL);
                if ( (_QWORD)v57 )
                  LOBYTE(v6) = _rust_dealloc(*((_QWORD *)&v57 + 1), v57, 1LL);
                goto LABEL_27;
              }
            }
            if ( (_QWORD)v53 )
              LOBYTE(v6) = _rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1LL);
          }
          while ( v20 != v21 );
        }
        *(_OWORD *)(a1 + 8) = xmmword_603F8;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_BYTE *)(a1 + 32) = 1;
        *(_DWORD *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        *(_QWORD *)a1 = 0LL;
        if ( (_QWORD)v57 )
          LOBYTE(v6) = _rust_dealloc(*((_QWORD *)&v57 + 1), v57, 1LL);
        if ( (_QWORD)v49 )
          LOBYTE(v6) = _rust_dealloc(v62, v49, 1LL);
        return (char)v6;
      }
      v15 = v77;
      *(_OWORD *)(a1 + 24) = v78;
      *(_OWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = 1LL;
LABEL_27:
      v13 = v49;
      if ( (_QWORD)v49 )
      {
        v14 = *((_QWORD *)&v49 + 1);
        goto LABEL_85;
      }
      return (char)v6;
    case 2:
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a3);
      v53 = *(_OWORD *)&ptr[8];
      v54 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
        goto LABEL_11;
      v50 = v54;
      v49 = v53;
      v9 = v53;
      if ( (_QWORD)v53 != 0x8000000000000000LL )
      {
        if ( BYTE8(v50) != 1 )
          goto LABEL_81;
LABEL_30:
        *(_OWORD *)(a1 + 8) = xmmword_603F8;
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_BYTE *)(a1 + 32) = 1;
        *(_DWORD *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        goto LABEL_31;
      }
      LOBYTE(v6) = BYTE8(v50);
      if ( !*((_QWORD *)&v50 + 1) )
        goto LABEL_30;
      if ( *((_QWORD *)&v50 + 1) == 1LL )
      {
        v10 = *(_BYTE *)v50;
        if ( *(_BYTE *)v50 == 45 )
          goto LABEL_81;
      }
      else
      {
        v10 = *(_BYTE *)v50;
      }
      if ( v10 == 48 || v10 == 45 )
      {
        v34 = 1LL;
        while ( *((_QWORD *)&v50 + 1) != v34 )
        {
          v35 = *(_BYTE *)(v50 + v34++) == 48;
          if ( !v35 )
            goto LABEL_81;
        }
        goto LABEL_30;
      }
LABEL_81:
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a4);
      v53 = *(_OWORD *)&ptr[8];
      v54 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
      {
LABEL_82:
        v36 = v53;
        *(_OWORD *)(a1 + 24) = v54;
        *(_OWORD *)(a1 + 8) = v36;
        *(_QWORD *)a1 = 1LL;
        if ( v9 == 0x8000000000000000LL )
          goto LABEL_83;
LABEL_32:
        if ( v9 )
          LOBYTE(v6) = _rust_dealloc(*((_QWORD *)&v49 + 1), 8 * v9, 8LL);
        return (char)v6;
      }
      v58 = v54;
      v57 = v53;
      is_truthy = uu_expr::syntax_tree::is_truthy(&v57);
      v38 = (_OWORD *)(a1 + 8);
      if ( is_truthy )
      {
        v39 = v49;
        *(_OWORD *)(a1 + 24) = v50;
        *v38 = v39;
        *(_QWORD *)a1 = 0LL;
        v40 = &v57;
        goto LABEL_99;
      }
      *v38 = xmmword_603F8;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_BYTE *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 33) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0LL;
      LOBYTE(v6) = core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v57);
      if ( v9 != 0x8000000000000000LL )
        goto LABEL_32;
LABEL_83:
      v13 = *((_QWORD *)&v49 + 1);
      if ( *((_QWORD *)&v49 + 1) )
      {
        v14 = v50;
LABEL_85:
        LOBYTE(v6) = _rust_dealloc(v14, v13, 1LL);
      }
      return (char)v6;
    case 3:
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a3);
      v53 = *(_OWORD *)&ptr[8];
      v54 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
      {
LABEL_11:
        v7 = v53;
        v8 = v54;
LABEL_14:
        *(_OWORD *)(a1 + 24) = v8;
        *(_OWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = 1LL;
        return (char)v6;
      }
      v50 = v54;
      v49 = v53;
      v9 = v53;
      if ( (_QWORD)v53 == 0x8000000000000000LL )
      {
        LOBYTE(v6) = BYTE8(v50);
        if ( *((_QWORD *)&v50 + 1) )
        {
          if ( *((_QWORD *)&v50 + 1) == 1LL )
          {
            v11 = *(_BYTE *)v50;
            if ( *(_BYTE *)v50 == 45 )
              goto LABEL_94;
          }
          else
          {
            v11 = *(_BYTE *)v50;
          }
          if ( v11 != 48 && v11 != 45 )
            goto LABEL_94;
          v41 = 1LL;
          while ( *((_QWORD *)&v50 + 1) != v41 )
          {
            v35 = *(_BYTE *)(v50 + v41++) == 48;
            if ( !v35 )
              goto LABEL_94;
          }
        }
      }
      else if ( BYTE8(v50) != 1 )
      {
LABEL_94:
        v42 = v49;
        *(_OWORD *)(a1 + 24) = v50;
        *(_OWORD *)(a1 + 8) = v42;
        *(_QWORD *)a1 = 0LL;
        return (char)v6;
      }
      LOBYTE(v6) = uu_expr::syntax_tree::AstNode::eval(ptr, a4);
      v53 = *(_OWORD *)&ptr[8];
      v54 = *(_OWORD *)&ptr[24];
      if ( *(_QWORD *)ptr )
        goto LABEL_82;
      v58 = v54;
      v57 = v53;
      LOBYTE(v6) = uu_expr::syntax_tree::is_truthy(&v57);
      v16 = (_OWORD *)(a1 + 8);
      if ( (_BYTE)v6 )
      {
        v17 = v57;
        *(_OWORD *)(a1 + 24) = v58;
        *v16 = v17;
LABEL_31:
        *(_QWORD *)a1 = 0LL;
        if ( v9 == 0x8000000000000000LL )
          goto LABEL_83;
        goto LABEL_32;
      }
      *v16 = xmmword_603F8;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_BYTE *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 33) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v57);
      v40 = &v49;
LABEL_99:
      LOBYTE(v6) = core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v40);
      return (char)v6;
  }
}
