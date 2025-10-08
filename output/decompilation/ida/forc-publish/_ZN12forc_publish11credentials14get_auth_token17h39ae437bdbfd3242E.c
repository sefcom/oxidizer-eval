__int64 __fastcall forc_publish::credentials::get_auth_token(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  __int128 v7; // xmm0
  __int8 v8; // al
  __int64 v9; // r15
  char v10; // dl
  char v11; // bp
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __m256i v16; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-90h]
  _BYTE v18[31]; // [rsp+30h] [rbp-88h]
  __int64 v19; // [rsp+58h] [rbp-60h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h]
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF
  __int64 v22; // [rsp+80h] [rbp-38h]

  if ( __OFSUB__(0LL, *a2) )
  {
    std::env::var(&v16);
    if ( v16.m256i_i32[0] == 1 )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v16);
      v4 = *a3;
      v5 = a3[1];
      v6 = a3[2];
      forc_util::user_forc_directory(&v16);
      if ( v4 == 0x8000000000000000LL )
      {
        v6 = v16.m256i_i64[2];
        v5 = v16.m256i_i64[1];
        v4 = v16.m256i_i64[0];
      }
      else
      {
        core::ptr::drop_in_place<std::path::PathBuf>(v16.m256i_i64[0], v16.m256i_i64[1]);
      }
      std::path::Path::join(&v19, v5, v6, aCredentialsTom, 16LL);
      core::ptr::drop_in_place<std::path::PathBuf>(v4, v5);
      forc_publish::credentials::get_auth_token_from_file(&v16, &v19);
      v8 = v16.m256i_i8[0];
      if ( v16.m256i_i8[0] == 14 )
      {
        *(_QWORD *)&v18[23] = v16.m256i_i64[3];
        *(_OWORD *)&v18[7] = *(_OWORD *)&v16.m256i_u64[1];
        v21 = *(_OWORD *)&v16.m256i_u64[1];
        v22 = v16.m256i_i64[3];
        if ( v16.m256i_i64[1] != 0x8000000000000000LL )
        {
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v18[23];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)&v18[7];
          *(_BYTE *)a1 = 14;
          goto LABEL_15;
        }
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v21);
        *(_QWORD *)&v21 = std::io::stdio::stdin();
        v9 = std::io::stdio::Stdin::lock(&v21);
        v11 = v10;
        v12 = std::io::stdio::stdout();
        forc_publish::credentials::get_auth_token_from_user_input(&v16, &v19, v9, v11 & 1, v12);
        v8 = v16.m256i_i8[0];
        if ( v16.m256i_i8[0] == 14 )
        {
          *(_QWORD *)&v18[23] = v16.m256i_i64[3];
          v13 = *(_OWORD *)&v16.m256i_u64[1];
          *(_OWORD *)&v18[7] = *(_OWORD *)&v16.m256i_u64[1];
          *(_QWORD *)(a1 + 24) = v16.m256i_i64[3];
          *(_OWORD *)(a1 + 8) = v13;
          *(_BYTE *)a1 = 14;
          core::ptr::drop_in_place<std::path::PathBuf>(v19, v20);
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
          return a1;
        }
      }
      *(_OWORD *)&v18[15] = *(_OWORD *)&v16.m256i_u64[2];
      *(_OWORD *)v18 = *(_OWORD *)&v16.m256i_i8[1];
      v14 = v17;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v18[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v18;
      *(_BYTE *)a1 = v8;
      *(_QWORD *)(a1 + 32) = v14;
LABEL_15:
      core::ptr::drop_in_place<std::path::PathBuf>(v19, v20);
      return a1;
    }
    *(_QWORD *)(a1 + 24) = v16.m256i_i64[3];
    v7 = *(_OWORD *)&v16.m256i_u64[1];
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a2[2];
    v7 = *(_OWORD *)a2;
  }
  *(_OWORD *)(a1 + 8) = v7;
  *(_BYTE *)a1 = 14;
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(*a3, a3[1]);
  return a1;
}