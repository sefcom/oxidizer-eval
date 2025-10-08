__int64 __fastcall uu_env::EnvAppData::parse_arguments(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int128 v10; // [rsp+0h] [rbp-348h] BYREF
  __int64 v11; // [rsp+10h] [rbp-338h]
  _QWORD v12[3]; // [rsp+18h] [rbp-330h] BYREF
  __int64 v13; // [rsp+30h] [rbp-318h] BYREF
  __int64 v14; // [rsp+38h] [rbp-310h]
  __int64 v15; // [rsp+40h] [rbp-308h]
  __int128 v16; // [rsp+48h] [rbp-300h]
  __int128 v17; // [rsp+58h] [rbp-2F0h]
  _BYTE dest[736]; // [rsp+68h] [rbp-2E0h] BYREF

  core::iter::traits::iterator::Iterator::collect(&v10, a3, a4);
  uu_env::EnvAppData::process_all_string_arguments(&v13, a2, &v10);
  v5 = v14;
  v6 = v15;
  if ( __OFSUB__(-v13, 1LL) )
    goto LABEL_4;
  v12[0] = v13;
  v12[1] = v14;
  v12[2] = v15;
  uu_env::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v13, dest, v12);
  result = v13;
  v8 = v14;
  if ( v13 == 0x8000000000000000LL )
  {
    v5 = uu_env::EnvAppData::parse_arguments::{{closure}}(v14);
LABEL_4:
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v10);
  }
  v9 = v15;
  *(_OWORD *)(a1 + 64) = v17;
  *(_OWORD *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v9;
  return result;
}