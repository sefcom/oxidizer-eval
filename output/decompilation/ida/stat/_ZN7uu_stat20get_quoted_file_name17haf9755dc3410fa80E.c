__int64 __fastcall uu_stat::get_quoted_file_name(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5, char a6)
{
  __int64 v10; // rdx
  void *v11; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // bp
  __int64 v15; // r14
  __int128 v16; // rax
  unsigned __int8 v17; // cl
  __int64 v19; // r15
  void *v20; // [rsp+8h] [rbp-F0h] BYREF
  _BYTE v21[24]; // [rsp+10h] [rbp-E8h]
  __int64 v22; // [rsp+28h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-A8h]
  __int64 (__fastcall *v26)(); // [rsp+58h] [rbp-A0h]
  _QWORD v27[3]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-78h] BYREF
  __int64 v29; // [rsp+88h] [rbp-70h]
  __int64 v30; // [rsp+90h] [rbp-68h]
  _BYTE v31[24]; // [rsp+98h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-38h]

  std::env::var(&v20);
  if ( (_DWORD)v20 == 1 )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v20);
LABEL_5:
    v13 = 2;
    goto LABEL_6;
  }
  v11 = *(void **)v21;
  v24 = *(_OWORD *)&v21[8];
  v12 = -*(_QWORD *)v21;
  if ( __OFSUB__(-*(_QWORD *)v21, 1LL) )
    goto LABEL_5;
  *(_OWORD *)v21 = v24;
  v20 = v11;
  v13 = uu_stat::get_quoted_file_name::{{closure}}(&v20, a2, v10, v12);
  if ( v13 == 4 )
    goto LABEL_5;
LABEL_6:
  if ( (a5 & 0xF000) == 0xA000 )
  {
    v14 = v13;
    uu_stat::quote_file_name((__int64)v31, a2, a3, v13);
    std::fs::read_link(&v28, a4);
    v15 = v28;
    if ( __OFSUB__(-v28, 1LL) )
    {
      v23 = v29;
      *(_QWORD *)&v16 = uucore::util_name();
      v24 = v16;
      v27[0] = &v24;
      v27[1] = <&T as core::fmt::Display>::fmt;
      v20 = &unk_119C28;
      *(_QWORD *)v21 = 2LL;
      v22 = 0LL;
      *(_QWORD *)&v21[8] = v27;
      *(_QWORD *)&v21[16] = 1LL;
      std::io::stdio::_eprint(&v20);
      *(_QWORD *)&v24 = &v23;
      *((_QWORD *)&v24 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v20 = &unk_119C48;
      *(_QWORD *)v21 = 2LL;
      v22 = 0LL;
      *(_QWORD *)&v21[8] = &v24;
      *(_QWORD *)&v21[16] = 1LL;
      std::io::stdio::_eprint(&v20);
      *(_DWORD *)(a1 + 8) = 1;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::io::error::Error>(&v23);
    }
    else
    {
      v19 = v29;
      alloc::string::String::from_utf8_lossy(&v20, v29, v30);
      uu_stat::quote_file_name((__int64)v27, *(__int64 *)v21, *(__int64 *)&v21[8], v14);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v20);
      *(_QWORD *)&v24 = v31;
      *((_QWORD *)&v24 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v25 = v27;
      v26 = <alloc::string::String as core::fmt::Display>::fmt;
      v20 = &unk_119C08;
      *(_QWORD *)v21 = 2LL;
      v22 = 0LL;
      *(_QWORD *)&v21[8] = &v24;
      *(_QWORD *)&v21[16] = 2LL;
      core::option::Option<T>::map_or_else(&v32, &v20);
      *(_QWORD *)(a1 + 16) = v33;
      *(_OWORD *)a1 = v32;
      core::ptr::drop_in_place<alloc::string::String>(v27);
      core::ptr::drop_in_place<std::path::PathBuf>(v15, v19);
    }
    return core::ptr::drop_in_place<alloc::string::String>(v31);
  }
  else
  {
    v17 = 3;
    if ( a6 )
      v17 = v13;
    return uu_stat::quote_file_name(a1, a2, a3, v17);
  }
}