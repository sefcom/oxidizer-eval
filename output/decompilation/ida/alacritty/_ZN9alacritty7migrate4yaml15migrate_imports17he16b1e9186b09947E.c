__int64 __fastcall alacritty::migrate::yaml::migrate_imports(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 result; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 mut; // r14
  __int64 v17; // r15
  char v18; // r13
  int v19; // ebp
  __int64 v20; // rcx
  __int128 v21; // xmm0
  _BYTE v22[24]; // [rsp+10h] [rbp-218h] BYREF
  __int64 v23; // [rsp+28h] [rbp-200h]
  __int128 v24; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1D8h]
  __int128 v26; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1C0h]
  __int128 v28; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v29; // [rsp+80h] [rbp-1A8h]
  __int64 v30; // [rsp+90h] [rbp-198h]
  _BYTE *v31; // [rsp+A0h] [rbp-188h]
  __int64 v32; // [rsp+A8h] [rbp-180h]
  __int128 *v33; // [rsp+B0h] [rbp-178h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-170h]
  __int64 v35; // [rsp+C8h] [rbp-160h]
  _BYTE dest[40]; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-130h]
  _QWORD v38[2]; // [rsp+180h] [rbp-A8h] BYREF
  _BYTE v39[32]; // [rsp+190h] [rbp-98h] BYREF
  __int128 v40; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+1C0h] [rbp-68h]
  __int128 v42; // [rsp+1C8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+1D8h] [rbp-50h]
  __int128 v44; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+1F0h] [rbp-38h]

  v31 = a2;
  alacritty::config::imports((__int64)v22, a3, a4, a5, a6);
  if ( *(_DWORD *)v22 == 1 )
  {
    *(_QWORD *)&v29 = v23;
    v28 = *(_OWORD *)&v22[8];
    v33 = &v28;
    *(_QWORD *)&v34 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_8832C0;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v33;
    *(_QWORD *)&dest[24] = 1LL;
    core::option::Option<T>::map_or_else(&v42, 0LL, v8, dest);
    *(_QWORD *)(a1 + 16) = v43;
    *(_OWORD *)a1 = v42;
    return core::ptr::drop_in_place<alloc::string::String>(&v28);
  }
  v32 = a3;
  v41 = v23;
  v40 = *(_OWORD *)&v22[8];
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 8LL;
  v27 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v39, &v40);
  v10 = v39;
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33, v39);
  v12 = (char)v33;
  if ( v33 != (__int128 *)((char *)&dword_0 + 2) )
  {
    v17 = a6 - 1;
    v18 = v31[24];
    do
    {
      if ( (v12 & 1) != 0 )
      {
        *(_QWORD *)&v22[16] = v35;
        *(_OWORD *)v22 = v34;
        *(_QWORD *)&v28 = v22;
        *((_QWORD *)&v28 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_8832C0;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[32] = 0LL;
        *(_QWORD *)&dest[16] = &v28;
        *(_QWORD *)&dest[24] = 1LL;
        v10 = 0LL;
        core::option::Option<T>::map_or_else(&v44, 0LL, v11, dest);
        *(_QWORD *)(a1 + 16) = v45;
        *(_OWORD *)a1 = v44;
        core::ptr::drop_in_place<alloc::string::String>(v22);
        goto LABEL_20;
      }
      v24 = v34;
      v25 = v35;
      std::fs::metadata(dest);
      v19 = *(_DWORD *)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest);
      if ( v19 == 2 )
      {
        if ( (v18 & 1) != 0 )
        {
          *(_QWORD *)v22 = &v24;
          *(_QWORD *)&v22[8] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
          *(_QWORD *)dest = &off_8832D0;
          *(_QWORD *)&dest[8] = 2LL;
          *(_QWORD *)&dest[32] = 0LL;
          *(_QWORD *)&dest[16] = v22;
          *(_QWORD *)&dest[24] = 1LL;
          std::io::stdio::_eprint(dest);
        }
        alloc::string::String::from_utf8_lossy(dest, *((_QWORD *)&v24 + 1), v25);
        <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(v22, dest);
        *(_OWORD *)dest = *(_OWORD *)v22;
        *(_QWORD *)&dest[16] = *(_QWORD *)&v22[16];
        dest[26] = 2;
        alloc::vec::Vec<T,A>::push(&v26, dest, &off_8832F0);
      }
      else
      {
        v10 = v31;
        alacritty::migrate::migrate_config(dest, v31, *((_QWORD *)&v24 + 1), v25, v17);
        if ( *(_DWORD *)dest == 1 )
        {
          *(_QWORD *)&v22[16] = *(_QWORD *)&dest[24];
          v21 = *(_OWORD *)&dest[8];
          *(_OWORD *)v22 = *(_OWORD *)&dest[8];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&dest[24];
          *(_OWORD *)a1 = v21;
          core::mem::drop(&v24);
LABEL_20:
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::result::Result<std::path::PathBuf,alloc::string::String>>>(v39);
          return core::ptr::drop_in_place<alloc::vec::Vec<toml::value::Value>>(&v26, v10, v13, v20, v14, v15);
        }
        v28 = *(_OWORD *)&dest[8];
        v29 = *(_OWORD *)&dest[24];
        v30 = v37;
        if ( (v18 & 1) != 0 )
        {
          alacritty::migrate::Migration::success_message(v22, &v28, 1LL);
          v38[0] = v22;
          v38[1] = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &unk_882F40;
          *(_QWORD *)&dest[8] = 2LL;
          *(_QWORD *)&dest[32] = 0LL;
          *(_QWORD *)&dest[16] = v38;
          *(_QWORD *)&dest[24] = 1LL;
          std::io::stdio::_print(dest);
          core::ptr::drop_in_place<alloc::string::String>(v22);
        }
        alacritty::migrate::Migration::new_path(v22, &v28);
        *(_QWORD *)&dest[16] = *(_QWORD *)&v22[16];
        *(_OWORD *)dest = *(_OWORD *)v22;
        dest[26] = 2;
        alloc::vec::Vec<T,A>::push(&v26, dest, &off_883308);
        core::ptr::drop_in_place<alacritty::migrate::Migration>(&v28);
      }
      core::mem::drop(&v24);
      v10 = v39;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33, v39);
      v12 = (char)v33;
    }
    while ( v33 != (__int128 *)((char *)&dword_0 + 2) );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::result::Result<std::path::PathBuf,alloc::string::String>>>(v39);
  mut = toml::value::Value::get_mut(v32);
  if ( !mut )
  {
    v20 = a1;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<toml::value::Value>>(&v26, v10, v13, v20, v14, v15);
  }
  *(_QWORD *)&dest[16] = v27;
  *(_OWORD *)dest = v26;
  core::ptr::drop_in_place<toml::value::Value>(mut);
  *(_OWORD *)(mut + 10) = *(_OWORD *)&dest[10];
  *(_OWORD *)mut = *(_OWORD *)dest;
  *(_BYTE *)(mut + 26) = 7;
  result = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}