_QWORD *__fastcall flealib::fileserver::FileServer::read_binary_file_by_path(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  _DWORD v7[6]; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v10; // [rsp+70h] [rbp-78h]

  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v7, a3, &off_709940);
  std::fs::metadata(&v8, v7);
  if ( (_DWORD)v8 == 2 )
    goto LABEL_2;
  if ( v10 > 0x1F400000 )
  {
    v4 = std::io::error::Error::new(40LL, aFileTooLarge, 14LL);
    goto LABEL_5;
  }
  std::fs::File::open(&v8, a3);
  if ( (v8 & 1) != 0 )
  {
LABEL_2:
    v4 = *((_QWORD *)&v8 + 1);
LABEL_5:
    a1[1] = v4;
    *a1 = 0x8000000000000000LL;
    return a1;
  }
  v7[0] = DWORD1(v8);
  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 1LL;
  v9 = 0LL;
  if ( <std::fs::File as std::io::Read>::read_to_end(v7, &v8) )
  {
    a1[1] = v6;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
  }
  else
  {
    a1[2] = v9;
    *(_OWORD *)a1 = v8;
  }
  core::ptr::drop_in_place<std::fs::File>(v7[0]);
  return a1;
}