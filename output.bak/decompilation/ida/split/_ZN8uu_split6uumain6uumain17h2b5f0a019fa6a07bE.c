__int64 __fastcall uu_split::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int128 *v5; // [rsp+0h] [rbp-478h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+8h] [rbp-470h]
  __int128 v7; // [rsp+10h] [rbp-468h] BYREF
  __int128 v8; // [rsp+20h] [rbp-458h]
  __int64 v9; // [rsp+30h] [rbp-448h]
  __int128 v10; // [rsp+40h] [rbp-438h] BYREF
  __int64 v11; // [rsp+50h] [rbp-428h]
  __int128 v12; // [rsp+60h] [rbp-418h]
  __int64 v13; // [rsp+70h] [rbp-408h]
  _QWORD v14[2]; // [rsp+80h] [rbp-3F8h] BYREF
  __int128 v15; // [rsp+90h] [rbp-3E8h]
  __int128 v16; // [rsp+A0h] [rbp-3D8h]
  __int64 v17; // [rsp+B0h] [rbp-3C8h]
  __int128 v18; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-3B0h]
  __int128 v20; // [rsp+D0h] [rbp-3A8h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-398h]
  _BYTE src[168]; // [rsp+E8h] [rbp-390h] BYREF
  _OWORD dest[46]; // [rsp+190h] [rbp-2E8h] BYREF

  uu_split::handle_obsolete((__int64)dest, a1, a2);
  v13 = *(_QWORD *)&dest[1];
  v12 = dest[0];
  v11 = *((_QWORD *)&dest[2] + 1);
  v10 = *(_OWORD *)((char *)&dest[1] + 8);
  uu_split::uu_app(dest);
  *(_QWORD *)&v8 = v13;
  v7 = v12;
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, &v7);
  if ( *(_QWORD *)src != 0x8000000000000000LL )
  {
    v17 = *(_QWORD *)&src[48];
    v16 = *(_OWORD *)&src[32];
    v15 = *(_OWORD *)&src[16];
    v14[0] = *(_QWORD *)src;
    v14[1] = *(_QWORD *)&src[8];
    uu_split::Settings::from(src, (__int64)v14);
    if ( *(_QWORD *)src != 2LL )
    {
      memcpy(dest, src, 0xA8uLL);
      v2 = uu_split::split(dest);
      core::ptr::drop_in_place<uu_split::Settings>(dest);
      goto LABEL_13;
    }
    v3 = 0LL;
    if ( (unsigned __int64)(*(_QWORD *)&src[8] - 4LL) < 5 )
      v3 = *(_QWORD *)&src[8] - 3LL;
    if ( v3 )
    {
      if ( v3 == 1 && *(_DWORD *)&src[16] == 1 )
        goto LABEL_9;
    }
    else if ( *(_DWORD *)&src[8] == 3 )
    {
LABEL_9:
      v9 = *(_QWORD *)&src[40];
      v8 = *(_OWORD *)&src[24];
      v7 = *(_OWORD *)&src[8];
      v5 = &v7;
      v6 = <uu_split::SettingsError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &xmmword_18130;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      *(_QWORD *)&dest[1] = &v5;
      *(_OWORD *)((char *)&dest[1] + 8) = 1uLL;
      core::option::Option<T>::map_or_else(&v18, dest);
      DWORD2(dest[1]) = 1;
      dest[0] = v18;
      *(_QWORD *)&dest[1] = v19;
      v2 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<uu_split::SettingsError>(&v7);
LABEL_13:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v10);
      return v2;
    }
    v9 = *(_QWORD *)&src[40];
    v8 = *(_OWORD *)&src[24];
    v7 = *(_OWORD *)&src[8];
    v5 = &v7;
    v6 = <uu_split::SettingsError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &xmmword_18130;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[1] = &v5;
    *(_OWORD *)((char *)&dest[1] + 8) = 1uLL;
    core::option::Option<T>::map_or_else(&v20, dest);
    DWORD2(dest[1]) = 1;
    dest[0] = v20;
    *(_QWORD *)&dest[1] = v21;
    v2 = alloc::boxed::Box<T>::new(dest);
    core::ptr::drop_in_place<uu_split::SettingsError>(&v7);
    goto LABEL_13;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&src[8]);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v10);
  return v2;
}
