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
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[24]; // [rsp+8h] [rbp-190h] BYREF
  __int128 v23; // [rsp+20h] [rbp-178h] BYREF
  __int128 *v24; // [rsp+30h] [rbp-168h]
  __int128 v25; // [rsp+38h] [rbp-160h]
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-150h]
  _BYTE v27[40]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v28; // [rsp+78h] [rbp-120h]
  __int128 v29; // [rsp+80h] [rbp-118h] BYREF
  __int128 v30; // [rsp+90h] [rbp-108h]
  __int64 v31; // [rsp+A0h] [rbp-F8h]
  _QWORD v32[2]; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD v33[2]; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-C0h]
  int v36; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-A8h]
  __int64 v38; // [rsp+F8h] [rbp-A0h]
  __int64 v39; // [rsp+100h] [rbp-98h]
  __int64 v40; // [rsp+108h] [rbp-90h]
  __int64 v41; // [rsp+110h] [rbp-88h]
  __int16 v42; // [rsp+118h] [rbp-80h]
  __int128 v43; // [rsp+120h] [rbp-78h] BYREF
  __int64 v44; // [rsp+130h] [rbp-68h]
  _OWORD v45[5]; // [rsp+140h] [rbp-58h] BYREF

  v32[0] = a4;
  v32[1] = a5;
  v33[0] = a7;
  v33[1] = a8;
  v42 = 0;
  v36 = 0;
  v37 = a4;
  v38 = a5;
  v41 = a6;
  v39 = a7;
  v40 = a8;
  tempfile::Builder::tempfile_in(&v34, &v36, a2, a3);
  if ( (_BYTE)v35 == 2 )
  {
    v10 = v34;
    if ( (unsigned __int8)std::io::error::Error::kind(v34) )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
      a1[2] = v11;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      alloc::str::<impl str>::repeat(&v29, asc_1F508, 1LL, a6);
      *(_QWORD *)&v23 = v32;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      v24 = &v29;
      *(_QWORD *)&v25 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v25 + 1) = v33;
      v26 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v27 = &unk_1F4D8;
      *(_QWORD *)&v27[8] = 3LL;
      *(_QWORD *)&v27[16] = &v23;
      *(_OWORD *)&v27[24] = 3uLL;
      core::option::Option<T>::map_or_else(v22, v27);
      core::ptr::drop_in_place<alloc::string::String>(&v29);
      v43 = *(_OWORD *)v22;
      v44 = *(_QWORD *)&v22[16];
      std::path::Path::join(v22, a2, a3, &v43);
      v23 = *(_OWORD *)&v22[8];
      <T as alloc::string::ToString>::to_string(&v29, &v23);
      <T as alloc::slice::hack::ConvertVec>::to_vec(v27, aFile, 4LL);
      v24 = *(__int128 **)&v27[16];
      v23 = *(_OWORD *)v27;
      v25 = v29;
      v26 = (__int64 (__fastcall *)())v30;
      a1[1] = alloc::boxed::Box<T>::new(&v23, aFile, v18, v19, v20, v21);
      a1[2] = &off_136AF0;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v22);
      return core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
  }
  else
  {
    v45[1] = v35;
    v45[0] = v34;
    tempfile::file::NamedTempFile<F>::keep(v27, v45);
    if ( *(_QWORD *)v27 )
    {
      v31 = v28;
      v30 = *(_OWORD *)&v27[24];
      v29 = *(_OWORD *)&v27[8];
      v13 = *(_QWORD *)&v27[16];
      std::path::Path::to_path_buf(v22, *(_QWORD *)&v27[16], *(_QWORD *)&v27[24]);
      v24 = *(__int128 **)&v22[16];
      v23 = *(_OWORD *)v22;
      *(_QWORD *)&v25 = 0x8000000000000000LL;
      a1[1] = alloc::boxed::Box<T>::new(&v23, v13, v14, v15, v16, v17);
      a1[2] = &off_136AF0;
      *a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<tempfile::file::PersistError>(&v29);
    }
    else
    {
      a1[2] = *(_QWORD *)&v27[32];
      *(_OWORD *)a1 = *(_OWORD *)&v27[16];
      return core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)&v27[8]);
    }
  }
  return result;
}
