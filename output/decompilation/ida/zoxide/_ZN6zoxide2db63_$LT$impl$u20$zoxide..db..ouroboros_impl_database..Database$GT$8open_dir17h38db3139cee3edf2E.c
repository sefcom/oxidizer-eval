__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 dir_all; // rax
  __int64 v8; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-E8h]
  __int64 v15; // [rsp+18h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-C8h]
  _QWORD v18[3]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-98h]
  __int128 v21; // [rsp+70h] [rbp-88h]
  __int128 v22; // [rsp+80h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-58h]
  __int128 v25; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-38h]

  v2 = a2[1];
  v3 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(v2, a2[2]);
  v5 = v4;
  std::path::Path::join(&v16, v3, v4, aDbZo, 5LL);
  std::fs::canonicalize(v18, &v16);
  *(_QWORD *)&v20 = v17;
  v19 = v16;
  core::result::Result<T,E>::unwrap_or(&v13, v18, &v19);
  std::fs::read(&v23, &v13);
  if ( __OFSUB__(0LL, v23) )
  {
    v6 = v24;
    if ( (unsigned __int8)std::io::error::Error::kind(v24) )
    {
      *((_QWORD *)&v19 + 1) = v6;
      *(_QWORD *)&v19 = 1LL;
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
        a1,
        &v19,
        *((_QWORD *)&v13 + 1),
        v14);
    }
    else
    {
      v15 = v6;
      dir_all = std::fs::create_dir_all(v3, v5);
      v8 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(dir_all, v3, v5);
      if ( !v8 )
      {
        v26 = v14;
        v25 = v13;
        v18[0] = 0LL;
        v18[1] = 1LL;
        v18[2] = 0LL;
        zoxide::db::ouroboros_impl_database::Database::new(&v19, &v25, v18);
        v10 = v19;
        v11 = v20;
        v12 = v21;
        *(_OWORD *)(a1 + 56) = v22;
        *(_OWORD *)(a1 + 40) = v12;
        *(_OWORD *)(a1 + 24) = v11;
        *(_OWORD *)(a1 + 8) = v10;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<std::io::error::Error>(&v15);
        return core::mem::drop(*a2, v2);
      }
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 1LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v15);
    }
    core::mem::drop(v13, *((_QWORD *)&v13 + 1));
  }
  else
  {
    *(_QWORD *)&v20 = v14;
    v19 = v13;
    zoxide::db::ouroboros_impl_database::Database::try_new(a1, &v19, &v23);
  }
  return core::mem::drop(*a2, v2);
}