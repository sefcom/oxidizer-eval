_QWORD *__fastcall flealib::fileserver::FileServer::change_directory_up(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int128 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]

  v2 = std::path::Path::parent(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v2 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v5, v2, v3);
    if ( (v5 & 1) != 0 )
      core::option::unwrap_failed(&off_709910);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v5, *((_QWORD *)&v5 + 1), v6);
    core::ptr::drop_in_place<alloc::string::String>(a2);
    *(_QWORD *)(a2 + 16) = v6;
    *(_OWORD *)a2 = v5;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aAlreadyAtRoot, 15LL);
  }
  return a1;
}