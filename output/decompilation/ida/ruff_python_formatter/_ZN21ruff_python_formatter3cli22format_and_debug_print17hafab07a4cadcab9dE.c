_QWORD *__fastcall ruff_python_formatter::cli::format_and_debug_print(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v9; // rbx
  unsigned __int8 v10; // al
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdi
  char v17; // r12
  int v18; // eax
  int v19; // edx
  char v20; // r12
  int v21; // eax
  int v22; // edx
  __int128 v23; // kr00_16
  char v24; // r12
  int v25; // eax
  int v26; // edx
  __int64 v27; // rdx
  __int64 v29; // [rsp+8h] [rbp-3C0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-3B8h]
  __int64 v31; // [rsp+18h] [rbp-3B0h]
  char v32; // [rsp+20h] [rbp-3A8h] BYREF
  int v33; // [rsp+24h] [rbp-3A4h]
  int v34; // [rsp+28h] [rbp-3A0h]
  char v35; // [rsp+2Ch] [rbp-39Ch] BYREF
  int v36; // [rsp+30h] [rbp-398h]
  int v37; // [rsp+34h] [rbp-394h]
  _QWORD *v38; // [rsp+38h] [rbp-390h]
  __int128 v39; // [rsp+40h] [rbp-388h] BYREF
  __int128 v40; // [rsp+50h] [rbp-378h]
  __int128 v41; // [rsp+60h] [rbp-368h]
  __int128 v42; // [rsp+70h] [rbp-358h]
  __int128 v43; // [rsp+80h] [rbp-348h] BYREF
  __int128 v44; // [rsp+90h] [rbp-338h]
  __int128 v45; // [rsp+A0h] [rbp-328h]
  char v46; // [rsp+BCh] [rbp-30Ch] BYREF
  int v47; // [rsp+C0h] [rbp-308h]
  int v48; // [rsp+C4h] [rbp-304h]
  _BYTE v49[11]; // [rsp+C8h] [rbp-300h] BYREF
  char v50; // [rsp+D3h] [rbp-2F5h]
  int v51; // [rsp+D4h] [rbp-2F4h]
  __int128 v52; // [rsp+D8h] [rbp-2F0h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-2E0h]
  __int128 v54; // [rsp+F8h] [rbp-2D0h]
  __int128 v55; // [rsp+108h] [rbp-2C0h]
  __int128 v56; // [rsp+118h] [rbp-2B0h]
  __int64 v57; // [rsp+128h] [rbp-2A0h]
  __int64 v58; // [rsp+130h] [rbp-298h]
  __int64 v59; // [rsp+138h] [rbp-290h] BYREF
  _BYTE v60[16]; // [rsp+140h] [rbp-288h] BYREF
  __int64 v61; // [rsp+150h] [rbp-278h]
  __int128 v62; // [rsp+158h] [rbp-270h] BYREF
  char *v63; // [rsp+168h] [rbp-260h]
  __int128 v64; // [rsp+170h] [rbp-258h]
  __int64 (__fastcall *v65)(); // [rsp+180h] [rbp-248h]
  char *v66; // [rsp+188h] [rbp-240h]
  __int64 (__fastcall *v67)(); // [rsp+190h] [rbp-238h]
  _QWORD *v68; // [rsp+198h] [rbp-230h]
  __int64 (__fastcall *v69)(); // [rsp+1A0h] [rbp-228h]
  __int128 v70; // [rsp+238h] [rbp-190h] BYREF
  _QWORD v71[2]; // [rsp+248h] [rbp-180h] BYREF
  __int128 v72; // [rsp+258h] [rbp-170h] BYREF
  __int128 v73; // [rsp+268h] [rbp-160h]
  __int128 v74; // [rsp+278h] [rbp-150h]
  __int128 v75; // [rsp+288h] [rbp-140h]
  __int128 v76; // [rsp+298h] [rbp-130h]
  __int64 v77; // [rsp+2A8h] [rbp-120h]
  __int128 v78; // [rsp+2B0h] [rbp-118h] BYREF
  __int128 v79; // [rsp+2C0h] [rbp-108h]
  __int128 v80; // [rsp+2D0h] [rbp-F8h]
  __int128 v81; // [rsp+2E0h] [rbp-E8h]
  __int128 v82; // [rsp+2F0h] [rbp-D8h]
  __int64 v83; // [rsp+300h] [rbp-C8h]
  _OWORD v84[4]; // [rsp+308h] [rbp-C0h] BYREF
  _OWORD v85[3]; // [rsp+348h] [rbp-80h] BYREF
  _BYTE v86[80]; // [rsp+378h] [rbp-50h] BYREF

  v58 = a4;
  v9 = a1;
  v10 = ruff_python_ast::PySourceType::try_from_path(a5, a6);
  v11 = v10 == 3;
  v12 = 3 * (v10 >= 2u) + 590592;
  v13 = 590592LL;
  if ( !v11 )
    v13 = v12;
  v14 = a3;
  ruff_python_parser::parse(&v62, a2, a3, v13);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v39, &v62);
  if ( !__OFSUB__(-(__int64)v39, 1LL) )
  {
    v38 = a1;
    v85[2] = v45;
    v85[1] = v44;
    v85[0] = v43;
    v84[3] = v42;
    v84[2] = v41;
    v84[1] = v40;
    v84[0] = v39;
    ruff_python_formatter::options::PyFormatOptions::from_extension(&v62, a5, a6);
    v15 = v58;
    BYTE14(v62) = *(_BYTE *)(v58 + 25);
    *(_QWORD *)v49 = v62;
    *(_DWORD *)&v49[7] = *(_DWORD *)((char *)&v62 + 7);
    v50 = *(_BYTE *)(v58 + 28);
    v51 = HIDWORD(v62);
    ruff_python_parser::<impl core::convert::From<&ruff_python_parser::Tokens> for ruff_python_trivia::comment_ranges::CommentRanges>::from(
      &v29,
      v84);
    ruff_python_formatter::format_module_ast(&v62, v84, &v29, a2, v14, v49);
    v9 = v38;
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v39);
    if ( (_QWORD)v39 == 0x8000000000000000LL )
    {
      *(_OWORD *)v9 = __PAIR128__(*((unsigned __int64 *)&v39 + 1), 0x8000000000000000LL);
LABEL_24:
      core::ptr::drop_in_place<ruff_python_trivia::comment_ranges::CommentRanges>(v29, v30);
      core::ptr::drop_in_place<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>>(v84);
      return v9;
    }
    v83 = v44;
    v82 = v43;
    v81 = v42;
    v80 = v41;
    v79 = v40;
    v78 = v39;
    if ( *(_BYTE *)(v15 + 26) )
    {
      *(_QWORD *)&v39 = *((_QWORD *)&v39 + 1);
      *((_QWORD *)&v39 + 1) = v79;
      *(_QWORD *)&v40 = a2;
      *((_QWORD *)&v40 + 1) = v14;
      *(_QWORD *)&v52 = &v39;
      *((_QWORD *)&v52 + 1) = <ruff_formatter::format_element::document::DisplayDocument as core::fmt::Display>::fmt;
      *(_QWORD *)&v62 = &unk_57C928;
      *((_QWORD *)&v62 + 1) = 2LL;
      v63 = (char *)&v52;
      v64 = 1uLL;
      std::io::stdio::_print(&v62);
    }
    if ( *(_BYTE *)(v15 + 27) )
    {
      ruff_python_formatter::comments::visitor::collect_comments(v60, (char *)v85 + 8, a2, v14, v30, v31);
      if ( v61 )
      {
        *(_QWORD *)&v62 = &off_57C948;
        *((_QWORD *)&v62 + 1) = 1LL;
        v63 = &byte_8;
        v64 = 0LL;
        std::io::stdio::_print(&v62);
      }
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v86, v60);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v52, v86);
      while ( (_DWORD)v52 != 94 )
      {
        v43 = v56;
        v42 = v55;
        v41 = v54;
        v40 = v53;
        v39 = v52;
        v59 = v56;
        if ( (_QWORD)v53 == 94LL )
        {
          v32 = 94;
          v16 = v41;
          if ( (_QWORD)v41 != 94LL )
            goto LABEL_17;
        }
        else
        {
          *(_QWORD *)&v62 = v53;
          *((_QWORD *)&v62 + 1) = *((_QWORD *)&v40 + 1);
          v17 = ((__int64 (*)(void))ruff_python_ast::generated::AnyNodeRef::kind)();
          v18 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v62);
          v32 = v17;
          v33 = v18;
          v34 = v19;
          v16 = v41;
          if ( (_QWORD)v41 != 94LL )
          {
LABEL_17:
            *(_QWORD *)&v62 = v16;
            *((_QWORD *)&v62 + 1) = *((_QWORD *)&v41 + 1);
            v20 = ((__int64 (*)(void))ruff_python_ast::generated::AnyNodeRef::kind)();
            v21 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v62);
            v35 = v20;
            v36 = v21;
            v37 = v22;
            goto LABEL_18;
          }
        }
        v35 = 94;
