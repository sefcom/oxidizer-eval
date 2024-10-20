__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE v12[24]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v13[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 until; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+A8h] [rbp-50h]
  _BYTE v16[40]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-20h]
  __int64 v18[3]; // [rsp+E0h] [rbp-18h] BYREF

  alloc::vec::Vec<T>::new(v12);
  alloc::vec::Vec<T>::new(v13);
  while ( 1 )
  {
    until = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, v12);
    v15 = v3;
    if ( until || !v15 )
      break;
    v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v12);
    v6 = core::slice::<impl [T]>::iter(v4, v5);
    core::iter::traits::iterator::Iterator::filter_map(v16, v6, v7, a3);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::Extend<T>>::extend(v13, v16);
    v8 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v13);
    v17 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v8, v9);
    if ( v17 )
    {
      v18[0] = v17;
      core::result::unwrap_failed(aCalledResultUn, 43LL, v18, &off_11AE80, &off_11AEB8);
    }
    alloc::vec::Vec<T,A>::clear(v12);
    alloc::vec::Vec<T,A>::clear(v13);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&until);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&until);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v13);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12);
  return core::ptr::drop_in_place<uu_tr::operation::SqueezeOperation>(a3);
}
