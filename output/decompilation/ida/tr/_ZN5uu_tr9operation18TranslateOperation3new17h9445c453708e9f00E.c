__int64 __fastcall uu_tr::operation::TranslateOperation::new(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[32]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v10[40]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v11[136]; // [rsp+50h] [rbp-88h] BYREF

  v4 = a3[2];
  if ( v4 )
  {
    v5 = *(unsigned __int8 *)(a3[1] + v4 - 1);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v9, a2);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v11, a3);
    core::iter::traits::iterator::Iterator::chain(v10, v11, v5);
    core::iter::traits::iterator::Iterator::zip(v11, v9, v10);
    core::iter::traits::iterator::Iterator::collect(a1, v11);
  }
  else
  {
    if ( a2[2] )
    {
      *(_DWORD *)(a1 + 8) = 5;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v6 = std::thread::local::LocalKey<T>::with();
      *(_OWORD *)(a1 + 16) = xmmword_FDAC8;
      *(_OWORD *)a1 = *(_OWORD *)&off_FDAB8;
      *(_QWORD *)(a1 + 32) = v6;
      *(_QWORD *)(a1 + 40) = v7;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a3, a3[1]);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a2, a2[1]);
  }
  return a1;
}