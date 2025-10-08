__int64 __fastcall rg::flags::doc::help::generate_long_flag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  __int64 (__fastcall *v6)(__int64); // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rbp
  unsigned __int8 v27; // al
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  unsigned __int8 v30; // al
  __int128 v32; // [rsp+10h] [rbp-248h] BYREF
  __int64 v33; // [rsp+20h] [rbp-238h]
  __int128 v34; // [rsp+30h] [rbp-228h] BYREF
  __m256i v35; // [rsp+40h] [rbp-218h]
  __int128 v36; // [rsp+60h] [rbp-1F8h]
  __int128 v37; // [rsp+70h] [rbp-1E8h]
  __int128 v38; // [rsp+80h] [rbp-1D8h]
  __int64 v39; // [rsp+90h] [rbp-1C8h]
  __int64 v40; // [rsp+98h] [rbp-1C0h]
  __int64 v41; // [rsp+A0h] [rbp-1B8h]
  __int16 v42; // [rsp+A8h] [rbp-1B0h]
  __int64 v43; // [rsp+B0h] [rbp-1A8h]
  __int128 v44; // [rsp+B8h] [rbp-1A0h] BYREF
  __m256i v45; // [rsp+C8h] [rbp-190h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-170h]
  __int128 v47; // [rsp+F8h] [rbp-160h]
  __int128 v48; // [rsp+108h] [rbp-150h]
  __int64 v49; // [rsp+118h] [rbp-140h]
  __int128 v50; // [rsp+120h] [rbp-138h] BYREF
  __int64 v51; // [rsp+130h] [rbp-128h]
  __int64 v52; // [rsp+138h] [rbp-120h]
  __int64 v53; // [rsp+140h] [rbp-118h]
  _BYTE v54[8]; // [rsp+148h] [rbp-110h] BYREF
  __int64 v55; // [rsp+150h] [rbp-108h]
  __int64 v56; // [rsp+158h] [rbp-100h]
  __int64 v57; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v58; // [rsp+168h] [rbp-F0h]
  __int64 v59; // [rsp+170h] [rbp-E8h]
  __int64 v60; // [rsp+178h] [rbp-E0h]
  __int64 v61; // [rsp+180h] [rbp-D8h]
  __int64 v62; // [rsp+188h] [rbp-D0h]
  __int64 v63; // [rsp+190h] [rbp-C8h]
  __int128 v64; // [rsp+198h] [rbp-C0h]
  __int16 v65; // [rsp+1A8h] [rbp-B0h]
  _BYTE v66[8]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+1B8h] [rbp-A0h]
  __int64 v68; // [rsp+1C0h] [rbp-98h]
  _BYTE v69[8]; // [rsp+1C8h] [rbp-90h] BYREF
  __int64 v70; // [rsp+1D0h] [rbp-88h]
  __int64 v71; // [rsp+1D8h] [rbp-80h]
  _QWORD v72[2]; // [rsp+1E0h] [rbp-78h] BYREF
  _QWORD v73[2]; // [rsp+1F0h] [rbp-68h] BYREF
  _QWORD v74[2]; // [rsp+200h] [rbp-58h] BYREF
  __int64 v75; // [rsp+210h] [rbp-48h] BYREF
  __int64 v76; // [rsp+218h] [rbp-40h]
  __int64 v77; // [rsp+220h] [rbp-38h]

  if ( ((*(__int64 (**)(void))(a2 + 40))() & 1) != 0 )
  {
    LODWORD(v32) = v4;
    *(_QWORD *)&v44 = &v32;
    *((_QWORD *)&v44 + 1) = <char as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_3EA430;
    *((_QWORD *)&v34 + 1) = 1LL;
    v35.m256i_i64[0] = (__int64)&v44;
    *(_OWORD *)&v35.m256i_u64[1] = 1uLL;
    v5 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
    core::result::Result<T,E>::unwrap(v5, &off_3EA480);
    v6 = *(__int64 (__fastcall **)(__int64))(a2 + 72);
    v7 = v6(a1);
    if ( v7 )
    {
      v57 = v7;
      v58 = v8;
      *(_QWORD *)&v44 = &v57;
      *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_3EA440;
      *((_QWORD *)&v34 + 1) = 1LL;
      v35.m256i_i64[0] = (__int64)&v44;
      *(_OWORD *)&v35.m256i_u64[1] = 1uLL;
      v9 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
      core::result::Result<T,E>::unwrap(v9, &off_3EA498);
    }
    *(_QWORD *)&v34 = &off_3EA2B0;
    *((_QWORD *)&v34 + 1) = 1LL;
    *(_OWORD *)v35.m256i_i8 = 8uLL;
    v10 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
    core::result::Result<T,E>::unwrap(v10, &off_3EA4B0);
  }
  else
  {
    *(_QWORD *)&v34 = &off_3EA450;
    *((_QWORD *)&v34 + 1) = 1LL;
    *(_OWORD *)v35.m256i_i8 = 8uLL;
    v11 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
    core::result::Result<T,E>::unwrap(v11, &off_3EA4C8);
    v6 = *(__int64 (__fastcall **)(__int64))(a2 + 72);
  }
  v72[0] = (*(__int64 (__fastcall **)(__int64))(a2 + 48))(a1);
  v72[1] = v12;
  *(_QWORD *)&v44 = v72;
  *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v34 = &off_3E5EE8;
  *((_QWORD *)&v34 + 1) = 1LL;
  v35.m256i_i64[0] = (__int64)&v44;
  *(_OWORD *)&v35.m256i_u64[1] = 1uLL;
  v13 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
  core::result::Result<T,E>::unwrap(v13, &off_3EA4E0);
  v14 = v6(a1);
  if ( v14 )
  {
    v57 = v14;
    v58 = v15;
    *(_QWORD *)&v44 = &v57;
    *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_3EA2C0;
    *((_QWORD *)&v34 + 1) = 1LL;
    v35.m256i_i64[0] = (__int64)&v44;
    *(_OWORD *)&v35.m256i_u64[1] = 1uLL;
    v16 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
    core::result::Result<T,E>::unwrap(v16, &off_3EA4F8);
  }
  *(_QWORD *)&v34 = &off_3EA358;
  *((_QWORD *)&v34 + 1) = 1LL;
  *(_OWORD *)v35.m256i_i8 = 8uLL;
  v17 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v34);
  core::result::Result<T,E>::unwrap(v17, &off_3EA510);
  v18 = (*(__int64 (__fastcall **)(__int64))(a2 + 96))(a1);
  v20 = core::str::<impl str>::trim_matches(v18, v19);
  rg::flags::doc::render_custom_markup(v66, v20);
  rg::flags::doc::render_custom_markup(v69, v67, v68);
  rg::flags::doc::help::remove_roff(v54, v70, v71);
  v21 = (*(__int64 (__fastcall **)(__int64))(a2 + 64))(a1);
  if ( v21 )
  {
    v57 = v21;
    v58 = v22;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(a2 + 32))(a1) )
    {
      *(_QWORD *)&v44 = &v57;
      *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_3EA460;
      *((_QWORD *)&v34 + 1) = 2LL;
      v35.m256i_i64[0] = (__int64)&v44;
      *(_OWORD *)&v35.m256i_u64[1] = 1uLL;
      v23 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(v54, &v34);
      core::result::Result<T,E>::unwrap(v23, &off_3EA528);
    }
  }
  alloc::slice::<impl [T]>::repeat(&v34, asc_69B32, 8LL);
  v51 = v35.m256i_i64[0];
  v50 = v34;
  v63 = 71LL;
  v65 = 257;
  v59 = 1LL;
  v60 = 0LL;
  v61 = 1LL;
  v62 = 0LL;
  v57 = 0LL;
  v64 = 0LL;
  v24 = v56;
  core::str::pattern::StrSearcher::new(&v44, v55, v56, asc_835CC, 2LL);
  v39 = v49;
  v38 = v48;
  v37 = v47;
  v36 = v46;
  v35 = v45;
  v34 = v44;
  v40 = 0LL;
  v41 = v24;
  v42 = 1;
  v43 = 0LL;
  v53 = *((_QWORD *)&v50 + 1);
  v52 = v51;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v75, &v34);
    v25 = v76;
    if ( !v76 )
      break;
    v26 = v77;
    if ( v75 )
    {
      *(_QWORD *)&v44 = &off_3EA408;
      *((_QWORD *)&v44 + 1) = 1LL;
      v45.m256i_i64[0] = 8LL;
      *(_OWORD *)&v45.m256i_u64[1] = 0LL;
      v27 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v44);
      core::result::Result<T,E>::unwrap(v27, &off_3EA540);
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v44, v25);
    v33 = v45.m256i_i64[0];
    v32 = v44;
    <char as core::str::pattern::Pattern>::into_searcher(&v45, 10LL, v25, v26);
    *(_QWORD *)&v44 = 0LL;
    *((_QWORD *)&v44 + 1) = v26;
    LOWORD(v47) = 0;
    v28 = core::iter::traits::iterator::Iterator::try_fold(&v44);
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v28, 0LL) )
    {
      textwrap::indentation::indent(&v44, *((_QWORD *)&v32 + 1), v33, v53, v52);
    }
    else
    {
      alloc::str::<impl str>::replace(
        (unsigned int)&v44,
        DWORD2(v32),
        v33,
        (unsigned int)asc_66865,
        1,
        (unsigned int)asc_69B32,
        1LL);
      core::ptr::drop_in_place<alloc::string::String>(&v32);
      v33 = v45.m256i_i64[0];
      v32 = v44;
      textwrap::refill::refill(&v44, *((_QWORD *)&v44 + 1), v45.m256i_i64[0], &v57);
      core::ptr::drop_in_place<alloc::string::String>(&v32);
      v33 = v45.m256i_i64[0];
      v32 = v44;
      textwrap::indentation::indent(&v44, *((_QWORD *)&v44 + 1), v45.m256i_i64[0], *((_QWORD *)&v50 + 1), v51);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v33 = v45.m256i_i64[0];
    v32 = v44;
    v74[0] = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v44 + 1), v45.m256i_i64[0]);
    v74[1] = v29;
    v73[0] = v74;
    v73[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v44 = asc_62330;
    *((_QWORD *)&v44 + 1) = 1LL;
    v45.m256i_i64[0] = (__int64)v73;
    *(_OWORD *)&v45.m256i_u64[1] = 1uLL;
    v30 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(a3, &v44);
    core::result::Result<T,E>::unwrap(v30, &off_3EA558);
    core::ptr::drop_in_place<alloc::string::String>(&v32);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v50);
  core::ptr::drop_in_place<alloc::string::String>(v54);
  core::ptr::drop_in_place<alloc::string::String>(v69);
  return core::ptr::drop_in_place<alloc::string::String>(v66);
}