__int64 __fastcall uu_truncate::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v12; // [rsp+0h] [rbp-918h]
  __int64 v13; // [rsp+0h] [rbp-918h]
  int v14; // [rsp+0h] [rbp-918h]
  __int64 v15; // [rsp+8h] [rbp-910h]
  int v16; // [rsp+8h] [rbp-910h]
  char v17; // [rsp+8h] [rbp-910h]
  int v18; // [rsp+10h] [rbp-908h]
  struct _Unwind_Exception *v19; // [rsp+10h] [rbp-908h]
  int v20; // [rsp+10h] [rbp-908h]
  int v21; // [rsp+18h] [rbp-900h]
  int v22; // [rsp+18h] [rbp-900h]
  int v23; // [rsp+18h] [rbp-900h]
  __int64 v24; // [rsp+20h] [rbp-8F8h]
  int v25; // [rsp+20h] [rbp-8F8h]
  __int64 v26; // [rsp+20h] [rbp-8F8h]
  __int64 v27; // [rsp+28h] [rbp-8F0h]
  int v28; // [rsp+28h] [rbp-8F0h]
  __int64 one; // [rsp+28h] [rbp-8F0h]
  __int64 v30; // [rsp+30h] [rbp-8E8h]
  int v31; // [rsp+30h] [rbp-8E8h]
  char v32; // [rsp+37h] [rbp-8E1h]
  int v33; // [rsp+38h] [rbp-8E0h]
  int v34; // [rsp+38h] [rbp-8E0h]
  int v35; // [rsp+40h] [rbp-8D8h]
  struct _Unwind_Exception *v36; // [rsp+40h] [rbp-8D8h]
  int v37; // [rsp+48h] [rbp-8D0h]
  int v38; // [rsp+48h] [rbp-8D0h]
  char flag; // [rsp+4Eh] [rbp-8CAh]
  char is_empty; // [rsp+4Fh] [rbp-8C9h]
  struct _Unwind_Exception *v41; // [rsp+50h] [rbp-8C8h]
  int v42; // [rsp+58h] [rbp-8C0h]
  __int64 v43; // [rsp+70h] [rbp-8A8h]
  _OWORD v44[6]; // [rsp+80h] [rbp-898h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-838h]
  __int128 v46; // [rsp+E8h] [rbp-830h] BYREF
  __int128 v47; // [rsp+F8h] [rbp-820h]
  __int128 v48; // [rsp+108h] [rbp-810h]
  __int128 v49; // [rsp+118h] [rbp-800h]
  __int128 v50; // [rsp+128h] [rbp-7F0h]
  __int128 v51; // [rsp+138h] [rbp-7E0h]
  __int64 v52; // [rsp+148h] [rbp-7D0h]
  char v53[104]; // [rsp+150h] [rbp-7C8h] BYREF
  int v54[26]; // [rsp+1B8h] [rbp-760h] BYREF
  int v55[178]; // [rsp+220h] [rbp-6F8h] BYREF
  int dest[178]; // [rsp+4E8h] [rbp-430h] BYREF
  __int128 v57; // [rsp+7B0h] [rbp-168h]
  __int128 v58; // [rsp+7C0h] [rbp-158h]
  __int128 v59; // [rsp+7D0h] [rbp-148h]
  __int128 v60; // [rsp+7E0h] [rbp-138h]
  __int128 v61; // [rsp+7F0h] [rbp-128h]
  __int128 v62; // [rsp+800h] [rbp-118h]
  __int64 v63; // [rsp+810h] [rbp-108h]
  _BYTE v64[24]; // [rsp+820h] [rbp-F8h] BYREF
  _BYTE v65[24]; // [rsp+838h] [rbp-E0h] BYREF
  _BYTE v66[64]; // [rsp+850h] [rbp-C8h] BYREF
  __int128 v67; // [rsp+890h] [rbp-88h] BYREF
  __int64 v68; // [rsp+8A0h] [rbp-78h]
  __int128 v69; // [rsp+8A8h] [rbp-70h] BYREF
  __int64 v70; // [rsp+8B8h] [rbp-60h]
  __int128 v71; // [rsp+8C0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+8D0h] [rbp-48h]
  __int128 v73; // [rsp+8E0h] [rbp-38h] BYREF
  __int64 v74; // [rsp+8F0h] [rbp-28h]
  char v75; // [rsp+904h] [rbp-14h]
  char v76; // [rsp+905h] [rbp-13h]
  char v77; // [rsp+906h] [rbp-12h]
  char v78; // [rsp+907h] [rbp-11h]

  v77 = 0;
  v76 = 0;
  v75 = 0;
  v78 = 1;
  uu_truncate::uu_app(dest);
  clap_builder::builder::command::Command::after_help(
    (int)v55,
    (int)dest,
    (int)aSizeIsAnIntege,
    638,
    v2,
    v3,
    v12,
    v15,
    v18,
    v21,
    v24,
    v27,
    v30,
    v33,
    v35,
    v37,
    v41,
    v42);
  v78 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v54, (int)v55, a1, a2, v4, v5, v13, v16, v19, v22);
  core::result::Result<T,E>::map_err((char)v53, (int)v54);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v46, v53);
  if ( (_QWORD)v46 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             DWORD2(v46),
             &off_103CB8);
  v63 = v52;
  v62 = v51;
  v61 = v50;
  v60 = v49;
  v59 = v48;
  v58 = v47;
  v57 = v46;
  v45 = v52;
  v44[5] = v51;
  v44[4] = v50;
  v44[3] = v49;
  v44[2] = v48;
  v44[1] = v47;
  v44[0] = v46;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v66,
    v44,
    aFiles,
    *(&uu_truncate::options::ARG_FILES + 1),
    &off_103C40);
  core::option::Option<T>::map(v65, v66);
  core::option::Option<T>::unwrap_or_default(v64, v65);
  is_empty = alloc::vec::Vec<T,A>::is_empty(v64);
  if ( (is_empty & 1) != 0 )
  {
    v43 = uucore::mods::error::UUsageError::new(
            1,
            (int)aMissingFileOpe,
            20,
            v6,
            v7,
            v8,
            v14,
            v17,
            v20,
            v23,
            v25,
            v28,
            v31,
            v34,
            v36,
            v38);
  }
  else
  {
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v44,
             aIoBlocks,
             *(&uu_truncate::options::IO_BLOCKS + 1),
             &off_103C58);
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v44,
            aNoCreate,
            *(&uu_truncate::options::NO_CREATE + 1),
            &off_103C70);
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v44,
            aReference,
            *(&uu_truncate::options::REFERENCE + 1),
            &off_103C88);
    core::option::Option<T>::map(&v67, one);
    v77 = 1;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v44,
            aSize,
            *(&uu_truncate::options::SIZE + 1),
            &off_103CA0);
    core::option::Option<T>::map(&v69, v26);
    v77 = 0;
    v76 = 1;
    v72 = v68;
    v71 = v67;
    v75 = 1;
    v74 = v70;
    v73 = v69;
    v9 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v64);
    v76 = 0;
    v75 = 0;
    v43 = uu_truncate::truncate(v32 & 1, flag & 1, &v71, &v73, v9, v10);
    v75 = 0;
    v76 = 0;
    v77 = 0;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v64);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v44);
  return v43;
}
