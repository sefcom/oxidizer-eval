__int64 __fastcall uu_expr::syntax_tree::Parser::parse_precedence(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r13
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int64 v14; // r15
  _QWORD *v15; // r14
  char v16; // al
  char v17; // bp
  _QWORD *v18; // r14
  char v19; // r13
  _OWORD *v20; // rax
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  char v24; // al
  char v25; // cl
  char v26; // dl
  int v27; // esi
  char v28; // di
  __int64 v29; // r8
  __int128 v31; // xmm0
  __int128 v32; // [rsp+0h] [rbp-128h] BYREF
  __int128 v33; // [rsp+10h] [rbp-118h]
  _QWORD *v34; // [rsp+20h] [rbp-108h]
  _QWORD *v35; // [rsp+28h] [rbp-100h]
  _OWORD *v36; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+38h] [rbp-F0h]
  __int128 v38; // [rsp+40h] [rbp-E8h]
  __int128 v39; // [rsp+50h] [rbp-D8h]
  __int128 v40; // [rsp+60h] [rbp-C8h]
  __int128 v41; // [rsp+70h] [rbp-B8h]
  __int128 v42; // [rsp+80h] [rbp-A8h]
  __int128 v43; // [rsp+90h] [rbp-98h]
  __int64 v44; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-78h]
  __int128 v46; // [rsp+C0h] [rbp-68h]
  __int64 v47; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-50h]
  __int128 v49; // [rsp+E8h] [rbp-40h]

  if ( a3 < 6 )
  {
    v5 = a3 + 1;
    uu_expr::syntax_tree::Parser::parse_precedence(&v47, a2, a3 + 1);
    if ( v47 )
    {
      v6 = v48;
      *(_OWORD *)(a1 + 24) = v49;
      *(_OWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      v37 = v5;
      v33 = v49;
      v32 = v48;
      v7 = a2[2];
      v35 = a2;
      if ( v7 < a2[1] )
      {
        v8 = *v35;
        if ( *v35 )
        {
          v9 = 16 * a3;
          v34 = *(_UNKNOWN **)((char *)&off_196E30 + v9);
          v10 = 24LL * *(_QWORD *)((char *)&off_196E30 + v9 + 8);
LABEL_8:
          v11 = 16 * v7;
          v12 = *(_QWORD *)(v8 + v11);
          v13 = *(_QWORD *)(v8 + v11 + 8);
          v14 = 0LL;
          v15 = v34;
          while ( v10 != v14 && v15 )
          {
            v16 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, *v15, v15[1]);
            v15 += 3;
            v14 += 24LL;
            if ( v16 )
            {
              v17 = v34[v14 / 8 - 1];
              if ( v17 == 3 )
                break;
              v18 = v35;
              if ( v35[2] == -1LL )
                core::panicking::panic_const::panic_const_add_overflow(&off_196CC8);
              v19 = BYTE1(v34[v14 / 8 - 1]);
              ++v35[2];
              uu_expr::syntax_tree::Parser::parse_precedence(&v44, v18, v37);
              if ( v44 )
              {
                v31 = v45;
                *(_OWORD *)(a1 + 24) = v46;
                *(_OWORD *)(a1 + 8) = v31;
                *(_QWORD *)a1 = 1LL;
                core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v32);
                return a1;
              }
              v39 = v46;
              v38 = v45;
              v40 = v32;
              v41 = v33;
              v20 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              if ( !v20 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v21 = v40;
              v20[1] = v41;
              *v20 = v21;
              v36 = v20;
              v42 = v38;
              v43 = v39;
              v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
              if ( !v22 )
                alloc::alloc::handle_alloc_error(8LL, 32LL);
              v23 = v42;
              v22[1] = v43;
              *v22 = v23;
              LOBYTE(v32) = 1;
              BYTE1(v32) = v17;
              BYTE2(v32) = v19;
              *((_QWORD *)&v32 + 1) = v36;
              *(_QWORD *)&v33 = v22;
              v7 = v18[2];
              if ( v7 < v18[1] )
              {
                v8 = *v35;
                if ( *v35 )
                  goto LABEL_8;
              }
              break;
            }
          }
        }
      }
      v24 = v32;
      v25 = BYTE1(v32);
      v26 = BYTE2(v32);
      v27 = *(_DWORD *)((char *)&v32 + 3);
      v28 = BYTE7(v32);
      v29 = *((_QWORD *)&v32 + 1);
      *(_OWORD *)(a1 + 24) = v33;
      *(_BYTE *)(a1 + 8) = v24;
      *(_BYTE *)(a1 + 9) = v25;
      *(_BYTE *)(a1 + 10) = v26;
      *(_DWORD *)(a1 + 11) = v27;
      *(_BYTE *)(a1 + 15) = v28;
      *(_QWORD *)(a1 + 16) = v29;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    uu_expr::syntax_tree::Parser::parse_simple_expression(a1);
  }
  return a1;
}
