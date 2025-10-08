__int64 __fastcall ruff_python_formatter::verbatim::write_suppressed_statements(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v10; // r15
  __int64 (__fastcall *v11)(__int64); // rbx
  __int64 v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  char *v23; // rsi
  void *v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r8
  int v28; // edi
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 *v36; // r14
  __int64 v37; // rcx
  void *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int128 v46; // rax
  __int64 v47; // rdx
  __int128 v48; // xmm0
  __int128 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rbx
  __int64 v52; // rdx
  _DWORD *v53; // rcx
  __int64 v55; // r14
  __int128 v56; // rax
  _QWORD *v57; // r13
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  char **v61; // rdx
  const char *v62; // rdi
  unsigned int v63; // eax
  unsigned int v64; // edx
  int v65; // eax
  _DWORD *v66; // rcx
  __int64 v67; // rdx
  char v68; // [rsp+Fh] [rbp-1A9h] BYREF
  __int64 v69; // [rsp+10h] [rbp-1A8h]
  int v70; // [rsp+1Ch] [rbp-19Ch]
  __int128 v71; // [rsp+20h] [rbp-198h] BYREF
  __int64 i; // [rsp+38h] [rbp-180h]
  _QWORD *v73; // [rsp+40h] [rbp-178h]
  __int64 v74; // [rsp+48h] [rbp-170h]
  _BYTE v75[24]; // [rsp+50h] [rbp-168h] BYREF
  void *v76; // [rsp+68h] [rbp-150h]
  __int64 *v77; // [rsp+70h] [rbp-148h]
  void *v78; // [rsp+78h] [rbp-140h]
  void *v79; // [rsp+80h] [rbp-138h]
  __int64 *v80; // [rsp+88h] [rbp-130h] BYREF
  int v81; // [rsp+90h] [rbp-128h]
  _BYTE v82[24]; // [rsp+98h] [rbp-120h] BYREF
  void *v83; // [rsp+B0h] [rbp-108h]
  char *v84; // [rsp+B8h] [rbp-100h]
  void *v85; // [rsp+C0h] [rbp-F8h]
  __int64 *v86; // [rsp+C8h] [rbp-F0h]
  void *v87; // [rsp+D0h] [rbp-E8h]
  __int64 v88; // [rsp+D8h] [rbp-E0h] BYREF
  void *v89; // [rsp+E0h] [rbp-D8h]
  __int64 *v90; // [rsp+E8h] [rbp-D0h]
  __int64 v91; // [rsp+F0h] [rbp-C8h]
  __int64 *v92; // [rsp+F8h] [rbp-C0h]
  __int64 v93; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v95; // [rsp+110h] [rbp-A8h]
  __int64 v96; // [rsp+118h] [rbp-A0h]
  __int64 v97; // [rsp+120h] [rbp-98h]
  char v98; // [rsp+128h] [rbp-90h]
  __int64 v99; // [rsp+130h] [rbp-88h] BYREF
  char *v100; // [rsp+138h] [rbp-80h]
  __int64 v101; // [rsp+140h] [rbp-78h]
  __int64 v102; // [rsp+148h] [rbp-70h]
  __int64 v103; // [rsp+150h] [rbp-68h]
  int v104; // [rsp+158h] [rbp-60h] BYREF
  __int128 v105; // [rsp+15Ch] [rbp-5Ch]
  int v106; // [rsp+16Ch] [rbp-4Ch]
  int v107; // [rsp+170h] [rbp-48h] BYREF
  __int128 v108; // [rsp+174h] [rbp-44h]
  int v109; // [rsp+184h] [rbp-34h]

  v103 = a5;
  v102 = a4;
  v69 = a1;
  v10 = *a7;
  v11 = *(__int64 (__fastcall **)(__int64))(a7[1] + 48);
  v12 = v11(*a7);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v12 + 16));
  v93 = *(_QWORD *)(v12 + 16);
  v13 = (__int64 *)v11(v10);
  v14 = *v13;
  v15 = v13[1];
  v71 = *a3;
  v16 = *(_QWORD *)a3;
  v74 = v14;
  v70 = ruff_python_formatter::verbatim::Indentation::from_stmt(v16, v14, v15);
  v92 = a6;
  v91 = *a6;
  v73 = (_QWORD *)(v93 + 16);
  v17 = a7;
  v18 = v103;
  v19 = v102;
  for ( i = v15; ; v15 = i )
  {
    v94 = v19;
    v95 = v18;
    v96 = v74;
    v97 = v15;
    v98 = 1;
    while ( 1 )
    {
      <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(v82, &v94);
      if ( *(_QWORD *)v82 == 4LL )
        break;
      v20 = *(_QWORD *)&v82[8];
      v21 = *(_QWORD *)&v82[16];
      v22 = 40LL;
      switch ( *(_QWORD *)v82 )
      {
        case 0LL:
          v62 = aInternalErrorE_1;
          v61 = &off_57F968;
          goto LABEL_61;
        case 1LL:
          v23 = v84;
          v24 = v85;
          v25 = v86;
          if ( v83 )
          {
            v26 = 12LL * (_QWORD)v83;
            v27 = 0LL;
            do
            {
              *(_BYTE *)(v21 + v27 + 8) = 1;
              v27 += 12LL;
            }
            while ( v26 != v27 );
          }
          v28 = *(_DWORD *)v23;
          if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)v23 )
          {
            v22 = 38LL;
            v61 = &off_57F980;
            v62 = aAssertionFaile_0;
            goto LABEL_61;
          }
          LODWORD(v80) = *(_DWORD *)(a2 + 4);
          HIDWORD(v80) = v28;
          v81 = v70;
          v100 = v23;
          v101 = 1LL;
          v99 = 1LL;
          v89 = v24;
          v90 = v25;
          v88 = 1LL;
          *(_QWORD *)v75 = &v80;
          *(_QWORD *)&v75[8] = &unk_57F8D0;
          *(_QWORD *)&v75[16] = &v99;
          v76 = &unk_57CB70;
          v77 = &v88;
          v78 = &unk_57CB70;
          <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(
            &v104,
            v17,
            v75,
            3LL);
          v29 = v104;
          if ( v104 != 4 )
          {
            v47 = v69;
            *(_DWORD *)(v69 + 20) = v106;
            v48 = v105;
            goto LABEL_41;
          }
          if ( !v20 )
          {
            *(_QWORD *)&v49 = ruff_python_formatter::statement::suite::<impl core::convert::From<ruff_python_formatter::statement::suite::SuiteChildStatement> for ruff_python_ast::generated::AnyNodeRef>::from(&v71);
            *(_OWORD *)v75 = v49;
            v50 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v73);
            v51 = v92;
            *(_QWORD *)v75 = v50;
            *(_QWORD *)&v75[8] = v50 + 12 * v52;
            if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                                    v75,
                                    v74,
                                    i) )
            {
              ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_trailing_comment(
                v69,
                &v71,
                v51,
                a7);
              return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v93);
            }
            <ruff_python_formatter::statement::suite::SuiteChildStatement as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
              v75,
              &v71,
              a7);
            v29 = *(_DWORD *)v75;
            if ( *(_DWORD *)v75 == 4 )
            {
LABEL_37:
              v53 = (_DWORD *)v69;
              *(_QWORD *)(v69 + 8) = v71;
              *v53 = 4;
              return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v93);
            }
