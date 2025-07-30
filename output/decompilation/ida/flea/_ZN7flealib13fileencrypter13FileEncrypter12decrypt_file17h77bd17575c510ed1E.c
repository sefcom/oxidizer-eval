__int64 __fastcall flealib::fileencrypter::FileEncrypter::decrypt_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v7; // [rsp+8h] [rbp-80h] BYREF
  unsigned int v8; // [rsp+Ch] [rbp-7Ch] BYREF
  __int128 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int128 v11; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  _BYTE v15[4]; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+5Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp-28h]

  std::fs::File::open(&v9);
  if ( (v9 & 1) == 0 )
  {
    v7 = DWORD1(v9);
    *(_QWORD *)&v13 = 0LL;
    *((_QWORD *)&v13 + 1) = 1LL;
    v14 = 0LL;
    if ( <std::fs::File as std::io::Read>::read_to_end(&v7, &v13) )
    {
      v4 = v5;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
      core::ptr::drop_in_place<std::fs::File>(v7);
      return v4;
    }
    v10 = v14;
    v9 = v13;
    flealib::fileencrypter::FileEncrypter::decrypt(&v11, a1, (__int64)&v9);
    if ( __OFSUB__(0LL, (_QWORD)v11) )
    {
      v4 = std::io::error::Error::new(40LL, aFailedToDecryp, 17LL);
      core::ptr::drop_in_place<std::fs::File>(v7);
      if ( (_QWORD)v11 != 0x8000000000000000LL )
        return v4;
      goto LABEL_12;
    }
    v10 = v12;
    v9 = v11;
    std::fs::File::create(v15, a2, a3);
    if ( (v15[0] & 1) != 0 )
    {
      v4 = v17;
    }
    else
    {
      v8 = v16;
      v4 = std::io::Write::write_all(&v8, *((_QWORD *)&v9 + 1), v10);
      core::ptr::drop_in_place<std::fs::File>(v8);
      if ( !v4 )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v9);
        v4 = 0LL;
        core::ptr::drop_in_place<std::fs::File>(v7);
        if ( (_QWORD)v11 != 0x8000000000000000LL )
          return v4;
        goto LABEL_12;
      }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    core::ptr::drop_in_place<std::fs::File>(v7);
    if ( (_QWORD)v11 != 0x8000000000000000LL )
      return v4;
LABEL_12:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn core::error::Error>>>(&v11);
    return v4;
  }
  return *((_QWORD *)&v9 + 1);
}