__int64 __fastcall uu_nohup::find_stdout(_QWORD *a1)
{
  unsigned __int8 v1; // r15
  _BYTE *v2; // r13
  int v3; // eax
  int v4; // r14d
  __int64 result; // rax
  int v6; // ebp
  __int128 v7; // rax
  __int64 v8; // r12
  __int128 *v9; // r15
  __int64 v10; // rbp
  int v11; // ebp
  __int128 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-F8h] BYREF
  __int128 *v14; // [rsp+10h] [rbp-E8h]
  __int64 v15; // [rsp+18h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-D8h]
  int v17; // [rsp+28h] [rbp-D0h]
  __int128 v18; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-B8h]
  _BYTE v20[24]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-98h]
  _BYTE *v22; // [rsp+68h] [rbp-90h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-88h]
  _BYTE *v24; // [rsp+78h] [rbp-80h] BYREF
  __int64 v25; // [rsp+80h] [rbp-78h] BYREF
  int v26; // [rsp+88h] [rbp-70h]
  __int16 v27; // [rsp+8Ch] [rbp-6Ch]
  __int64 v28; // [rsp+90h] [rbp-68h] BYREF
  int v29; // [rsp+98h] [rbp-60h]
  __int16 v30; // [rsp+9Ch] [rbp-5Ch]
  _DWORD v31[2]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE *v32; // [rsp+A8h] [rbp-50h]
  _DWORD v33[2]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-40h]
  __int64 v35; // [rsp+C0h] [rbp-38h]

  std::env::var(&v13, aPosixlyCorrect, 15LL);
  v1 = v13;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v13);
  v25 = 0x1B600000000LL;
  v27 = 1;
  v26 = 0x10000;
  std::fs::OpenOptions::open(v31, &v25, aNohupOut, 9LL);
  if ( v31[0] == 1 )
  {
    v2 = v32;
    v24 = v32;
    std::env::var(v20, aHome, 4LL);
    v3 = v1 ^ 1;
    v4 = 2 * v3 + 125;
    if ( *(_QWORD *)v20 == 1LL )
    {
      LODWORD(v14) = 2 * v3 + 125;
      *((_QWORD *)&v13 + 1) = v2;
      *(_QWORD *)&v13 = 0x8000000000000002LL;
      *a1 = alloc::boxed::Box<T>::new(&v13);
      a1[1] = &off_DEBB0;
      return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v20);
    }
    else
    {
      v19 = v21;
      v18 = *(_OWORD *)&v20[8];
      std::path::PathBuf::push(&v18);
      core::str::converts::from_utf8(&v13, *((_QWORD *)&v18 + 1), v19);
      if ( (v13 & 1) != 0 )
        core::option::unwrap_failed(&off_DEC58);
      v8 = *((_QWORD *)&v13 + 1);
      v9 = v14;
      v28 = 0x1B600000000LL;
      v30 = 1;
      v29 = 0x10000;
      std::fs::OpenOptions::open(v33, &v28, &v18);
      if ( v33[0] == 1 )
      {
        v10 = v34;
        v35 = v34;
        v22 = v2;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v8, v9);
        v14 = *(__int128 **)&v20[16];
        v13 = *(_OWORD *)v20;
        v17 = v4;
        v15 = (__int64)v2;
        v16 = v10;
        *a1 = alloc::boxed::Box<T>::new(&v13);
        a1[1] = &off_DEBB0;
        return core::ptr::drop_in_place<std::path::PathBuf>(v18, *((_QWORD *)&v18 + 1));
      }
      else
      {
        v11 = v33[1];
        *(_QWORD *)&v12 = uucore::util_name();
        *(_OWORD *)v20 = v12;
        v22 = v20;
        v23 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &unk_DEC18;
        *((_QWORD *)&v13 + 1) = 2LL;
        v16 = 0LL;
        v14 = (__int128 *)&v22;
        v15 = 1LL;
        std::io::stdio::_eprint(&v13);
        *(_QWORD *)v20 = 0LL;
        *(_QWORD *)&v20[8] = v8;
        *(_QWORD *)&v20[16] = v9;
        LOBYTE(v21) = 1;
        v22 = v20;
        v23 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &off_DEC38;
        *((_QWORD *)&v13 + 1) = 2LL;
        v16 = 0LL;
        v14 = (__int128 *)&v22;
        v15 = 1LL;
        std::io::stdio::_eprint(&v13);
        *((_DWORD *)a1 + 2) = v11;
        *a1 = 0LL;
        core::ptr::drop_in_place<std::path::PathBuf>(v18, *((_QWORD *)&v18 + 1));
        return core::ptr::drop_in_place<std::io::error::Error>(&v24);
      }
    }
  }
  else
  {
    v6 = v31[1];
    *(_QWORD *)&v7 = uucore::util_name();
    *(_OWORD *)v20 = v7;
    *(_QWORD *)&v18 = v20;
    *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &unk_DEC18;
    *((_QWORD *)&v13 + 1) = 2LL;
    v16 = 0LL;
    v14 = &v18;
    v15 = 1LL;
    std::io::stdio::_eprint(&v13);
    *(_QWORD *)v20 = 0LL;
    *(_QWORD *)&v20[8] = aNohupOut;
    *(_QWORD *)&v20[16] = 9LL;
    LOBYTE(v21) = 1;
    *(_QWORD *)&v18 = v20;
    *((_QWORD *)&v18 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &off_DEC38;
    *((_QWORD *)&v13 + 1) = 2LL;
    v16 = 0LL;
    v14 = &v18;
    v15 = 1LL;
    result = std::io::stdio::_eprint(&v13);
    *((_DWORD *)a1 + 2) = v6;
    *a1 = 0LL;
  }
  return result;
}