LABEL_38:
            v47 = v69;
            *(_DWORD *)(v69 + 20) = *(_DWORD *)&v75[20];
            v48 = *(_OWORD *)&v75[4];
            goto LABEL_41;
          }
          v88 = v20;
          <ruff_python_formatter::comments::format::FormatComment as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
            v75,
            &v88,
            v17);
          v29 = *(_DWORD *)v75;
          if ( *(_DWORD *)v75 != 4 )
            goto LABEL_38;
          *(_BYTE *)(v20 + 8) = 1;
          a2 = v20;
          break;
        case 2LL:
          if ( *(_QWORD *)&v82[16] )
          {
            v30 = 12LL * *(_QWORD *)&v82[16];
            v31 = 0LL;
            do
            {
              *(_BYTE *)(v20 + v31 + 8) = 1;
              v31 += 12LL;
            }
            while ( v30 != v31 );
          }
          continue;
        case 3LL:
          v61 = &off_57F998;
          goto LABEL_58;
      }
    }
    *(_QWORD *)&v32 = ruff_python_formatter::statement::suite::<impl core::convert::From<ruff_python_formatter::statement::suite::SuiteChildStatement> for ruff_python_ast::generated::AnyNodeRef>::from(&v71);
    *(_OWORD *)v82 = v32;
    v94 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v73);
    v95 = v33;
    v96 = v74;
    v97 = i;
    v98 = 1;
LABEL_18:
    <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(v75, &v94);
    if ( *(_QWORD *)v75 != 4LL )
      break;
    v44 = v91;
    v17 = a7;
    if ( v91 == v92[1] )
    {
      v55 = v71;
      *(_QWORD *)&v56 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v71);
      *(_QWORD *)v75 = v56;
      v57 = v73;
      while ( 1 )
      {
        *(_QWORD *)&v75[8] = *((_QWORD *)&v56 + 1);
        *(_OWORD *)v82 = v56;
        v58 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(v57);
        v60 = v58 + 12 * v59;
        if ( v59 != 0 && v60 != 12 )
        {
          v63 = *(_DWORD *)(v60 - 8);
          goto LABEL_52;
        }
        *(_QWORD *)&v56 = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(v75);
        if ( (_QWORD)v56 == 94LL )
          break;
        *(_QWORD *)v75 = v56;
      }
      ruff_python_formatter::statement::trailing_semicolon((__int64)v82, *(__int64 *)v75, *(__int64 *)&v75[8], v74, i);
      <ruff_python_formatter::statement::suite::SuiteChildStatement as ruff_text_size::traits::Ranged>::range(&v71);
      v63 = core::option::Option<T>::map_or(v82, v64);
