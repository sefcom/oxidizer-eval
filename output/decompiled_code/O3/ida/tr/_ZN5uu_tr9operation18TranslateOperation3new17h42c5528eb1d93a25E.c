__int64 __fastcall uu_tr::operation::TranslateOperation::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[96]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v10[32]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v11[80]; // [rsp+88h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  if ( v4 )
  {
    v5 = *(unsigned __int8 *)(v4 + *(_QWORD *)(a3 + 8) - 1);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v10, a2);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v9, a3);
    core::iter::traits::iterator::Iterator::chain(v11, v9, v5);
    core::iter::traits::iterator::Iterator::zip(v9, v10, v11);
    <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(a1, v9);
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000005LL;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      std::thread::local::LocalKey<T>::try_with(v9);
      v6 = core::result::Result<T,E>::expect(v9);
      *(_OWORD *)(a1 + 16) = xmmword_12F638;
      *(_OWORD *)a1 = *(_OWORD *)&off_12F628;
      *(_QWORD *)(a1 + 32) = v6;
      *(_QWORD *)(a1 + 40) = v7;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a3);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
  }
  return a1;
}
