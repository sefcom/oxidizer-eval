__int64 __fastcall uu_csplit::SplitWriter::do_to_match(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 *a8)
{
  __int64 j; // rax
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 i; // rax
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // r12
  char v28; // bp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // r13
  __int128 *v33; // rdi
  __int64 v34; // rbx
  int v35; // r13d
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int128 v40; // [rsp+10h] [rbp-198h] BYREF
  __m256i v41; // [rsp+20h] [rbp-188h]
  _QWORD *v42; // [rsp+48h] [rbp-160h]
  _BYTE v43[48]; // [rsp+50h] [rbp-158h] BYREF
  __int128 v44; // [rsp+80h] [rbp-128h] BYREF
  __int64 v45; // [rsp+90h] [rbp-118h]
  __int64 v46; // [rsp+98h] [rbp-110h]
  __int64 v47; // [rsp+A0h] [rbp-108h]
  __int64 v48; // [rsp+A8h] [rbp-100h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-F8h]
  __int64 v50; // [rsp+B8h] [rbp-F0h]
  _QWORD v51[3]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v52[3]; // [rsp+D8h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-B8h]
  __int64 v54; // [rsp+108h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+110h] [rbp-98h]
  __int64 v56; // [rsp+120h] [rbp-88h] BYREF
  __int128 v57; // [rsp+128h] [rbp-80h]
  __int64 v58; // [rsp+138h] [rbp-70h] BYREF
  __int128 v59; // [rsp+140h] [rbp-68h]
  _OWORD v60[2]; // [rsp+150h] [rbp-58h] BYREF
  __int64 v61; // [rsp+170h] [rbp-38h]

  v42 = a6;
  v50 = a5;
  v48 = a4;
  v47 = a3;
  if ( a7 < 0 )
  {
    v49 = -a7;
    a8[6] = (int)v49;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v44);
    result = *((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) == 0x8000000000000001LL )
    {
LABEL_10:
      core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v44);
      v9 = a8;
      alloc::vec::Vec<T,A>::drain(&v40, a8);
      for ( i = v40; (_QWORD)v40 != *((_QWORD *)&v40 + 1); i = v40 )
      {
        *(_QWORD *)&v40 = i + 32;
        if ( *(_QWORD *)(i + 8) == 0x8000000000000001LL )
          break;
        v58 = *(_QWORD *)(i + 8);
        v59 = *(_OWORD *)(i + 16);
        v9 = &v58;
        core::result::Result<T,E>::unwrap(v43, &v58, &off_241C70);
        v44 = *(_OWORD *)&v43[8];
        if ( *(_QWORD *)v43 == 0x8000000000000000LL )
          break;
        *(_OWORD *)&v43[8] = v44;
        v9 = (__int64 *)v44;
        v10 = uu_csplit::SplitWriter::writeln(a2, v44, *((_QWORD *)&v44 + 1));
        if ( v10 )
        {
LABEL_34:
          *a1 = 0LL;
          a1[1] = v10;
          core::ptr::drop_in_place<alloc::string::String>(v43, v9);
          return core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v40);
        }
        core::ptr::drop_in_place<alloc::string::String>(v43, v9);
      }
      core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v40);
      goto LABEL_16;
    }
    while ( 1 )
    {
      v21 = v45;
      v22 = v46;
      if ( result == 0x8000000000000000LL )
      {
        *a1 = 12LL;
        a1[1] = v21;
        a1[2] = v22;
        return result;
      }
      v23 = v44;
      v51[0] = result;
      v51[1] = v45;
      v51[2] = v46;
      v24 = <&str as core::str::pattern::Pattern>::strip_suffix_of(asc_53ADE, 2LL, v45, v46);
      if ( !v24 )
        v24 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v21, v22);
      LODWORD(v40) = 0;
      *((_QWORD *)&v40 + 1) = v24;
      *(_OWORD *)v41.m256i_i8 = (unsigned __int64)v25;
      v41.m256i_i64[2] = v25;
      v41.m256i_i8[24] = 1;
      regex_automata::util::search::Input::set_span(&v40, v25);
      *(__m256i *)&v43[16] = v41;
      *(_OWORD *)v43 = v40;
      regex_automata::meta::regex::Regex::search_half(&v40, v50, v42, v43);
      if ( (_QWORD)v40 )
        break;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(&v40, a8, v23, v51);
      if ( (_QWORD)v40 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v40);
      }
      else
      {
        v19 = *((_QWORD *)&v40 + 1);
        v26 = uu_csplit::SplitWriter::writeln(a2, *((_QWORD *)&v40 + 1), v41.m256i_i64[0]);
        if ( v26 )
        {
          *a1 = 0LL;
          a1[1] = v26;
          v33 = &v40;
          return core::ptr::drop_in_place<alloc::string::String>(v33, v19);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v40, v19);
      }
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v44);
      result = *((_QWORD *)&v44 + 1);
      if ( *((_QWORD *)&v44 + 1) == 0x8000000000000001LL )
        goto LABEL_10;
    }
    v42 = v51;
    uu_csplit::InputSplitter<I>::shrink_buffer_to_size(v60, a8);
    v41.m256i_i64[2] = v61;
    *(_OWORD *)v41.m256i_i8 = v60[1];
    v40 = v60[0];
    v29 = *(_QWORD *)&v60[0];
    if ( *(_QWORD *)&v60[0] != *((_QWORD *)&v60[0] + 1) )
    {
      do
      {
        *(_QWORD *)&v40 = v29 + 32;
        if ( *(_QWORD *)(v29 + 8) == 0x8000000000000001LL )
          break;
        v56 = *(_QWORD *)(v29 + 8);
        v57 = *(_OWORD *)(v29 + 16);
        core::result::Result<T,E>::unwrap(v43, &v56, &off_241C40);
        v53 = *(_OWORD *)&v43[8];
        if ( *(_QWORD *)v43 == 0x8000000000000000LL )
          break;
        *(_OWORD *)&v43[8] = v53;
        v19 = v53;
        v30 = uu_csplit::SplitWriter::writeln(a2, v53, *((_QWORD *)&v53 + 1));
        if ( v30 )
        {
          *a1 = 0LL;
          a1[1] = v30;
          core::ptr::drop_in_place<alloc::string::String>(v43, v19);
          core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v40);
          v33 = (__int128 *)v51;
          return core::ptr::drop_in_place<alloc::string::String>(v33, v19);
        }
        core::ptr::drop_in_place<alloc::string::String>(v43, v19);
        v29 = v40;
      }
      while ( (_QWORD)v40 != *((_QWORD *)&v40 + 1) );
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v40);
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL) )
    {
      v31 = (__int64)a8;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(&v40, a8, v23, v51);
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v40);
      v32 = v49;
    }
    else
    {
      v32 = v49;
      a8[6] = v49 + 1;
      v31 = (__int64)a8;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(&v40, a8, v23, v51);
      v34 = v40;
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v40);
      if ( v34 != 0x8000000000000000LL )
      {
        *(_QWORD *)&v40 = &off_241C30;
        *((_QWORD *)&v40 + 1) = 1LL;
        v41.m256i_i64[0] = 8LL;
        *(_OWORD *)&v41.m256i_u64[1] = 0LL;
        core::panicking::panic_fmt(&v40, &off_241C58);
      }
    }
    result = uu_csplit::SplitWriter::finish_split(a2, v31);
    if ( a8[2] >= v32 )
    {
      *a1 = 13LL;
    }
    else
    {
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, v47, v48);
      *a1 = 1LL;
    }
    return result;
  }
  alloc::vec::Vec<T,A>::drain(&v40, a8);
  for ( j = v40; (_QWORD)v40 != *((_QWORD *)&v40 + 1); j = v40 )
  {
    *(_QWORD *)&v40 = j + 32;
    if ( *(_QWORD *)(j + 8) == 0x8000000000000001LL )
      break;
    v54 = *(_QWORD *)(j + 8);
    v55 = *(_OWORD *)(j + 16);
    core::result::Result<T,E>::unwrap(v43, &v54, &off_241C70);
    v44 = *(_OWORD *)&v43[8];
    if ( *(_QWORD *)v43 == 0x8000000000000000LL )
      break;
    *(_OWORD *)&v43[8] = v44;
    v9 = (__int64 *)v44;
    v10 = uu_csplit::SplitWriter::writeln(a2, v44, *((_QWORD *)&v44 + 1));
    if ( v10 )
      goto LABEL_34;
    core::ptr::drop_in_place<alloc::string::String>(v43, v9);
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>::drain_buffer::{{closure}}>>(&v40);
  v9 = a8;
  a8[6] = 1LL;
  <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v44);
  v11 = *((_QWORD *)&v44 + 1);
  if ( *((_QWORD *)&v44 + 1) == 0x8000000000000001LL )
  {
LABEL_8:
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v44);
LABEL_16:
    uu_csplit::SplitWriter::finish_split(a2, v9);
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, v47, v48);
    *a1 = 3LL;
    return result;
  }
  while ( 1 )
  {
    v14 = v45;
    v15 = v46;
    if ( v11 == 0x8000000000000000LL )
    {
      result = (__int64)a1;
      *a1 = 12LL;
      a1[1] = v14;
      a1[2] = v15;
      return result;
    }
    v16 = v44;
    v52[0] = v11;
    v52[1] = v45;
    v52[2] = v46;
    v17 = <&str as core::str::pattern::Pattern>::strip_suffix_of(asc_53ADE, 2LL, v45, v46);
    if ( !v17 )
      v17 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v14, v15);
    LODWORD(v40) = 0;
    *((_QWORD *)&v40 + 1) = v17;
    *(_OWORD *)v41.m256i_i8 = (unsigned __int64)v18;
    v41.m256i_i64[2] = v18;
    v41.m256i_i8[24] = 1;
    regex_automata::util::search::Input::set_span(&v40, v18);
    *(__m256i *)&v43[16] = v41;
    *(_OWORD *)v43 = v40;
    v19 = v50;
    regex_automata::meta::regex::Regex::search_half(&v40, v50, v42, v43);
    if ( (_QWORD)v40 )
      break;
    v19 = v14;
    v20 = uu_csplit::SplitWriter::writeln(a2, v14, v15);
    if ( v20 )
      goto LABEL_49;
    core::ptr::drop_in_place<alloc::string::String>(v52, v14);
    v9 = a8;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v44);
    v11 = *((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) == 0x8000000000000001LL )
      goto LABEL_8;
  }
  v42 = v52;
  v27 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
  if ( v27 )
  {
    v28 = 1;
    if ( a7 )
      goto LABEL_48;
    v27 = 0;
  }
  else
  {
    if ( a7 )
    {
LABEL_48:
      v19 = v14;
      v20 = uu_csplit::SplitWriter::writeln(a2, v14, v15);
      if ( v20 )
      {
LABEL_49:
        *a1 = 0LL;
        a1[1] = v20;
LABEL_50:
        v33 = (__int128 *)v52;
        return core::ptr::drop_in_place<alloc::string::String>(v33, v19);
      }
      v28 = 1;
      if ( a7 >= 2 )
      {
        v35 = a7 + 1;
        while ( 1 )
        {
          <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v40);
          if ( *((_QWORD *)&v40 + 1) == 0x8000000000000001LL )
          {
            uu_csplit::SplitWriter::finish_split(a2, a8);
            v19 = v47;
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v43, v47, v48);
            a1[3] = *(_QWORD *)&v43[16];
            *(_OWORD *)(a1 + 1) = *(_OWORD *)v43;
            *a1 = 1LL;
            goto LABEL_50;
          }
          v36 = v41.m256i_i64[1];
          v19 = v41.m256i_i64[0];
          if ( *((_QWORD *)&v40 + 1) == 0x8000000000000000LL )
          {
            *a1 = 12LL;
            a1[1] = v19;
            a1[2] = v36;
            goto LABEL_50;
          }
          *(_QWORD *)v43 = *((_QWORD *)&v40 + 1);
          *(_OWORD *)&v43[8] = *(_OWORD *)v41.m256i_i8;
          v37 = uu_csplit::SplitWriter::writeln(a2, v41.m256i_i64[0], v41.m256i_i64[1]);
          if ( v37 )
            break;
          core::ptr::drop_in_place<alloc::string::String>(v43, v19);
          if ( (unsigned int)--v35 <= 2 )
            goto LABEL_66;
        }
        *a1 = 0LL;
        a1[1] = v37;
        core::ptr::drop_in_place<alloc::string::String>(v43, v19);
        goto LABEL_50;
      }
      goto LABEL_66;
    }
    v19 = (__int64)a8;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(&v40, a8, v16, v52);
    v38 = v40;
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v40);
    v28 = 0;
    v27 = 0;
    if ( v38 != 0x8000000000000000LL )
    {
      *(_QWORD *)&v40 = &off_241BF0;
      *((_QWORD *)&v40 + 1) = 1LL;
      v41.m256i_i64[0] = 8LL;
      *(_OWORD *)&v41.m256i_u64[1] = 0LL;
      core::panicking::panic_fmt(&v40, &off_241C88);
    }
  }
LABEL_66:
  uu_csplit::SplitWriter::finish_split(a2, v19);
  if ( v27 )
  {
    v19 = (__int64)a8;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v40);
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v40);
  }
  result = (__int64)a1;
  *a1 = 13LL;
  if ( v28 )
    goto LABEL_50;
  return result;
}