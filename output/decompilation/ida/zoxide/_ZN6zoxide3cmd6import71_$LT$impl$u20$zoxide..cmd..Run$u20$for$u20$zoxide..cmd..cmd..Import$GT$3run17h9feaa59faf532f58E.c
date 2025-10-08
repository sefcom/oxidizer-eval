__int64 __fastcall zoxide::cmd::import::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Import>::run(__int64 a1)
{
  char ***v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v10; // [rsp+10h] [rbp-B8h]
  __int64 v11; // [rsp+20h] [rbp-A8h] BYREF
  __m256i v12; // [rsp+28h] [rbp-A0h]
  __int128 v13; // [rsp+48h] [rbp-80h]
  __int64 v14; // [rsp+58h] [rbp-70h]
  char **v15; // [rsp+60h] [rbp-68h] BYREF
  __int64 v16; // [rsp+68h] [rbp-60h]
  __m256i v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+90h] [rbp-38h]
  __int64 v19; // [rsp+A0h] [rbp-28h]

  std::fs::read_to_string(&v15, a1);
  v1 = &v15;
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
    &v11,
    &v15,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  v2 = v12.m256i_i64[0];
  if ( !__OFSUB__(-v11, 1LL) )
  {
    v3 = v12.m256i_i64[1];
    v9 = v11;
    v10 = *(_OWORD *)v12.m256i_i8;
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(&v15);
    v4 = v16;
    if ( (_DWORD)v15 != 1 )
    {
      v14 = v19;
      v13 = v18;
      v12 = v17;
      v11 = v16;
      if ( !*(_BYTE *)(a1 + 25) && v12.m256i_i64[1] )
      {
        v15 = &off_134900;
        v16 = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        v4 = anyhow::__private::format_err(&v15);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 24) )
          v5 = zoxide::cmd::import::import_z(&v11, v2, v3);
        else
          v5 = zoxide::cmd::import::import_autojump(&v11, v2, v3);
        v1 = (char ***)aImportError;
        v4 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v5, aImportError, 12LL);
        if ( !v4 )
        {
          v2 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v11, aImportError, v6, v7);
          core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v11, aImportError);
          core::ptr::drop_in_place<alloc::string::String>(&v9);
          return v2;
        }
      }
      core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v11, v1);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    return v4;
  }
  return v2;
}