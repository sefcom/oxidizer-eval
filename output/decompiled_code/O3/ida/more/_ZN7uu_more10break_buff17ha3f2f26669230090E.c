__int64 __fastcall uu_more::break_buff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h]
  __int64 v13; // [rsp+18h] [rbp-90h] BYREF
  _OWORD v14[3]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v15; // [rsp+58h] [rbp-50h]
  _BYTE v16[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher((char *)v14 + 8);
  v13 = 0LL;
  *(_QWORD *)&v14[0] = a3;
  v15 = 0;
  v6 = core::iter::traits::iterator::Iterator::fold(&v13);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v13, v6, 0LL);
  if ( v13 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v14[0], *((_QWORD *)&v14[0] + 1));
  v11 = v14[0];
  v12 = 0LL;
  <char as core::str::pattern::Pattern>::into_searcher((char *)v14 + 8);
  v13 = 0LL;
  *(_QWORD *)&v14[0] = a3;
  v15 = 0;
  while ( 1 )
  {
    v7 = core::str::iter::SplitInternal<P>::next_inclusive(&v13, a2);
    if ( !v7 )
      break;
    v8 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(v16, v7);
    uu_more::break_line(v16, v8, v9, a4);
    a2 = v17;
    alloc::vec::Vec<T,A>::append_elements(&v11, v17, v18);
    v18 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v16);
  }
  result = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return result;
}
