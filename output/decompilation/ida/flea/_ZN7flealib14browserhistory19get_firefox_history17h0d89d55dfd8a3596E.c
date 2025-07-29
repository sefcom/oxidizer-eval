__int64 __fastcall flealib::browserhistory::get_firefox_history(__int64 a1)
{
  int v1; // r14d
  char v2; // bp
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v11; // xmm0
  char **v13; // rdi
  __int128 v14; // [rsp+0h] [rbp-208h] BYREF
  __int64 v15; // [rsp+10h] [rbp-1F8h]
  __int128 v16; // [rsp+18h] [rbp-1F0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-1E0h]
  __int128 v18; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-1C8h]
  __int128 v20; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1B0h]
  _BYTE dest[24]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-190h]
  __int128 v24; // [rsp+80h] [rbp-188h]
  __int128 v25; // [rsp+90h] [rbp-178h]
  __int128 v26; // [rsp+110h] [rbp-F8h]
  __int64 v27; // [rsp+120h] [rbp-E8h]
  __int128 v28; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+140h] [rbp-C8h]

  std::env::var(dest, aHome, 4LL);
  core::result::Result<T,E>::unwrap(&v14, dest, &off_70AD58);
  <alloc::string::String as core::clone::Clone>::clone(&v20, &v14);
  alloc::vec::Vec<T,A>::append_elements(&v14, aMozillaFirefox, 18LL);
  std::fs::metadata(dest, *((_QWORD *)&v14 + 1), v15);
  v1 = *(_DWORD *)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest);
  if ( v1 == 2 )
  {
    alloc::vec::Vec<T,A>::append_elements(&v20, aSnapFirefoxCom, 38LL);
    *(_QWORD *)&dest[16] = v21;
    *(_OWORD *)dest = v20;
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    v2 = 0;
  }
  else
  {
    *(_QWORD *)&dest[16] = v15;
    *(_OWORD *)dest = v14;
    v2 = 1;
  }
  v15 = *(_QWORD *)&dest[16];
  v14 = *(_OWORD *)dest;
  <alloc::string::String as core::clone::Clone>::clone(&v16, &v14);
  alloc::vec::Vec<T,A>::append_elements(&v16, aProfilesIni, 12LL);
  std::fs::metadata(dest, *((_QWORD *)&v16 + 1), v17);
  v3 = *(_DWORD *)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest);
  if ( v3 != 2 )
  {
    v29 = v17;
    v28 = v16;
    ini::Ini::load_from_file_opt(dest);
    core::result::Result<T,E>::unwrap(&v28, dest);
    v4 = ini::Ini::section(&v28);
    if ( v4 )
    {
      v5 = ini::Properties::get(v4);
      if ( v5 )
      {
        alloc::vec::Vec<T,A>::append_elements(&v14, v5, v6);
        alloc::vec::Vec<T,A>::append_elements(&v14, aPlacesSqlite, 14LL);
        std::env::var(dest, aHome, 4LL);
        core::result::Result<T,E>::unwrap(&v18, dest, &off_70ADB8);
        alloc::vec::Vec<T,A>::append_elements(&v18, aFleaTmp, 10LL);
        v7 = std::fs::create_dir_all(&v18);
        core::result::Result<T,E>::unwrap(v7);
        alloc::vec::Vec<T,A>::append_elements(&v18, aFirefoxHistory, 15LL);
        v8 = std::fs::copy(&v14, &v18);
        core::result::Result<T,E>::unwrap(v8, v9);
        *(_QWORD *)&dest[16] = v19;
        *(_OWORD *)dest = v18;
        core::ptr::drop_in_place<alloc::string::String>(&v14);
        v15 = *(_QWORD *)&dest[16];
        v14 = *(_OWORD *)dest;
        flealib::browserhistory::get_history(
          (__int64)dest,
          *(__int64 *)&dest[8],
          *(__int64 *)&dest[16],
          (__int64)aSelectUrlIfnul,
          116LL);
        v10 = *(_QWORD *)dest;
        v26 = *(_OWORD *)&dest[8];
        v27 = v23;
        if ( *(_QWORD *)dest != 0x8000000000000012LL )
        {
          v11 = v24;
          *(_OWORD *)(a1 + 48) = v25;
          *(_OWORD *)(a1 + 32) = v11;
        }
        *(_QWORD *)(a1 + 24) = v27;
        *(_OWORD *)(a1 + 8) = v26;
        *(_QWORD *)a1 = v10;
        core::ptr::drop_in_place<ini::Ini>(&v28);
        if ( v2 )
          goto LABEL_12;
        goto LABEL_13;
      }
      v13 = &off_70ADA0;
    }
    else
    {
      v13 = &off_70AD88;
    }
    core::option::unwrap_failed(v13);
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 8LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0x8000000000000012LL;
  core::ptr::drop_in_place<alloc::string::String>(&v16);
  if ( v2 )
LABEL_12:
    core::ptr::drop_in_place<alloc::string::String>(&v20);
LABEL_13:
  core::ptr::drop_in_place<alloc::string::String>(&v14);
  return a1;
}