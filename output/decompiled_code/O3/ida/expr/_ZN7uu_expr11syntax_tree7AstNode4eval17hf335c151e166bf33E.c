__int64 __fastcall uu_expr::syntax_tree::AstNode::eval(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebp
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  void *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  char v18; // al
  void *v19; // rsi
  __int128 v21; // xmm0
  char v22; // bp
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rsi
  size_t v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r15
  char v30; // bp
  signed __int64 v31; // r12
  __int64 v32; // rax
  size_t v33; // rdx
  size_t v34; // r12
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdi
  char v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  char v41; // di
  __int64 v42; // rax
  size_t v43; // rdx
  int v44; // eax
  size_t v45; // rdx
  int v46; // eax
  size_t v47; // rdx
  int v48; // eax
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // rdi
  bool v54; // cf
  bool v55; // zf
  unsigned __int64 v56; // r9
  size_t v57; // rdi
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r9
  char v60; // al
  _BYTE v61[40]; // [rsp+0h] [rbp-238h] BYREF
  _BYTE v62[40]; // [rsp+30h] [rbp-208h] BYREF
  void *s2[2]; // [rsp+60h] [rbp-1D8h] BYREF
  __int128 v64; // [rsp+70h] [rbp-1C8h]
  void *s1[2]; // [rsp+80h] [rbp-1B8h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-1A8h]
  __int128 v67; // [rsp+A0h] [rbp-198h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-188h]
  __int128 v69; // [rsp+C0h] [rbp-178h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-168h]
  __int128 v71; // [rsp+E0h] [rbp-158h]
  __int64 v72; // [rsp+F0h] [rbp-148h]
  __int128 v73[2]; // [rsp+100h] [rbp-138h] BYREF
  __int128 v74[2]; // [rsp+120h] [rbp-118h] BYREF
  __int128 v75; // [rsp+140h] [rbp-F8h] BYREF
  __int128 v76; // [rsp+150h] [rbp-E8h]
  __int128 v77; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v78; // [rsp+170h] [rbp-C8h]
  __int128 v79; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v80; // [rsp+190h] [rbp-A8h]
  __int128 v81; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v82; // [rsp+1B0h] [rbp-88h]
  __int128 v83; // [rsp+1C0h] [rbp-78h] BYREF
  __int128 v84; // [rsp+1D0h] [rbp-68h]
  __int128 v85; // [rsp+1E0h] [rbp-58h] BYREF
  __int128 v86; // [rsp+1F0h] [rbp-48h]

  switch ( *(_BYTE *)a2 )
  {
    case 0:
      <alloc::string::String as core::clone::Clone>::clone(a1 + 16, a2 + 8);
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
LABEL_3:
      *(_QWORD *)a1 = 0LL;
      return a1;
    case 1:
      v7 = *(_QWORD *)(a2 + 16);
      v8 = *(unsigned __int8 *)(a2 + 1);
      if ( v8 == 2 )
      {
        uu_expr::syntax_tree::StringOp::eval(a1, *(_BYTE *)(a2 + 2), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
        return a1;
      }
      if ( v8 == 1 )
      {
        v9 = *(unsigned __int8 *)(a2 + 2);
        uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 8));
        v83 = *(_OWORD *)&v61[8];
        v84 = *(_OWORD *)&v61[24];
        if ( *(_QWORD *)v61 )
        {
          v5 = v83;
          v6 = v84;
LABEL_31:
          *(_OWORD *)(a1 + 24) = v6;
          *(_OWORD *)(a1 + 8) = v5;
          *(_QWORD *)a1 = 1LL;
          return a1;
        }
        uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v62, &v83);
        *(_OWORD *)s2 = *(_OWORD *)&v62[8];
        v64 = *(_OWORD *)&v62[24];
        if ( *(_QWORD *)v62 )
        {
          v5 = *(_OWORD *)s2;
          v6 = v64;
          goto LABEL_31;
        }
        v70 = v64;
        v69 = *(_OWORD *)s2;
        uu_expr::syntax_tree::AstNode::eval(v61, v7);
        v85 = *(_OWORD *)&v61[8];
        v86 = *(_OWORD *)&v61[24];
        if ( *(_QWORD *)v61 )
        {
          v23 = v85;
          v24 = v86;
        }
        else
        {
          uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v62, &v85);
          *(_OWORD *)s2 = *(_OWORD *)&v62[8];
          v64 = *(_OWORD *)&v62[24];
          if ( !*(_QWORD *)v62 )
          {
            v68 = v64;
            v67 = *(_OWORD *)s2;
            switch ( v9 )
            {
              case 0:
                *(_OWORD *)&v62[16] = v70;
                *(_OWORD *)v62 = v69;
                *(_OWORD *)&v61[16] = v68;
                *(_OWORD *)v61 = v67;
                ((void (__fastcall *)(void **, _BYTE *, _BYTE *))num_bigint::bigint::addition::<impl core::ops::arith::Add for num_bigint::bigint::BigInt>::add)(
                  s2,
                  v62,
                  v61);
                goto LABEL_160;
              case 1:
                *(_OWORD *)&v62[16] = v70;
                *(_OWORD *)v62 = v69;
                *(_OWORD *)&v61[16] = v68;
                *(_OWORD *)v61 = v67;
                ((void (__fastcall *)(void **, _BYTE *, _BYTE *))num_bigint::bigint::subtraction::<impl core::ops::arith::Sub for num_bigint::bigint::BigInt>::sub)(
                  s2,
                  v62,
                  v61);
                goto LABEL_160;
              case 2:
                *(_OWORD *)&v62[16] = v70;
                *(_OWORD *)v62 = v69;
                *(_OWORD *)&v61[16] = v68;
                *(_OWORD *)v61 = v67;
                ((void (__fastcall *)(void **, _BYTE *, _BYTE *))num_bigint::bigint::multiplication::<impl core::ops::arith::Mul for num_bigint::bigint::BigInt>::mul)(
                  s2,
                  v62,
                  v61);
LABEL_160:
                v49 = *(_OWORD *)s2;
                *(_OWORD *)n = v64;
                *(_OWORD *)s1 = *(_OWORD *)s2;
                *(_OWORD *)(a1 + 24) = v64;
                *(_OWORD *)(a1 + 8) = v49;
                goto LABEL_3;
              case 3:
                if ( BYTE8(v68) == 1 )
                  goto LABEL_158;
                num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
                  v61,
                  &v69,
                  &v67);
                v50 = *(_OWORD *)v61;
                *(_OWORD *)s1 = *(_OWORD *)v61;
                *(_OWORD *)n = *(_OWORD *)&v61[16];
                *(_OWORD *)(a1 + 24) = *(_OWORD *)&v61[16];
                *(_OWORD *)(a1 + 8) = v50;
                *(_QWORD *)a1 = 0LL;
                if ( (_QWORD)v67 )
                  _rust_dealloc(*((_QWORD *)&v67 + 1), 8 * v67, 8LL);
                break;
              case 4:
                if ( BYTE8(v68) != 1 )
                {
                  num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
                    v61,
                    &v69,
                    &v67);
                  if ( *(_QWORD *)v61 != 0x8000000000000000LL )
                  {
                    if ( *(_QWORD *)v61 )
                      _rust_dealloc(*(_QWORD *)&v61[8], 8LL * *(_QWORD *)v61, 8LL);
                    *(_OWORD *)&v62[16] = v70;
                    *(_OWORD *)v62 = v69;
                    *(_OWORD *)&v61[16] = v68;
                    *(_OWORD *)v61 = v67;
                    JUMPOUT(0xFEBBBLL);
                  }
                }
LABEL_158:
                JUMPOUT(0xFEC24LL);
            }
            goto LABEL_60;
          }
          v23 = *(_OWORD *)s2;
          v24 = v64;
        }
        *(_OWORD *)(a1 + 24) = v24;
        *(_OWORD *)(a1 + 8) = v23;
        *(_QWORD *)a1 = 1LL;
