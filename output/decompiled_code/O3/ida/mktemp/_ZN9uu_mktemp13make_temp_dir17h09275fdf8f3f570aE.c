        __int64 a8)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 *result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // [rsp+0h] [rbp-148h] BYREF
  __int128 *v20; // [rsp+10h] [rbp-138h]
  __int128 v21; // [rsp+18h] [rbp-130h]
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-120h]
  _BYTE v23[24]; // [rsp+30h] [rbp-118h] BYREF
  __int128 v24; // [rsp+48h] [rbp-100h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-F0h]
  _QWORD v26[2]; // [rsp+60h] [rbp-E8h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+80h] [rbp-C8h] BYREF
  __int128 *v29; // [rsp+90h] [rbp-B8h]
  __int64 v30; // [rsp+98h] [rbp-B0h]
  __int64 v31; // [rsp+A0h] [rbp-A8h]
  _QWORD v32[2]; // [rsp+B0h] [rbp-98h] BYREF
  char v33; // [rsp+C0h] [rbp-88h]
  int v34; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-78h]
  __int64 v36; // [rsp+D8h] [rbp-70h]
  __int64 v37; // [rsp+E0h] [rbp-68h]
  __int64 v38; // [rsp+E8h] [rbp-60h]
  __int64 v39; // [rsp+F0h] [rbp-58h]
  __int16 v40; // [rsp+F8h] [rbp-50h]
  __int128 v41; // [rsp+100h] [rbp-48h] BYREF
  __int64 v42; // [rsp+110h] [rbp-38h]

  v26[0] = a4;
  v26[1] = a5;
  v27[0] = a7;
  v27[1] = a8;
  v40 = 0;
  v34 = 0;
  v35 = a4;
  v36 = a5;
  v39 = a6;
  v37 = a7;
  v38 = a8;
  tempfile::Builder::tempdir_in(v32, &v34, a2, a3);
  if ( v33 == 2 )
  {
    v10 = v32[0];
    if ( (unsigned __int8)std::io::error::Error::kind(v32[0]) )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
      a1[2] = v11;
      result = (__int128 *)0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      alloc::str::<impl str>::repeat(&v24, asc_1F45F, 1LL, a6);
      *(_QWORD *)&v19 = v26;
      *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
      v20 = &v24;
      *(_QWORD *)&v21 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v21 + 1) = v27;
      v22 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &unk_1F460;
      *((_QWORD *)&v28 + 1) = 3LL;
      v31 = 0LL;
      v29 = &v19;
      v30 = 3LL;
      core::option::Option<T>::map_or_else(v23, &v28);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      v41 = *(_OWORD *)v23;
      v42 = *(_QWORD *)&v23[16];
      std::path::Path::join(v23, a2, a3, &v41);
      v19 = *(_OWORD *)&v23[8];
      <T as alloc::string::ToString>::to_string(&v24, &v19);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v28, aDirectory, 9LL);
      v20 = v29;
      v19 = v28;
      v21 = v24;
      v22 = v25;
      a1[1] = alloc::boxed::Box<T>::new(&v19, aDirectory, v15, v16, v17, v18);
      a1[2] = &off_136330;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v23);
      return (__int128 *)core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
  }
  else
  {
    tempfile::dir::TempDir::into_path(&v19, v32);
    v13 = std::fs::set_permissions(&v19, 448LL);
    if ( v13 )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
      a1[2] = v14;
      *a1 = 0x8000000000000000LL;
      return (__int128 *)core::ptr::drop_in_place<std::path::PathBuf>(&v19);
    }
    else
    {
      result = v20;
      a1[2] = v20;
      *(_OWORD *)a1 = v19;
    }
  }
  return result;
}
