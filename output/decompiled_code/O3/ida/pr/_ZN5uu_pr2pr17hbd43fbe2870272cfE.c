__int64 __fastcall uu_pr::pr(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 pages; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int128 v12; // xmm0
  __int128 v14; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-B8h]
  __int128 v16; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  __int128 v19; // [rsp+58h] [rbp-80h]
  unsigned __int64 v20; // [rsp+68h] [rbp-70h]
  __int128 v21[6]; // [rsp+70h] [rbp-68h] BYREF

  v5 = a1;
  uu_pr::open(&v16, a2, a3);
  v6 = v17;
  if ( (_QWORD)v16 == 0x8000000000000005LL )
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v21, 0x10000LL, *((_QWORD *)&v16 + 1), v17);
    pages = uu_pr::read_stream_and_create_pages(a4, v21, 0LL);
    while ( 1 )
    {
      <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v18, pages);
      if ( (_QWORD)v19 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>>(pages);
        v5 = a1;
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return v5;
      }
      v14 = v19;
      v15 = v20;
      if ( uu_pr::print_page(*((__int64 *)&v19 + 1), v20, (__int64)a4, v18 + 1, v8, v9) )
        break;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v14);
    }
    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v16, v10);
    v12 = v16;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v12;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v14);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>>(pages);
    return a1;
  }
  else
  {
    v11 = *((_QWORD *)&v17 + 1);
    *(_OWORD *)a1 = v16;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v11;
  }
  return v5;
}
