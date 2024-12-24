__int64 __fastcall uu_truncate::file_truncate(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v17; // r15
  unsigned int v18; // ebp
  __int128 v19; // [rsp+0h] [rbp-148h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-138h]
  __int64 v21; // [rsp+18h] [rbp-130h]
  __int64 v22; // [rsp+20h] [rbp-128h]
  _QWORD v23[3]; // [rsp+30h] [rbp-118h] BYREF
  char v24; // [rsp+48h] [rbp-100h]
  _QWORD v25[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD *v27; // [rsp+70h] [rbp-D8h]
  __int64 v28; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-C8h]
  int v30; // [rsp+B0h] [rbp-98h]

  std::fs::metadata(&v28, a1, a2);
  if ( v28 == 2 || (v30 & 0xF000) != 0x1000 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v28, v29);
    v28 = 0x1B600000000LL;
    LODWORD(v29) = 256;
    WORD2(v29) = a3;
    std::fs::OpenOptions::open(&v19, &v28, a1, a2);
    if ( (_DWORD)v19 )
    {
      v17 = *((_QWORD *)&v19 + 1);
      if ( !(unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v19 + 1)) && !a3 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v17);
        v17 = 0LL;
      }
    }
    else
    {
      v18 = DWORD1(v19);
      LODWORD(v23[0]) = DWORD1(v19);
      v17 = std::fs::File::set_len(v23, a4);
      core::ptr::drop_in_place<std::fs::File>(v18);
    }
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
             v17,
             a1,
             a2);
  }
  else
  {
    v10 = v28;
    v23[0] = 0LL;
    v23[1] = a1;
    v23[2] = a2;
    v24 = 1;
    v25[0] = v23;
    v25[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &off_116BD0;
    *((_QWORD *)&v19 + 1) = 2LL;
    v22 = 0LL;
    v20 = v25;
    v21 = 1LL;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      &v26,
      &v19,
      v6,
      v7,
      v8,
      v9);
    LODWORD(v21) = 1;
    v19 = v26;
    v20 = v27;
    v15 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
            &v19,
            &v19,
            v11,
            v12,
            v13,
            v14);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v10, v29);
    return v15;
  }
}
