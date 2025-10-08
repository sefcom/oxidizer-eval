__int64 __fastcall uu_mktemp::make_temp_file(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[24]; // [rsp+0h] [rbp-168h] BYREF
  __int128 v17; // [rsp+18h] [rbp-150h]
  __int64 (__fastcall *v18)(); // [rsp+28h] [rbp-140h]
  __int128 v19; // [rsp+30h] [rbp-138h] BYREF
  __int128 v20; // [rsp+40h] [rbp-128h]
  __int64 v21; // [rsp+50h] [rbp-118h]
  _BYTE v22[40]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v23; // [rsp+88h] [rbp-E0h]
  _BYTE v24[24]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v25[2]; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v26[2]; // [rsp+B8h] [rbp-B0h] BYREF
  int v27; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-98h]
  __int64 v29; // [rsp+D8h] [rbp-90h]
  __int64 v30; // [rsp+E0h] [rbp-88h]
  __int64 v31; // [rsp+E8h] [rbp-80h]
  __int64 v32; // [rsp+F0h] [rbp-78h]
  __int16 v33; // [rsp+F8h] [rbp-70h]
  _QWORD v34[2]; // [rsp+100h] [rbp-68h] BYREF
  char v35; // [rsp+110h] [rbp-58h]
  _BYTE v36[72]; // [rsp+120h] [rbp-48h] BYREF

  v25[0] = a4;
  v25[1] = a5;
  v26[0] = a7;
  v26[1] = a8;
  v33 = 0;
  v27 = 0;
  v28 = a4;
  v29 = a5;
  v32 = a6;
  v30 = a7;
  v31 = a8;
  tempfile::Builder::tempfile_in(v34, &v27, a2, a3);
  if ( v35 == 2 )
  {
    v10 = v34[0];
    if ( (unsigned __int8)std::io::error::Error::kind(v34[0]) )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
      a1[2] = v11;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      alloc::slice::<impl [T]>::repeat(v16, a6);
      *(_QWORD *)&v20 = *(_QWORD *)&v16[16];
      v19 = *(_OWORD *)v16;
      *((_QWORD *)&v17 + 1) = v26;
      v18 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v22 = &unk_1B658;
      *(_QWORD *)&v22[8] = 3LL;
      *(_QWORD *)&v22[16] = v16;
      *(_OWORD *)&v22[24] = 3uLL;
      core::option::Option<T>::map_or_else(
        v36,
        v22,
        v13,
        v26,
        v14,
        v15,
        v25,
        <&T as core::fmt::Display>::fmt,
        &v19,
        <alloc::string::String as core::fmt::Display>::fmt);
      core::ptr::drop_in_place<alloc::string::String>(&v19);
      std::path::Path::join(v24, a2, a3, v36);
      *(_OWORD *)v16 = *(_OWORD *)&v24[8];
      <T as alloc::string::SpecToString>::spec_to_string(&v19, v16);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v22, aFile, 4LL);
      *(_QWORD *)&v16[16] = *(_QWORD *)&v22[16];
      *(_OWORD *)v16 = *(_OWORD *)v22;
      v17 = v19;
      v18 = (__int64 (__fastcall *)())v20;
      a1[1] = alloc::boxed::Box<T>::new(v16);
      a1[2] = &off_F9098;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v24);
      return core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
  }
  else
  {
    tempfile::file::NamedTempFile<F>::keep(v22, v34);
    if ( *(_DWORD *)v22 == 1 )
    {
      v21 = v23;
      v20 = *(_OWORD *)&v22[24];
      v19 = *(_OWORD *)&v22[8];
      std::path::Path::to_path_buf(v24, *(_QWORD *)&v22[16], *(_QWORD *)&v22[24]);
      *(_QWORD *)&v17 = *(_QWORD *)&v24[16];
      *(_OWORD *)&v16[8] = *(_OWORD *)v24;
      *(_QWORD *)v16 = 0x8000000000000000LL;
      a1[1] = alloc::boxed::Box<T>::new(v16);
      a1[2] = &off_F9098;
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<tempfile::file::PersistError>(&v19);
    }
    else
    {
      a1[2] = *(_QWORD *)&v22[32];
      *(_OWORD *)a1 = *(_OWORD *)&v22[16];
      return core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)&v22[8]);
    }
  }
  return result;
}