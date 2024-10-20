__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  struct _Unwind_Exception *v15; // [rsp+0h] [rbp-F8h]
  int v16; // [rsp+8h] [rbp-F0h]
  _BYTE v18[24]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v19[24]; // [rsp+88h] [rbp-70h] BYREF
  __int64 until; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-50h]
  _BYTE v22[40]; // [rsp+B0h] [rbp-48h] BYREF
  struct _Unwind_Exception *v23; // [rsp+D8h] [rbp-20h]
  struct _Unwind_Exception *v24; // [rsp+E0h] [rbp-18h] BYREF

  alloc::vec::Vec<T>::new(v18);
  alloc::vec::Vec<T>::new(v19);
  while ( 1 )
  {
    until = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, v18);
    v21 = v3;
    if ( until || !v21 )
      break;
    v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v18);
    v6 = core::slice::<impl [T]>::iter(v4, v5);
    core::iter::traits::iterator::Iterator::filter_map(v22, v6, v7, a3);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::Extend<T>>::extend(v19, v22);
    v8 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v19);
    v16 = v9;
    v15 = (struct _Unwind_Exception *)<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(
                                        a2,
                                        v8,
                                        v9);
    v23 = v15;
    if ( v15 )
    {
      v24 = v23;
      core::result::unwrap_failed(aCalledResultUn, 43LL, &v24, &off_11AE80, &off_11AEB8);
    }
    alloc::vec::Vec<T,A>::clear(v18);
    alloc::vec::Vec<T,A>::clear(v19);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&until);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&until);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v19);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v18);
  return core::ptr::drop_in_place<uu_tr::operation::ChainedSymbolTranslator<uu_tr::operation::TranslateOperation,uu_tr::operation::SqueezeOperation>>(
           a3,
           10,
           v10,
           v11,
           v12,
           v13,
           v15,
           v16);
}
