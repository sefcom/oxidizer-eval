__int64 __fastcall uu_csplit::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // dl
  __int64 v13; // [rsp+0h] [rbp-C08h]
  int v14; // [rsp+0h] [rbp-C08h]
  int v15; // [rsp+8h] [rbp-C00h]
  int v16; // [rsp+8h] [rbp-C00h]
  struct _Unwind_Exception *v17; // [rsp+10h] [rbp-BF8h]
  int v18; // [rsp+10h] [rbp-BF8h]
  int v19; // [rsp+18h] [rbp-BF0h]
  int v20; // [rsp+18h] [rbp-BF0h]
  __int64 v21; // [rsp+18h] [rbp-BF0h]
  int v22; // [rsp+20h] [rbp-BE8h]
  __int64 v23; // [rsp+20h] [rbp-BE8h]
  int v24; // [rsp+28h] [rbp-BE0h]
  int v25; // [rsp+30h] [rbp-BD8h]
  int v26; // [rsp+38h] [rbp-BD0h]
  int v27; // [rsp+40h] [rbp-BC8h]
  int v28; // [rsp+48h] [rbp-BC0h]
  struct _Unwind_Exception *v29; // [rsp+50h] [rbp-BB8h]
  int v30; // [rsp+58h] [rbp-BB0h]
  __int64 v31; // [rsp+58h] [rbp-BB0h]
  __int64 v32; // [rsp+60h] [rbp-BA8h]
  char is_file; // [rsp+BFh] [rbp-B49h]
  int v34[2]; // [rsp+F8h] [rbp-B10h]
  __int64 v35; // [rsp+110h] [rbp-AF8h]
  int v36[4]; // [rsp+120h] [rbp-AE8h] BYREF
  int v37[4]; // [rsp+130h] [rbp-AD8h]
  int v38[4]; // [rsp+140h] [rbp-AC8h]
  int v39[4]; // [rsp+150h] [rbp-AB8h]
  int v40[4]; // [rsp+160h] [rbp-AA8h]
  int v41[4]; // [rsp+170h] [rbp-A98h]
  int v42[2]; // [rsp+180h] [rbp-A88h]
  __int128 v43; // [rsp+188h] [rbp-A80h] BYREF
  __int128 v44; // [rsp+198h] [rbp-A70h]
  __int128 v45; // [rsp+1A8h] [rbp-A60h]
  __int128 v46; // [rsp+1B8h] [rbp-A50h]
  __int128 v47; // [rsp+1C8h] [rbp-A40h]
  __int128 v48; // [rsp+1D8h] [rbp-A30h]
  __int64 v49; // [rsp+1E8h] [rbp-A20h]
  int v50[26]; // [rsp+1F0h] [rbp-A18h] BYREF
  int v51[178]; // [rsp+258h] [rbp-9B0h] BYREF
  int v52[4]; // [rsp+520h] [rbp-6E8h]
  int v53[4]; // [rsp+530h] [rbp-6D8h]
  int v54[4]; // [rsp+540h] [rbp-6C8h]
  int v55[4]; // [rsp+550h] [rbp-6B8h]
  int v56[4]; // [rsp+560h] [rbp-6A8h]
  int v57[4]; // [rsp+570h] [rbp-698h]
  int v58[2]; // [rsp+580h] [rbp-688h]
  int v59[2]; // [rsp+590h] [rbp-678h] BYREF
  _BYTE v60[24]; // [rsp+598h] [rbp-670h] BYREF
  _BYTE v61[64]; // [rsp+5B0h] [rbp-658h] BYREF
  _BYTE dest[64]; // [rsp+5F0h] [rbp-618h] BYREF
  _QWORD src[8]; // [rsp+630h] [rbp-5D8h] BYREF
  int v64[26]; // [rsp+670h] [rbp-598h] BYREF
  __int64 v65; // [rsp+6D8h] [rbp-530h] BYREF
  _OWORD v66[2]; // [rsp+6E0h] [rbp-528h] BYREF
  __int64 v67; // [rsp+700h] [rbp-508h]
  int v68[10]; // [rsp+708h] [rbp-500h] BYREF
  _OWORD v69[2]; // [rsp+730h] [rbp-4D8h] BYREF
  __int64 v70; // [rsp+750h] [rbp-4B8h]
  unsigned int v71; // [rsp+75Ch] [rbp-4ACh] BYREF
  __int64 v72; // [rsp+760h] [rbp-4A8h] BYREF
  __int64 v73; // [rsp+768h] [rbp-4A0h]
  _BYTE v74[16]; // [rsp+770h] [rbp-498h] BYREF
  int v75[4]; // [rsp+780h] [rbp-488h] BYREF
  _BYTE v76[176]; // [rsp+790h] [rbp-478h] BYREF
  _QWORD v77[22]; // [rsp+840h] [rbp-3C8h] BYREF
  _BYTE v78[176]; // [rsp+8F0h] [rbp-318h] BYREF
  _BYTE v79[176]; // [rsp+9A0h] [rbp-268h] BYREF
  _BYTE v80[176]; // [rsp+A50h] [rbp-1B8h] BYREF
  __int64 v81; // [rsp+B00h] [rbp-108h] BYREF
  __int128 v82; // [rsp+B08h] [rbp-100h]
  __int64 v83; // [rsp+B18h] [rbp-F0h]
  __int128 v84; // [rsp+B28h] [rbp-E0h] BYREF
  __int64 v85; // [rsp+B38h] [rbp-D0h]
  _OWORD v86[2]; // [rsp+B40h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+B60h] [rbp-A8h]
  _BYTE v88[40]; // [rsp+B68h] [rbp-A0h] BYREF
  _BYTE v89[48]; // [rsp+B90h] [rbp-78h] BYREF
  _OWORD v90[2]; // [rsp+BC0h] [rbp-48h] BYREF
  __int64 v91; // [rsp+BE0h] [rbp-28h]
  char v92; // [rsp+BEEh] [rbp-1Ah]
  char v93; // [rsp+BEFh] [rbp-19h]
  int v94[2]; // [rsp+C00h] [rbp-8h]

  v92 = 0;
  v93 = 1;
  uu_csplit::uu_app(v51);
  v93 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v50, (int)v51, a1, a2, v2, v3, v13, v15, v17, v19);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v43, v50);
  if ( (_QWORD)v43 != 0x8000000000000000LL )
  {
    *(_QWORD *)v58 = v49;
    *(_OWORD *)v57 = v48;
    *(_OWORD *)v56 = v47;
    *(_OWORD *)v55 = v46;
    *(_OWORD *)v54 = v45;
    *(_OWORD *)v53 = v44;
    *(_OWORD *)v52 = v43;
    *(_QWORD *)v42 = v49;
    *(_OWORD *)v41 = v48;
    *(_OWORD *)v40 = v47;
    *(_OWORD *)v39 = v46;
    *(_OWORD *)v38 = v45;
    *(_OWORD *)v37 = v44;
    *(_OWORD *)v36 = v43;
    *(_QWORD *)v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v36, aFile, 4LL, &off_2A22D0);
    *(_QWORD *)v94 = *(_QWORD *)v34;
    if ( !*(_QWORD *)v34 )
      core::option::unwrap_failed(&off_2A22E8);
    *(_QWORD *)v59 = *(_QWORD *)v94;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v36, aPattern, 7LL, &off_2A2300);
    if ( !src[0] )
      core::option::unwrap_failed(&off_2A2318);
    memcpy(dest, src, sizeof(dest));
    core::iter::traits::iterator::Iterator::map(v61, dest);
    core::iter::traits::iterator::Iterator::collect(v60, v61);
    uu_csplit::CsplitOptions::new(v64, v36);
    if ( (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v59, &off_2A2330) & 1) != 0 )
    {
      v65 = std::io::stdio::stdin();
      v21 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v60);
      v23 = v9;
      v10 = std::io::stdio::Stdin::lock(&v65);
      uu_csplit::csplit((__int64)v68, (__int64)v64, v21, v23, v10, v11 & 1);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v66, v68);
      if ( *(_QWORD *)&v66[0] == 12LL )
      {
        v35 = 0LL;
      }
      else
      {
        v70 = v67;
        v69[1] = v66[1];
        v69[0] = v66[0];
        v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v69,
                &off_2A23A0);
      }
      goto LABEL_25;
    }
    std::fs::File::open((int)v75, v59[0], v4, v5, v6, v7, v14, v16, v18, v20, v22, v24, v25, v26, v27, v28, v29, v30);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v74,
      v75,
      *(_QWORD *)v59);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v72, v74);
    if ( v72 )
    {
      v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v72,
              v73,
              &off_2A2388);
    }
    else
    {
      v92 = 1;
      v71 = v73;
      std::fs::File::metadata(v79, &v71);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        v78,
        v79,
        *(_QWORD *)v59);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v77, v78);
      if ( v77[0] == 2LL )
      {
        v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v77[1],
                v77[2],
                &off_2A2370);
      }
      else
      {
        memcpy(v80, v77, sizeof(v80));
        memcpy(v76, v80, sizeof(v76));
        is_file = std::fs::Metadata::is_file(v76);
        if ( (is_file & 1) != 0 )
        {
          v31 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v60);
          v32 = v8;
          v92 = 0;
          std::io::buffered::bufreader::BufReader<R>::new(v89, v71);
          uu_csplit::csplit((__int64)v88, (__int64)v64, v31, v32, (__int64)v89);
          <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v86, v88);
          if ( *(_QWORD *)&v86[0] == 12LL )
          {
            v35 = 0LL;
          }
          else
          {
            v91 = v87;
            v90[1] = v86[1];
            v90[0] = v86[0];
            v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v90,
                    &off_2A2358);
          }
          v92 = 0;
          goto LABEL_25;
        }
        <alloc::string::String as alloc::string::ToString>::to_string(&v84, *(_QWORD *)v59);
        v83 = v85;
        v82 = v84;
        v81 = 11LL;
        v35 = <T as core::convert::Into<U>>::into(&v81, &off_2A2340);
      }
      core::ptr::drop_in_place<std::fs::File>(&v71);
    }
    v92 = 0;
LABEL_25:
    core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v64);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v60);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
    return v35;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v43 + 1),
           &off_2A23B8);
}