LABEL_18:
        v23 = v39;
        v24 = ruff_python_ast::generated::AnyNodeRef::kind(v39, *((_QWORD *)&v39 + 1));
        v70 = v23;
        v25 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v70);
        v46 = v24;
        v47 = v25;
        v48 = v26;
        v71[0] = ruff_formatter::source_code::SourceCodeSlice::text(&v43, a2, v14);
        v71[1] = v27;
        *(_QWORD *)&v62 = &v59;
        *((_QWORD *)&v62 + 1) = <ruff_text_size::range::TextRange as core::fmt::Debug>::fmt;
        v63 = &v32;
        *(_QWORD *)&v64 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        *((_QWORD *)&v64 + 1) = &v35;
        v65 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v66 = &v46;
        v67 = <(U,T) as core::fmt::Debug>::fmt;
        v68 = v71;
        v69 = <&T as core::fmt::Debug>::fmt;
        *(_QWORD *)&v72 = &unk_57C958;
        *((_QWORD *)&v72 + 1) = 6LL;
        *(_QWORD *)&v74 = 0LL;
        *(_QWORD *)&v73 = &v62;
        *((_QWORD *)&v73 + 1) = 5LL;
        std::io::stdio::_print(&v72);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v52, v86);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::comments::visitor::DecoratedComment>>(v86);
      *(_QWORD *)&v39 = *((_QWORD *)&v80 + 1) + 16LL;
      *((_QWORD *)&v39 + 1) = a2;
      *(_QWORD *)&v40 = v14;
      *(_QWORD *)&v52 = &v39;
      *((_QWORD *)&v52 + 1) = <ruff_python_formatter::comments::debug::DebugComments as core::fmt::Debug>::fmt;
      *(_QWORD *)&v62 = &unk_57C928;
      *((_QWORD *)&v62 + 1) = 2LL;
      *((_QWORD *)&v64 + 1) = &unk_8A670;
      v65 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v63 = (char *)&v52;
      *(_QWORD *)&v64 = 1LL;
      std::io::stdio::_print(&v62);
      v9 = v38;
    }
    ruff_formatter::Formatted<Context>::create_printer(&v62, &v78);
    ruff_formatter::printer::Printer::print(&v39, &v62, &v78);
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v52, &v39);
    if ( (_QWORD)v52 == 0x8000000000000000LL )
    {
      *(_OWORD *)v9 = __PAIR128__(*((unsigned __int64 *)&v52 + 1), 0x8000000000000000LL);
    }
    else
    {
      v77 = v57;
      v76 = v56;
      v75 = v55;
      v74 = v54;
      v73 = v53;
      v72 = v52;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v62, *((_QWORD *)&v52 + 1), v53);
      v9[2] = v63;
      *(_OWORD *)v9 = v62;
      core::ptr::drop_in_place<ruff_formatter::Printed>(&v72);
    }
    core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v78);
    goto LABEL_24;
  }
  a1[1] = *((_QWORD *)&v39 + 1);
  *a1 = 0x8000000000000000LL;
  return v9;
}