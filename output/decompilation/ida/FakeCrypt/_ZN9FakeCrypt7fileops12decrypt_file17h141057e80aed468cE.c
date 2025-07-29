__int64 __fastcall FakeCrypt::fileops::decrypt_file(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-808h] BYREF
  char v10; // [rsp+7h] [rbp-801h] BYREF
  _BYTE v11[4]; // [rsp+8h] [rbp-800h] BYREF
  unsigned int v12; // [rsp+Ch] [rbp-7FCh]
  __int64 v13; // [rsp+18h] [rbp-7F0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-7E8h]
  _QWORD *v15; // [rsp+28h] [rbp-7E0h]
  __int64 v16; // [rsp+30h] [rbp-7D8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-7D0h]
  _QWORD v18[4]; // [rsp+40h] [rbp-7C8h] BYREF
  char **dest; // [rsp+60h] [rbp-7A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-7A0h]
  _QWORD *v21; // [rsp+70h] [rbp-798h]
  __int64 v22; // [rsp+78h] [rbp-790h]
  __int64 v23; // [rsp+80h] [rbp-788h]
  _BYTE v24[1000]; // [rsp+420h] [rbp-3E8h] BYREF

  v16 = a1;
  v17 = a2;
  std::fs::File::open(v11, a1, a2);
  if ( (v11[0] & 1) != 0 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v11);
  v9 = v12;
  v13 = 0LL;
  v14 = 1LL;
  v15 = 0LL;
  v2 = <std::fs::File as std::io::Read>::read_to_end(&v9, &v13);
  if ( v2 )
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v2, v3);
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v3);
    <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(&dest);
    <cbc::decrypt::Decryptor<C> as crypto_common::InnerIvInit>::inner_iv_init(v24, &dest);
    dest = (char **)v14;
    v20 = v14;
    v21 = v15;
    v6 = cipher::block::BlockDecryptMut::decrypt_padded_inout_mut(v24, &dest);
    if ( v6 )
    {
      v7 = v5;
      std::fs::File::create(&dest, v16, v17);
      if ( (_DWORD)dest )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&dest);
      }
      else
      {
        LODWORD(v18[0]) = HIDWORD(dest);
        v8 = std::io::Write::write_all(v18, v6, v7);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v8);
        core::ptr::drop_in_place<std::fs::File>(LODWORD(v18[0]));
      }
    }
    else
    {
      v18[0] = &v16;
      v18[1] = <&T as core::fmt::Debug>::fmt;
      v18[2] = &v10;
      v18[3] = <block_padding::UnpadError as core::fmt::Display>::fmt;
      dest = &off_D95E8;
      v20 = 3LL;
      v23 = 0LL;
      v21 = v18;
      v22 = 2LL;
      std::io::stdio::_eprint(&dest);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
  result = core::ptr::drop_in_place<std::fs::File>(v9);
  if ( (v11[0] & 1) != 0 )
    return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v11);
  return result;
}