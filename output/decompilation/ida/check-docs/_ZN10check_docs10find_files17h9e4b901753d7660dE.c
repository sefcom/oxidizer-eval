_QWORD *__fastcall check_docs::find_files(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int128 v13; // [rsp+10h] [rbp-1F8h] BYREF
  const char *v14; // [rsp+20h] [rbp-1E8h]
  __int64 v15; // [rsp+28h] [rbp-1E0h]
  const char *v16; // [rsp+30h] [rbp-1D8h]
  __int64 v17; // [rsp+38h] [rbp-1D0h]
  const char *v18; // [rsp+40h] [rbp-1C8h]
  __int64 v19; // [rsp+48h] [rbp-1C0h]
  __int64 v20; // [rsp+50h] [rbp-1B8h]
  __int64 v21; // [rsp+58h] [rbp-1B0h]
  const char *v22; // [rsp+60h] [rbp-1A8h]
  __int64 v23; // [rsp+68h] [rbp-1A0h]
  const char *v24; // [rsp+70h] [rbp-198h]
  __int64 v25; // [rsp+78h] [rbp-190h]
  __int64 v26; // [rsp+80h] [rbp-188h]
  __int64 v27; // [rsp+88h] [rbp-180h]
  _QWORD v28[2]; // [rsp+98h] [rbp-170h] BYREF
  _BYTE v29[24]; // [rsp+A8h] [rbp-160h] BYREF
  _BYTE v30[24]; // [rsp+C0h] [rbp-148h] BYREF
  int v31; // [rsp+D8h] [rbp-130h]
  __int64 v32; // [rsp+E0h] [rbp-128h] BYREF
  __int128 v33; // [rsp+E8h] [rbp-120h]
  __int64 v34; // [rsp+F8h] [rbp-110h]
  __int64 v35; // [rsp+100h] [rbp-108h]
  _BYTE v36[72]; // [rsp+1C0h] [rbp-48h] BYREF

  v28[0] = a2;
  v28[1] = a3;
  std::process::Command::new(&v32, &unk_44240);
  *(_QWORD *)&v13 = a4;
  *((_QWORD *)&v13 + 1) = a5;
  v14 = aType;
  v15 = 5LL;
  v16 = asc_48169;
  v17 = 1LL;
  v18 = aName_1;
  v19 = 5LL;
  v20 = a2;
  v21 = a3;
  v22 = asc_47980;
  v23 = 1LL;
  v24 = aName_1;
  v25 = 5LL;
  v26 = a6;
  v27 = a7;
  std::process::Command::args(&v32, &v13);
  std::process::Command::output(&v13, &v32);
  core::result::Result<T,E>::expect(v29, &v13, aProgramFindNot, 26LL, &off_1D36D0);
  core::ptr::drop_in_place<std::process::Command>(&v32);
  if ( v31 )
  {
    *(_QWORD *)&v13 = v28;
    *((_QWORD *)&v13 + 1) = <&T as core::fmt::Display>::fmt;
    v32 = (__int64)&off_1D36C0;
    *(_QWORD *)&v33 = 1LL;
    v35 = 0LL;
    *((_QWORD *)&v33 + 1) = &v13;
    v34 = 1LL;
    core::option::Option<T>::map_or_else(v36, 0LL, v11, &v32);
    a1[1] = anyhow::error::<impl anyhow::Error>::msg(v36);
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v29);
  }
  else
  {
    alloc::string::String::from_utf8(&v32, v29);
    v13 = v33;
    v14 = (const char *)v34;
    if ( __OFSUB__(-v32, 1LL) )
    {
      a1[2] = v14;
      *(_OWORD *)a1 = v13;
    }
    else
    {
      v34 = (__int64)v14;
      v33 = v13;
      a1[1] = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v32);
      *a1 = 0x8000000000000000LL;
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30);
  return a1;
}