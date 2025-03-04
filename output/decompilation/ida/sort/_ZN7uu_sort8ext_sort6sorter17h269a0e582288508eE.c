__int64 __fastcall uu_sort::ext_sort::sorter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = std::sync::mpmc::Receiver<T>::recv(a1);
  v7 = v4;
  if ( !v4 )
    return core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v7);
  while ( 1 )
  {
    v8 = v4;
    uu_sort::sort_by(v4 + 24, a3, v4 + 48);
    v5 = std::sync::mpmc::Sender<T>::send(a2, v8);
    v9[0] = v5;
    result = core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::Chunk>>>(v9);
    if ( v5 )
      break;
    v4 = std::sync::mpmc::Receiver<T>::recv(a1);
    v7 = v4;
    if ( !v4 )
      return core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(&v7);
  }
  return result;
}
