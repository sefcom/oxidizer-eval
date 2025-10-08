__int64 __fastcall uu_mktemp::make_temp_dir(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // [rsp+0h] [rbp-188h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+10h] [rbp-178h]
  __int64 v18; // [rsp+18h] [rbp-170h]
  __int128 v19; // [rsp+20h] [rbp-168h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+30h] [rbp-158h]
  __int128 v21; // [rsp+38h] [rbp-150h]
  __int64 (__fastcall *v22)(); // [rsp+48h] [rbp-140h]
  __int128 v23; // [rsp+58h] [rbp-130h] BYREF
  __int64 v24; // [rsp+68h] [rbp-120h]
  _QWORD v25[2]; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v27; // [rsp+90h] [rbp-F8h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+A0h] [rbp-E8h]
  __int64 v29; // [rsp+A8h] [rbp-E0h]
  __int64 v30; // [rsp+B0h] [rbp-D8h]
  char v31[8]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-C0h]
  _QWORD v33[6]; // [rsp+D8h] [rbp-B0h] BYREF
  __int16 v34; // [rsp+108h] [rbp-80h]
  __int128 v35; // [rsp+110h] [rbp-78h] BYREF
  __int64 v36; // [rsp+120h] [rbp-68h]
  __int128 v37; // [rsp+128h] [rbp-60h] BYREF
  __int64 v38; // [rsp+138h] [rbp-50h]
  _BYTE v39[72]; // [rsp+140h] [rbp-48h] BYREF

  v25[0] = a4;
  v25[1] = a5;
  v26[0] = a7;
  v26[1] = a8;
  v34 = 0;
  v33[1] = a4;
  v33[2] = a5;
  v33[5] = a6;
  v33[3] = a7;
  v33[4] = a8;
  v33[0] = 0x1C000000001LL;
  tempfile::Builder::tempdir_in(&v23, v33, a2, a3);
  if ( (_BYTE)v24 == 2 )
  {
    v10 = v23;
    if ( (unsigned __int8)std::io::error::Error::kind(v23) )
    {
      a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
      a1[2] = v11;
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      alloc::slice::<impl [T]>::repeat(&v19, a6);
      v17 = v20;
      v16 = v19;
      *(_QWORD *)&v19 = v25;
      *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
      v20 = (__int64 (__fastcall *)())&v16;
      *(_QWORD *)&v21 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v21 + 1) = v26;
      v22 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_1B658;
      *((_QWORD *)&v27 + 1) = 3LL;
      v30 = 0LL;
      v28 = (__int64 (__fastcall *)())&v19;
      v29 = 3LL;
      core::option::Option<T>::map_or_else(v39, &v27, v13, v26, v14, v15, v16, *((_QWORD *)&v16 + 1), v17, v18);
      core::ptr::drop_in_place<alloc::string::String>(&v16);
      std::path::Path::join(v31, a2, a3, v39);
      v19 = v32;
      <T as alloc::string::SpecToString>::spec_to_string(&v16, &v19);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, aDirectory, 9LL);
      v20 = v28;
      v19 = v27;
      v21 = v16;
      v22 = v17;
      a1[1] = alloc::boxed::Box<T>::new(&v19);
      a1[2] = &off_F9098;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(v31);
      return core::ptr::drop_in_place<std::io::error::Error>(v10);
    }
  }
  else
  {
    v36 = v24;
    v35 = v23;
    tempfile::dir::TempDir::keep(&v37, &v35);
    result = v38;
    a1[2] = v38;
    *(_OWORD *)a1 = v37;
  }
  return result;
}