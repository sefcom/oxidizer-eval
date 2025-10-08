__int64 __fastcall uvx::get_uv_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r14
  char v7; // bl
  __int64 v8; // rsi
  __int128 *v9; // r13
  __int64 v10; // rbx
  __int64 result; // rax
  __int128 *v12; // r12
  __int64 (__fastcall *v13)(); // rbp
  char v14; // r14
  __int64 v15; // [rsp+8h] [rbp-120h]
  unsigned __int64 v16; // [rsp+10h] [rbp-118h]
  __int128 v17; // [rsp+18h] [rbp-110h] BYREF
  __int128 *v18; // [rsp+28h] [rbp-100h]
  __int64 v19; // [rsp+30h] [rbp-F8h]
  __int64 v20; // [rsp+38h] [rbp-F0h]
  __int128 *v21; // [rsp+48h] [rbp-E0h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+50h] [rbp-D8h]
  __int128 v23; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-C0h]
  __int128 v25; // [rsp+70h] [rbp-B8h] BYREF
  __int128 **v26; // [rsp+80h] [rbp-A8h]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp-A0h]
  __int128 *v28; // [rsp+90h] [rbp-98h]
  __int128 v29; // [rsp+98h] [rbp-90h] BYREF
  __int128 **v30; // [rsp+A8h] [rbp-80h]
  __int128 v31; // [rsp+B0h] [rbp-78h] BYREF
  __int128 **v32; // [rsp+C0h] [rbp-68h]
  _QWORD v33[2]; // [rsp+D0h] [rbp-58h] BYREF
  _BYTE v34[72]; // [rsp+E0h] [rbp-48h] BYREF

  v6 = 0x8000000000000000LL;
  v7 = 1;
  if ( a4 )
  {
    uvx::get_uv_path::{{closure}}(&v17, a2, a3);
    v8 = *((_QWORD *)&v17 + 1);
    v6 = v17;
    v9 = v18;
    if ( (_QWORD)v17 == 0x8000000000000000LL )
    {
      v28 = v18;
      v15 = *((_QWORD *)&v17 + 1);
      v6 = 0x8000000000000000LL;
    }
    else
    {
      v10 = *((_QWORD *)&v17 + 1);
      std::fs::exists(&v23, *((_QWORD *)&v17 + 1), v18);
      if ( (_BYTE)v23 == 1 )
      {
        v21 = (__int128 *)*((_QWORD *)&v23 + 1);
        *(_QWORD *)&v29 = v8;
        *((_QWORD *)&v29 + 1) = v9;
        *(_QWORD *)&v25 = &v29;
        *((_QWORD *)&v25 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        v26 = &v21;
        v27 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v17 = &off_63010;
        *((_QWORD *)&v17 + 1) = 3LL;
        v20 = 0LL;
        v18 = &v25;
        v19 = 2LL;
        std::io::stdio::_eprint(&v17);
        core::ptr::drop_in_place<std::io::error::Error>(v21);
      }
      else if ( BYTE1(v23) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v17, v8, v9);
        *(_QWORD *)(a1 + 16) = v18;
        *(_OWORD *)a1 = v17;
        return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v6, v10);
      }
      v28 = v9;
      v15 = v8;
      v7 = 0;
    }
  }
  v16 = v6;
  *(_QWORD *)&v25 = &unk_97F0;
  *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v17 = &off_63040;
  *((_QWORD *)&v17 + 1) = 1LL;
  v20 = 0LL;
  v18 = &v25;
  v19 = 1LL;
  core::option::Option<T>::map_or_else(v34, &v17);
  std::path::Path::join(&v23, a2, a3, v34);
  v12 = (__int128 *)*((_QWORD *)&v23 + 1);
  v13 = (__int64 (__fastcall *)())v24;
  std::fs::exists(&v17, *((_QWORD *)&v23 + 1), v24);
  if ( (_BYTE)v17 || (BYTE1(v17) & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(
      (unsigned __int8)v17,
      *((_QWORD *)&v17 + 1));
    result = v24;
    *(_QWORD *)(a1 + 16) = v24;
    *(_OWORD *)a1 = v23;
    if ( (v7 & 1) != 0 )
      return result;
    return core::ptr::drop_in_place<std::path::PathBuf>(v16, v15);
  }
  core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(
    (unsigned __int8)v17,
    *((_QWORD *)&v17 + 1));
  if ( v7 )
  {
    *(_QWORD *)&v29 = v12;
    *((_QWORD *)&v29 + 1) = v13;
    v21 = &v29;
    v22 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_63070;
    *((_QWORD *)&v17 + 1) = 1LL;
    v20 = 0LL;
    v18 = (__int128 *)&v21;
    v19 = 1LL;
    core::option::Option<T>::map_or_else(&v25, &v17);
    v31 = v25;
    v32 = v26;
    v14 = 1;
  }
  else
  {
    v33[0] = v15;
    v33[1] = v28;
    v21 = v12;
    v22 = v13;
    *(_QWORD *)&v25 = v33;
    *((_QWORD *)&v25 + 1) = <std::path::Display as core::fmt::Display>::fmt;
    v26 = &v21;
    v27 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_63050;
    *((_QWORD *)&v17 + 1) = 2LL;
    v20 = 0LL;
    v18 = &v25;
    v19 = 2LL;
    core::option::Option<T>::map_or_else(&v29, &v17);
    v31 = v29;
    v32 = v30;
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v15);
    v14 = 0;
  }
  *(_QWORD *)(a1 + 8) = std::io::error::Error::new(&v31);
  *(_QWORD *)a1 = 0x8000000000000000LL;
  result = core::ptr::drop_in_place<std::path::PathBuf>(v23, v12);
  if ( (((unsigned __int8)v14 ^ 1 | (unsigned __int8)v7) & 1) == 0 )
    return core::ptr::drop_in_place<std::path::PathBuf>(v16, v15);
  return result;
}