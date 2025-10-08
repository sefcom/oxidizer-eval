__int64 __fastcall uu_sort::ext_sort::sorter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = ((__int64 (*)(void))std::sync::mpmc::Receiver<T>::recv)();
  v12[0] = v8;
  if ( !v8 )
    return core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(v12);
  v9 = v8;
  while ( 1 )
  {
    v12[1] = v9;
    uu_sort::sort_by(*(_QWORD *)(v9 + 32), *(_QWORD *)(v9 + 40), a5, v9 + 48);
    v10 = std::sync::mpmc::Sender<T>::send(a3, a4, v9);
    v13[0] = v10;
    result = core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::Chunk>>>(v13);
    if ( v10 )
      break;
    v9 = std::sync::mpmc::Receiver<T>::recv(a1, a2);
    v12[0] = v9;
    if ( !v9 )
      return core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(v12);
  }
  return result;
}