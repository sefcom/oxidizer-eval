__int64 __fastcall uu_csplit::SplitWriter::do_to_match(
        _QWORD *a1,
        __int64 a2,
        __m256i *a3,
        __int64 a4,
        __int64 a5,
        __m256i *a6,
        int a7,
        __m256i *a8)
{
  __int64 i; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int128 v14; // rax
  __int64 v15; // rbp
  __int64 j; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __m256i *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r13d
  __int64 v29; // rax
  char v30; // bl
  __int64 k; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // bp
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int128 *v40; // rdi
  __m256i v42; // [rsp+8h] [rbp-160h] BYREF
  __int64 v43; // [rsp+28h] [rbp-140h]
  __int128 v44; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v45[24]; // [rsp+40h] [rbp-128h]
  _BYTE v46[24]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v47; // [rsp+78h] [rbp-F0h]
  _BYTE v48[24]; // [rsp+80h] [rbp-E8h] BYREF
  __m256i *v49; // [rsp+98h] [rbp-D0h]
  __int64 v50; // [rsp+A0h] [rbp-C8h]
  __int64 v51; // [rsp+A8h] [rbp-C0h]
  __m256i *v52; // [rsp+B0h] [rbp-B8h]
  __int128 v53; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-A0h]
  __int128 v55; // [rsp+D0h] [rbp-98h]
  _OWORD v56[2]; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v57; // [rsp+108h] [rbp-60h]
  _OWORD v58[2]; // [rsp+110h] [rbp-58h] BYREF
  __int64 v59; // [rsp+130h] [rbp-38h]

  v52 = a6;
  v51 = a5;
  v50 = a4;
  v49 = a3;
  if ( a7 >= 0 )
  {
    v43 = a2;
    alloc::vec::Vec<T,A>::drain(v56, a8);
    *(_QWORD *)&v45[16] = v57;
    *(_OWORD *)v45 = v56[1];
    v44 = v56[0];
    for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44);
          i;
          i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44) )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( v10 == 0x8000000000000001LL )
        break;
      v11 = *(_QWORD *)i;
      *(_OWORD *)&v42.m256i_u64[2] = *(_OWORD *)(i + 16);
      *(_OWORD *)v42.m256i_i8 = __PAIR128__(v10, v11);
      core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v46, &v42);
      *(_OWORD *)v48 = *(_OWORD *)&v46[8];
      if ( *(_QWORD *)v46 == 0x8000000000000000LL )
        break;
      v42.m256i_i64[0] = *(_QWORD *)v46;
      *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)v48;
      v12 = *(_QWORD *)v48;
      v13 = uu_csplit::SplitWriter::writeln(v43, *(const void **)v48, *(size_t *)&v48[8]);
      if ( v13 )
        goto LABEL_50;
      core::ptr::drop_in_place<alloc::string::String>(&v42, v12);
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v44);
    a8[2].m256i_i64[2] = 1LL;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v42, a8);
    *(_QWORD *)&v14 = v42.m256i_i64[1];
    v15 = v43;
    if ( v42.m256i_i64[1] == 0x8000000000000001LL )
    {
LABEL_8:
      core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(&v42);
LABEL_16:
      uu_csplit::SplitWriter::finish_split(v15);
      *(_QWORD *)&v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 1, v49, v50);
      *a1 = 3LL;
      return v14;
    }
    while ( 1 )
    {
      *((_QWORD *)&v14 + 1) = v42.m256i_i64[2];
      if ( (_QWORD)v14 == 0x8000000000000000LL )
        goto LABEL_29;
      v19 = v42.m256i_i64[0];
      *(_OWORD *)v48 = v14;
      *(_QWORD *)&v48[16] = v42.m256i_i64[3];
      v20 = v52;
      if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v51, v52) )
        break;
      v20 = *(__m256i **)&v48[8];
      v23 = uu_csplit::SplitWriter::writeln(v15, *(const void **)&v48[8], *(size_t *)&v48[16]);
      if ( v23 )
        goto LABEL_54;
      core::ptr::drop_in_place<alloc::string::String>(v48, v20);
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v42, a8);
      *(_QWORD *)&v14 = v42.m256i_i64[1];
      if ( v42.m256i_i64[1] == 0x8000000000000001LL )
        goto LABEL_8;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v15 + 32) + 99LL) )
    {
      if ( !a7 )
      {
        *(_QWORD *)v45 = *(_QWORD *)&v48[16];
        v44 = *(_OWORD *)v48;
        v20 = a8;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(v46, (__int64)a8, v19, (__int64)&v44, v21, v22);
        if ( *(_QWORD *)v46 != 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v46);
          *(_QWORD *)&v44 = &off_2DEB50;
          *((_QWORD *)&v44 + 1) = 1LL;
          *(_QWORD *)v45 = 8LL;
          *(_OWORD *)&v45[8] = 0LL;
          core::panicking::panic_fmt(&v44, &off_2DEBB8);
        }
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v46);
        v30 = 1;
        goto LABEL_58;
      }
      v20 = *(__m256i **)&v48[8];
      v23 = uu_csplit::SplitWriter::writeln(v43, *(const void **)&v48[8], *(size_t *)&v48[16]);
      if ( v23 )
      {
LABEL_54:
        *a1 = 0LL;
        a1[1] = v23;
LABEL_65:
        v40 = (__int128 *)v48;
        goto LABEL_66;
      }
    }
    if ( a7 >= 2 )
    {
      v28 = a7 + 1;
      while ( 1 )
      {
        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v44, a8);
        if ( *((_QWORD *)&v44 + 1) == 0x8000000000000001LL )
        {
          uu_csplit::SplitWriter::finish_split(v43);
          v20 = v49;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v46, v49, v50);
          a1[3] = *(_QWORD *)&v46[16];
          *(_OWORD *)(a1 + 1) = *(_OWORD *)v46;
          *a1 = 1LL;
          goto LABEL_65;
        }
        v20 = *(__m256i **)v45;
        if ( *((_QWORD *)&v44 + 1) == 0x8000000000000000LL )
        {
          *a1 = 0LL;
          a1[1] = v20;
          goto LABEL_65;
        }
        *(_OWORD *)v46 = __PAIR128__(*(unsigned __int64 *)v45, *((unsigned __int64 *)&v44 + 1));
        *(_QWORD *)&v46[16] = *(_QWORD *)&v45[8];
        v29 = ((__int64 (__fastcall *)(__int64))uu_csplit::SplitWriter::writeln)(v43);
        if ( v29 )
          break;
        core::ptr::drop_in_place<alloc::string::String>(v46, v20);
        if ( (unsigned int)--v28 <= 2 )
        {
          v30 = 0;
          goto LABEL_58;
        }
      }
      *a1 = 0LL;
      a1[1] = v29;
      core::ptr::drop_in_place<alloc::string::String>(v46, v20);
      goto LABEL_65;
    }
    v30 = 0;