LABEL_60:
        if ( (_QWORD)v69 )
          _rust_dealloc(*((_QWORD *)&v69 + 1), 8 * v69, 8LL);
        return a1;
      }
      uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 8));
      *(_OWORD *)v62 = *(_OWORD *)&v61[8];
      *(_OWORD *)&v62[16] = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v5 = *(_OWORD *)v62;
        v6 = *(_OWORD *)&v62[16];
        goto LABEL_31;
      }
      v73[1] = *(_OWORD *)&v62[16];
      v73[0] = *(_OWORD *)v62;
      uu_expr::syntax_tree::AstNode::eval(v61, v7);
      *(_OWORD *)v62 = *(_OWORD *)&v61[8];
      *(_OWORD *)&v62[16] = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v21 = *(_OWORD *)v62;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v62[16];
        *(_OWORD *)(a1 + 8) = v21;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_229;
      }
      v74[1] = *(_OWORD *)&v62[16];
      v74[0] = *(_OWORD *)v62;
      uu_expr::syntax_tree::NumOrStr::to_bigint((__int64)v62, (__int64)v73);
      v25 = (__int64)v74;
      uu_expr::syntax_tree::NumOrStr::to_bigint((__int64)v61, (__int64)v74);
      v28 = *(_QWORD *)v62;
      v29 = *(_QWORD *)v61;
      if ( *(_QWORD *)v62 == 0x8000000000000000LL || *(_QWORD *)v61 == 0x8000000000000000LL )
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)s1, v73);
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)s2, v74);
        switch ( *(_BYTE *)(a2 + 2) )
        {
          case 0:
            v33 = v64;
            v34 = n[0] - v64;
            if ( n[0] < (unsigned __int64)v64 )
              v33 = n[0];
            v35 = memcmp(s1[1], s2[1], v33);
            if ( v35 )
              v34 = v35;
            v31 = v34 >> 63;
            break;
          case 1:
            v45 = v64;
            v31 = n[0] - v64;
            if ( n[0] < (unsigned __int64)v64 )
              v45 = n[0];
            v46 = memcmp(s1[1], s2[1], v45);
            if ( v46 )
              v31 = v46;
            LOBYTE(v31) = v31 <= 0;
            break;
          case 2:
            v26 = n[0];
            LOBYTE(v31) = n[0] == (_QWORD)v64 && bcmp(s1[1], s2[1], n[0]) == 0;
            break;
          case 3:
            v26 = n[0];
            LOBYTE(v31) = 1;
            if ( n[0] == (_QWORD)v64 )
              LOBYTE(v31) = bcmp(s1[1], s2[1], n[0]) != 0;
            break;
          case 4:
            v43 = v64;
            v31 = n[0] - v64;
            if ( n[0] < (unsigned __int64)v64 )
              v43 = n[0];
            v44 = memcmp(s1[1], s2[1], v43);
            if ( v44 )
              v31 = v44;
            LOBYTE(v31) = v31 > 0;
            break;
          case 5:
            v47 = v64;
            v31 = n[0] - v64;
            if ( n[0] < (unsigned __int64)v64 )
              v47 = n[0];
            v48 = memcmp(s1[1], s2[1], v47);
            if ( v48 )
              v31 = v48;
            LOBYTE(v31) = v31 >= 0;
            break;
        }
        if ( s2[0] )
          _rust_dealloc(s2[1], s2[0], 1LL);
        v25 = (__int64)s1[0];
        if ( s1[0] )
          _rust_dealloc(s1[1], s1[0], 1LL);
        v30 = 0;
