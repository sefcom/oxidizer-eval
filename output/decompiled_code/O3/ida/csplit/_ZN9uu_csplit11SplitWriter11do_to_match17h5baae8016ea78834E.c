        __m256i *a8)
{
  __int64 i; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int128 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 j; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __m256i *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  int v24; // r13d
  __int64 v25; // rax
  char v26; // bl
  __int64 k; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // bp
  unsigned __int64 v32; // r13
  __int64 v33; // r14
  __int128 *v34; // rdi
  __m256i v36; // [rsp+8h] [rbp-160h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-140h]
  __int128 v38; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v39[24]; // [rsp+40h] [rbp-128h]
  _BYTE v40[24]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v41; // [rsp+78h] [rbp-F0h]
  _BYTE v42[24]; // [rsp+80h] [rbp-E8h] BYREF
  __m256i *v43; // [rsp+98h] [rbp-D0h]
  __int64 v44; // [rsp+A0h] [rbp-C8h]
  __int64 v45; // [rsp+A8h] [rbp-C0h]
  __m256i *v46; // [rsp+B0h] [rbp-B8h]
  __int128 v47; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-A0h]
  __int128 v49; // [rsp+D0h] [rbp-98h]
  _OWORD v50[2]; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v51; // [rsp+108h] [rbp-60h]
  _OWORD v52[2]; // [rsp+110h] [rbp-58h] BYREF
  __int64 v53; // [rsp+130h] [rbp-38h]

  v46 = a6;
  v45 = a5;
  v44 = a4;
  v43 = a3;
  if ( a7 >= 0 )
  {
    v37 = a2;
    alloc::vec::Vec<T,A>::drain(v50, a8);
    *(_QWORD *)&v39[16] = v51;
    *(_OWORD *)v39 = v50[1];
    v38 = v50[0];
    for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38);
          i;
          i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38) )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( v10 == 0x8000000000000001LL )
        break;
      v11 = *(_QWORD *)i;
      *(_OWORD *)&v36.m256i_u64[2] = *(_OWORD *)(i + 16);
      *(_OWORD *)v36.m256i_i8 = __PAIR128__(v10, v11);
      core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v40, &v36);
      *(_OWORD *)v42 = *(_OWORD *)&v40[8];
      if ( *(_QWORD *)v40 == 0x8000000000000000LL )
        break;
      v36.m256i_i64[0] = *(_QWORD *)v40;
      *(_OWORD *)&v36.m256i_u64[1] = *(_OWORD *)v42;
      v12 = *(_QWORD *)v42;
      v13 = uu_csplit::SplitWriter::writeln(v37, *(_QWORD *)v42, *(_QWORD *)&v42[8]);
      if ( v13 )
        goto LABEL_50;
      core::ptr::drop_in_place<alloc::string::String>(&v36, v12);
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v38);
    a8[1].m256i_i64[2] = 1LL;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v36, a8);
    *(_QWORD *)&v14 = v36.m256i_i64[1];
    v15 = v37;
    if ( v36.m256i_i64[1] == 0x8000000000000001LL )
    {
LABEL_8:
      core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(&v36);
LABEL_16:
      uu_csplit::SplitWriter::finish_split(v15);
      *(_QWORD *)&v14 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 1, v43, v44);
      *a1 = 3LL;
      return v14;
    }
    while ( 1 )
    {
      *((_QWORD *)&v14 + 1) = v36.m256i_i64[2];
      if ( (_QWORD)v14 == 0x8000000000000000LL )
        goto LABEL_29;
      v19 = v36.m256i_i64[0];
      *(_OWORD *)v42 = v14;
      *(_QWORD *)&v42[16] = v36.m256i_i64[3];
      v20 = v46;
      if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v45, v46) )
        break;
      v20 = *(__m256i **)&v42[8];
      v21 = uu_csplit::SplitWriter::writeln(v15, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16]);
      if ( v21 )
        goto LABEL_54;
      core::ptr::drop_in_place<alloc::string::String>(v42, v20);
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v36, a8);
      *(_QWORD *)&v14 = v36.m256i_i64[1];
      if ( v36.m256i_i64[1] == 0x8000000000000001LL )
        goto LABEL_8;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v15 + 32) + 99LL) )
    {
      if ( !a7 )
      {
        *(_QWORD *)v39 = *(_QWORD *)&v42[16];
        v38 = *(_OWORD *)v42;
        v20 = a8;
        uu_csplit::InputSplitter<I>::add_line_to_buffer(v40, a8, v19, &v38);
        if ( *(_QWORD *)v40 != 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v40);
          *(_QWORD *)&v38 = &off_2DEB50;
          *((_QWORD *)&v38 + 1) = 1LL;
          *(_QWORD *)v39 = 8LL;
          *(_OWORD *)&v39[8] = 0LL;
          core::panicking::panic_fmt(&v38, &off_2DEBB8);
        }
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v40);
        v26 = 1;
        goto LABEL_58;
      }
      v20 = *(__m256i **)&v42[8];
      v21 = uu_csplit::SplitWriter::writeln(v37, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16]);
      if ( v21 )
      {
LABEL_54:
        *a1 = 0LL;
        a1[1] = v21;
LABEL_65:
        v34 = (__int128 *)v42;
        goto LABEL_66;
      }
    }
    if ( a7 >= 2 )
    {
      v24 = a7 + 1;
      while ( 1 )
      {
        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v38, a8);
        if ( *((_QWORD *)&v38 + 1) == 0x8000000000000001LL )
        {
          uu_csplit::SplitWriter::finish_split(v37);
          v20 = v43;
          <T as alloc::slice::hack::ConvertVec>::to_vec(v40, v43, v44);
          a1[3] = *(_QWORD *)&v40[16];
          *(_OWORD *)(a1 + 1) = *(_OWORD *)v40;
          *a1 = 1LL;
          goto LABEL_65;
        }
        v20 = *(__m256i **)v39;
        if ( *((_QWORD *)&v38 + 1) == 0x8000000000000000LL )
        {
          *a1 = 0LL;
          a1[1] = v20;
          goto LABEL_65;
        }
        *(_OWORD *)v40 = __PAIR128__(*(unsigned __int64 *)v39, *((unsigned __int64 *)&v38 + 1));
        *(_QWORD *)&v40[16] = *(_QWORD *)&v39[8];
        v25 = ((__int64 (__fastcall *)(unsigned __int64))uu_csplit::SplitWriter::writeln)(v37);
        if ( v25 )
          break;
        core::ptr::drop_in_place<alloc::string::String>(v40, v20);
        if ( (unsigned int)--v24 <= 2 )
        {
          v26 = 0;
          goto LABEL_58;
        }
      }
      *a1 = 0LL;
      a1[1] = v25;
      core::ptr::drop_in_place<alloc::string::String>(v40, v20);
      goto LABEL_65;
    }
    v26 = 0;
