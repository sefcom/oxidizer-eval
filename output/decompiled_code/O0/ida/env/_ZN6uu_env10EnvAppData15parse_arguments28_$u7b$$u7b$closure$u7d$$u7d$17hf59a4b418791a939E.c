__int64 __fastcall uu_env::EnvAppData::parse_arguments::{{closure}}(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  char is_empty; // [rsp+57h] [rbp-2A1h]
  __int64 v10; // [rsp+58h] [rbp-2A0h]
  __int64 v11; // [rsp+80h] [rbp-278h] BYREF
  __int64 v12; // [rsp+88h] [rbp-270h]
  __int64 v13; // [rsp+90h] [rbp-268h]
  unsigned __int8 v14; // [rsp+9Fh] [rbp-259h]
  _QWORD v15[3]; // [rsp+A0h] [rbp-258h] BYREF
  _QWORD v16[3]; // [rsp+B8h] [rbp-240h] BYREF
  _BYTE v17[48]; // [rsp+D0h] [rbp-228h] BYREF
  __int128 v18; // [rsp+100h] [rbp-1F8h] BYREF
  __int128 v19; // [rsp+110h] [rbp-1E8h]
  _QWORD v20[2]; // [rsp+120h] [rbp-1D8h] BYREF
  _BYTE v21[48]; // [rsp+130h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+160h] [rbp-198h] BYREF
  __int128 v23; // [rsp+170h] [rbp-188h]
  _QWORD v24[2]; // [rsp+180h] [rbp-178h] BYREF
  _BYTE v25[48]; // [rsp+190h] [rbp-168h] BYREF
  __int128 v26; // [rsp+1C0h] [rbp-138h] BYREF
  __int128 v27; // [rsp+1D0h] [rbp-128h]
  _BYTE v28[48]; // [rsp+1E0h] [rbp-118h] BYREF
  __int128 v29; // [rsp+210h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+220h] [rbp-D8h]
  _QWORD v31[2]; // [rsp+230h] [rbp-C8h] BYREF
  _BYTE v32[48]; // [rsp+240h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+270h] [rbp-88h] BYREF
  __int128 v34; // [rsp+280h] [rbp-78h]
  char v35; // [rsp+297h] [rbp-61h]
  __int64 *v36; // [rsp+2A8h] [rbp-50h]
  __int64 (__fastcall *v37)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, struct _Unwind_Exception *, int); // [rsp+2B0h] [rbp-48h]
  char **v38; // [rsp+2B8h] [rbp-40h]
  __int64 (__fastcall *v39)(); // [rsp+2C0h] [rbp-38h]
  _QWORD *v40; // [rsp+2C8h] [rbp-30h]
  __int64 (__fastcall *v41)(); // [rsp+2D0h] [rbp-28h]
  _QWORD *v42; // [rsp+2D8h] [rbp-20h]
  __int64 (__fastcall *v43)(); // [rsp+2E0h] [rbp-18h]
  _QWORD *v44; // [rsp+2E8h] [rbp-10h]
  __int64 (__fastcall *v45)(); // [rsp+2F0h] [rbp-8h]

  v11 = a1;
  v35 = 1;
  v14 = clap_builder::error::Error<F>::kind(&v11);
  if ( (v14 | 2) == 0xE )
  {
    v35 = 0;
    v12 = <T as core::convert::Into<U>>::into(v11, &off_135DC8);
    v13 = v1;
  }
  else
  {
    v36 = &v11;
    v37 = <clap_builder::error::Error<F> as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &v11;
    *((_QWORD *)&v19 + 1) = <clap_builder::error::Error<F> as core::fmt::Display>::fmt;
    v18 = v19;
    core::fmt::Arguments::new_v1(v17, anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v18);
    alloc::fmt::format(v16, v17);
    v15[0] = v16[0];
    v15[1] = v16[1];
    v15[2] = v16[2];
    is_empty = alloc::string::String::is_empty(v15);
    if ( (is_empty & 1) == 0 )
    {
      v2 = <alloc::string::String as core::ops::deref::Deref>::deref(v15);
      v20[0] = core::str::<impl str>::trim_end(v2, v3);
      v20[1] = v4;
      v24[0] = uucore::util_name();
      v24[1] = v5;
      v44 = v24;
      v45 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = v24;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      v22 = v23;
      core::fmt::Arguments::new_v1(v21, &unk_135DE0, &v22);
      std::io::stdio::_eprint(v21);
      v42 = v20;
      v43 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = v20;
      *((_QWORD *)&v27 + 1) = <&T as core::fmt::Display>::fmt;
      v26 = v27;
      core::fmt::Arguments::new_v1(v25, &unk_135E00, &v26);
      std::io::stdio::_eprint(v25);
    }
    v31[0] = uucore::util_name();
    v31[1] = v6;
    v40 = v31;
    v41 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v30 = v31;
    *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
    v29 = v30;
    core::fmt::Arguments::new_v1(v28, &unk_135DE0, &v29);
    std::io::stdio::_eprint(v28);
    v38 = &off_135E20;
    v39 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_135E20;
    *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
    v33 = v34;
    core::fmt::Arguments::new_v1(v32, &unk_135E00, &v33);
    std::io::stdio::_eprint(v32);
    v12 = uucore::mods::error::ExitCode::new(125LL);
    v13 = v7;
    core::ptr::drop_in_place<alloc::string::String>(v15);
  }
  v10 = v12;
  if ( (v35 & 1) != 0 )
    core::ptr::drop_in_place<clap_builder::error::Error>(&v11);
  return v10;
}