LABEL_142:
        if ( v29 != 0x8000000000000000LL )
        {
LABEL_143:
          if ( v29 )
          {
            v25 = 8 * v29;
            _rust_dealloc(*(_QWORD *)&v61[8], 8 * v29, 8LL);
          }
        }
        if ( v28 != 0x8000000000000000LL && v28 )
        {
          v25 = 8 * v28;
          _rust_dealloc(*(_QWORD *)&v62[8], 8 * v28, 8LL);
        }
        if ( !(_BYTE)v31 )
        {
LABEL_226:
          *(_OWORD *)(a1 + 8) = xmmword_603F8;
          *(_QWORD *)(a1 + 24) = 0LL;
          v60 = 1;
          goto LABEL_227;
        }
LABEL_220:
        *(_OWORD *)v61 = xmmword_648E8;
        *(_QWORD *)&v61[16] = 0LL;
        alloc::raw_vec::RawVec<T,A>::grow_one(v61, v25, v26, v27);
        **(_QWORD **)&v61[8] = 1LL;
        *(_QWORD *)&v61[16] = 1LL;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v61;
        *(_QWORD *)(a1 + 24) = 1LL;
        v60 = 2;
LABEL_227:
        *(_BYTE *)(a1 + 32) = v60;
        *(_DWORD *)(a1 + 33) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        *(_QWORD *)a1 = 0LL;
        if ( !v30 )
          return a1;
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v74);
LABEL_229:
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v73);
        return a1;
      }
      switch ( *(_BYTE *)(a2 + 2) )
      {
        case 0:
          v30 = v62[24];
          if ( v62[24] != v61[24] )
          {
            LOBYTE(v31) = v62[24] < v61[24];
            v30 = 1;
            goto LABEL_143;
          }
          if ( v62[24] )
          {
            if ( v62[24] == 1 )
              goto LABEL_161;
            v25 = *(_QWORD *)&v62[16];
            v30 = 1;
            LOBYTE(v31) = *(_QWORD *)&v62[16] < *(_QWORD *)&v61[16];
            if ( *(_QWORD *)&v62[16] != *(_QWORD *)&v61[16] )
              goto LABEL_143;
            v32 = *(_QWORD *)&v61[8];
            v27 = *(_QWORD *)&v62[8];
          }
          else
          {
            v25 = *(_QWORD *)&v61[16];
            v30 = 1;
            LOBYTE(v31) = *(_QWORD *)&v61[16] < *(_QWORD *)&v62[16];
            if ( *(_QWORD *)&v61[16] != *(_QWORD *)&v62[16] )
              goto LABEL_143;
            v32 = *(_QWORD *)&v62[8];
            v27 = *(_QWORD *)&v61[8];
          }
          v26 = v27 + 8 * v25;
          v25 = v32 + 8 * v25;
          while ( 1 )
          {
            if ( v26 == v27 )
            {
              LOBYTE(v31) = v25 != v32;
              v30 = 1;
              goto LABEL_142;
            }
            v30 = 1;
            if ( v25 == v32 )
              break;
            v53 = *(_QWORD *)(v26 - 8);
            v26 -= 8LL;
            v54 = *(_QWORD *)(v25 - 8) < v53;
            v55 = *(_QWORD *)(v25 - 8) == v53;
            v25 -= 8LL;
            if ( !v55 )
            {
              LOBYTE(v31) = !v54 && !v55;
              goto LABEL_142;
            }
          }
          LOBYTE(v31) = 0;
          goto LABEL_142;
        case 1:
          v27 = v61[24];
          if ( v62[24] != v61[24] )
          {
            if ( v62[24] < v61[24] )
              goto LABEL_215;
            goto LABEL_221;
          }
          if ( v62[24] )
          {
            if ( v62[24] == 1 )
              goto LABEL_215;
            v26 = *(_QWORD *)&v62[16];
            v37 = *(_QWORD *)&v61[16];
            v38 = -1;
            if ( *(_QWORD *)&v62[16] >= *(_QWORD *)&v61[16] )
              v38 = *(_QWORD *)&v62[16] != *(_QWORD *)&v61[16];
            if ( v38 )
              goto LABEL_185;
            v39 = *(_QWORD *)&v61[8];
            v27 = *(_QWORD *)&v62[8];
          }
          else
          {
            v26 = *(_QWORD *)&v61[16];
            v37 = *(_QWORD *)&v62[16];
            v38 = -1;
            if ( *(_QWORD *)&v61[16] >= *(_QWORD *)&v62[16] )
              v38 = *(_QWORD *)&v61[16] != *(_QWORD *)&v62[16];
            if ( v38 )
              goto LABEL_185;
            v39 = *(_QWORD *)&v62[8];
            v27 = *(_QWORD *)&v61[8];
          }
          v25 = v27 + 8 * v26;
          v26 = v39 + 8 * v37;
          do
          {
            if ( v25 == v27 )
              goto LABEL_215;
            if ( v26 == v39 )
              goto LABEL_221;
            v56 = *(_QWORD *)(v26 - 8);
            v26 -= 8LL;
            v38 = v56 != *(_QWORD *)(v25 - 8);
            if ( v56 > *(_QWORD *)(v25 - 8) )
              v38 = -1;
            v25 -= 8LL;
          }
          while ( !v38 );
LABEL_185:
          if ( v38 != 1 )
            goto LABEL_215;
          goto LABEL_221;
        case 2:
          if ( v62[24] != v61[24] )
            goto LABEL_221;
          if ( v62[24] == 1 )
            goto LABEL_215;
          v26 = *(_QWORD *)&v62[16];
          v30 = 1;
          if ( *(_QWORD *)&v62[16] == *(_QWORD *)&v61[16] )
          {
            v25 = *(_QWORD *)&v61[8];
            LOBYTE(v31) = bcmp(*(const void **)&v62[8], *(const void **)&v61[8], 8LL * *(_QWORD *)&v62[16]) == 0;
          }
          else
          {
LABEL_161:
            LOBYTE(v31) = 0;
          }
          goto LABEL_143;
        case 3:
          if ( v62[24] != v61[24] )
            goto LABEL_215;
          if ( v62[24] == 1 )
            goto LABEL_221;
          v26 = *(_QWORD *)&v62[16];
          v30 = 1;
          if ( *(_QWORD *)&v62[16] == *(_QWORD *)&v61[16] )
          {
            v25 = *(_QWORD *)&v61[8];
            LOBYTE(v31) = bcmp(*(const void **)&v62[8], *(const void **)&v61[8], 8LL * *(_QWORD *)&v62[16]) != 0;
          }
          else
          {
            LOBYTE(v31) = 1;
          }
          goto LABEL_143;
        case 4:
          v26 = v61[24];
          if ( v62[24] != v61[24] )
          {
            v27 = (unsigned int)-(v62[24] < v61[24]);
            LOBYTE(v27) = v62[24] < v61[24] ? -1 : 1;
            goto LABEL_130;
          }
          if ( v62[24] )
          {
            if ( v62[24] == 1 )
            {
              v27 = 0LL;
              goto LABEL_130;
            }
            v25 = *(_QWORD *)&v62[16];
            v51 = *(_QWORD *)&v61[16];
            v27 = 255LL;
            if ( *(_QWORD *)&v62[16] >= *(_QWORD *)&v61[16] )
              v27 = *(_QWORD *)&v62[16] != *(_QWORD *)&v61[16];
            if ( (_BYTE)v27 )
              goto LABEL_130;
            v52 = *(_QWORD *)&v61[8];
            v26 = *(_QWORD *)&v62[8];
          }
          else
          {
            v25 = *(_QWORD *)&v61[16];
            v51 = *(_QWORD *)&v62[16];
            v27 = 255LL;
            if ( *(_QWORD *)&v61[16] >= *(_QWORD *)&v62[16] )
              v27 = *(_QWORD *)&v61[16] != *(_QWORD *)&v62[16];
            if ( (_BYTE)v27 )
              goto LABEL_130;
            v52 = *(_QWORD *)&v62[8];
            v26 = *(_QWORD *)&v61[8];
          }
          v57 = v26 + 8 * v25;
          v25 = v52 + 8 * v51;
          do
          {
            if ( v57 == v26 )
            {
              LOBYTE(v27) = -(v25 != v52);
              break;
            }
            if ( v25 == v52 )
            {
              LOBYTE(v27) = 1;
              break;
            }
            v58 = *(_QWORD *)(v25 - 8);
            v25 -= 8LL;
            v27 = v58 != *(_QWORD *)(v57 - 8);
            if ( v58 > *(_QWORD *)(v57 - 8) )
              v27 = 255LL;
            v57 -= 8LL;
          }
          while ( !(_BYTE)v27 );
LABEL_130:
          LOBYTE(v31) = (_BYTE)v27 == 1;
          v30 = 1;
          goto LABEL_142;
        case 5:
          v27 = v61[24];
          if ( v62[24] == v61[24] )
          {
            if ( !v62[24] )
            {
              v26 = *(_QWORD *)&v61[16];
              v40 = *(_QWORD *)&v62[16];
              v41 = -1;
              if ( *(_QWORD *)&v61[16] >= *(_QWORD *)&v62[16] )
                v41 = *(_QWORD *)&v61[16] != *(_QWORD *)&v62[16];
              if ( v41 )
                goto LABEL_214;
              v42 = *(_QWORD *)&v62[8];
              v27 = *(_QWORD *)&v61[8];
LABEL_202:
              v25 = v27 + 8 * v26;
              v26 = v42 + 8 * v40;
              while ( v25 != v27 )
              {
                if ( v26 == v42 )
                  goto LABEL_215;
                v59 = *(_QWORD *)(v26 - 8);
                v26 -= 8LL;
                v41 = v59 != *(_QWORD *)(v25 - 8);
                if ( v59 > *(_QWORD *)(v25 - 8) )
                  v41 = -1;
                v25 -= 8LL;
                if ( v41 )
                  goto LABEL_214;
              }
              v41 = -(v26 != v42);
LABEL_214:
              if ( (unsigned __int8)v41 < 2u )
                goto LABEL_215;
LABEL_221:
              if ( *(_QWORD *)v61 )
                _rust_dealloc(*(_QWORD *)&v61[8], 8LL * *(_QWORD *)v61, 8LL);
              if ( v28 )
                _rust_dealloc(*(_QWORD *)&v62[8], 8 * v28, 8LL);
              v30 = 1;
              goto LABEL_226;
            }
            if ( v62[24] != 1 )
            {
              v26 = *(_QWORD *)&v62[16];
              v40 = *(_QWORD *)&v61[16];
              v41 = -1;
              if ( *(_QWORD *)&v62[16] >= *(_QWORD *)&v61[16] )
                v41 = *(_QWORD *)&v62[16] != *(_QWORD *)&v61[16];
              if ( v41 )
                goto LABEL_214;
              v42 = *(_QWORD *)&v61[8];
              v27 = *(_QWORD *)&v62[8];
              goto LABEL_202;
            }
          }
          else if ( v62[24] < v61[24] )
          {
            goto LABEL_221;
          }
LABEL_215:
          if ( *(_QWORD *)v61 )
          {
            v25 = 8LL * *(_QWORD *)v61;
            _rust_dealloc(*(_QWORD *)&v61[8], 8LL * *(_QWORD *)v61, 8LL);
          }
          if ( v28 )
          {
            v25 = 8 * v28;
            _rust_dealloc(*(_QWORD *)&v62[8], 8 * v28, 8LL);
          }
          v30 = 1;
          goto LABEL_220;
      }
    case 2:
      uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 8));
      v75 = *(_OWORD *)&v61[8];
      v76 = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v5 = v75;
        v6 = v76;
        goto LABEL_31;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)s1, &v75);
      uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 16));
      v77 = *(_OWORD *)&v61[8];
      v78 = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v10 = v77;
        v11 = v78;
