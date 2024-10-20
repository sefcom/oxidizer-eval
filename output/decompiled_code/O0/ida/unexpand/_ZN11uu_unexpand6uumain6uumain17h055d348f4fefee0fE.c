__int64 __fastcall uu_unexpand::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+0h] [rbp-628h]
  struct _Unwind_Exception *v13; // [rsp+0h] [rbp-628h]
  int v14; // [rsp+8h] [rbp-620h]
  int v15; // [rsp+8h] [rbp-620h]
  struct _Unwind_Exception *v16; // [rsp+10h] [rbp-618h]
  int v17; // [rsp+18h] [rbp-610h]
  __int64 v18; // [rsp+48h] [rbp-5E0h]
  _BYTE v19[24]; // [rsp+58h] [rbp-5D0h] BYREF
  _OWORD v20[6]; // [rsp+70h] [rbp-5B8h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-558h]
  __int128 v22; // [rsp+E0h] [rbp-548h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-538h]
  __int128 v24; // [rsp+100h] [rbp-528h]
  __int128 v25; // [rsp+110h] [rbp-518h]
  __int128 v26; // [rsp+120h] [rbp-508h]
  __int128 v27; // [rsp+130h] [rbp-4F8h]
  __int64 v28; // [rsp+140h] [rbp-4E8h]
  int v29[26]; // [rsp+148h] [rbp-4E0h] BYREF
  int dest[178]; // [rsp+1B0h] [rbp-478h] BYREF
  int v31[6]; // [rsp+478h] [rbp-1B0h] BYREF
  __int128 v32; // [rsp+490h] [rbp-198h]
  __int128 v33; // [rsp+4A0h] [rbp-188h]
  __int128 v34; // [rsp+4B0h] [rbp-178h]
  __int128 v35; // [rsp+4C0h] [rbp-168h]
  __int128 v36; // [rsp+4D0h] [rbp-158h]
  __int128 v37; // [rsp+4E0h] [rbp-148h]
  __int64 v38; // [rsp+4F0h] [rbp-138h]
  __m256i v39; // [rsp+500h] [rbp-128h] BYREF
  __int128 v40; // [rsp+520h] [rbp-108h]
  __int64 v41; // [rsp+530h] [rbp-F8h]
  __m256i v42; // [rsp+540h] [rbp-E8h] BYREF
  __int128 v43; // [rsp+560h] [rbp-C8h]
  __int64 v44; // [rsp+570h] [rbp-B8h]
  _BYTE v45[56]; // [rsp+578h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+5B0h] [rbp-78h] BYREF
  __int64 v47; // [rsp+5C0h] [rbp-68h]
  __m256i v48; // [rsp+5D0h] [rbp-58h]
  __int128 v49; // [rsp+5F0h] [rbp-38h]
  __int64 v50; // [rsp+600h] [rbp-28h]
  char v51; // [rsp+617h] [rbp-11h]

  v51 = 0;
  uucore::Args::collect_ignore(v19, a1, a2);
  uu_unexpand::uu_app(dest);
  v51 = 1;
  v2 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v19);
  uu_unexpand::expand_shortcuts(v31, v2, v3);
  v51 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v29,
    (int)dest,
    (int)v31,
    v4,
    v5,
    v6,
    v12,
    v14,
    v16,
    v17);
  v51 = 0;
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v22, v29);
  if ( (_QWORD)v22 == 0x8000000000000000LL )
  {
    v18 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v22 + 1),
            &off_108490);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v19);
  }
  else
  {
    v38 = v28;
    v37 = v27;
    v36 = v26;
    v35 = v25;
    v34 = v24;
    v33 = v23;
    v32 = v22;
    v21 = v28;
    v20[5] = v27;
    v20[4] = v26;
    v20[3] = v25;
    v20[2] = v24;
    v20[1] = v23;
    v20[0] = v22;
    uu_unexpand::Options::new(v45, v20);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v42, v45);
    if ( v42.m256i_i64[0] == 0x8000000000000000LL )
    {
      v47 = v42.m256i_i64[3];
      v46 = *(_OWORD *)&v42.m256i_u64[1];
      v18 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              &v46,
              &off_108478);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v19);
    }
    else
    {
      v50 = v44;
      v49 = v43;
      v48 = v42;
      v41 = v44;
      v40 = v43;
      v39 = v42;
      v18 = uu_unexpand::unexpand(&v39);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v19);
      core::ptr::drop_in_place<uu_unexpand::Options>((int)&v39, (int)v45, v7, v8, v9, v10, v13, v15);
    }
  }
  return v18;
}
