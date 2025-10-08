__int64 __fastcall uu_split::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int128 *v8; // [rsp+0h] [rbp-458h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+8h] [rbp-450h]
  __int128 v10; // [rsp+10h] [rbp-448h] BYREF
  __int128 v11; // [rsp+20h] [rbp-438h]
  __int64 v12; // [rsp+30h] [rbp-428h]
  __int128 v13; // [rsp+40h] [rbp-418h] BYREF
  __int64 v14; // [rsp+50h] [rbp-408h]
  _QWORD v15[2]; // [rsp+60h] [rbp-3F8h] BYREF
  __int128 v16; // [rsp+70h] [rbp-3E8h]
  __int128 v17; // [rsp+80h] [rbp-3D8h]
  __int64 v18; // [rsp+90h] [rbp-3C8h]
  __int128 v19; // [rsp+98h] [rbp-3C0h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-3B0h]
  __int128 v21; // [rsp+B0h] [rbp-3A8h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-398h]
  _BYTE src[168]; // [rsp+C8h] [rbp-390h] BYREF
  _OWORD dest[46]; // [rsp+170h] [rbp-2E8h] BYREF

  uu_split::handle_obsolete((__int64)dest, a1, a2);
  v14 = *(_QWORD *)&dest[1];
  v13 = dest[0];
  v2 = *((_QWORD *)&dest[1] + 1);
  v3 = *(_QWORD *)&dest[2];
  uu_split::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(src, dest, &v13);
  if ( !__OFSUB__(-*(_QWORD *)src, 1LL) )
  {
    v18 = *(_QWORD *)&src[48];
    v17 = *(_OWORD *)&src[32];
    v16 = *(_OWORD *)&src[16];
    v15[0] = *(_QWORD *)src;
    v15[1] = *(_QWORD *)&src[8];
    uu_split::Settings::from(src);
    if ( *(_DWORD *)src != 2 )
    {
      memcpy(dest, src, 0xA8uLL);
      v5 = uu_split::split(dest);
      core::ptr::drop_in_place<uu_split::Settings>(src);
      goto LABEL_13;
    }
    v6 = 0LL;
    if ( (unsigned __int64)(*(_QWORD *)&src[8] - 4LL) < 5 )
      v6 = *(_QWORD *)&src[8] - 3LL;
    if ( v6 )
    {
      if ( v6 == 1 && *(_DWORD *)&src[16] == 1 )
        goto LABEL_9;
    }
    else if ( *(_DWORD *)&src[8] == 3 )
    {
LABEL_9:
      v12 = *(_QWORD *)&src[40];
      v11 = *(_OWORD *)&src[24];
      v10 = *(_OWORD *)&src[8];
      v8 = &v10;
      v9 = <uu_split::SettingsError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_1ADF0;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = &v8;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v19, dest);
      DWORD2(dest[1]) = 1;
      dest[0] = v19;
      *(_QWORD *)&dest[1] = v20;
      v5 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<uu_split::SettingsError>(&v10);
LABEL_13:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v15);
      goto LABEL_14;
    }
    v12 = *(_QWORD *)&src[40];
    v11 = *(_OWORD *)&src[24];
    v10 = *(_OWORD *)&src[8];
    v8 = &v10;
    v9 = <uu_split::SettingsError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest[0] = &unk_1ADF0;
    *((_QWORD *)&dest[0] + 1) = 1LL;
    *(_QWORD *)&dest[2] = 0LL;
    *(_QWORD *)&dest[1] = &v8;
    *((_QWORD *)&dest[1] + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v21, dest);
    DWORD2(dest[1]) = 1;
    dest[0] = v21;
    *(_QWORD *)&dest[1] = v22;
    v5 = alloc::boxed::Box<T>::new(dest);
    core::ptr::drop_in_place<uu_split::SettingsError>(&v10);
    goto LABEL_13;
  }
  v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
         *(_QWORD *)&src[8],
         dest,
         v4,
         -*(_QWORD *)src);
LABEL_14:
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v2, v3);
  return v5;
}