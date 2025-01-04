        __int64 a8)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v16; // [rsp+10h] [rbp-138h]
  __int128 v17; // [rsp+18h] [rbp-130h]
  __int64 (__fastcall *v18)(); // [rsp+28h] [rbp-120h]
  _BYTE v19[24]; // [rsp+30h] [rbp-118h] BYREF
  __int128 v20; // [rsp+48h] [rbp-100h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-F0h]
  _QWORD v22[2]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+80h] [rbp-C8h] BYREF
  __int128 *v25; // [rsp+90h] [rbp-B8h]
  __int64 v26; // [rsp+98h] [rbp-B0h]
  __int64 v27; // [rsp+A0h] [rbp-A8h]
  _QWORD v28[2]; // [rsp+B0h] [rbp-98h] BYREF
  char v29; // [rsp+C0h] [rbp-88h]
  int v30; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-78h]
  __int64 v32; // [rsp+D8h] [rbp-70h]
  __int64 v33; // [rsp+E0h] [rbp-68h]
  __int64 v34; // [rsp+E8h] [rbp-60h]
  __int64 v35; // [rsp+F0h] [rbp-58h]
  __int16 v36; // [rsp+F8h] [rbp-50h]
  __int128 v37; // [rsp+100h] [rbp-48h] BYREF
  __int64 v38; // [rsp+110h] [rbp-38h]

  v22[0] = a4;
  v22[1] = a5;
  v23[0] = a7;
  v23[1] = a8;
  v36 = 0;
  v30 = 0;
  v31 = a4;
  v32 = a5;
  v35 = a6;
  v33 = a7;
  v34 = a8;
  tempfile::Builder::tempdir_in(v28, &v30, a2, a3);
  if ( v29 == 2 )
  {
    v10 = v28[0];
    if ( (unsigned __int8)std::io::error::Error::kind(v28[0]) )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
      a1[2] = v11;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      alloc::str::<impl str>::repeat(&v20, asc_1F508, 1LL, a6);
      *(_QWORD *)&v15 = v22;
      *((_QWORD *)&v15 + 1) = <&T as core::fmt::Display>::fmt;
      v16 = &v20;
      *(_QWORD *)&v17 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v17 + 1) = v23;
      v18 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v24 = &unk_1F4D8;
      *((_QWORD *)&v24 + 1) = 3LL;
      v27 = 0LL;
      v25 = &v15;
      v26 = 3LL;
      core::option::Option<T>::map_or_else(v19, &v24);
      core::ptr::drop_in_place<alloc::string::String>(&v20);
      v37 = *(_OWORD *)v19;
      v38 = *(_QWORD *)&v19[16];
      std::path::Path::join(v19, a2, a3, &v37);
      v15 = *(_OWORD *)&v19[8];
      <T as alloc::string::ToString>::to_string(&v20, &v15);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, aDirectory, 9LL);
      v16 = v25;
      v15 = v24;
      v17 = v20;
      v18 = v21;
      a1[1] = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v15);
      a1[2] = &off_136AF0;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v19);
      return core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
  }
  else
  {
    tempfile::dir::TempDir::into_path(&v15, v28);
    v13 = std::fs::set_permissions(&v15, 448LL);
    if ( v13 )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
      a1[2] = v14;
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v15);
    }
    else
    {
      result = (__int64)v16;
      a1[2] = v16;
      *(_OWORD *)a1 = v15;
    }
  }
  return result;
}
