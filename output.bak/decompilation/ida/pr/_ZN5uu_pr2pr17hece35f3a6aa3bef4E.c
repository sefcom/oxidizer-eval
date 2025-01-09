__int64 __fastcall uu_pr::pr(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 pages; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int128 v10; // xmm0
  __int128 v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-B8h]
  __int128 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+50h] [rbp-88h] BYREF
  __int128 v17; // [rsp+58h] [rbp-80h]
  __int64 v18; // [rsp+68h] [rbp-70h]
  __int128 v19[6]; // [rsp+70h] [rbp-68h] BYREF

  v5 = a1;
  uu_pr::open(&v14, a2, a3);
  v6 = v15;
  if ( (_QWORD)v14 == 0x8000000000000005LL )
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v19, 0x10000LL, *((_QWORD *)&v14 + 1), v15);
    pages = uu_pr::read_stream_and_create_pages(a4, v19, 0LL);
    while ( 1 )
    {
      <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v16, pages);
      if ( (_QWORD)v17 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>>(pages);
        v5 = a1;
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return v5;
      }
      v12 = v17;
      v13 = v18;
      if ( uu_pr::print_page(*((__int64 *)&v17 + 1), v18, (__int64)a4, v16 + 1) )
        break;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v12);
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v14, v8);
    v10 = v14;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v10;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v12);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>>(pages);
    return a1;
  }
  else
  {
    v9 = *((_QWORD *)&v15 + 1);
    *(_OWORD *)a1 = v14;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v9;
  }
  return v5;
}
