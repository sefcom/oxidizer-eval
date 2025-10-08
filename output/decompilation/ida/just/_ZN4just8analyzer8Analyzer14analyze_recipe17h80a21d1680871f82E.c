__int64 __fastcall just::analyzer::Analyzer::analyze_recipe(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbx
  char is_continuation; // al
  int v14; // r14d
  _DWORD *v15; // r12
  _DWORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  char v36; // [rsp+Fh] [rbp-119h]
  __int64 v37; // [rsp+20h] [rbp-108h]
  __int128 v38; // [rsp+28h] [rbp-100h] BYREF
  __int128 v39; // [rsp+38h] [rbp-F0h]
  __int128 v40; // [rsp+48h] [rbp-E0h]
  __int128 v41; // [rsp+58h] [rbp-D0h]
  __int128 v42; // [rsp+68h] [rbp-C0h]
  _QWORD v43[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+90h] [rbp-98h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-88h]
  __int128 v46; // [rsp+B0h] [rbp-78h]
  __int128 v47; // [rsp+C0h] [rbp-68h]
  __int64 v48; // [rsp+D0h] [rbp-58h]
  const char *v49; // [rsp+D8h] [rbp-50h]
  __int64 v50; // [rsp+E0h] [rbp-48h]
  __int64 v51; // [rsp+E8h] [rbp-40h]
  __int64 v52; // [rsp+F0h] [rbp-38h]

  v43[0] = 0LL;
  v43[2] = 0LL;
  v2 = *(_QWORD *)(a2 + 88);
  if ( v2 )
  {
    v3 = 208 * v2;
    v4 = *(_QWORD *)(a2 + 80) + 128LL;
    v5 = 0;
    while ( 1 )
    {
      v6 = just::token::Token::lexeme(v4);
      if ( alloc::collections::btree::map::BTreeMap<K,V,A>::get(v43[0], v43[1], v6, v7) )
        break;
      v8 = just::token::Token::lexeme(v4);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v43, v8);
      if ( *(_DWORD *)(v4 - 128) != 18 || (v5 & 1) == 0 )
      {
        v5 |= *(_DWORD *)(v4 - 128) != 18;
      }
      else if ( *(_BYTE *)(v4 + 73) != 2 )
      {
        *((_QWORD *)&v44 + 1) = just::token::Token::lexeme(v4);
        *(_QWORD *)&v45 = v9;
        *(_QWORD *)&v44 = 0x8000000000000031LL;
        just::token::Token::error(&v38, v4, &v44);
        goto LABEL_26;
      }
      v4 += 208LL;
      v3 -= 208LL;
      if ( !v3 )
        goto LABEL_9;
    }
    v27 = just::token::Token::lexeme(a2 + 144);
    v29 = v28;
    v30 = just::token::Token::lexeme(v4);
    *((_QWORD *)&v44 + 1) = v27;
    *(_QWORD *)&v45 = v29;
    *((_QWORD *)&v45 + 1) = v30;
    *(_QWORD *)&v46 = v31;
    *(_QWORD *)&v44 = 0x800000000000001CLL;
    just::token::Token::error(&v38, v4, &v44);
    goto LABEL_26;
  }
LABEL_9:
  v10 = *(_QWORD *)(a2 + 8);
  v11 = 32LL * *(_QWORD *)(a2 + 16);
  v36 = *(_BYTE *)(a2 + 254);
  if ( (v36 & 1) != 0 )
  {
    while ( v11 )
    {
      v11 -= 32LL;
      just::line::Line::is_continuation(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
      v10 += 32LL;
    }
  }
  else
  {
    v12 = v10 + v11;
    is_continuation = 0;
    while ( 1 )
    {
      v14 = 0;
      if ( v10 == v12 )
        break;
      if ( (is_continuation & 1) == 0 )
      {
        if ( *(_QWORD *)(v10 + 16) )
        {
          v15 = *(_DWORD **)(v10 + 8);
          if ( *v15 == 18 )
          {
            v16 = v15 + 2;
            v37 = just::token::Token::lexeme(v16);
            v18 = v17;
            LODWORD(v44) = 0;
            v19 = core::char::methods::encode_utf8_raw(32LL, &v44);
            if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v37, v18, v19, v20)
              || (LODWORD(v44) = 0,
                  v21 = core::char::methods::encode_utf8_raw(9LL, &v44),
                  (unsigned __int8)core::slice::<impl [T]>::starts_with(v37, v18, v21, v22)) )
            {
              *(_QWORD *)&v44 = 0x8000000000000023LL;
              just::token::Token::error(&v38, v16, &v44);
              goto LABEL_26;
            }
          }
        }
      }
      LOBYTE(v14) = v10 != v12;
      is_continuation = just::line::Line::is_continuation(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
      v10 += (unsigned int)(32 * v14);
    }
  }
  if ( (v36 & 1) == 0 )
  {
    v23 = just::attribute_set::AttributeSet::get(a2 + 216, 4LL);
    if ( v23 )
    {
      v24 = just::token::Token::lexeme(a2 + 144);
      v26 = v25;
      <just::attribute::Attribute as core::clone::Clone>::clone(&v38, v23);
      v49 = aRecipe_1;
      v50 = 6LL;
      v51 = v24;
      v52 = v26;
      v44 = v38;
      v45 = v39;
      v46 = v40;
      v47 = v41;
      v48 = v42;
      just::token::Token::error(&v38, a2 + 144, &v44);
LABEL_26:
      *(_OWORD *)(a1 + 64) = v42;
      v32 = v38;
      v33 = v39;
      v34 = v40;
      *(_OWORD *)(a1 + 48) = v41;
      *(_OWORD *)(a1 + 32) = v34;
      *(_OWORD *)(a1 + 16) = v33;
      *(_OWORD *)a1 = v32;
      return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<&str>>(v43);
    }
  }
  *(_BYTE *)(a1 + 72) = 37;
  return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<&str>>(v43);
}