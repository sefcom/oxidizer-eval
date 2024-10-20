__int64 __fastcall uu_basenc::uumain(int a1, int a2, int a3, int a4, int a5, int a6)
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
  int v32[12]; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v33; // [rsp+100h] [rbp-138h] BYREF
  __int128 v34; // [rsp+110h] [rbp-128h]
  __int64 v35; // [rsp+120h] [rbp-118h] BYREF
  __int64 v36; // [rsp+128h] [rbp-110h]
  int v37[12]; // [rsp+130h] [rbp-108h] BYREF
  __int128 v38; // [rsp+160h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+170h] [rbp-C8h]
  int v40[4]; // [rsp+180h] [rbp-B8h] BYREF
  struct _Unwind_Exception *v41; // [rsp+190h] [rbp-A8h]
  int v42; // [rsp+198h] [rbp-A0h]
  __int128 v43; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v44; // [rsp+1C8h] [rbp-70h]
  _QWORD v45[12]; // [rsp+1D8h] [rbp-60h] BYREF

  v19 = uu_basenc::uumain::uumain(
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
          v32[10],
          v33,
          SDWORD2(v33),
          v34,
          SBYTE8(v34),
          v35,
          v36,
          v37[0],
          v37[2],
          v37[4],
          v37[6],
          v37[8],
          v37[10],
          v38,
          SDWORD2(v38),
          v39,
          SDWORD2(v39),
          v40[0],
          v40[2],
          v41,
          v42);
  if ( v19 )
  {
    v21 = v19;
    v22 = v6;
    v45[4] = &v21;
    v45[5] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
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
      v35 = uucore::util_name();
      v36 = v8;
      v45[8] = &v35;
      v45[9] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &v35;
      *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
      v33 = v34;
      core::fmt::Arguments::new_v1(v32, &unk_12D570, &v33);
      std::io::stdio::_eprint(v32);
      v45[10] = &v23;
      v45[11] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v39 = &v23;
      *((_QWORD *)&v39 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v38 = v39;
      core::fmt::Arguments::new_v1(v37, &unk_12D590, &v38);
      std::io::stdio::_eprint(v37);
    }
    if ( ((*(__int64 (__fastcall **)(__int64))(v22 + 104))(v21) & 1) != 0 )
    {
      v45[0] = uucore::execution_phrase();
      v45[1] = v9;
      v45[6] = v45;
      v45[7] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v44 = v45;
      *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
      v43 = v44;
      core::fmt::Arguments::new_v1(v40, &off_12D5B0, &v43);
      std::io::stdio::_eprint(v40);
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
