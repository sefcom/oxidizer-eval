__int64 __fastcall uu_pr::pr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 pages; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v11; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+10h] [rbp-B8h]
  __int128 v13; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  __int128 v16; // [rsp+48h] [rbp-80h] BYREF
  __int64 v17; // [rsp+58h] [rbp-70h]
  _BYTE v18[104]; // [rsp+60h] [rbp-68h] BYREF

  uu_pr::open(&v11, a2, a3);
  v5 = v12;
  if ( (_QWORD)v11 == 0x8000000000000005LL )
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v18, *((_QWORD *)&v11 + 1), v12);
    pages = uu_pr::read_stream_and_create_pages(a4, v18, 0LL);
    while ( 1 )
    {
      <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v15, pages);
      if ( (_QWORD)v16 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
          pages,
          &off_2694E0);
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return a1;
      }
      v13 = v16;
      v14 = v17;
      if ( (uu_pr::print_page(*((_QWORD *)&v16 + 1), v17, a4, v15 + 1) & 1) != 0 )
        break;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v16);
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v11, v7);
    v9 = v11;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v9;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v13);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      pages,
      &off_2694E0);
  }
  else
  {
    v8 = *((_QWORD *)&v12 + 1);
    *(_OWORD *)a1 = v11;
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)(a1 + 24) = v8;
  }
  return a1;
}