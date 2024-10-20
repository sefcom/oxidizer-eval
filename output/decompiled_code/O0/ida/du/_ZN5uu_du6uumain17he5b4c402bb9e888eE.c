__int64 uu_du::uumain()
{
  __int64 v0; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  char v4; // [rsp+2Bh] [rbp-20Dh]
  __int64 v5; // [rsp+2Ch] [rbp-20Ch]
  __int64 v6; // [rsp+30h] [rbp-208h]
  __int64 v7; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-1F0h]
  _QWORD v9[3]; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v10[3]; // [rsp+68h] [rbp-1D0h] BYREF
  _BYTE v11[48]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v12; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v13; // [rsp+C0h] [rbp-178h]
  _BYTE v14[48]; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v15; // [rsp+100h] [rbp-138h] BYREF
  __int128 v16; // [rsp+110h] [rbp-128h]
  _QWORD v17[2]; // [rsp+120h] [rbp-118h] BYREF
  _BYTE v18[48]; // [rsp+130h] [rbp-108h] BYREF
  __int128 v19; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+170h] [rbp-C8h]
  _BYTE v21[48]; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v23; // [rsp+1C8h] [rbp-70h]
  _QWORD v24[12]; // [rsp+1D8h] [rbp-60h] BYREF

  v6 = uu_du::uumain::uumain();
  if ( v6 )
  {
    v7 = v6;
    v8 = v0;
    v24[10] = &v7;
    v24[11] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &v7;
    *((_QWORD *)&v13 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v12 = v13;
    core::fmt::Arguments::new_v1(v11, &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v12);
    alloc::fmt::format(v10, v11);
    v9[0] = v10[0];
    v9[1] = v10[1];
    v9[2] = v10[2];
    v4 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(
           v9,
           &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168);
    if ( (v4 & 1) != 0 )
    {
      v17[0] = uucore::util_name();
      v17[1] = v2;
      v24[6] = v17;
      v24[7] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = v17;
      *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
      v15 = v16;
      core::fmt::Arguments::new_v1(v14, &unk_161288, &v15);
      std::io::stdio::_eprint(v14);
      v24[8] = v9;
      v24[9] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = v9;
      *((_QWORD *)&v20 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v19 = v20;
      core::fmt::Arguments::new_v1(v18, &unk_1612A8, &v19);
      std::io::stdio::_eprint(v18);
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(v8 + 104))(v7) & 1) != 0 )
    {
      v24[0] = uucore::execution_phrase();
      v24[1] = v3;
      v24[4] = v24;
      v24[5] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v23 = v24;
      *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
      v22 = v23;
      core::fmt::Arguments::new_v1(v21, &off_1612C8, &v22);
      std::io::stdio::_eprint(v21);
    }
    LODWORD(v5) = (*(__int64 (__fastcall **)(__int64))(v8 + 96))(v7);
    core::ptr::drop_in_place<alloc::string::String>(v9);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v7);
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return (unsigned int)v5;
}
