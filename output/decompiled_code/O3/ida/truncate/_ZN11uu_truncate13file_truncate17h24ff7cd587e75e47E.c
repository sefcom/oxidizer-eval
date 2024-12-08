__int64 __fastcall uu_truncate::file_truncate(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int128 v11; // [rsp+0h] [rbp-148h] BYREF
  _QWORD *v12; // [rsp+10h] [rbp-138h]
  __int64 v13; // [rsp+18h] [rbp-130h]
  __int64 v14; // [rsp+20h] [rbp-128h]
  _QWORD v15[3]; // [rsp+30h] [rbp-118h] BYREF
  char v16; // [rsp+48h] [rbp-100h]
  _QWORD v17[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v19; // [rsp+70h] [rbp-D8h]
  __int64 v20; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+80h] [rbp-C8h]
  int v22; // [rsp+B0h] [rbp-98h]

  std::fs::metadata(&v20, a1, a2);
  if ( v20 == 2 || (v22 & 0xF000) != 0x1000 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v20, v21);
    v20 = 0x1B600000000LL;
    LODWORD(v21) = 256;
    WORD2(v21) = a3;
    std::fs::OpenOptions::open(&v11, &v20, a1, a2);
    if ( (_DWORD)v11 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      if ( !(unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v11 + 1)) && !a3 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v9);
        v9 = 0LL;
      }
    }
    else
    {
      v10 = DWORD1(v11);
      LODWORD(v15[0]) = DWORD1(v11);
      v9 = std::fs::File::set_len(v15, a4);
      core::ptr::drop_in_place<std::fs::File>(v10);
    }
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
             v9,
             a1,
             a2);
  }
  else
  {
    v6 = v20;
    v15[0] = 0LL;
    v15[1] = a1;
    v15[2] = a2;
    v16 = 1;
    v17[0] = v15;
    v17[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = &off_116BD0;
    *((_QWORD *)&v11 + 1) = 2LL;
    v14 = 0LL;
    v12 = v17;
    v13 = 1LL;
    ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v18, &v11);
    LODWORD(v13) = 1;
    v11 = v18;
    v12 = v19;
    v7 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v11);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v6, v21);
    return v7;
  }
}
