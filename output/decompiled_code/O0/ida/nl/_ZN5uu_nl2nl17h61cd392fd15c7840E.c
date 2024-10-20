__int64 __fastcall uu_nl::nl(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // [rsp+0h] [rbp-3A8h]
  int v23; // [rsp+8h] [rbp-3A0h]
  int v24; // [rsp+10h] [rbp-398h]
  int v25; // [rsp+18h] [rbp-390h]
  __int64 v26; // [rsp+20h] [rbp-388h]
  __int64 v27; // [rsp+28h] [rbp-380h]
  int v28; // [rsp+30h] [rbp-378h]
  unsigned __int64 v29; // [rsp+38h] [rbp-370h]
  unsigned __int64 v30; // [rsp+40h] [rbp-368h]
  __int64 v31; // [rsp+48h] [rbp-360h]
  int v32; // [rsp+50h] [rbp-358h]
  int v33; // [rsp+58h] [rbp-350h]
  int v34; // [rsp+60h] [rbp-348h]
  char is_empty; // [rsp+67h] [rbp-341h]
  __int64 v36; // [rsp+68h] [rbp-340h]
  int v37; // [rsp+70h] [rbp-338h]
  char v38; // [rsp+78h] [rbp-330h]
  unsigned __int8 v39; // [rsp+7Fh] [rbp-329h]
  __int64 v40; // [rsp+80h] [rbp-328h]
  __int64 v41; // [rsp+88h] [rbp-320h]
  int v42; // [rsp+90h] [rbp-318h]
  int v43; // [rsp+98h] [rbp-310h]
  int v44; // [rsp+A0h] [rbp-308h]
  int v45; // [rsp+A8h] [rbp-300h]
  __int64 v46; // [rsp+B0h] [rbp-2F8h]
  int v47; // [rsp+B8h] [rbp-2F0h]
  _QWORD *v48; // [rsp+C0h] [rbp-2E8h]
  int v49[2]; // [rsp+C8h] [rbp-2E0h]
  int v50; // [rsp+D0h] [rbp-2D8h]
  __int64 v51; // [rsp+D0h] [rbp-2D8h]
  int v52; // [rsp+D8h] [rbp-2D0h]
  __int64 *v53; // [rsp+E0h] [rbp-2C8h]
  int v54[2]; // [rsp+E8h] [rbp-2C0h] BYREF
  int v55[2]; // [rsp+F0h] [rbp-2B8h] BYREF
  struct _Unwind_Exception *v56; // [rsp+F8h] [rbp-2B0h]
  __int64 v57; // [rsp+100h] [rbp-2A8h]
  __int64 v58; // [rsp+108h] [rbp-2A0h] BYREF
  struct _Unwind_Exception *v59; // [rsp+110h] [rbp-298h]
  __int64 v60; // [rsp+118h] [rbp-290h]
  __int128 v61; // [rsp+120h] [rbp-288h] BYREF
  __int64 v62; // [rsp+130h] [rbp-278h]
  __int128 v63; // [rsp+140h] [rbp-268h] BYREF
  __int64 v64; // [rsp+150h] [rbp-258h]
  _BYTE v65[24]; // [rsp+158h] [rbp-250h] BYREF
  __int128 v66; // [rsp+170h] [rbp-238h]
  __int64 v67; // [rsp+180h] [rbp-228h]
  __int64 v68; // [rsp+188h] [rbp-220h]
  unsigned __int8 v69; // [rsp+197h] [rbp-211h]
  __int64 v70; // [rsp+198h] [rbp-210h]
  __int64 v71; // [rsp+1A0h] [rbp-208h]
  _BYTE v72[55]; // [rsp+1A8h] [rbp-200h] BYREF
  char v73; // [rsp+1DFh] [rbp-1C9h]
  _BYTE v74[48]; // [rsp+1E0h] [rbp-1C8h] BYREF
  _OWORD v75[3]; // [rsp+210h] [rbp-198h] BYREF
  __int128 v76; // [rsp+240h] [rbp-168h]
  _BYTE v77[24]; // [rsp+250h] [rbp-158h] BYREF
  __int128 v78; // [rsp+268h] [rbp-140h]
  __int128 v79; // [rsp+278h] [rbp-130h]
  __int64 v80; // [rsp+288h] [rbp-120h]
  __int64 v81; // [rsp+290h] [rbp-118h]
  __int64 v82; // [rsp+298h] [rbp-110h]
  __int64 v83; // [rsp+2A0h] [rbp-108h]
  __int64 v84; // [rsp+2A8h] [rbp-100h]
  __int64 v85; // [rsp+2B0h] [rbp-F8h]
  _BYTE v86[24]; // [rsp+2B8h] [rbp-F0h] BYREF
  _BYTE v87[48]; // [rsp+2D0h] [rbp-D8h] BYREF
  _OWORD v88[2]; // [rsp+300h] [rbp-A8h] BYREF
  __int128 v89; // [rsp+328h] [rbp-80h]
  __int128 v90; // [rsp+338h] [rbp-70h]
  __int128 *v91; // [rsp+358h] [rbp-50h]
  __int64 (__fastcall *v92)(); // [rsp+360h] [rbp-48h]
  __int64 v93; // [rsp+368h] [rbp-40h]
  __int64 (__fastcall *v94)(); // [rsp+370h] [rbp-38h]
  _BYTE *v95; // [rsp+378h] [rbp-30h]
  __int64 (__fastcall *v96)(); // [rsp+380h] [rbp-28h]
  __int128 *v97; // [rsp+388h] [rbp-20h]
  __int64 (__fastcall *v98)(); // [rsp+390h] [rbp-18h]
  _BYTE *v99; // [rsp+398h] [rbp-10h]
  __int64 (__fastcall *v100)(); // [rsp+3A0h] [rbp-8h]

  LODWORD(v48) = a2;
  v49[0] = a3;
  LODWORD(v53) = a3 + 16;
  v3 = std::io::BufRead::lines();
  *(_QWORD *)v54 = <I as core::iter::traits::collect::IntoIterator>::into_iter(v3);
  while ( 1 )
  {
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(
      (int)v55,
      (int)v54,
      v4,
      v5,
      v6,
      v7,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v36,
      v37,
      v38,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      (int)v48,
      v49[0],
      v50,
      v52,
      (int)v53,
      v54[0],
      v55[0],
      (int)v56,
      v57,
      v58,
      v59,
      v60);
    if ( *(_QWORD *)v55 == 0x8000000000000001LL )
      return 0LL;
    v58 = *(_QWORD *)v55;
    v59 = v56;
    v60 = v57;
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v65,
      &v58);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v63, v65);
    if ( (_QWORD)v63 == 0x8000000000000000LL )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               *((_QWORD *)&v63 + 1),
               v64,
               &off_296E68);
    v67 = v64;
    v66 = v63;
    v62 = v64;
    v61 = v63;
    if ( (alloc::string::String::is_empty(&v61) & 1) != 0 )
    {
      v9 = v48[2];
      v46 = v9 + 1;
      if ( v9 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(&off_296DA0);
      v48[2] = v46;
    }
    else
    {
      v48[2] = 0LL;
    }
    v10 = <alloc::string::String as core::ops::deref::Deref>::deref(&v61);
    v44 = v11;
    v45 = v10;
    v40 = v10;
    v41 = v11;
    v12 = <alloc::string::String as core::ops::deref::Deref>::deref(*(_QWORD *)v49 + 48LL);
    v42 = v13;
    v43 = v12;
    v39 = uu_nl::SectionDelimiter::parse(v40, v41, v12, v13);
    v69 = v39;
    if ( v39 == 3 )
    {
      v68 = 0LL;
    }
    else
    {
      v37 = v69;
      if ( v69 )
        v68 = v69 == 1LL ? *(_QWORD *)v49 + 16LL : *(_QWORD *)v49 + 32LL;
      else
        v68 = *(_QWORD *)v49;
    }
    if ( v68 == 0 )
      break;
    LODWORD(v53) = v68;
    if ( (*(_BYTE *)(*(_QWORD *)v49 + 128LL) & 1) != 0 )
    {
      v71 = *(_QWORD *)(*(_QWORD *)v49 + 96LL);
      v70 = 1LL;
      v14 = v71;
      *v48 = 1LL;
      v48[1] = v14;
    }
    core::fmt::Arguments::new_const(v72, &off_296DB8);
    std::io::stdio::_print(v72);
LABEL_27:
    core::ptr::drop_in_place<alloc::string::String>(&v61);
  }
  v36 = *v53;
  switch ( *v53 )
  {
    case 0LL:
      is_empty = alloc::string::String::is_empty(&v61);
      if ( (is_empty & 1) != 0 )
      {
        v29 = v48[2];
        v30 = *(_QWORD *)(*(_QWORD *)v49 + 112LL);
        if ( !v30 )
          core::panicking::panic_const::panic_const_rem_by_zero(&off_296DC8);
        v73 = v29 % v30 == 0;
      }
      else
      {
        v73 = 1;
      }
      break;
    case 1LL:
      v73 = (alloc::string::String::is_empty(&v61) & 1) == 0;
      break;
    case 2LL:
      v73 = 0;
      break;
    case 3LL:
      v31 = v53[1];
      v15 = <alloc::string::String as core::ops::deref::Deref>::deref(&v61);
      v32 = v16;
      v33 = v15;
      v73 = regex::regex::string::Regex::is_match(v31, v15, v16) & 1;
      break;
  }
  if ( (v73 & 1) == 0 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)v49 + 120LL);
    v27 = v17 + 1;
    if ( v17 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_296DE0);
    alloc::str::<impl str>::repeat(v86, asc_518A8, 1LL, v27);
    v99 = v86;
    v100 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v89 = v86;
    *((_QWORD *)&v89 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v97 = &v61;
    v98 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v90 = &v61;
    *((_QWORD *)&v90 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v88[0] = v89;
    v88[1] = v90;
    core::fmt::Arguments::new_v1(v87, &unk_296DF8, v88);
    std::io::stdio::_print(v87);
    core::ptr::drop_in_place<alloc::string::String>(v86);
    goto LABEL_27;
  }
  if ( *v48 == 1LL )
  {
    v26 = v48[1];
    uu_nl::NumberFormat::format(v77, *(_QWORD *)v49 + 129LL, v26, *(_QWORD *)(*(_QWORD *)v49 + 120LL));
    v95 = v77;
    v96 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v76 = v77;
    *((_QWORD *)&v76 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v93 = *(_QWORD *)v49 + 72LL;
    v94 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v78 = *(_QWORD *)v49 + 72LL;
    *((_QWORD *)&v78 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v91 = &v61;
    v92 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v79 = &v61;
    *((_QWORD *)&v79 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v75[0] = v76;
    v75[1] = v78;
    v75[2] = v79;
    core::fmt::Arguments::new_v1(v74, &unk_296E28, v75);
    std::io::stdio::_print(v74);
    core::ptr::drop_in_place<alloc::string::String>(v77);
    v18 = core::num::<impl i64>::checked_add(v26, *(_QWORD *)(*(_QWORD *)v49 + 104LL));
    v22 = v19;
    v23 = v18;
    v80 = v18;
    v81 = v19;
    if ( v18 )
    {
      v20 = v48;
      v83 = v81;
      v82 = 1LL;
      v21 = v81;
      *v48 = 1LL;
    }
    else
    {
      v20 = v48;
      v84 = 0LL;
      v21 = v85;
      *v48 = 0LL;
    }
    v20[1] = v21;
    goto LABEL_27;
  }
  v51 = uucore::mods::error::USimpleError::new(1LL, aLineNumberOver, 20LL);
  core::ptr::drop_in_place<alloc::string::String>(&v61);
  return v51;
}
