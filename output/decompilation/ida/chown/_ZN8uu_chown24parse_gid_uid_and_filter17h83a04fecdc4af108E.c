__int64 __fastcall uu_chown::parse_gid_uid_and_filter(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  void *v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  int v17; // [rsp+0h] [rbp-268h]
  unsigned int v18; // [rsp+8h] [rbp-260h]
  int v19; // [rsp+Ch] [rbp-25Ch]
  void *v20; // [rsp+10h] [rbp-258h] BYREF
  __int128 v21; // [rsp+18h] [rbp-250h]
  void *v22; // [rsp+28h] [rbp-240h] BYREF
  __int128 v23; // [rsp+30h] [rbp-238h]
  void *dest; // [rsp+40h] [rbp-228h] BYREF
  __int128 v25; // [rsp+48h] [rbp-220h]
  __int64 v26; // [rsp+58h] [rbp-210h]
  __int64 v27; // [rsp+60h] [rbp-208h]
  _QWORD v28[3]; // [rsp+F0h] [rbp-178h] BYREF
  void **v29; // [rsp+108h] [rbp-160h] BYREF
  __int128 v30; // [rsp+110h] [rbp-158h]
  __int64 (__fastcall *v31)(); // [rsp+120h] [rbp-148h]
  unsigned int v32; // [rsp+144h] [rbp-124h]
  unsigned int v33; // [rsp+148h] [rbp-120h]
  _QWORD v34[22]; // [rsp+1B8h] [rbp-B0h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2, &unk_18998, 4LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&unk_18998, 4LL, &dest);
  if ( !v2 )
  {
    v3 = 0;
    goto LABEL_8;
  }
  uu_chown::parse_spec(&dest, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16), 58LL);
  if ( (_DWORD)dest != 1 )
  {
    LODWORD(v2) = DWORD2(v25);
    v19 = DWORD2(v25);
    if ( (BYTE4(dest) & 1) != 0 )
    {
      v17 = v25;
      v3 = 2 * (BYTE4(v25) & 1) + 1;
      goto LABEL_9;
    }
    v3 = 2 * (BYTE4(v25) & 1);
LABEL_8:
    v17 = v2;
LABEL_9:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2, &unk_1A037, 9LL);
    v4 = clap_builder::parser::error::MatchesError::unwrap(&unk_1A037, 9LL, &dest);
    if ( !v4 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, a2, &unk_1A040, 5LL);
      v6 = clap_builder::parser::error::MatchesError::unwrap(&unk_1A040, 5LL, &dest);
      if ( !v6 )
        core::option::unwrap_failed(&off_F5EE0);
      <alloc::string::String as core::clone::Clone>::clone(&dest, v6);
      v7 = dest;
      v8 = *((_QWORD *)&v25 + 1);
      v9 = v25;
      uu_chown::parse_spec(&dest, v25, *((_QWORD *)&v25 + 1), 58LL);
      if ( ((unsigned __int8)dest & 1) != 0 )
      {
        *(_OWORD *)(a1 + 8) = v25;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::string::String>(v7, v9);
        return a1;
      }
      v13 = HIDWORD(dest);
      v10 = v25;
      v14 = DWORD2(v25);
      v15 = DWORD1(v25);
LABEL_25:
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = v8;
      *(_DWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 28) = v14;
      *(_DWORD *)(a1 + 32) = v13;
      *(_DWORD *)(a1 + 36) = v10;
      *(_DWORD *)(a1 + 40) = v3;
      *(_DWORD *)(a1 + 44) = v17;
      *(_DWORD *)(a1 + 48) = v19;
      return a1;
    }
    v5 = v4;
    std::fs::metadata(&dest);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v29,
      &dest,
      *(_QWORD *)(v5 + 8),
      *(_QWORD *)(v5 + 16));
    if ( (_DWORD)v29 == 2 )
    {
      *(_OWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return a1;
    }
    v10 = v32;
    v11 = v33;
    <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v34, v32);
    if ( v34[0] == 0x8000000000000000LL )
    {
      v12 = v34[1];
    }
    else
    {
      uucore::features::entries::uid2usr::{{closure}}(&dest, v34);
      v12 = v25;
      if ( dest != (void *)0x8000000000000000LL )
      {
        v20 = dest;
        v21 = v25;
        goto LABEL_21;
      }
    }
    uu_chown::parse_gid_uid_and_filter::{{closure}}(&v20, v10, v12);
LABEL_21:
    <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&dest, v11);
    if ( dest == (void *)0x8000000000000000LL )
    {
      uu_chown::parse_gid_uid_and_filter::{{closure}}(&v22, v11, v25);
    }
    else
    {
      v22 = dest;
      v23 = v25;
    }
    v18 = v11;
    v29 = &v20;
    *(_QWORD *)&v30 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v30 + 1) = &v22;
    v31 = <alloc::string::String as core::fmt::Display>::fmt;
    dest = &unk_F5EC0;
    *(_QWORD *)&v25 = 2LL;
    v27 = 0LL;
    *((_QWORD *)&v25 + 1) = &v29;
    v26 = 2LL;
    core::option::Option<T>::map_or_else(v28, &dest);
    core::ptr::drop_in_place<alloc::string::String>(v22, v23);
    core::ptr::drop_in_place<alloc::string::String>(v20, v21);
    v7 = (void *)v28[0];
    v9 = v28[1];
    LODWORD(v15) = 1;
    v8 = v28[2];
    v13 = 1;
    v14 = v18;
    goto LABEL_25;
  }
  *(_OWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}