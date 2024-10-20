__int64 __fastcall uu_pr::pr(__int64 a1, _BYTE *a2, signed __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 pages; // r14
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 i; // [rsp+8h] [rbp-D0h]
  __int128 v21; // [rsp+10h] [rbp-C8h]
  __int64 v22; // [rsp+20h] [rbp-B8h]
  __int128 v24; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+40h] [rbp-98h]
  _QWORD v26[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+78h] [rbp-60h]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h] BYREF
  __int128 v32; // [rsp+90h] [rbp-48h]
  __int64 v33; // [rsp+A0h] [rbp-38h]

  v5 = a1;
  uu_pr::open((unsigned __int64 *)&v24, a2, a3);
  v6 = *((_QWORD *)&v24 + 1);
  v7 = v25;
  if ( (_QWORD)v24 == 0x8000000000000005LL )
  {
    v8 = _rust_alloc(0x10000LL, 1LL);
    if ( !v8 )
      alloc::raw_vec::handle_error(1LL, 0x10000LL);
    v26[0] = v8;
    v26[1] = 0x10000LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = v6;
    v30 = v7;
    pages = uu_pr::read_stream_and_create_pages(a4, v26, 0LL);
    for ( i = pages; ; pages = i )
    {
      <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v31, pages);
      if ( (_QWORD)v32 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>(pages);
        _rust_dealloc(pages, 280LL, 8LL);
        v5 = a1;
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return v5;
      }
      v21 = v32;
      v10 = v33;
      v22 = v33;
      v11 = *((_QWORD *)&v32 + 1);
      if ( uu_pr::print_page(*((_QWORD *)&v32 + 1), v33, a4, v31 + 1) )
        break;
      v13 = v10 + 1;
      v14 = v11;
      while ( v13 != 1 )
      {
        --v13;
        core::ptr::drop_in_place<uu_pr::FileLine>();
        v14 += 64LL;
      }
      if ( (_QWORD)v21 )
        _rust_dealloc(v11, (_QWORD)v21 << 6, 8LL);
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v24, v12);
    v17 = v24;
    *(_OWORD *)(a1 + 16) = v25;
    *(_OWORD *)a1 = v17;
    v18 = v22 + 1;
    v19 = *((_QWORD *)&v21 + 1);
    while ( v18 != 1 )
    {
      --v18;
      core::ptr::drop_in_place<uu_pr::FileLine>();
      v19 += 64LL;
    }
    if ( (_QWORD)v21 )
      _rust_dealloc(*((_QWORD *)&v21 + 1), (_QWORD)v21 << 6, 8LL);
    core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::Flatten<itertools::adaptors::Batching<core::iter::adapters::map::Map<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::flatten::FlatMap<std::io::Lines<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::split_lines_if_form_feed>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>>,uu_pr::read_stream_and_create_pages::{{closure}}>,uu_pr::read_stream_and_create_pages::{{closure}}>>(i);
    _rust_dealloc(i, 280LL, 8LL);
    return a1;
  }
  else
  {
    v15 = *((_QWORD *)&v25 + 1);
    *(_OWORD *)a1 = v24;
    *(_QWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 24) = v15;
    return v5;
  }
}
