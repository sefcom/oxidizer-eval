__int128 *__fastcall uu_paste::paste(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  char v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  char v25; // [rsp+Bh] [rbp-14Dh] BYREF
  int v26; // [rsp+Ch] [rbp-14Ch]
  __int128 *v27; // [rsp+10h] [rbp-148h]
  __int64 v28; // [rsp+18h] [rbp-140h] BYREF
  __int128 v29; // [rsp+20h] [rbp-138h] BYREF
  __int64 v30; // [rsp+30h] [rbp-128h]
  __int64 v31; // [rsp+38h] [rbp-120h]
  char **v32; // [rsp+40h] [rbp-118h]
  __int64 v33; // [rsp+48h] [rbp-110h] BYREF
  __int64 v34; // [rsp+50h] [rbp-108h] BYREF
  __int64 v35; // [rsp+58h] [rbp-100h]
  unsigned __int64 v36; // [rsp+60h] [rbp-F8h]
  __int64 v37; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+78h] [rbp-E0h]
  __int64 v39; // [rsp+80h] [rbp-D8h]
  __int64 v40; // [rsp+88h] [rbp-D0h]
  __int64 v41; // [rsp+90h] [rbp-C8h]
  __int128 v42; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-B0h]
  __m128i v44; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-98h]
  __int128 v46; // [rsp+D0h] [rbp-88h]
  __int128 v47; // [rsp+100h] [rbp-58h] BYREF
  __int128 v48; // [rsp+110h] [rbp-48h]

  uu_paste::parse_delimiters(&v44, a3, a4);
  v27 = (__int128 *)v44.m128i_i64[1];
  if ( v44.m128i_i64[0] )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a1);
    return v27;
  }
  v31 = v45;
  v33 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v40 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v44, v8, 0LL);
  LODWORD(v32) = a2;
  v26 = a5;
  if ( v44.m128i_i64[0] )
    alloc::raw_vec::handle_error(v44.m128i_i64[1], v45);
  v37 = v44.m128i_i64[1];
  v38 = v45;
  v39 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v34, a1);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v42, &v34);
  while ( (_QWORD)v42 != 0x8000000000000000LL )
  {
    v9 = v43;
    v30 = v43;
    v29 = v42;
    v10 = *((_QWORD *)&v42 + 1);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *((_QWORD *)&v42 + 1),
                            v43,
                            asc_1C7F6,
                            1LL) )
    {
      v11 = *(_QWORD *)core::cell::once::OnceCell<T>::get_or_try_init(&v33);
      alloc::rc::RcInnerPtr::inc_strong(v11);
      v12 = _mm_slli_si128((__m128i)v11, 8);
    }
    else
    {
      std::fs::File::open(&v44, v10, v9);
      if ( v44.m128i_i32[0] )
      {
        v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v44.m128i_i64[1]);
        core::ptr::drop_in_place<alloc::string::String>(&v29);
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v34);
        goto LABEL_42;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v44, 0x2000LL, v44.m128i_u32[1]);
      v12 = _mm_load_si128(&v44);
      v47 = v45;
      v48 = v46;
    }
    v44 = v12;
    v46 = v48;
    v45 = v47;
    alloc::vec::Vec<T,A>::push(&v37, &v44);
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v42, &v34);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v34);
  v44.m128i_i64[0] = std::io::stdio::stdout();
  v28 = std::io::stdio::Stdout::lock(&v44);
  v25 = v26;
  v41 = v39;
  uu_paste::DelimiterState::new((__int64)&v44, v27, v31);
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = 1LL;
  v30 = 0LL;
  if ( (_BYTE)v32 )
  {
    v34 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v37);
    v35 = v13;
    v14 = v26;
LABEL_12:
    v15 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v34);
    if ( v15 )
    {
      v16 = (_QWORD *)v15;
      v30 = 0LL;
      while ( 1 )
      {
        uu_paste::InputSource::read_until((__int64 (__fastcall ***)())&v47, v16, v14, (__int64)&v29);
        v17 = v47;
        if ( (_QWORD)v47 )
          goto LABEL_41;
        if ( !*((_QWORD *)&v47 + 1) )
        {
          uu_paste::DelimiterState::remove_trailing_delimiter(v44.m128i_i64[0], v45, (__int64)&v29);
          v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v28, *((_QWORD *)&v29 + 1), v30);
          if ( v18 || (v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v28, &v25, 1LL)) != 0 )
          {
            v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
            goto LABEL_41;
          }
          goto LABEL_12;
        }
        uu_paste::remove_trailing_line_ending_byte(v14, (__int64)&v29);
        uu_paste::DelimiterState::write_delimiter(v44.m128i_i64, (__int64)&v29);
      }
    }
LABEL_38:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v28);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v37);
    core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v33);
    core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v27, v31);
    return 0LL;
  }
  <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v34, v41);
  v32 = &off_1144C8;
  v26 = (unsigned __int8)v26;
  while ( 2 )
  {
    v30 = 0LL;
    *(_QWORD *)&v47 = v38;
    *((_QWORD *)&v47 + 1) = v38 + 48 * v39;
    *(_QWORD *)&v48 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      v20 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v47);
      if ( !v21 )
        break;
      v22 = v20;
      v23 = v36;
      if ( v20 >= v36 )
        goto LABEL_45;
      if ( *(_BYTE *)(v35 + v20) )
        goto LABEL_22;
      uu_paste::InputSource::read_until((__int64 (__fastcall ***)())&v42, v21, v26, (__int64)&v29);
      v17 = v42;
      if ( (_QWORD)v42 )
        goto LABEL_40;
      if ( !*((_QWORD *)&v42 + 1) )
      {
        v23 = v36;
        if ( v22 >= v36 )
        {
          v32 = &off_1144E0;
LABEL_45:
          core::panicking::panic_bounds_check(v22, v23, v32);
        }
        *(_BYTE *)(v35 + v22) = 1;
LABEL_22:
        ++v19;
        goto LABEL_23;
      }
      uu_paste::remove_trailing_line_ending_byte(v26, (__int64)&v29);
LABEL_23:
      uu_paste::DelimiterState::write_delimiter(v44.m128i_i64, (__int64)&v29);
    }
    if ( v19 == v41 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<bool>>(&v34);
      goto LABEL_38;
    }
    uu_paste::DelimiterState::remove_trailing_delimiter(v44.m128i_i64[0], v45, (__int64)&v29);
    v24 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v28, *((_QWORD *)&v29 + 1), v30);
    if ( !v24 )
    {
      v24 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v28, &v25, 1LL);
      if ( !v24 )
      {
        uu_paste::DelimiterState::reset_to_first_delimiter((__int64)&v44);
        continue;
      }
    }
    break;
  }
  v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
LABEL_40:
  core::ptr::drop_in_place<alloc::vec::Vec<bool>>(&v34);
LABEL_41:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v28);
LABEL_42:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v37);
  core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v33);
  core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(v27, v31);
  return (__int128 *)v17;
}
