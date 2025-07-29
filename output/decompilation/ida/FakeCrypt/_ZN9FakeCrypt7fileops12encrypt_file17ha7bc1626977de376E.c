__int64 __fastcall FakeCrypt::fileops::encrypt_file(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-818h] BYREF
  char v10; // [rsp+7h] [rbp-811h] BYREF
  _BYTE v11[4]; // [rsp+8h] [rbp-810h] BYREF
  unsigned int v12; // [rsp+Ch] [rbp-80Ch]
  _QWORD v13[2]; // [rsp+18h] [rbp-800h] BYREF
  __int64 v14; // [rsp+28h] [rbp-7F0h]
  __int64 v15; // [rsp+30h] [rbp-7E8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-7E0h]
  _QWORD v17[4]; // [rsp+40h] [rbp-7D8h] BYREF
  _QWORD dest[120]; // [rsp+60h] [rbp-7B8h] BYREF
  _BYTE src[1016]; // [rsp+420h] [rbp-3F8h] BYREF

  v15 = a1;
  v16 = a2;
  std::fs::File::open(v11, a1, a2);
  if ( (v11[0] & 1) != 0 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v11);
  v9 = v12;
  v13[0] = 0LL;
  v13[1] = 1LL;
  v14 = 0LL;
  v2 = <std::fs::File as std::io::Read>::read_to_end(&v9, v13);
  if ( v2 )
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v2, v3);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v3);
    alloc::vec::Vec<T,A>::resize(v13, (v14 & 0x7FFFFFFFFFFFFFF0LL) + 16, 0LL, &off_D95D0);
    <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(dest);
    <cbc::decrypt::Decryptor<C> as crypto_common::InnerIvInit>::inner_iv_init(src, dest);
    v6 = cipher::block::BlockEncryptMut::encrypt_padded_mut(src);
    if ( v6 )
    {
      v7 = v5;
      std::fs::File::create(dest, v15, v16);
      if ( LODWORD(dest[0]) )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(dest);
      }
      else
      {
        LODWORD(v17[0]) = HIDWORD(dest[0]);
        v8 = std::io::Write::write_all(v17, v6, v7);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v8);
        core::ptr::drop_in_place<std::fs::File>(LODWORD(v17[0]));
      }
    }
    else
    {
      v17[0] = &v15;
      v17[1] = <&T as core::fmt::Debug>::fmt;
      v17[2] = &v10;
      v17[3] = <inout::errors::PadError as core::fmt::Display>::fmt;
      dest[0] = &off_D95A0;
      dest[1] = 3LL;
      dest[4] = 0LL;
      dest[2] = v17;
      dest[3] = 2LL;
      std::io::stdio::_eprint(dest);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v13);
  result = core::ptr::drop_in_place<std::fs::File>(v9);
  if ( (v11[0] & 1) != 0 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v11);
  return result;
}