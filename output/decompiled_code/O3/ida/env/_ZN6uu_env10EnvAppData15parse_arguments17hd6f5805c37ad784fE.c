__int64 __fastcall uu_env::EnvAppData::parse_arguments(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int128 v10; // [rsp+8h] [rbp-360h]
  __int64 v11; // [rsp+18h] [rbp-350h]
  __int128 v12; // [rsp+20h] [rbp-348h] BYREF
  __int64 v13; // [rsp+30h] [rbp-338h]
  __int128 v14; // [rsp+38h] [rbp-330h] BYREF
  __int64 v15; // [rsp+48h] [rbp-320h]
  __int128 v16; // [rsp+50h] [rbp-318h]
  __int128 v17; // [rsp+60h] [rbp-308h]
  __int128 v18; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v19; // [rsp+80h] [rbp-2E8h]
  _BYTE v20[736]; // [rsp+88h] [rbp-2E0h] BYREF

  core::iter::traits::iterator::Iterator::collect(&v12, a3, a4);
  uu_env::EnvAppData::process_all_string_arguments(&v14, a2, &v12);
  v5 = *((_QWORD *)&v14 + 1);
  v6 = v15;
  if ( (_QWORD)v14 == 0x8000000000000000LL )
    goto LABEL_4;
  v10 = v14;
  v11 = v15;
  uu_env::uu_app(v20);
  v19 = v11;
  v18 = v10;
  clap_builder::builder::command::Command::try_get_matches_from(&v14, v20, &v18);
  v8 = *((_QWORD *)&v14 + 1);
  result = v14;
  if ( (_QWORD)v14 == 0x8000000000000000LL )
  {
    v5 = uu_env::EnvAppData::parse_arguments::{{closure}}(*((_QWORD *)&v14 + 1));
LABEL_4:
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v12);
  }
  v9 = v15;
  *(_OWORD *)(a1 + 64) = v17;
  *(_OWORD *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = v12;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v9;
  return result;
}
