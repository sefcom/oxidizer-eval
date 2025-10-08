__int64 __fastcall ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_trailing_comment(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64); // rbp
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbp
  __int128 v12; // rax
  _QWORD *v13; // r13
  __int128 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int32 v19; // eax
  __int64 v20; // r15
  __int128 v21; // kr00_16
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // edi
  __int64 v25; // rdi
  __int128 v26; // rax
  int v27; // eax
  int v28; // edx
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int64 v31; // rax
  _DWORD *v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rbx
  __int64 v37; // rsi
  char **v38; // rdx
  const char *v39; // rdi
  __int32 v41; // [rsp+1Ch] [rbp-16Ch]
  __m256i v42; // [rsp+20h] [rbp-168h] BYREF
  __int128 v43; // [rsp+40h] [rbp-148h]
  __int64 v44; // [rsp+50h] [rbp-138h]
  __int64 v45; // [rsp+58h] [rbp-130h]
  __m256i v46; // [rsp+60h] [rbp-128h] BYREF
  __int128 v47; // [rsp+80h] [rbp-108h]
  __int64 v48; // [rsp+90h] [rbp-F8h]
  __int64 *v49; // [rsp+A0h] [rbp-E8h]
  __int64 v50; // [rsp+A8h] [rbp-E0h]
  __int64 v51; // [rsp+B0h] [rbp-D8h]
  __int64 v52; // [rsp+B8h] [rbp-D0h] BYREF
  _DWORD v53[3]; // [rsp+C4h] [rbp-C4h] BYREF
  _QWORD v54[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-98h]
  __int64 v57; // [rsp+100h] [rbp-88h]
  _QWORD v58[2]; // [rsp+108h] [rbp-80h] BYREF
  __int32 v59; // [rsp+118h] [rbp-70h] BYREF
  __int128 v60; // [rsp+11Ch] [rbp-6Ch]
  int v61; // [rsp+12Ch] [rbp-5Ch]
  _OWORD v62[2]; // [rsp+130h] [rbp-58h] BYREF
  __int64 v63; // [rsp+150h] [rbp-38h]

  v49 = a3;
  v5 = *a4;
  v6 = *(__int64 (__fastcall **)(__int64))(a4[1] + 48);
  v7 = v6(*a4);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v7 + 16));
  v52 = *(_QWORD *)(v7 + 16);
  v8 = (_QWORD *)v6(v5);
  v9 = *v8;
  v10 = v8[1];
  v11 = *a2;
  v41 = ruff_python_formatter::verbatim::Indentation::from_stmt(*a2, *v8, v10);
  *(_QWORD *)&v12 = ruff_python_formatter::statement::suite::<impl core::convert::From<ruff_python_formatter::statement::suite::SuiteChildStatement> for ruff_python_ast::generated::AnyNodeRef>::from(a2);
  v13 = (_QWORD *)(v52 + 16);
  *(_OWORD *)v42.m256i_i8 = v12;
  *(_QWORD *)&v14 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(v52 + 16));
  v50 = *((_QWORD *)&v14 + 1);
  v51 = v14;
  v55 = v14;
  *(_QWORD *)&v56 = v9;
  *((_QWORD *)&v56 + 1) = v10;
  LOBYTE(v57) = 0;
  <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(&v42, &v55);
  if ( v42.m256i_i32[0] == 4 )
    core::option::expect_failed(aSuppressedStat, 46LL, &off_57F888);
  v48 = v44;
  v47 = v43;
  v46 = v42;
  ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(&v42, &v46);
  v15 = v42.m256i_i64[2];
  if ( *((_QWORD *)&v55 + 1) )
  {
    v16 = v55;
    v17 = 12LL * *((_QWORD *)&v55 + 1);
    v18 = 0LL;
    do
    {
      *(_BYTE *)(v16 + v18 + 8) = 1;
      v18 += 12LL;
    }
    while ( v17 != v18 );
  }
  *(_BYTE *)(v15 + 8) = 1;
  <ruff_python_formatter::statement::suite::SuiteChildStatement as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
    &v42,
    a2,
    a4);
  v19 = v42.m256i_i32[0];
  if ( v42.m256i_i32[0] == 4 )
  {
    *(_BYTE *)(v15 + 8) = 0;
    v46.m256i_i64[0] = v15;
    <ruff_python_formatter::verbatim::TrailingFormatOffComment as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
      &v42,
      &v46,
      a4);
    v19 = v42.m256i_i32[0];
    if ( v42.m256i_i32[0] == 4 )
    {
      v45 = v11;
      v63 = v57;
      v62[1] = v56;
      v62[0] = v55;
      while ( 1 )
      {
        <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(&v42, v62);
        if ( v42.m256i_i64[0] == 4 )
          break;
        switch ( v42.m256i_i64[0] )
        {
          case 0LL:
          case 3LL:
            v37 = 40LL;
            v38 = &off_57F8F0;
            v39 = aInternalErrorE_1;
            goto LABEL_33;
          case 1LL:
            v20 = v42.m256i_i64[1];
            v21 = v43;
            v22 = v44;
            *(_BYTE *)(v43 + 8) = 0;
            if ( v22 )
            {
              v23 = 0LL;
              do
              {
                *(_BYTE *)(*((_QWORD *)&v21 + 1) + v23 + 8) = 0;
                v23 += 12LL;
              }
              while ( 12 * v22 != v23 );
            }
            v24 = *(_DWORD *)v21;
            if ( *(_DWORD *)(v15 + 4) > *(_DWORD *)v21 )
            {
              v37 = 38LL;
              v39 = aAssertionFaile_0;
              v38 = &off_57F8B8;
              goto LABEL_33;
            }
            v53[0] = *(_DWORD *)(v15 + 4);
            v53[1] = v24;
            v53[2] = v41;
            v58[0] = v21;
            v58[1] = 1LL;
            v54[0] = *((_QWORD *)&v21 + 1);
            v54[1] = v22;
            v46.m256i_i64[0] = (__int64)v53;
            v46.m256i_i64[1] = (__int64)&unk_57F8D0;
            v46.m256i_i64[2] = (__int64)v58;
            v46.m256i_i64[3] = (__int64)&unk_57D5A8;
            *(_QWORD *)&v47 = v54;
            *((_QWORD *)&v47 + 1) = &unk_57D5A8;
            <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(
              &v59,
              a4,
              &v46,
              3LL);
            v19 = v59;
            if ( v59 != 4 )
            {
              v29 = a1;
              *(_DWORD *)(a1 + 20) = v61;
              v30 = v60;
              goto LABEL_29;
            }
            if ( !v20 )
              goto LABEL_23;
            *(_BYTE *)(v20 + 8) = 0;
            v54[0] = v20;
            <ruff_python_formatter::verbatim::TrailingFormatOffComment as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
              &v46,
              v54,
              a4);
            v19 = v46.m256i_i32[0];
            if ( v46.m256i_i32[0] != 4 )
            {
              v29 = a1;
              *(_DWORD *)(a1 + 20) = v46.m256i_i32[5];
              v30 = *(_OWORD *)((char *)v46.m256i_i64 + 4);
              goto LABEL_29;
            }
            v15 = v20;
            break;
          case 2LL:
            continue;
        }
      }
      v25 = *v49;
      if ( *v49 != v49[1] )
      {
        *v49 = v25 + 128;
        v46.m256i_i64[0] = v25;
        v46.m256i_i8[8] = 5;
        *(_QWORD *)&v26 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v25);
        *(_OWORD *)v42.m256i_i8 = v26;
        v27 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v13);
        ruff_python_formatter::verbatim::write_suppressed_statements(
          a1,
          v15,
          (unsigned int)&v46,
          v27,
          v28,
          (_DWORD)v49,
          (__int64)a4);
        return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v52);
      }
      v31 = v51 + 12 * v50;
      if ( v50 == 0 || v31 == 12 )
      {
LABEL_23:
        v32 = (_DWORD *)a1;
        *(_QWORD *)(a1 + 8) = v45;
LABEL_24:
        *v32 = 4;
        return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v52);
      }
      v33 = *(_DWORD *)(v15 + 4);
      v34 = *(_DWORD *)(v31 - 8);
      v35 = v45;
      if ( v33 > v34 )
      {
        v38 = &off_57F8A0;
        v37 = 38LL;
        v39 = aAssertionFaile_0;
LABEL_33:
        core::panicking::panic(v39, v37, v38);
      }
      v46.m256i_i64[0] = __PAIR64__(v34, v33);
      v46.m256i_i32[2] = v41;
      <ruff_python_formatter::verbatim::FormatVerbatimStatementRange as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
        &v42,
        &v46,
        a4);
      v19 = v42.m256i_i32[0];
      if ( v42.m256i_i32[0] == 4 )
      {
        v32 = (_DWORD *)a1;
        *(_QWORD *)(a1 + 8) = v35;
        goto LABEL_24;
      }
    }
  }
  v29 = a1;
  *(_DWORD *)(a1 + 20) = v42.m256i_i32[5];
  v30 = *(_OWORD *)((char *)v42.m256i_i64 + 4);
LABEL_29:
  *(_OWORD *)(v29 + 4) = v30;
  *(_DWORD *)v29 = v19;
  return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v52);
}