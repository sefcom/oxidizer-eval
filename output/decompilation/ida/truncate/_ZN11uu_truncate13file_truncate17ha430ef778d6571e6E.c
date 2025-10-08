__int64 __fastcall uu_truncate::file_truncate(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // r15
  char v12; // al
  unsigned int v13; // ebp
  __int128 v14; // [rsp+0h] [rbp-158h] BYREF
  _QWORD *v15; // [rsp+10h] [rbp-148h]
  __int64 v16; // [rsp+18h] [rbp-140h]
  __int64 v17; // [rsp+20h] [rbp-138h]
  _QWORD v18[3]; // [rsp+30h] [rbp-128h] BYREF
  char v19; // [rsp+48h] [rbp-110h]
  _QWORD v20[2]; // [rsp+50h] [rbp-108h] BYREF
  __int128 v21; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp-E8h]
  __int64 dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-D8h]
  int v25; // [rsp+B0h] [rbp-A8h]

  std::fs::metadata(&dest);
  v7 = dest;
  v8 = 2LL;
  if ( dest != 2 )
  {
    if ( (v25 & 0xF000) == 0x1000 )
    {
      v18[0] = 0LL;
      v18[1] = a1;
      v18[2] = a2;
      v19 = 1;
      v20[0] = v18;
      v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v14 = &off_E4020;
      *((_QWORD *)&v14 + 1) = 2LL;
      v17 = 0LL;
      v15 = v20;
      v16 = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v21, &v14);
      LODWORD(v16) = 1;
      v14 = v21;
      v15 = v22;
      v9 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v14);
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v7, v24);
      return v9;
    }
    v8 = dest;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v8, v24);
  dest = 0x1B600000000LL;
  LODWORD(v24) = 256;
  WORD2(v24) = a3;
  std::fs::OpenOptions::open(&v14, &dest, a1, a2);
  if ( (_DWORD)v14 == 1 )
  {
    v11 = *((_QWORD *)&v14 + 1);
    v12 = std::io::error::Error::kind(*((_QWORD *)&v14 + 1));
    if ( !a3 && !v12 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v11);
      v11 = 0LL;
    }
  }
  else
  {
    v13 = DWORD1(v14);
    LODWORD(v18[0]) = DWORD1(v14);
    v11 = std::fs::File::set_len(v18, a4);
    core::ptr::drop_in_place<std::fs::File>(v13);
  }
  return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
           v11,
           a1,
           a2);
}