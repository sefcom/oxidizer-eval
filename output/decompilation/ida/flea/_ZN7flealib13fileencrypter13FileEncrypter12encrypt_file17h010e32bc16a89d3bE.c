__int64 __fastcall flealib::fileencrypter::FileEncrypter::encrypt_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  unsigned int v7; // [rsp+Ch] [rbp-9Ch] BYREF
  __int128 v8; // [rsp+10h] [rbp-98h] BYREF
  __int64 v9; // [rsp+20h] [rbp-88h]
  __int64 v10; // [rsp+28h] [rbp-80h] BYREF
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  unsigned int v13; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  _BYTE v16[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int128 v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp-28h]

  std::fs::File::open(&v8);
  if ( (v8 & 1) != 0 )
    return *((_QWORD *)&v8 + 1);
  v7 = DWORD1(v8);
  v10 = 0LL;
  v11 = 1LL;
  v12 = 0LL;
  if ( <std::fs::File as std::io::Read>::read_to_end(&v7, &v10) )
  {
    v4 = v5;
  }
  else
  {
    alloc::string::String::from_utf8_lossy(&v13, v11, v12);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v8, v14, v15);
    v20 = v9;
    v19 = v8;
    flealib::fileencrypter::FileEncrypter::encrypt(v16, a1, &v19);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v13);
    std::fs::File::create(&v8, a2, a3);
    if ( (v8 & 1) != 0 )
    {
      v4 = *((_QWORD *)&v8 + 1);
    }
    else
    {
      v13 = DWORD1(v8);
      v4 = std::io::Write::write_all(&v13, v17, v18);
      core::ptr::drop_in_place<std::fs::File>(v13);
      if ( !v4 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v16);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
        core::ptr::drop_in_place<std::fs::File>(v7);
        return 0LL;
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v16);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
  core::ptr::drop_in_place<std::fs::File>(v7);
  return v4;
}