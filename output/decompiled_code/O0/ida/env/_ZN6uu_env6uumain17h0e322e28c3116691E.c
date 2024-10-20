__int64 __fastcall uu_env::uumain(int a1, int a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // [rsp+0h] [rbp-238h]
  int v7; // [rsp+8h] [rbp-230h]
  int v8; // [rsp+10h] [rbp-228h]
  int v9; // [rsp+18h] [rbp-220h]
  int v10; // [rsp+20h] [rbp-218h]
  struct _Unwind_Exception *v11; // [rsp+28h] [rbp-210h]
  char v12; // [rsp+2Bh] [rbp-20Dh]
  __int64 v13; // [rsp+2Ch] [rbp-20Ch]
  int v14; // [rsp+30h] [rbp-208h]
  __int64 v15; // [rsp+30h] [rbp-208h]
  __int64 v16; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1F0h]
  _QWORD v18[3]; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-1D0h] BYREF
  _BYTE v20[48]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-178h]
  _BYTE v23[48]; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v24; // [rsp+100h] [rbp-138h] BYREF
  __int128 v25; // [rsp+110h] [rbp-128h]
  _QWORD v26[2]; // [rsp+120h] [rbp-118h] BYREF
  _BYTE v27[48]; // [rsp+130h] [rbp-108h] BYREF
  __int128 v28; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+170h] [rbp-C8h]
  _BYTE v30[48]; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v32; // [rsp+1C8h] [rbp-70h]
  _QWORD v33[12]; // [rsp+1D8h] [rbp-60h] BYREF

  v15 = uu_env::uumain::uumain(a1, a2, v6, v7, v8, v9, v10, v11, v14);
  if ( v15 )
  {
    v16 = v15;
    v17 = v2;
    v33[4] = &v16;
    v33[5] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v22 = &v16;
    *((_QWORD *)&v22 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v21 = v22;
    core::fmt::Arguments::new_v1(v20, anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v21);
    alloc::fmt::format(v19, v20);
    v18[0] = v19[0];
    v18[1] = v19[1];
    v18[2] = v19[2];
    v12 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(
            v18,
            anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168);
    if ( (v12 & 1) != 0 )
    {
      v26[0] = uucore::util_name();
      v26[1] = v4;
      v33[8] = v26;
      v33[9] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v25 = v26;
      *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
      v24 = v25;
      core::fmt::Arguments::new_v1(v23, &unk_135DE0, &v24);
      std::io::stdio::_eprint(v23);
      v33[10] = v18;
      v33[11] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v29 = v18;
      *((_QWORD *)&v29 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v28 = v29;
      core::fmt::Arguments::new_v1(v27, &unk_135E00, &v28);
      std::io::stdio::_eprint(v27);
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(v17 + 104))(v16) & 1) != 0 )
    {
      v33[0] = uucore::execution_phrase();
      v33[1] = v5;
      v33[6] = v33;
      v33[7] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = v33;
      *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
      v31 = v32;
      core::fmt::Arguments::new_v1(v30, &off_135EF0, &v31);
      std::io::stdio::_eprint(v30);
    }
    LODWORD(v13) = (*(__int64 (__fastcall **)(__int64))(v17 + 96))(v16);
    core::ptr::drop_in_place<alloc::string::String>(v18);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v16);
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return (unsigned int)v13;
}
