__int64 __fastcall ruff_python_formatter::string::docstring::DocstringLinePrinter::format(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // ebp
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  __int16 v10; // ax
  __int16 v11; // r12
  bool v12; // cf
  __int16 v13; // r12
  __int16 v14; // ax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 result; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // ecx
  int v31; // edx
  unsigned __int8 v32; // si
  unsigned __int8 v33; // bp
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _OWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // [rsp+0h] [rbp-1C8h]
  __int128 v48; // [rsp+8h] [rbp-1C0h] BYREF
  __int128 v49; // [rsp+18h] [rbp-1B0h] BYREF
  __int64 v50; // [rsp+28h] [rbp-1A0h]
  __int128 v51; // [rsp+30h] [rbp-198h] BYREF
  __int64 v52; // [rsp+40h] [rbp-188h]
  __int64 v53; // [rsp+48h] [rbp-180h]
  _QWORD v54[2]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v55; // [rsp+60h] [rbp-168h] BYREF
  __int128 v56; // [rsp+70h] [rbp-158h]
  __int128 v57; // [rsp+80h] [rbp-148h]
  __int128 v58; // [rsp+90h] [rbp-138h]
  __int128 v59; // [rsp+A0h] [rbp-128h]
  __int64 v60; // [rsp+B0h] [rbp-118h]
  __int128 v61; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-E8h]
  __int128 v63; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+100h] [rbp-C8h]
  __int128 v65; // [rsp+110h] [rbp-B8h]
  __int128 v66; // [rsp+120h] [rbp-A8h]
  __int128 v67; // [rsp+130h] [rbp-98h]
  __int64 v68; // [rsp+140h] [rbp-88h]
  __int128 v69; // [rsp+148h] [rbp-80h] BYREF
  __int64 v70; // [rsp+158h] [rbp-70h]
  _BYTE v71[48]; // [rsp+160h] [rbp-68h] BYREF
  __int16 v72; // [rsp+190h] [rbp-38h]

  v5 = *(_QWORD **)(a2 + 136);
  LOWORD(v6) = *(_WORD *)(ruff_formatter::formatter::Formatter<Context>::options(*v5, v5[1]) + 2);
  if ( !(_WORD)v6 )
  {
    v7 = *(unsigned __int16 *)(ruff_formatter::formatter::Formatter<Context>::options(*v5, v5[1]) + 4);
    v8 = *(_BYTE *)(ruff_formatter::formatter::Formatter<Context>::options(*v5, v5[1]) + 6);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(v5[1] + 48LL))(*v5);
    v10 = ruff_python_formatter::context::IndentLevel::to_ascii_spaces(*(_DWORD *)(v9 + 40), v8);
    v11 = v10;
    if ( *a3 == 0x8000000000000000LL )
    {
      v12 = __CFADD__(v10, 4);
      v13 = v10 + 4;
      v14 = -1;
      if ( !v12 )
        v14 = v13;
      v11 = v14;
    }
    ruff_python_formatter::string::docstring::CodeExampleKind::indent(&v55, a3);
    v15 = ruff_python_formatter::string::docstring::Indentation::columns(&v55);
    v16 = ruff_python_formatter::string::docstring::Indentation::columns(a2 + 112);
    v12 = v15 < v16;
    v17 = v15 - v16;
    v18 = 0LL;
    if ( !v12 )
      v18 = v17;
    v19 = 0xFFFFLL;
    if ( v18 < 0xFFFF )
      v19 = v18;
    v12 = __CFADD__(v11, (_WORD)v19);
    LOWORD(v19) = v11 + v19;
    v20 = -1;
    if ( !v12 )
      v20 = v19;
    v12 = (unsigned __int16)v7 < v20;
    LOWORD(v7) = v7 - v20;
    if ( v12 )
      v7 = 0;
    v6 = (unsigned int)core::cmp::Ord::max(v7, a3, v19, 0LL);
    core::result::Result<T,E>::expect(v6);
  }
  v21 = ruff_python_formatter::string::docstring::CodeExampleKind::code(a3);
  v23 = v22;
  v24 = 56 * v22;
  v25 = v21;
  if ( !v23 )
    v25 = 0LL;
  v26 = v21 + v24 - 56;
  if ( !v23 )
    v26 = 0LL;
  if ( v25 == 0 || v26 == 0 )
  {
    result = (__int64)a1;
    a1[1] = 0x8000000000000000LL;
    *a1 = 0LL;
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(&v63, v21, v21 + v24);
    v28 = *((_QWORD *)&v63 + 1);
    alloc::str::join_generic_copy(&v55, *((_QWORD *)&v63 + 1), v64);
    v62 = v56;
    v61 = v55;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v63, v28);
    v29 = ruff_formatter::formatter::Formatter<Context>::options(*v5, v5[1]);
    v30 = *(_DWORD *)v29;
    v31 = *(_DWORD *)(v29 + 6);
    v32 = *(_BYTE *)(v29 + 11);
    HIBYTE(v48) = *(_BYTE *)(v29 + 15);
    *(_WORD *)((char *)&v48 + 13) = *(_WORD *)(v29 + 13);
    LODWORD(v48) = v30;
    WORD2(v48) = v6;
    *(_DWORD *)((char *)&v48 + 6) = v31;
    BYTE10(v48) = 1;
    *(_WORD *)((char *)&v48 + 11) = v32;
    v33 = *(_BYTE *)(a2 + 149);
    ruff_python_formatter::string::docstring::docstring_format_source(&v55, &v48, v33, *((_QWORD *)&v61 + 1), v62);
    if ( (_QWORD)v55 == 0x8000000000000000LL )
    {
      v37 = a1 + 1;
      if ( BYTE8(v55) == 41 )
      {
        a1[3] = v57;
        *v37 = v56;
        v38 = 1LL;
      }
      else
      {
        *(_QWORD *)v37 = 0x8000000000000000LL;
        v38 = 0LL;
      }
      *a1 = v38;
      core::ptr::drop_in_place<core::result::Result<ruff_formatter::Printed,ruff_python_formatter::FormatModuleError>>(&v55);
    }
    else
    {
      v68 = v60;
      v67 = v59;
      v66 = v58;
      v65 = v57;
      v64 = v56;
      v63 = v55;
      v39 = *((_QWORD *)&v55 + 1);
      v40 = v56;
      v54[0] = &v49;
      v54[1] = <&T as core::fmt::Display>::fmt;
      if ( v33 )
        *(_QWORD *)&v55 = &off_57F168;
      else
        *(_QWORD *)&v55 = &off_57F148;
      *((_QWORD *)&v55 + 1) = 2LL;
      *(_QWORD *)&v57 = 0LL;
      *(_QWORD *)&v56 = v54;
      *((_QWORD *)&v56 + 1) = 1LL;
      core::option::Option<T>::map_or_else(
        &v69,
        &v55,
        v34,
        0x8000000000000000LL,
        v35,
        v36,
        a1,
        v48,
        *((_QWORD *)&v48 + 1),
        *((_QWORD *)&v63 + 1),
        v64);
      v53 = v39;
      v51 = v69;
      v52 = v70;
      v41 = *((_QWORD *)&v69 + 1);
      v42 = v70;
      v43 = ruff_formatter::formatter::Formatter<Context>::options(*v5, v5[1]);
      ruff_python_parser::parse(&v55, v41, v42, 3 * (unsigned int)(*(_BYTE *)(v43 + 7) >= 2u) + 590592);
      if ( (_QWORD)v55 == 0x8000000000000000LL )
      {
        v47[1] = 0x8000000000000000LL;
        *v47 = 0LL;
        core::ptr::drop_in_place<core::result::Result<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>,ruff_python_parser::error::ParseError>>(
          &v55,
          v41,
          v44);
      }
      else
      {
        <char as core::str::pattern::Pattern>::into_searcher(v71, 10LL, v53, v40);
        v70 = v40;
        v72 = 0;
        v69 = (unsigned __int64)v25;
        core::iter::traits::iterator::Iterator::collect(&v49, &v69);
        v45 = *((_QWORD *)&v49 + 1) + 32 * v50;
        LOBYTE(v46) = v50 == 0 || v45 == 32;
        if ( !(_BYTE)v46 )
          *(_BYTE *)(v45 - 4) = *(_QWORD *)(v26 + 16) == 0LL;
        v47[3] = v50;
        *(_OWORD *)(v47 + 1) = v49;
        *v47 = 0LL;
        core::ptr::drop_in_place<core::result::Result<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>,ruff_python_parser::error::ParseError>>(
          &v55,
          &v69,
          v46);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v51);
      core::ptr::drop_in_place<ruff_formatter::Printed>(&v63);
    }
    return core::ptr::drop_in_place<alloc::string::String>(&v61);
  }
  return result;
}