__int64 __fastcall fd::walk::ReceiverBuffer<W>::stream(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  _BYTE v4[32]; // [rsp+0h] [rbp-2D8h] BYREF
  __int128 v5; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-2A8h]
  _DWORD src[78]; // [rsp+38h] [rbp-2A0h] BYREF
  _BYTE dest[360]; // [rsp+170h] [rbp-168h] BYREF

  *(_BYTE *)(a1 + 128) = 1;
  v6 = *(_QWORD *)(a1 + 72);
  v5 = *(_OWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 8LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v4, &v5);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v4);
  if ( src[0] == 4 )
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::dir_entry::DirEntry>>(v4);
    return (unsigned int)fd::walk::ReceiverBuffer<W>::flush(a1);
  }
  else
  {
    while ( 1 )
    {
      memcpy(dest, src, 0x138uLL);
      LOBYTE(v1) = fd::walk::ReceiverBuffer<W>::print(a1, (__int64)dest);
      v2 = v1;
      if ( (_BYTE)v1 != 6 )
        break;
      core::ptr::drop_in_place<fd::dir_entry::DirEntry>(dest);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v4);
      if ( src[0] == 4 )
        goto LABEL_4;
    }
    core::ptr::drop_in_place<fd::dir_entry::DirEntry>(dest);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::dir_entry::DirEntry>>(v4);
  }
  return v2;
}