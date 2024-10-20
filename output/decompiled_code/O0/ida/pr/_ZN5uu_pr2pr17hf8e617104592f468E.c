__int64 __fastcall uu_pr::pr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 pages; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int128 v15; // [rsp+20h] [rbp-118h] BYREF
  __int64 v16; // [rsp+30h] [rbp-108h]
  __int128 v17; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-E8h]
  __int64 v19; // [rsp+60h] [rbp-D8h]
  __int64 v20; // [rsp+68h] [rbp-D0h]
  __int64 v21; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+78h] [rbp-C0h]
  __int64 v23; // [rsp+80h] [rbp-B8h]
  __int64 v24; // [rsp+88h] [rbp-B0h]
  __m256i v25; // [rsp+90h] [rbp-A8h]
  _QWORD v26[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-78h]
  __int64 v28; // [rsp+D0h] [rbp-68h]
  __int64 v29; // [rsp+D8h] [rbp-60h]
  __int64 v30; // [rsp+E0h] [rbp-58h]
  __m256i v31; // [rsp+E8h] [rbp-50h] BYREF

  v5 = a1;
  uu_pr::open(&v21, a2, a3);
  v6 = v22;
  v7 = v23;
  if ( v21 == 0x8000000000000005LL )
  {
    v19 = v22;
    v20 = v23;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v17, 0x10000LL, 0LL);
    if ( (_QWORD)v17 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v17 + 1), v18);
    if ( !(_QWORD)v18 )
      core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
    v27 = 0LL;
    v28 = 0LL;
    v26[0] = v18;
    v26[1] = 0x10000LL;
    v29 = v6;
    v30 = v7;
    pages = uu_pr::read_stream_and_create_pages(a4, v26, 0LL);
    while ( 1 )
    {
      ((void (__fastcall *)(__m256i *, __int64))*(&off_2C8078 + 3))(&v31, pages);
      if ( v31.m256i_i64[1] == 0x8000000000000000LL )
        break;
      v25 = v31;
      if ( v31.m256i_i64[0] == -1 )
        core::panicking::panic_const::panic_const_add_overflow(&off_2C8060);
      v15 = *(_OWORD *)&v25.m256i_u64[1];
      v16 = v25.m256i_i64[3];
      if ( !v25.m256i_i64[2] || (BYTE8(v15) & 7) != 0 || (unsigned __int64)v25.m256i_i64[3] >> 57 )
        core::panicking::panic_nounwind(anon_475f815846da37737caa07221b879fb7_10_llvm_234892413440793941, 162LL);
      if ( uu_pr::print_page(v25.m256i_i64[2], v25.m256i_i64[3], a4, v31.m256i_i64[0] + 1) )
      {
        <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v17, v9);
        v12 = v17;
        *(_OWORD *)(a1 + 16) = v18;
        *(_OWORD *)a1 = v12;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v15);
        if ( core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>> )
          ((void (__fastcall *)(__int64))core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>)(pages);
        v13 = (__int64)*(&off_2C8078 + 1);
        v5 = a1;
        if ( v13 )
          _rust_dealloc(pages, v13, *(&off_2C8078 + 2));
        return v5;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v15);
    }
    if ( core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>> )
      ((void (__fastcall *)(__int64))core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>)(pages);
    v11 = (__int64)*(&off_2C8078 + 1);
    if ( v11 )
      _rust_dealloc(pages, v11, *(&off_2C8078 + 2));
    v5 = a1;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000005LL;
  }
  else
  {
    v10 = v24;
    *(_QWORD *)a1 = v21;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 24) = v10;
  }
  return v5;
}