LABEL_58:
    uu_csplit::SplitWriter::finish_split(v37);
    *(_QWORD *)&v14 = a1;
    *a1 = 12LL;
    if ( v26 )
      return v14;
    goto LABEL_65;
  }
  v37 = -a7;
  a8[1].m256i_i64[2] = (int)v37;
  <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v40, a8);
  *(_QWORD *)&v14 = *(_QWORD *)&v40[8];
  if ( *(_QWORD *)&v40[8] == 0x8000000000000001LL )
  {
LABEL_10:
    v15 = a2;
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(v40);
    alloc::vec::Vec<T,A>::drain(&v38, a8);
    for ( j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38);
          j;
          j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38) )
    {
      v17 = *(_QWORD *)(j + 8);
      if ( v17 == 0x8000000000000001LL )
        break;
      v18 = *(_QWORD *)j;
      *(_OWORD *)&v36.m256i_u64[2] = *(_OWORD *)(j + 16);
      *(_OWORD *)v36.m256i_i8 = __PAIR128__(v17, v18);
      core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v40, &v36);
      *(_OWORD *)v42 = *(_OWORD *)&v40[8];
      if ( *(_QWORD *)v40 == 0x8000000000000000LL )
        break;
      v36.m256i_i64[0] = *(_QWORD *)v40;
      *(_OWORD *)&v36.m256i_u64[1] = *(_OWORD *)v42;
      v12 = *(_QWORD *)v42;
      v13 = uu_csplit::SplitWriter::writeln(a2, *(_QWORD *)v42, *(_QWORD *)&v42[8]);
      if ( v13 )
      {
LABEL_50:
        *a1 = 0LL;
        a1[1] = v13;
        core::ptr::drop_in_place<alloc::string::String>(&v36, v12);
        *(_QWORD *)&v14 = core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v38);
        return v14;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v36, v12);
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v38);
    goto LABEL_16;
  }
  while ( 1 )
  {
    *((_QWORD *)&v14 + 1) = *(_QWORD *)&v40[16];
    if ( (_QWORD)v14 == 0x8000000000000000LL )
    {
LABEL_29:
      *(_QWORD *)&v14 = a1;
      *a1 = 0LL;
      a1[1] = *((_QWORD *)&v14 + 1);
      return v14;
    }
    v22 = *(_QWORD *)v40;
    v47 = v14;
    v48 = v41;
    if ( (unsigned __int8)regex::regex::string::Regex::is_match_at(v45, v46) )
      break;
    *(_QWORD *)v39 = v48;
    v38 = v47;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(&v36, a8, v22, &v38);
    if ( v36.m256i_i64[0] != 0x8000000000000000LL )
    {
      v38 = *(_OWORD *)v36.m256i_i8;
      *(_QWORD *)v39 = v36.m256i_i64[2];
      v20 = (__m256i *)v36.m256i_i64[1];
      v23 = uu_csplit::SplitWriter::writeln(a2, v36.m256i_i64[1], v36.m256i_i64[2]);
      if ( v23 )
      {
        *a1 = 0LL;
        a1[1] = v23;
        v34 = &v38;
LABEL_66:
        *(_QWORD *)&v14 = core::ptr::drop_in_place<alloc::string::String>(v34, v20);
        return v14;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v38, v20);
    }
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v40, a8);
    *(_QWORD *)&v14 = *(_QWORD *)&v40[8];
    if ( *(_QWORD *)&v40[8] == 0x8000000000000001LL )
      goto LABEL_10;
  }
  v20 = a8;
  uu_csplit::InputSplitter<I>::shrink_buffer_to_size(v52, a8);
  *(_QWORD *)&v39[16] = v53;
  *(_OWORD *)v39 = v52[1];
  v38 = v52[0];
  for ( k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38);
        k;
        k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v38) )
  {
    v28 = *(_QWORD *)(k + 8);
    if ( v28 == 0x8000000000000001LL )
      break;
    v29 = *(_QWORD *)k;
    *(_OWORD *)&v36.m256i_u64[2] = *(_OWORD *)(k + 16);
    *(_OWORD *)v36.m256i_i8 = __PAIR128__(v28, v29);
    v20 = &v36;
    core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v42, &v36);
    v49 = *(_OWORD *)&v42[8];
    if ( *(_QWORD *)v42 == 0x8000000000000000LL )
      break;
    v36.m256i_i64[0] = *(_QWORD *)v42;
    *(_OWORD *)&v36.m256i_u64[1] = v49;
    v20 = (__m256i *)v49;
    v30 = uu_csplit::SplitWriter::writeln(a2, v49, *((_QWORD *)&v49 + 1));
    if ( v30 )
    {
      *a1 = 0LL;
      a1[1] = v30;
      core::ptr::drop_in_place<alloc::string::String>(&v36, v20);
      core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v38);
      goto LABEL_61;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v36, v20);
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>::drain_buffer::{{closure}}>>(&v38);
  v31 = *(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL);
  v32 = v37;
  if ( !v31 )
  {
    v20 = a8;
    a8[1].m256i_i64[2] = v37 + 1;
    *(_QWORD *)v39 = v48;
    v38 = v47;
    uu_csplit::InputSplitter<I>::add_line_to_buffer(&v36, a8, v22, &v38);
    v33 = v36.m256i_i64[0];
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v36);
    if ( v33 != 0x8000000000000000LL )
    {
      *(_QWORD *)&v38 = &off_2DEB90;
      *((_QWORD *)&v38 + 1) = 1LL;
      *(_QWORD *)v39 = 8LL;
      *(_OWORD *)&v39[8] = 0LL;
      core::panicking::panic_fmt(&v38, &off_2DEBA0);
    }
  }
  uu_csplit::SplitWriter::finish_split(a2);
  *(_QWORD *)&v14 = 12LL;
  if ( a8->m256i_i64[2] < v32 )
  {
    v20 = v43;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v38, v43, v44);
    a1[3] = *(_QWORD *)v39;
    *(_OWORD *)(a1 + 1) = v38;
    *(_QWORD *)&v14 = 1LL;
  }
  *a1 = v14;
  if ( v31 )
  {
LABEL_61:
    v34 = &v47;
    goto LABEL_66;
  }
  return v14;
}