LABEL_70:
        *(_OWORD *)(a1 + 24) = v11;
        *(_OWORD *)(a1 + 8) = v10;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_71;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v62, &v77);
      if ( *(_QWORD *)v62 )
      {
        if ( (unsigned __int64)(*(_QWORD *)&v62[8] - 2LL) >= 4 && *(_QWORD *)&v62[16] )
          _rust_dealloc(*(_QWORD *)&v62[24], *(_QWORD *)&v62[16], 1LL);
        goto LABEL_67;
      }
      if ( *(_QWORD *)&v62[8] == 0x8000000000000000LL )
      {
LABEL_67:
        v2 = 0LL;
        goto LABEL_68;
      }
      v22 = 1;
      if ( !v62[32] )
        goto LABEL_64;
      if ( v62[32] == 1 || !*(_QWORD *)&v62[24] )
      {
        v2 = 0LL;
      }
      else
      {
        if ( *(_QWORD *)&v62[24] != 1LL )
          goto LABEL_64;
        v2 = **(_QWORD **)&v62[16];
      }
      v22 = 0;
LABEL_64:
      if ( *(_QWORD *)&v62[8] )
        _rust_dealloc(*(_QWORD *)&v62[16], 8LL * *(_QWORD *)&v62[8], 8LL);
      if ( v22 )
        goto LABEL_67;
