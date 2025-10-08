__int64 __fastcall uu_chroot::Options::from(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  char flag; // bp
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  __int128 v8; // xmm0
  _BYTE v10[40]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-B0h]
  __int128 v12; // [rsp+30h] [rbp-A8h]
  __int64 v13; // [rsp+40h] [rbp-98h]
  __int128 v14; // [rsp+48h] [rbp-90h] BYREF
  __int64 v15; // [rsp+58h] [rbp-80h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int128 v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+80h] [rbp-58h]
  _BYTE v19[28]; // [rsp+90h] [rbp-48h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v10, a2, aNewroot, 7LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aNewroot, 7LL, v10);
  if ( v2 )
  {
    std::path::Path::to_path_buf(&v14, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v10, a2, aGroups, 6LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap(aGroups, 6LL, v10);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      if ( v4 )
      {
        uu_chroot::parse_group_list((__int64)v10, *(_QWORD *)(v3 + 8), v4);
        if ( *(_DWORD *)v10 != 14 )
        {
          *(_OWORD *)&v19[12] = *(_OWORD *)&v10[16];
          *(_OWORD *)v19 = *(_OWORD *)&v10[4];
          *(_OWORD *)&v10[16] = *(_OWORD *)&v19[12];
          *(_OWORD *)&v10[4] = *(_OWORD *)v19;
          *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v10);
          *(_QWORD *)(a1 + 16) = &off_FABB0;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<std::path::PathBuf>(v14, *((_QWORD *)&v14 + 1));
          return a1;
        }
        v12 = *(_OWORD *)&v10[8];
        v13 = *(_QWORD *)&v10[24];
      }
      else
      {
        *(_QWORD *)&v12 = 0LL;
        *((_QWORD *)&v12 + 1) = 8LL;
        v13 = 0LL;
      }
    }
    else
    {
      *(_QWORD *)&v12 = 0x8000000000000000LL;
    }
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSkipChdir, 10LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v10, a2, aUserspec, 8LL);
    v6 = clap_builder::parser::error::MatchesError::unwrap(aUserspec, 8LL, v10);
    if ( v6 )
    {
      uu_chroot::parse_userspec((__int64)v10, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      v7 = *(_QWORD *)v10;
      v16 = *(_OWORD *)&v10[8];
      v17 = *(_OWORD *)&v10[24];
      v18 = v11;
    }
    else
    {
      v7 = 0x8000000000000003LL;
    }
    *(_QWORD *)&v10[16] = v15;
    *(_OWORD *)v10 = v14;
    v11 = v13;
    *(_OWORD *)&v10[24] = v12;
    *(_OWORD *)a1 = v14;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v10[32];
    *(_QWORD *)(a1 + 40) = v11;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v10[16];
    *(_QWORD *)(a1 + 48) = v7;
    *(_QWORD *)(a1 + 88) = v18;
    v8 = v16;
    *(_OWORD *)(a1 + 72) = v17;
    *(_OWORD *)(a1 + 56) = v8;
    *(_BYTE *)(a1 + 96) = flag;
  }
  else
  {
    *(_DWORD *)v10 = 6;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(v10);
    *(_QWORD *)(a1 + 16) = &off_FABB0;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return a1;
}