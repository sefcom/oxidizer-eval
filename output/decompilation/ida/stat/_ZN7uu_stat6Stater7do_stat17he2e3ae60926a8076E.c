__int64 __fastcall uu_stat::Stater::do_stat(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 (__fastcall *v14)(); // rdx
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // rdi
  __int64 i; // r15
  __int64 v18; // r14
  __int16 v19; // bp
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rbx
  __int64 v23; // r12
  char v24; // r15
  char v25; // al
  unsigned int v26; // edx
  __int128 v28; // [rsp+0h] [rbp-228h] BYREF
  __int64 v29; // [rsp+10h] [rbp-218h]
  _QWORD *v30; // [rsp+20h] [rbp-208h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+28h] [rbp-200h]
  __int64 v32; // [rsp+30h] [rbp-1F8h]
  char v33; // [rsp+38h] [rbp-1F0h]
  _QWORD *v34; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+48h] [rbp-1E0h]
  __int128 *v36; // [rsp+50h] [rbp-1D8h]
  __int64 (__fastcall *v37)(); // [rsp+58h] [rbp-1D0h]
  __int128 v38; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-1B8h]
  __int64 v40; // [rsp+78h] [rbp-1B0h]
  _OWORD dest[11]; // [rsp+80h] [rbp-1A8h] BYREF
  char v42[8]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+138h] [rbp-F0h]
  __int64 v44; // [rsp+140h] [rbp-E8h]
  _QWORD src[28]; // [rsp+148h] [rbp-E0h] BYREF

  alloc::string::String::from_utf8_lossy(v42, a2, a3);
  v8 = v43;
  v9 = v44;
  v10 = v43;
  v11 = v44;
  if ( (unsigned __int8)alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v43, v44) )
  {
    if ( *(_BYTE *)(a1 + 97) )
    {
      src[0] = uucore::util_name(v10, v11);
      src[1] = v12;
      v30 = src;
      v31 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[0] = &unk_119C28;
      *((_QWORD *)&dest[0] + 1) = 2LL;
      *(_QWORD *)&dest[1] = &v30;
      *(_OWORD *)((char *)&dest[1] + 8) = 1uLL;
      std::io::stdio::_eprint(dest);
      *(_QWORD *)&dest[0] = &off_119FD0;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      dest[1] = 8uLL;
      std::io::stdio::_eprint(dest);
      v13 = 1;
      goto LABEL_31;
    }
    std::fs::canonicalize(dest, aDevStdin);
    if ( __OFSUB__(0LL, *(_QWORD *)&dest[0]) )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(dest);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aDevStdin, 10LL);
    }
    v29 = *(_QWORD *)&dest[1];
    v28 = dest[0];
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, a2, a3);
    v29 = *(_QWORD *)&dest[1];
    v28 = dest[0];
    if ( (*(_BYTE *)(a1 + 97) & 1) != 0 )
    {
      uucore::features::fsext::statfs(dest, *((_QWORD *)&v28 + 1), v29);
      if ( LODWORD(dest[0]) == 1 )
      {
        v39 = *((_QWORD *)&dest[1] + 1);
        v38 = *(_OWORD *)((char *)dest + 8);
        v30 = (_QWORD *)((__int64 (*)(void))uucore::util_name)();
        v31 = v14;
        v34 = &v30;
        v35 = <&T as core::fmt::Display>::fmt;
        src[0] = &unk_119C28;
        src[1] = 2LL;
        src[4] = 0LL;
        src[2] = &v34;
        src[3] = 1LL;
        std::io::stdio::_eprint(src);
        v30 = 0LL;
        v31 = (__int64 (__fastcall *)())v8;
        v32 = v9;
        v33 = 1;
        v34 = &v30;
        v35 = <os_display::Quoted as core::fmt::Display>::fmt;
        v36 = &v38;
        v37 = <alloc::string::String as core::fmt::Display>::fmt;
        src[0] = &off_119FE0;
        src[1] = 3LL;
        src[4] = 0LL;
        src[2] = &v34;
        src[3] = 2LL;
        std::io::stdio::_eprint(src);
        core::ptr::drop_in_place<alloc::string::String>(&v38);
        goto LABEL_17;
      }
      v16 = *(_QWORD *)(a1 + 32);
      for ( i = 40LL * *(_QWORD *)(a1 + 40); i; i -= 40LL )
      {
        uu_stat::process_token_filesystem(v16, (__int64 (__fastcall **)())dest + 1, v8, v9);
        v16 += 40LL;
      }
LABEL_30:
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v28, *((_QWORD *)&v28 + 1));
      v13 = 0;
      goto LABEL_31;
    }
  }
  if ( *(_BYTE *)(a1 + 96)
    || a4 && (unsigned __int8)alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v8, v9) )
  {
    std::fs::metadata(src);
  }
  else
  {
    std::fs::symlink_metadata(src);
  }
  if ( LODWORD(src[0]) != 2 )
  {
    v40 = v8;
    v18 = v9;
    memcpy(dest, src, sizeof(dest));
    v19 = WORD4(dest[3]);
    v20 = 48LL;
    if ( ((WORD4(dest[3]) - 0x2000) & 0xB000) != 0 )
      v20 = 24LL;
    if ( *(_BYTE *)(a1 + 98) )
      v20 = 24LL;
    v21 = *(_QWORD *)(a1 + v20 + 8);
    v22 = (_QWORD *)a1;
    v23 = v21 + 40LL * *(_QWORD *)(a1 + v20 + 16);
    v24 = *(_BYTE *)(a1 + 98);
    while ( v21 != v23 )
    {
      v25 = uu_stat::Stater::process_token_files(v22, v21, (__int64)dest, v40, v18, (__int64)&v28, v19, v24);
      v21 += 40LL;
      if ( (v25 & 1) != 0 )
      {
        v13 = v26;
        goto LABEL_18;
      }
    }
    goto LABEL_30;
  }
  *(_QWORD *)&v38 = src[1];
  v30 = (_QWORD *)uucore::util_name(src, &v28);
  v31 = v15;
  v34 = &v30;
  v35 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[0] = &unk_119C28;
  *((_QWORD *)&dest[0] + 1) = 2LL;
  *(_QWORD *)&dest[1] = &v34;
  *(_OWORD *)((char *)&dest[1] + 8) = 1uLL;
  std::io::stdio::_eprint(dest);
  v30 = 0LL;
  v31 = (__int64 (__fastcall *)())v8;
  v32 = v9;
  v33 = 1;
  v34 = &v30;
  v35 = <os_display::Quoted as core::fmt::Display>::fmt;
  v36 = &v38;
  v37 = <std::io::error::Error as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[0] = &off_11A010;
  *((_QWORD *)&dest[0] + 1) = 3LL;
  *(_QWORD *)&dest[1] = &v34;
  *(_OWORD *)((char *)&dest[1] + 8) = 2uLL;
  std::io::stdio::_eprint(dest);
  core::ptr::drop_in_place<std::io::error::Error>(&v38);
LABEL_17:
  v13 = 1;
LABEL_18:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v28, *((_QWORD *)&v28 + 1));
LABEL_31:
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v42);
  return v13;
}