LABEL_58:
    uu_csplit::SplitWriter::finish_split(v43);
    *(_QWORD *)&v14 = a1;
    *a1 = 12LL;
    if ( v30 )
      return v14;
    goto LABEL_65;
  }
  v43 = -a7;
  a8[2].m256i_i64[2] = (int)v43;
  <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v46, a8);
  *(_QWORD *)&v14 = *(_QWORD *)&v46[8];
  if ( *(_QWORD *)&v46[8] == 0x8000000000000001LL )
  {
LABEL_10:
    v15 = a2;
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(v46);
    alloc::vec::Vec<T,A>::drain(&v44, a8);
    for ( j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44);
          j;
          j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44) )
    {
      v17 = *(_QWORD *)(j + 8);
      if ( v17 == 0x8000000000000001LL )
        break;
      v18 = *(_QWORD *)j;
      *(_OWORD *)&v42.m256i_u64[2] = *(_OWORD *)(j + 16);
      *(_OWORD *)v42.m256i_i8 = __PAIR128__(v17, v18);
      core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v46, &v42);
      *(_OWORD *)v48 = *(_OWORD *)&v46[8];
      if ( *(_QWORD *)v46 == 0x8000000000000000LL )
        break;
      v42.m256i_i64[0] = *(_QWORD *)v46;
      *(_OWORD *)&v42.m256i_u64[1] = *(_OWORD *)v48;
      v12 = *(_QWORD *)v48;
      v13 = uu_csplit::SplitWriter::writeln(a2, *(const void **)v48, *(size_t *)&v48[8]);
      if ( v13 )
      {
LABEL_50:
        *a1 = 0LL;
        a1[1] = v13;
        core::ptr::drop_in_place<alloc::string::String>(&v42, v12);
        *(_QWORD *)&v14 = core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v44);
        return v14;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v42, v12);
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v44);
    goto LABEL_16;
  }
  while ( 1 )
  {
    *((_QWORD *)&v14 + 1) = *(_QWORD *)&v46[16];
    if ( (_QWORD)v14 == 0x8000000000000000LL )
    {
LABEL_29:
      *(_QWORD *)&v14 = a1;
      *a1 = 0LL;
      a1[1] = *((_QWORD *)&v14 + 1);
      return v14;
    }
    v24 = *(_QWORD *)v46;
    v53 = v14;
    v54 = v47;
    if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v51, v52) )
      break;
    *(_QWORD *)v45 = v54;
    v44 = v53;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(&v42, (__int64)a8, v24, (__int64)&v44, v25, v26);
    if ( v42.m256i_i64[0] != 0x8000000000000000LL )
    {
      v44 = *(_OWORD *)v42.m256i_i8;
      *(_QWORD *)v45 = v42.m256i_i64[2];
      v20 = (__m256i *)v42.m256i_i64[1];
      v27 = uu_csplit::SplitWriter::writeln(a2, (const void *)v42.m256i_i64[1], v42.m256i_u64[2]);
      if ( v27 )
      {
        *a1 = 0LL;
        a1[1] = v27;
        v40 = &v44;
LABEL_66:
        *(_QWORD *)&v14 = core::ptr::drop_in_place<alloc::string::String>(v40, v20);
        return v14;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v44, v20);
    }
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v46, a8);
    *(_QWORD *)&v14 = *(_QWORD *)&v46[8];
    if ( *(_QWORD *)&v46[8] == 0x8000000000000001LL )
      goto LABEL_10;
  }
  v20 = a8;
  uu_csplit::InputSplitter<I>::shrink_buffer_to_size((__int64)v58, (__int64)a8);
  *(_QWORD *)&v45[16] = v59;
  *(_OWORD *)v45 = v58[1];
  v44 = v58[0];
  for ( k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44);
        k;
        k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v44) )
  {
    v32 = *(_QWORD *)(k + 8);
    if ( v32 == 0x8000000000000001LL )
      break;
    v33 = *(_QWORD *)k;
    *(_OWORD *)&v42.m256i_u64[2] = *(_OWORD *)(k + 16);
    *(_OWORD *)v42.m256i_i8 = __PAIR128__(v32, v33);
    v20 = &v42;
    core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v48, &v42);
    v55 = *(_OWORD *)&v48[8];
    if ( *(_QWORD *)v48 == 0x8000000000000000LL )
      break;
    v42.m256i_i64[0] = *(_QWORD *)v48;
    *(_OWORD *)&v42.m256i_u64[1] = v55;
    v20 = (__m256i *)v55;
    v34 = uu_csplit::SplitWriter::writeln(a2, (const void *)v55, *((size_t *)&v55 + 1));
    if ( v34 )
    {
      *a1 = 0LL;
      a1[1] = v34;
      core::ptr::drop_in_place<alloc::string::String>(&v42, v20);
      core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v44);
      goto LABEL_61;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v42, v20);
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v44);
  v37 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
  v38 = v43;
  if ( !v37 )
  {
    v20 = a8;
    a8[2].m256i_i64[2] = v43 + 1;
    *(_QWORD *)v45 = v54;
    v44 = v53;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(&v42, (__int64)a8, v24, (__int64)&v44, v35, v36);
    v39 = v42.m256i_i64[0];
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v42);
    if ( v39 != 0x8000000000000000LL )
    {
      *(_QWORD *)&v44 = &off_2DEB90;
      *((_QWORD *)&v44 + 1) = 1LL;
      *(_QWORD *)v45 = 8LL;
      *(_OWORD *)&v45[8] = 0LL;
      core::panicking::panic_fmt(&v44, &off_2DEBA0);
    }
  }
  uu_csplit::SplitWriter::finish_split(a2);
  *(_QWORD *)&v14 = 12LL;
  if ( a8->m256i_i64[2] < v38 )
  {
    v20 = v49;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v44, v49, v50);
    a1[3] = *(_QWORD *)v45;
    *(_OWORD *)(a1 + 1) = v44;
    *(_QWORD *)&v14 = 1LL;
  }
  *a1 = v14;
  if ( v37 )
  {
LABEL_61:
    v40 = &v53;
    goto LABEL_66;
  }
  return v14;
}
