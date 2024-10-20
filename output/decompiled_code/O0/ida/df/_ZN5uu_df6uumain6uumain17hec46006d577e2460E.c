__int64 __fastcall uu_df::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  struct _Unwind_Exception *v9; // rdx
  const char *v10; // rsi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v28; // ecx
  __int64 v29; // [rsp+0h] [rbp-988h]
  struct _Unwind_Exception *v30; // [rsp+0h] [rbp-988h]
  struct _Unwind_Exception *v31; // [rsp+0h] [rbp-988h]
  int v32; // [rsp+8h] [rbp-980h]
  int v33; // [rsp+8h] [rbp-980h]
  int v34; // [rsp+8h] [rbp-980h]
  struct _Unwind_Exception *v35; // [rsp+10h] [rbp-978h]
  char is_empty; // [rsp+17h] [rbp-971h]
  int v37; // [rsp+18h] [rbp-970h]
  char v38; // [rsp+4Fh] [rbp-939h]
  __int64 v39; // [rsp+80h] [rbp-908h]
  _OWORD v40[6]; // [rsp+90h] [rbp-8F8h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-898h]
  __int128 v42; // [rsp+F8h] [rbp-890h] BYREF
  __int128 v43; // [rsp+108h] [rbp-880h]
  __int128 v44; // [rsp+118h] [rbp-870h]
  __int128 v45; // [rsp+128h] [rbp-860h]
  __int128 v46; // [rsp+138h] [rbp-850h]
  __int128 v47; // [rsp+148h] [rbp-840h]
  __int64 v48; // [rsp+158h] [rbp-830h]
  int v49[26]; // [rsp+160h] [rbp-828h] BYREF
  int v50[178]; // [rsp+1C8h] [rbp-7C0h] BYREF
  __int128 v51; // [rsp+490h] [rbp-4F8h]
  __int128 v52; // [rsp+4A0h] [rbp-4E8h]
  __int128 v53; // [rsp+4B0h] [rbp-4D8h]
  __int128 v54; // [rsp+4C0h] [rbp-4C8h]
  __int128 v55; // [rsp+4D0h] [rbp-4B8h]
  __int128 v56; // [rsp+4E0h] [rbp-4A8h]
  __int64 v57; // [rsp+4F0h] [rbp-498h]
  int v58[4]; // [rsp+500h] [rbp-488h] BYREF
  __int128 v59; // [rsp+510h] [rbp-478h]
  __int128 v60; // [rsp+520h] [rbp-468h]
  __int128 v61; // [rsp+530h] [rbp-458h]
  __int128 v62; // [rsp+540h] [rbp-448h]
  __int64 v63; // [rsp+550h] [rbp-438h]
  _BYTE v64[48]; // [rsp+558h] [rbp-430h] BYREF
  __int128 v65; // [rsp+588h] [rbp-400h]
  __int128 v66; // [rsp+598h] [rbp-3F0h]
  __int64 v67; // [rsp+5A8h] [rbp-3E0h]
  _BYTE v68[88]; // [rsp+5B0h] [rbp-3D8h] BYREF
  _BYTE v69[88]; // [rsp+608h] [rbp-380h] BYREF
  _OWORD v70[7]; // [rsp+660h] [rbp-328h] BYREF
  __int64 v71; // [rsp+6D0h] [rbp-2B8h]
  __int128 v72; // [rsp+6E0h] [rbp-2A8h]
  __int64 v73; // [rsp+6F0h] [rbp-298h]
  _OWORD v74[4]; // [rsp+700h] [rbp-288h] BYREF
  __int128 v75; // [rsp+740h] [rbp-248h] BYREF
  __int64 v76; // [rsp+750h] [rbp-238h]
  __int128 v77; // [rsp+758h] [rbp-230h] BYREF
  __int64 v78; // [rsp+768h] [rbp-220h]
  _BYTE v79[24]; // [rsp+770h] [rbp-218h] BYREF
  _BYTE v80[24]; // [rsp+788h] [rbp-200h] BYREF
  __int128 v81; // [rsp+7A0h] [rbp-1E8h]
  __int64 v82; // [rsp+7B0h] [rbp-1D8h]
  _OWORD v83[4]; // [rsp+7C0h] [rbp-1C8h] BYREF
  int v84[6]; // [rsp+808h] [rbp-180h] BYREF
  __int128 v85; // [rsp+820h] [rbp-168h] BYREF
  __int64 v86; // [rsp+830h] [rbp-158h]
  __int128 v87; // [rsp+838h] [rbp-150h] BYREF
  __int64 v88; // [rsp+848h] [rbp-140h]
  _BYTE v89[24]; // [rsp+850h] [rbp-138h] BYREF
  _QWORD v90[3]; // [rsp+868h] [rbp-120h] BYREF
  __int128 v91; // [rsp+880h] [rbp-108h]
  __int64 v92; // [rsp+890h] [rbp-F8h]
  _BYTE v93[48]; // [rsp+8A0h] [rbp-E8h] BYREF
  __int128 v94; // [rsp+8D0h] [rbp-B8h] BYREF
  __int128 v95; // [rsp+8E8h] [rbp-A0h]
  int v96[18]; // [rsp+8F8h] [rbp-90h] BYREF
  __int128 v97; // [rsp+940h] [rbp-48h] BYREF
  __int64 v98; // [rsp+950h] [rbp-38h]
  char v99; // [rsp+967h] [rbp-21h]
  int *v100; // [rsp+978h] [rbp-10h]
  __int64 (__fastcall *v101)(); // [rsp+980h] [rbp-8h]

  v99 = 1;
  uu_df::uu_app(v50);
  v99 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v49, (int)v50, a1, a2, v2, v3, v29, v32, v35, v37);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v42, v49);
  if ( (_QWORD)v42 != 0x8000000000000000LL )
  {
    v57 = v48;
    v56 = v47;
    v55 = v46;
    v54 = v45;
    v53 = v44;
    v52 = v43;
    v51 = v42;
    v41 = v48;
    v40[5] = v47;
    v40[4] = v46;
    v40[3] = v45;
    v40[2] = v44;
    v40[1] = v43;
    v40[0] = v42;
    uu_df::Options::from(v69, v40);
    core::result::Result<T,E>::map_err(v68, v69);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v64, v68);
    if ( *(_QWORD *)v64 == 0x8000000000000000LL )
    {
      v70[1] = *(_OWORD *)&v64[24];
      v70[0] = *(_OWORD *)&v64[8];
      v39 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v70,
              &off_128930);
    }
    else
    {
      v71 = v67;
      v70[6] = v66;
      v70[5] = v65;
      v70[4] = *(_OWORD *)&v64[32];
      v70[3] = *(_OWORD *)&v64[16];
      v70[2] = *(_OWORD *)v64;
      v63 = v67;
      v62 = v66;
      v61 = v65;
      v60 = *(_OWORD *)&v64[32];
      v59 = *(_OWORD *)&v64[16];
      *(_OWORD *)v58 = *(_OWORD *)v64;
      clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
        v74,
        v40,
        aPaths,
        *(&uu_df::OPT_PATHS + 1),
        &off_1288E8);
      if ( *(_QWORD *)&v74[0] )
      {
        v83[3] = v74[3];
        v83[2] = v74[2];
        v83[1] = v74[1];
        v83[0] = v74[0];
        core::iter::traits::iterator::Iterator::collect(v84, v83);
        v8 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v84);
        uu_df::get_named_filesystems(v90, v8, v9, (__int64)v58);
        core::result::Result<T,E>::map_err((unsigned int)v89, (unsigned int)v90);
        v10 = v89;
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v87, v89);
        if ( (_QWORD)v87 == 0x8000000000000000LL )
        {
          LODWORD(v10) = v88;
          v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  *((_QWORD *)&v87 + 1),
                  v88,
                  &off_128918);
          v30 = v16;
          v33 = v15;
          v28 = v15;
          v39 = v15;
        }
        else
        {
          v92 = v88;
          v91 = v87;
          v86 = v88;
          v85 = v87;
          is_empty = alloc::vec::Vec<T,A>::is_empty(&v85);
          if ( (is_empty & 1) == 0 )
          {
            v73 = v86;
            v72 = v85;
            core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(
              (int)v84,
              (int)v89,
              v11,
              v12,
              v13,
              v14,
              v30,
              v33);
            goto LABEL_16;
          }
          v39 = 0LL;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v85);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(
          (int)v84,
          (int)v10,
          (int)v16,
          v28,
          v17,
          v18,
          v30,
          v33);
      }
      else
      {
        uu_df::get_all_filesystems(v80, v58);
        core::result::Result<T,E>::map_err((unsigned int)v79, (unsigned int)v80);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v77, v79);
        if ( (_QWORD)v77 == 0x8000000000000000LL )
        {
          LODWORD(v10) = v78;
          v5 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 *((_QWORD *)&v77 + 1),
                 v78,
                 &off_128900);
          v39 = v5;
        }
        else
        {
          v82 = v78;
          v81 = v77;
          v76 = v78;
          v75 = v77;
          v38 = alloc::vec::Vec<T,A>::is_empty(&v75);
          if ( (v38 & 1) == 0 )
          {
            v72 = v75;
            v73 = v76;
LABEL_16:
            v98 = v73;
            v97 = v72;
            uu_df::table::Table::new(v96, v58, &v97);
            v100 = v96;
            v101 = <uu_df::table::Table as core::fmt::Display>::fmt;
            *(_QWORD *)&v95 = v96;
            *((_QWORD *)&v95 + 1) = <uu_df::table::Table as core::fmt::Display>::fmt;
            v94 = v95;
            core::fmt::Arguments::new_v1(v93, &unk_1288A8, &v94);
            std::io::stdio::_print(v93);
            core::ptr::drop_in_place<uu_df::table::Table>((int)v96, (int)&unk_1288A8, v19, v20, v21, v22, v30, v33);
            v39 = 0LL;
            core::ptr::drop_in_place<uu_df::Options>((int)v58, (int)&unk_1288A8, v23, v24, v25, v26, v31, v34);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
            return v39;
          }
          v10 = aNoFileSystemsP;
          v39 = uucore::mods::error::USimpleError::new(1LL, aNoFileSystemsP, 25LL);
          core::ptr::drop_in_place<alloc::vec::Vec<uu_df::filesystem::Filesystem>>(&v75);
        }
      }
      core::ptr::drop_in_place<uu_df::Options>((int)v58, (int)v10, v4, v5, v6, v7, v30, v33);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
    return v39;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v42 + 1),
           &off_128948);
}