LABEL_52:
      if ( *(_DWORD *)(a2 + 4) <= v63 )
      {
        LODWORD(v94) = *(_DWORD *)(a2 + 4);
        HIDWORD(v94) = v63;
        LODWORD(v95) = v70;
        <ruff_python_formatter::verbatim::FormatVerbatimStatementRange as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
          v82,
          &v94,
          a7);
        v65 = *(_DWORD *)v82;
        if ( *(_DWORD *)v82 == 4 )
        {
          v66 = (_DWORD *)v69;
          *(_QWORD *)(v69 + 8) = v55;
        }
        else
        {
          v67 = v69;
          *(_DWORD *)(v69 + 20) = *(_DWORD *)&v82[20];
          v66 = (_DWORD *)v67;
          *(_OWORD *)(v67 + 4) = *(_OWORD *)&v82[4];
        }
        *v66 = v65;
        return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v93);
      }
      v61 = &off_57F908;
      v22 = 38LL;
      v62 = aAssertionFaile_0;
LABEL_61:
      core::panicking::panic(v62, v22, v61);
    }
    v45 = v91 + 128;
    *v92 = v91 + 128;
    *(_QWORD *)&v71 = v44;
    BYTE8(v71) = 5;
    *(_QWORD *)&v46 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v44);
    *(_OWORD *)v82 = v46;
    v19 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v73);
    v91 = v45;
  }
  v34 = *(_QWORD *)&v75[8];
  v35 = *(_QWORD *)&v75[16];
  v22 = 40LL;
  switch ( *(_QWORD *)v75 )
  {
    case 0LL:
      v62 = aInternalErrorE_1;
      v61 = &off_57F920;
      goto LABEL_61;
    case 1LL:
      v36 = v77;
      v37 = (__int64)v78;
      v38 = v79;
      if ( v76 )
      {
        v39 = 12LL * (_QWORD)v76;
        v40 = 0LL;
        do
        {
          *(_BYTE *)(v35 + v40 + 8) = 1;
          v40 += 12LL;
        }
        while ( v39 != v40 );
      }
      v41 = *(_DWORD *)v36;
      if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)v36 )
      {
        v22 = 38LL;
        v62 = aAssertionFaile_0;
        v61 = &off_57F938;
        goto LABEL_61;
      }
      LODWORD(v99) = *(_DWORD *)(a2 + 4);
      HIDWORD(v99) = v41;
      LODWORD(v100) = v70;
      v80 = v36;
      v68 = 2;
      v88 = v37;
      v89 = v38;
      *(_QWORD *)v82 = &v99;
      *(_QWORD *)&v82[8] = &unk_57F8D0;
      *(_QWORD *)&v82[16] = &v80;
      v83 = &unk_57CB30;
      v84 = &v68;
      v85 = &unk_57A4C8;
      v86 = &v88;
      v87 = &unk_57D5A8;
      <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v107, a7, v82, 4LL);
      v29 = v107;
      if ( v107 != 4 )
      {
        v47 = v69;
        *(_DWORD *)(v69 + 20) = v109;
        v48 = v108;
        goto LABEL_41;
      }
      *((_BYTE *)v36 + 8) = 1;
      if ( !v34 )
        goto LABEL_37;
      v88 = v34;
      <ruff_python_formatter::comments::format::FormatComment as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
        v82,
        &v88,
        a7);
      v29 = *(_DWORD *)v82;
      if ( *(_DWORD *)v82 == 4 )
      {
        *(_BYTE *)(v34 + 8) = 1;
        a2 = v34;
        goto LABEL_18;
      }
      v47 = v69;
      *(_DWORD *)(v69 + 20) = *(_DWORD *)&v82[20];
      v48 = *(_OWORD *)&v82[4];
LABEL_41:
      *(_OWORD *)(v47 + 4) = v48;
      *(_DWORD *)v47 = v29;
      return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v93);
    case 2LL:
      if ( *(_QWORD *)&v75[16] )
      {
        v42 = 12LL * *(_QWORD *)&v75[16];
        v43 = 0LL;
        do
        {
          *(_BYTE *)(v34 + v43 + 8) = 1;
          v43 += 12LL;
        }
        while ( v42 != v43 );
      }
      goto LABEL_18;
    case 3LL:
      v61 = &off_57F950;
LABEL_58:
      v62 = aInternalErrorE_1;
      goto LABEL_61;
  }
}