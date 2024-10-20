__int64 __fastcall uu_nl::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  void *v7; // rsi
  __int64 v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // edx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // [rsp+0h] [rbp-A08h]
  struct _Unwind_Exception *v36; // [rsp+0h] [rbp-A08h]
  int v37; // [rsp+8h] [rbp-A00h]
  int v38; // [rsp+8h] [rbp-A00h]
  struct _Unwind_Exception *v39; // [rsp+10h] [rbp-9F8h]
  int v40; // [rsp+10h] [rbp-9F8h]
  int v41; // [rsp+18h] [rbp-9F0h]
  int v42; // [rsp+18h] [rbp-9F0h]
  int v43; // [rsp+20h] [rbp-9E8h]
  int v44; // [rsp+28h] [rbp-9E0h]
  int v45; // [rsp+30h] [rbp-9D8h]
  int v46; // [rsp+38h] [rbp-9D0h]
  int v47; // [rsp+40h] [rbp-9C8h]
  int v48; // [rsp+48h] [rbp-9C0h]
  struct _Unwind_Exception *v49; // [rsp+50h] [rbp-9B8h]
  int v50; // [rsp+58h] [rbp-9B0h]
  int v51[2]; // [rsp+98h] [rbp-970h]
  int v52[2]; // [rsp+A0h] [rbp-968h]
  char is_dir; // [rsp+AFh] [rbp-959h]
  int v54; // [rsp+B0h] [rbp-958h]
  char v55; // [rsp+CFh] [rbp-939h]
  _OWORD *v56; // [rsp+E8h] [rbp-920h]
  char is_empty; // [rsp+11Fh] [rbp-8E9h]
  __int64 v58; // [rsp+140h] [rbp-8C8h]
  int v59[4]; // [rsp+150h] [rbp-8B8h] BYREF
  int v60[4]; // [rsp+160h] [rbp-8A8h]
  int v61[4]; // [rsp+170h] [rbp-898h]
  int v62[4]; // [rsp+180h] [rbp-888h]
  int v63[4]; // [rsp+190h] [rbp-878h]
  int v64[4]; // [rsp+1A0h] [rbp-868h]
  int v65[2]; // [rsp+1B0h] [rbp-858h]
  __int128 v66; // [rsp+1B8h] [rbp-850h] BYREF
  __int128 v67; // [rsp+1C8h] [rbp-840h]
  __int128 v68; // [rsp+1D8h] [rbp-830h]
  __int128 v69; // [rsp+1E8h] [rbp-820h]
  __int128 v70; // [rsp+1F8h] [rbp-810h]
  __int128 v71; // [rsp+208h] [rbp-800h]
  __int64 v72; // [rsp+218h] [rbp-7F0h]
  int v73[26]; // [rsp+220h] [rbp-7E8h] BYREF
  int dest[178]; // [rsp+288h] [rbp-780h] BYREF
  int v75[4]; // [rsp+550h] [rbp-4B8h]
  int v76[4]; // [rsp+560h] [rbp-4A8h]
  int v77[4]; // [rsp+570h] [rbp-498h]
  int v78[4]; // [rsp+580h] [rbp-488h]
  int v79[4]; // [rsp+590h] [rbp-478h]
  int v80[4]; // [rsp+5A0h] [rbp-468h]
  int v81[2]; // [rsp+5B0h] [rbp-458h]
  int v82[24]; // [rsp+5B8h] [rbp-450h] BYREF
  __int64 v83; // [rsp+618h] [rbp-3F0h]
  _BYTE v84[24]; // [rsp+640h] [rbp-3C8h] BYREF
  _QWORD v85[6]; // [rsp+658h] [rbp-3B0h] BYREF
  __int64 v86; // [rsp+688h] [rbp-380h] BYREF
  __int64 v87; // [rsp+690h] [rbp-378h]
  __int64 v88; // [rsp+698h] [rbp-370h]
  _BYTE v89[48]; // [rsp+6A0h] [rbp-368h] BYREF
  __int128 v90; // [rsp+6D0h] [rbp-338h] BYREF
  __int128 v91; // [rsp+6E0h] [rbp-328h]
  _BYTE v92[24]; // [rsp+6F0h] [rbp-318h] BYREF
  _BYTE v93[24]; // [rsp+708h] [rbp-300h] BYREF
  _OWORD v94[4]; // [rsp+720h] [rbp-2E8h] BYREF
  _OWORD v95[4]; // [rsp+760h] [rbp-2A8h] BYREF
  _BYTE v96[64]; // [rsp+7A8h] [rbp-260h] BYREF
  int v97[2]; // [rsp+7E8h] [rbp-220h]
  __int128 v98; // [rsp+7F0h] [rbp-218h] BYREF
  __int64 v99; // [rsp+800h] [rbp-208h]
  int v100[6]; // [rsp+808h] [rbp-200h] BYREF
  _QWORD v101[2]; // [rsp+820h] [rbp-1E8h] BYREF
  __int64 v102; // [rsp+830h] [rbp-1D8h]
  __int64 v103; // [rsp+838h] [rbp-1D0h] BYREF
  int v104[12]; // [rsp+840h] [rbp-1C8h] BYREF
  __int64 v105; // [rsp+870h] [rbp-198h]
  __int64 v106; // [rsp+878h] [rbp-190h]
  _BYTE v107[48]; // [rsp+880h] [rbp-188h] BYREF
  __int128 v108; // [rsp+8B0h] [rbp-158h] BYREF
  __int128 v109; // [rsp+8C0h] [rbp-148h]
  _QWORD v110[2]; // [rsp+8D0h] [rbp-138h] BYREF
  _BYTE v111[48]; // [rsp+8E0h] [rbp-128h] BYREF
  __int128 v112; // [rsp+910h] [rbp-F8h] BYREF
  __int128 v113; // [rsp+928h] [rbp-E0h]
  _QWORD v114[2]; // [rsp+938h] [rbp-D0h] BYREF
  int v115; // [rsp+94Ch] [rbp-BCh]
  __int64 v116; // [rsp+950h] [rbp-B8h] BYREF
  __int64 v117; // [rsp+958h] [rbp-B0h]
  _BYTE v118[16]; // [rsp+960h] [rbp-A8h] BYREF
  int v119[4]; // [rsp+970h] [rbp-98h] BYREF
  int v120[12]; // [rsp+980h] [rbp-88h] BYREF
  __int64 v121; // [rsp+9B0h] [rbp-58h]
  __int64 v122; // [rsp+9B8h] [rbp-50h]
  char v123; // [rsp+9C6h] [rbp-42h]
  char v124; // [rsp+9C7h] [rbp-41h]
  _QWORD *v125; // [rsp+9D8h] [rbp-30h]
  __int64 (__fastcall *v126)(); // [rsp+9E0h] [rbp-28h]
  _QWORD *v127; // [rsp+9E8h] [rbp-20h]
  __int64 (__fastcall *v128)(); // [rsp+9F0h] [rbp-18h]
  _BYTE *v129; // [rsp+9F8h] [rbp-10h]
  __int64 (__fastcall *v130)(); // [rsp+A00h] [rbp-8h]

  v123 = 0;
  v124 = 1;
  uu_nl::uu_app(dest);
  v124 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v73, (int)dest, a1, a2, v2, v3, v35, v37, v39, v41);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v66, v73);
  if ( (_QWORD)v66 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v66 + 1),
             &off_296F98);
  *(_QWORD *)v81 = v72;
  *(_OWORD *)v80 = v71;
  *(_OWORD *)v79 = v70;
  *(_OWORD *)v78 = v69;
  *(_OWORD *)v77 = v68;
  *(_OWORD *)v76 = v67;
  *(_OWORD *)v75 = v66;
  *(_QWORD *)v65 = v72;
  *(_OWORD *)v64 = v71;
  *(_OWORD *)v63 = v70;
  *(_OWORD *)v62 = v69;
  *(_OWORD *)v61 = v68;
  *(_OWORD *)v60 = v67;
  *(_OWORD *)v59 = v66;
  <uu_nl::Settings as core::default::Default>::default(v82);
  uu_nl::helper::parse_options(v84, v82, v59);
  is_empty = alloc::vec::Vec<T,A>::is_empty(v84);
  if ( (is_empty & 1) == 0 )
  {
    v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v84);
    alloc::slice::<impl [T]>::join(v92, v4, v5, asc_518A7, 1LL);
    v129 = v92;
    v130 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v91 = v92;
    *((_QWORD *)&v91 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v90 = v91;
    core::fmt::Arguments::new_v1(v89, &off_296EE0, &v90);
    alloc::fmt::format(&v86, v89);
    core::ptr::drop_in_place<alloc::string::String>(v92);
    v85[3] = v86;
    v85[4] = v87;
    v85[5] = v88;
    v85[0] = v86;
    v85[1] = v87;
    v85[2] = v88;
    v6 = v85;
    v58 = uucore::mods::error::USimpleError::new(1LL, v85);
    goto LABEL_7;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v94, v59, aFile, 4LL, &off_296EF0);
  if ( *(_QWORD *)&v94[0] )
  {
    v95[3] = v94[3];
    v95[2] = v94[2];
    v95[1] = v94[1];
    v95[0] = v94[0];
    core::iter::traits::iterator::Iterator::cloned(v96, v95);
    core::iter::traits::iterator::Iterator::collect(v93, v96);
  }
  else
  {
    *(_QWORD *)v97 = alloc::alloc::exchange_malloc(24LL, 8LL);
    alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v98, asc_54AD4, 1LL);
    v56 = *(_OWORD **)v97;
    if ( (v97[0] & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, *(_QWORD *)v97, &off_296F08);
    *(_QWORD *)(*(_QWORD *)v97 + 16LL) = v99;
    *v56 = v98;
    alloc::slice::<impl [T]>::into_vec(v93, *(_QWORD *)v97, 1LL);
  }
  LODWORD(v7) = v83;
  uu_nl::Stats::new(v100, v83);
  v101[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v93);
  v101[1] = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      v102 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v101);
      if ( !v102 )
      {
        v58 = 0LL;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v93);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v84);
        core::ptr::drop_in_place<uu_nl::Settings>((int)v82, (int)v7, v9, v10, v11, v12, v36, v38);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
        return v58;
      }
      v103 = v102;
      v55 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v103, &off_296F20);
      if ( (v55 & 1) != 0 )
        break;
      *(_QWORD *)v51 = std::path::Path::new(v103);
      *(_QWORD *)v52 = v14;
      is_dir = std::path::Path::is_dir();
      if ( (is_dir & 1) != 0 )
      {
        v110[0] = uucore::util_name();
        v110[1] = v22;
        v125 = v110;
        v126 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v109 = v110;
        *((_QWORD *)&v109 + 1) = <&T as core::fmt::Display>::fmt;
        v108 = v109;
        core::fmt::Arguments::new_v1(v107, &unk_296E80, &v108);
        std::io::stdio::_eprint(v107);
        v23 = std::path::Path::display(*(_QWORD *)v51, *(_QWORD *)v52);
        v46 = v24;
        v47 = v23;
        v114[0] = v23;
        v114[1] = v24;
        v127 = v114;
        v128 = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v113 = v114;
        *((_QWORD *)&v113 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        v112 = v113;
        v7 = &unk_296F60;
        core::fmt::Arguments::new_v1(v111, &unk_296F60, &v112);
        std::io::stdio::_eprint(v111);
        uucore::mods::error::set_exit_code(1LL);
      }
      else
      {
        std::fs::File::open(
          (int)v119,
          v51[0],
          v52[0],
          v15,
          v16,
          v17,
          (int)v36,
          v38,
          v40,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v118,
          v119,
          v103);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v116, v118);
        if ( v116 )
        {
          LODWORD(v6) = v117;
          v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v116,
                  v117,
                  &off_296F48);
LABEL_31:
          v123 = 0;
          goto LABEL_32;
        }
        v115 = v117;
        v123 = 0;
        std::io::buffered::bufreader::BufReader<R>::new(v120, (unsigned int)v117);
        v18 = uu_nl::nl((__int64)v120, (int)v100, (int)v82);
        LODWORD(v7) = v19;
        v20 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v18, v19);
        v50 = v21;
        v121 = v20;
        v122 = v21;
        if ( v20 )
        {
          LODWORD(v6) = v122;
          v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v121,
                  v122,
                  &off_296F30);
          core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v120);
          goto LABEL_31;
        }
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v120);
        v123 = 0;
      }
    }
    v54 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::new((int)v104, v54);
    v25 = uu_nl::nl((__int64)v104, (int)v100, (int)v82);
    v44 = v26;
    v45 = v25;
    LODWORD(v7) = v26;
    v27 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v25, v26);
    v42 = v28;
    v43 = v27;
    v105 = v27;
    v106 = v28;
    if ( v27 )
      break;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v104);
  }
  LODWORD(v6) = v106;
  v29 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          v105,
          v106,
          &off_296F80);
  v38 = v30;
  v58 = v29;
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v104);
LABEL_32:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v93);
LABEL_7:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v84);
  core::ptr::drop_in_place<uu_nl::Settings>((int)v82, (int)v6, v31, v32, v33, v34, v36, v38);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
  return v58;
}
