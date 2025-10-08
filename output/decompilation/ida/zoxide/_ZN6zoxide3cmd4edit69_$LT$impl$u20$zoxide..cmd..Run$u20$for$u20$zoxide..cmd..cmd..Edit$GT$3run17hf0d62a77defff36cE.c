__int64 __fastcall zoxide::cmd::edit::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Edit>::run(
        _QWORD *a1,
        const char *a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  double v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-128h] BYREF
  _BYTE v17[28]; // [rsp+8h] [rbp-120h] BYREF
  __int64 v18; // [rsp+28h] [rbp-100h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+30h] [rbp-F8h]
  __int64 v20; // [rsp+38h] [rbp-F0h]
  void *v21; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-E0h]
  __int128 v23; // [rsp+50h] [rbp-D8h]
  __int128 v24; // [rsp+60h] [rbp-C8h]
  __int128 v25; // [rsp+70h] [rbp-B8h]
  __int64 v26; // [rsp+80h] [rbp-A8h]
  __int64 v27; // [rsp+88h] [rbp-A0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-98h]
  __int64 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-80h]
  __int128 v32; // [rsp+B8h] [rbp-70h]
  __int128 v33; // [rsp+C8h] [rbp-60h]
  __int64 v34; // [rsp+D8h] [rbp-50h]

  v2 = zoxide::util::current_time();
  v4 = v3;
  if ( (v2 & 1) == 0 )
  {
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(&v21);
    if ( (_DWORD)v21 == 1 )
    {
      return v22;
    }
    else
    {
      v6 = v26;
      v34 = v26;
      v33 = v25;
      v32 = v24;
      v31 = v23;
      v30 = v22;
      switch ( *a1 )
      {
        case 0LL:
          v7 = unk_18ED8;
          goto LABEL_11;
        case 1LL:
          a2 = (const char *)(a1 + 1);
          zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(&v30, a1 + 1);
          goto LABEL_12;
        case 2LL:
          v7 = 1.0;
LABEL_11:
          a2 = (const char *)(a1 + 1);
          zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add(&v30, a1 + 1, v4, v7);
          goto LABEL_12;
        case 3LL:
LABEL_12:
          v10 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v30, a2, v5, v6);
          if ( v10 )
          {
            v4 = v10;
            goto LABEL_14;
          }
          v21 = (void *)std::io::stdio::stdout();
          v11 = std::io::stdio::Stdout::lock(&v21);
          v16 = v11;
          v18 = v31;
          v19 = (__int64 (__fastcall *)())(v31 + 40LL * *((_QWORD *)&v31 + 1));
          v12 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v18);
          if ( !v12 )
            goto LABEL_19;
          break;
        case 4LL:
          a2 = (const char *)v4;
          zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(&v30, v4);
          v4 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v30, v4, v8, v9);
          if ( v4 )
            goto LABEL_14;
          zoxide::cmd::edit::<impl zoxide::cmd::cmd::Edit>::get_fzf(&v21);
          if ( (_DWORD)v21 == 1 )
          {
            v4 = v22;
            goto LABEL_14;
          }
          *(_DWORD *)v17 = HIDWORD(v21);
          *(_QWORD *)&v17[4] = v22;
          *(_OWORD *)&v17[12] = v23;
          a2 = v17;
          zoxide::util::FzfChild::wait(&v27, v17);
          v4 = (__int64)v28;
          if ( __OFSUB__(-v27, 1LL) )
          {
            core::ptr::drop_in_place<zoxide::util::FzfChild>(v17);
            goto LABEL_14;
          }
          v18 = v27;
          v19 = v28;
          v20 = v29;
          core::ptr::drop_in_place<alloc::string::String>(&v18);
          core::ptr::drop_in_place<zoxide::util::FzfChild>(v17);
          goto LABEL_20;
      }
      do
      {
        *(_QWORD *)v17 = 1LL;
        *(_QWORD *)&v17[8] = v4;
        *(_QWORD *)&v17[16] = v12;
        *(_DWORD *)&v17[24] = 9;
        v27 = (__int64)v17;
        v28 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
        v21 = &unk_1348E0;
        v22 = 2LL;
        *(_QWORD *)&v24 = 0LL;
        *(_QWORD *)&v23 = &v27;
        *((_QWORD *)&v23 + 1) = 1LL;
        v13 = std::io::Write::write_fmt(&v16, &v21);
        a2 = aFzf;
        v14 = <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(
                v13,
                aFzf,
                3LL);
        if ( v14 )
        {
          v4 = v14;
          core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v16);
LABEL_14:
          core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v30, a2);
          return v4;
        }
        v12 = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v18);
      }
      while ( v12 );
      v11 = v16;
LABEL_19:
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
LABEL_20:
      core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v30, a2);
      return 0LL;
    }
  }
  return v4;
}