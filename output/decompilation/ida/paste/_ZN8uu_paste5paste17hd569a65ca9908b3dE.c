__int64 __fastcall uu_paste::paste(__int64 a1, __int32 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r15
  unsigned int v17; // r13d
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  char v26; // [rsp+3h] [rbp-135h] BYREF
  unsigned int v27; // [rsp+4h] [rbp-134h]
  __int64 v28; // [rsp+8h] [rbp-130h] BYREF
  __int64 v29; // [rsp+10h] [rbp-128h]
  __int64 v30; // [rsp+18h] [rbp-120h]
  __m128i v31; // [rsp+20h] [rbp-118h] BYREF
  __int64 v32; // [rsp+30h] [rbp-108h]
  __int64 v33; // [rsp+38h] [rbp-100h] BYREF
  __int64 v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-E0h]
  __int64 v38; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-C8h]
  __int64 v40; // [rsp+78h] [rbp-C0h]
  char **v41; // [rsp+80h] [rbp-B8h]
  __int64 v42; // [rsp+88h] [rbp-B0h]
  __int128 v43; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-98h]
  __m128i v45; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-78h]
  __int128 v47; // [rsp+D0h] [rbp-68h]
  _QWORD v48[8]; // [rsp+F8h] [rbp-40h] BYREF

  uu_paste::parse_delimiters(&v45, a3, a4);
  v32 = v45.m128i_i64[1];
  if ( v45.m128i_i32[0] == 1 )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a1);
    return v32;
  }
  v31.m128i_i32[2] = a2;
  v27 = a5;
  v34 = v46;
  v31.m128i_i64[0] = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v42 = a1;
  v38 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v8, 8LL, 48LL, &off_DEC18);
  v39 = v9;
  v40 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v35, a1);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
  v10 = v28;
  if ( !__OFSUB__(-v28, 1LL) )
  {
    do
    {
      v11 = v29;
      v12 = v30;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30) )
      {
        core::cell::once::OnceCell<T>::get_or_try_init(&v31);
        alloc::rc::RcInnerPtr::inc_strong(v31.m128i_i64[0]);
        v13 = _mm_slli_si128(_mm_loadl_epi64(&v31), 8);
      }
      else
      {
        std::fs::File::open(&v45, v11, v12);
        if ( v45.m128i_i32[0] == 1 )
        {
          v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45.m128i_i64[1]);
          core::ptr::drop_in_place<alloc::string::String>(v10, v11);
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v35);
          goto LABEL_41;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v45, v45.m128i_u32[1]);
        v13 = _mm_load_si128(&v45);
        v43 = v46;
        v44 = v47;
      }
      v45 = v13;
      v47 = v44;
      v46 = v43;
      alloc::vec::Vec<T,A>::push(&v38, &v45);
      core::ptr::drop_in_place<alloc::string::String>(v10, v11);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28, &v35);
      v10 = v28;
    }
    while ( v28 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v35);
  v45.m128i_i64[0] = std::io::stdio::stdout();
  v33 = std::io::stdio::Stdout::lock(&v45);
  v26 = v27;
  v14 = v40;
  uu_paste::DelimiterState::new(&v45, v32, v34);
  v28 = 0LL;
  v29 = 1LL;
  v30 = 0LL;
  if ( v31.m128i_i8[8] )
  {
    v15 = v39;
    v16 = v39 + 48 * v14;
    v17 = (unsigned __int8)v27;
    v31.m128i_i64[1] = v16;
LABEL_11:
    if ( v15 != v16 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        uu_paste::InputSource::read_until(&v43, v15, v17, &v28);
        v18 = v43;
        if ( (_QWORD)v43 )
          goto LABEL_40;
        if ( !*((_QWORD *)&v43 + 1) )
        {
          uu_paste::DelimiterState::remove_trailing_delimiter(v45.m128i_i64[0], v46, &v28);
          v16 = v31.m128i_i64[1];
          v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v33, v29, v30);
          if ( v19
            || (v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v33, &v26, 1LL), v15 += 48LL, v19) )
          {
            v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
            goto LABEL_40;
          }
          goto LABEL_11;
        }
        uu_paste::remove_trailing_line_ending_byte(v17, &v28);
        uu_paste::DelimiterState::write_delimiter(&v45, &v28);
      }
    }
LABEL_37:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28, v29);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v33);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v38);
    core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v31);
    core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v32, v34);
    return 0LL;
  }
  <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v35, v14);
  v41 = &off_DEC48;
  v27 = (unsigned __int8)v27;
  v31.m128i_i64[1] = v14;
  while ( 2 )
  {
    v30 = 0LL;
    *(_QWORD *)&v43 = v39;
    *((_QWORD *)&v43 + 1) = v39 + 48 * v14;
    *(_QWORD *)&v44 = 0LL;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43);
      if ( !v22 )
        break;
      v23 = v21;
      v24 = v37;
      if ( v21 >= v37 )
        goto LABEL_44;
      if ( *(_BYTE *)(v36 + v21) )
        goto LABEL_21;
      uu_paste::InputSource::read_until(v48, v22, v27, &v28);
      v18 = v48[0];
      if ( v48[0] )
        goto LABEL_39;
      if ( !v48[1] )
      {
        v24 = v37;
        if ( v23 >= v37 )
        {
          v41 = &off_DEC60;
LABEL_44:
          core::panicking::panic_bounds_check(v23, v24, v41);
        }
        *(_BYTE *)(v36 + v23) = 1;
LABEL_21:
        ++v20;
        goto LABEL_22;
      }
      uu_paste::remove_trailing_line_ending_byte(v27, &v28);
LABEL_22:
      uu_paste::DelimiterState::write_delimiter(&v45, &v28);
    }
    if ( v20 == v31.m128i_i64[1] )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v35, v36);
      goto LABEL_37;
    }
    uu_paste::DelimiterState::remove_trailing_delimiter(v45.m128i_i64[0], v46, &v28);
    v25 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v33, v29, v30);
    if ( !v25 )
    {
      v25 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v33, &v26, 1LL);
      if ( !v25 )
      {
        uu_paste::DelimiterState::reset_to_first_delimiter(&v45);
        v14 = v40;
        continue;
      }
    }
    break;
  }
  v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
LABEL_39:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v35, v36);
LABEL_40:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28, v29);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v33);
LABEL_41:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v38);
  core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v31);
  core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v32, v34);
  return v18;
}