LABEL_68:
      uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 24));
      v79 = *(_OWORD *)&v61[8];
      v80 = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v10 = v79;
        v11 = v80;
        goto LABEL_70;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v62, &v79);
      if ( *(_QWORD *)v62 )
      {
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(v62);
LABEL_81:
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 24) = 1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)a1 = 0LL;
LABEL_71:
        if ( s1[0] )
          _rust_dealloc(s1[1], s1[0], 1LL);
        return a1;
      }
      *(_OWORD *)s2 = *(_OWORD *)&v62[16];
      *(_QWORD *)&v64 = *(_QWORD *)&v62[32];
      if ( *(_QWORD *)&v62[8] == 0x8000000000000000LL )
        goto LABEL_81;
      *(_QWORD *)&v61[24] = v64;
      *(_OWORD *)&v61[8] = *(_OWORD *)s2;
      *(_QWORD *)v61 = *(_QWORD *)&v62[8];
      if ( !((__int64 (__fastcall *)(_BYTE *))uu_expr::syntax_tree::AstNode::eval::{{closure}})(v61) || !v2 || !v36 )
        goto LABEL_81;
      v12 = s1[1];
      *(void **)v61 = s1[1];
      *(_QWORD *)&v61[8] = (char *)s1[1] + n[0];
      *(_QWORD *)&v61[16] = v2 - 1;
      *(_QWORD *)&v61[24] = v36;
      ((void (__fastcall *)(_BYTE *, _BYTE *))<alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter)(
        v62,
        v61);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v62[16];
      *(_OWORD *)(a1 + 16) = *(_OWORD *)v62;
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0LL;
      v19 = s1[0];
      if ( s1[0] )
        goto LABEL_28;
      return a1;
    case 3:
      uu_expr::syntax_tree::AstNode::eval(v61, *(_QWORD *)(a2 + 8));
      v81 = *(_OWORD *)&v61[8];
      v82 = *(_OWORD *)&v61[24];
      if ( *(_QWORD *)v61 )
      {
        v5 = v81;
        v6 = v82;
        goto LABEL_31;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v62, &v81);
      v12 = *(void **)&v62[8];
      v13 = *(_QWORD *)&v62[16];
      if ( *(_QWORD *)&v62[16] >= 0x20uLL )
        v14 = core::str::count::do_count_chars(*(_QWORD *)&v62[8]);
      else
        v14 = core::str::count::char_count_general_case(*(_QWORD *)&v62[8]);
      v17 = v14;
      if ( v14 )
      {
        *(_OWORD *)v61 = xmmword_648E8;
        *(_QWORD *)&v61[16] = 0LL;
        alloc::raw_vec::RawVec<T,A>::grow_one(v61, v13, v15, v16);
        **(_QWORD **)&v61[8] = v17;
        v71 = *(_OWORD *)v61;
        v72 = 1LL;
        v18 = 2;
      }
      else
      {
        v71 = xmmword_603F8;
        v72 = 0LL;
        v18 = 1;
      }
      *(_QWORD *)(a1 + 24) = v72;
      *(_OWORD *)(a1 + 8) = v71;
      *(_BYTE *)(a1 + 32) = v18;
      *(_DWORD *)(a1 + 33) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_QWORD *)a1 = 0LL;
      v19 = *(void **)v62;
      if ( *(_QWORD *)v62 )
LABEL_28:
        _rust_dealloc(v12, v19, 1LL);
      return a1;
  }
}
