__int64 __fastcall uu_base32::uumain(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // [rsp+0h] [rbp-238h]
  int v11; // [rsp+8h] [rbp-230h]
  int v12; // [rsp+10h] [rbp-228h]
  int v13; // [rsp+18h] [rbp-220h]
  int v14; // [rsp+20h] [rbp-218h]
  int v15; // [rsp+28h] [rbp-210h]
  char v16; // [rsp+2Bh] [rbp-20Dh]
  __int64 v17; // [rsp+2Ch] [rbp-20Ch]
  int v18; // [rsp+30h] [rbp-208h]
  __int64 v19; // [rsp+30h] [rbp-208h]
  char v20; // [rsp+38h] [rbp-200h]
  __int64 v21; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-1F0h]
  __int64 v23; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-1E0h]
  __int64 v25; // [rsp+60h] [rbp-1D8h]
  __int64 v26; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1C8h]
  __int64 v28; // [rsp+78h] [rbp-1C0h]
  int v29[12]; // [rsp+80h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-188h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-178h]
  int v32[10]; // [rsp+D0h] [rbp-168h] BYREF
  char v33; // [rsp+F8h] [rbp-140h]
  __int128 v34; // [rsp+100h] [rbp-138h] BYREF
  __int128 v35; // [rsp+110h] [rbp-128h]
  __int64 v36; // [rsp+120h] [rbp-118h] BYREF
  __int64 v37; // [rsp+128h] [rbp-110h]
  int v38[12]; // [rsp+130h] [rbp-108h] BYREF
  __int128 v39; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+170h] [rbp-C8h]
  _BYTE v41[48]; // [rsp+180h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v43; // [rsp+1C8h] [rbp-70h]
  _QWORD v44[12]; // [rsp+1D8h] [rbp-60h] BYREF

  v19 = uu_base32::uumain::uumain(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29[0],
          v29[2],
          v29[4],
          v29[6],
          v29[8],
          v29[10],
          v30,
          SDWORD2(v30),
          v31,
          SDWORD2(v31),
          v32[0],
          v32[2],
          v32[4],
          v32[6],
          v32[8],
          v33,
          v34,
          SDWORD2(v34),
          v35,
          SDWORD2(v35),
          v36,
          v37,
          v38[0],
          v38[2],
          v38[4],
          v38[6],
          v38[8],
          v38[10],
          v39,
          SDWORD2(v39),
          (struct _Unwind_Exception *)v40,
          SDWORD2(v40));
  if ( v19 )
  {
    v21 = v19;
    v22 = v6;
    v44[10] = &v21;
    v44[11] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v31 = &v21;
    *((_QWORD *)&v31 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v30 = v31;
    core::fmt::Arguments::new_v1(v29, &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v30);
    alloc::fmt::format(&v26, v29);
    v23 = v26;
    v24 = v27;
    v25 = v28;
    v16 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(
            &v23,
            &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168);
    if ( (v16 & 1) != 0 )
    {
      v36 = uucore::util_name();
      v37 = v8;
      v44[6] = &v36;
      v44[7] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v35 = &v36;
      *((_QWORD *)&v35 + 1) = <&T as core::fmt::Display>::fmt;
      v34 = v35;
      core::fmt::Arguments::new_v1(v32, &unk_1299E0, &v34);
      std::io::stdio::_eprint(v32);
      v44[8] = &v23;
      v44[9] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v40 = &v23;
      *((_QWORD *)&v40 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v39 = v40;
      core::fmt::Arguments::new_v1(v38, &unk_129A00, &v39);
      std::io::stdio::_eprint(v38);
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(v22 + 104))(v21) & 1) != 0 )
    {
      v44[0] = uucore::execution_phrase();
      v44[1] = v9;
      v44[4] = v44;
      v44[5] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v43 = v44;
      *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
      v42 = v43;
      core::fmt::Arguments::new_v1(v41, &off_129A20, &v42);
      std::io::stdio::_eprint(v41);
    }
    LODWORD(v17) = (*(__int64 (__fastcall **)(__int64))(v22 + 96))(v21);
    core::ptr::drop_in_place<alloc::string::String>(&v23);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v21);
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return (unsigned int)v17;
}
