__int64 __fastcall uu_chroot::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // rbx
  __int64 v7; // r14
  void *v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebp
  __int64 v18; // rdi
  char v20; // [rsp+Ch] [rbp-48Ch]
  __int64 v21; // [rsp+10h] [rbp-488h]
  __int64 v22; // [rsp+18h] [rbp-480h] BYREF
  __int64 *v23; // [rsp+20h] [rbp-478h]
  __int64 v24; // [rsp+28h] [rbp-470h]
  __int128 v25; // [rsp+30h] [rbp-468h] BYREF
  __int128 v26; // [rsp+40h] [rbp-458h]
  __int64 v27; // [rsp+50h] [rbp-448h]
  __int128 v28; // [rsp+58h] [rbp-440h] BYREF
  __int64 v29; // [rsp+68h] [rbp-430h]
  _DWORD v30[2]; // [rsp+70h] [rbp-428h] BYREF
  __int64 v31; // [rsp+78h] [rbp-420h]
  __int64 v32; // [rsp+80h] [rbp-418h]
  _BYTE v33[56]; // [rsp+88h] [rbp-410h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-3D8h]
  __int128 v35; // [rsp+D0h] [rbp-3C8h]
  __int128 v36; // [rsp+E0h] [rbp-3B8h]
  _QWORD v37[4]; // [rsp+F0h] [rbp-3A8h] BYREF
  _QWORD v38[2]; // [rsp+110h] [rbp-388h] BYREF
  int v39; // [rsp+120h] [rbp-378h]
  __int128 v40; // [rsp+124h] [rbp-374h]
  __int128 v41; // [rsp+134h] [rbp-364h]
  int v42; // [rsp+144h] [rbp-354h]
  __int128 v43; // [rsp+148h] [rbp-350h] BYREF
  __int64 v44; // [rsp+158h] [rbp-340h]
  _BYTE dest[24]; // [rsp+160h] [rbp-338h] BYREF
  __int128 v46; // [rsp+178h] [rbp-320h]
  __int128 v47; // [rsp+188h] [rbp-310h]
  __int128 v48; // [rsp+198h] [rbp-300h]
  __int128 v49; // [rsp+1A8h] [rbp-2F0h]
  __int128 v50; // [rsp+1B8h] [rbp-2E0h]
  _QWORD v51[14]; // [rsp+428h] [rbp-70h] BYREF

  uu_chroot::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(v33, dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)v33, 1LL) )
    return alloc::boxed::Box<T>::new(*(_QWORD *)&v33[8], 125LL, v2, -*(_QWORD *)v33);
  v40 = *(_OWORD *)&v33[20];
  v41 = *(_OWORD *)&v33[36];
  v42 = *(_DWORD *)&v33[52];
  v38[0] = *(_QWORD *)v33;
  v38[1] = *(_QWORD *)&v33[8];
  v39 = *(_DWORD *)&v33[16];
  std::env::var(v37);
  uu_chroot::Options::from(dest, v38);
  v3 = *(_QWORD *)&dest[8];
  v4 = *(_QWORD *)&dest[16];
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
  {
LABEL_30:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v37);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
    return v3;
  }
  v36 = v50;
  v35 = v49;
  v34 = v48;
  *(_OWORD *)&v33[40] = v47;
  *(_OWORD *)&v33[24] = v46;
  *(_OWORD *)v33 = *(_OWORD *)dest;
  *(_QWORD *)&v33[16] = *(_QWORD *)&dest[16];
  if ( BYTE8(v50) )
  {
    uucore::features::fs::canonicalize(dest, v33);
    core::result::Result<T,E>::unwrap(&v25, dest);
    v5 = *((_QWORD *)&v25 + 1);
    core::str::converts::from_utf8(dest, *((_QWORD *)&v25 + 1), v26);
    if ( (dest[0] & 1) != 0
      || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                             *(_QWORD *)&dest[8],
                             *(_QWORD *)&dest[16],
                             asc_1AA4E,
                             1LL) )
    {
      core::mem::drop(v25, v5);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v25, aOptionSkipChdi, 56LL);
      *(_QWORD *)&dest[16] = v26;
      *(_OWORD *)dest = v25;
      LODWORD(v46) = 125;
      v3 = alloc::boxed::Box<T>::new(dest);
LABEL_29:
      core::ptr::drop_in_place<uu_chroot::Options>(v33);
      goto LABEL_30;
    }
    core::mem::drop(v25, v5);
    v4 = *(_QWORD *)&v33[16];
    v3 = *(_QWORD *)&v33[8];
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(v3, v4) )
  {
    v25 = *(_OWORD *)&v33[8];
    *(_QWORD *)&v28 = &v25;
    *((_QWORD *)&v28 + 1) = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &unk_195B0;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[16] = &v28;
    v46 = 1uLL;
    core::option::Option<T>::map_or_else(&v43, dest);
    *(_OWORD *)&dest[8] = v43;
    *(_QWORD *)&v46 = v44;
    *(_DWORD *)dest = 10;
    v3 = alloc::boxed::Box<T>::new(dest);
    goto LABEL_29;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v38);
  clap_builder::parser::error::MatchesError::unwrap(v51, dest);
  if ( v51[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v22, v51);
    if ( v24 )
    {
      v21 = v22;
      v6 = v23;
      v7 = v24 - 1;
      v8 = (void *)*v23;
      v9 = v23[1];
      v20 = 0;
      goto LABEL_19;
    }
  }
  else
  {
    v22 = 0LL;
    v23 = (_QWORD *)&byte_8;
    v24 = 0LL;
  }
  v10 = v37[0];
  v8 = (void *)v37[2];
  v9 = v37[3];
  v11 = (__int64 *)alloc::alloc::Global::alloc_impl(8LL, 32LL);
  if ( !v11 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v6 = v11;
  if ( v10 )
  {
    v8 = &unk_1AA08;
    v9 = 7LL;
  }
  *v11 = (__int64)v8;
  v11[1] = v9;
  v11[2] = (__int64)aI;
  v11[3] = 2LL;
  v21 = 2LL;
  v7 = 1LL;
  v20 = 1;
LABEL_19:
  v3 = uu_chroot::set_context(v33);
  if ( v3 )
  {
LABEL_27:
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v21, v6);
    if ( v20 )
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v22, v23);
    goto LABEL_29;
  }
  std::process::Command::new(dest, v8, v9);
  std::process::Command::args(dest, v6 + 2, v7);
  std::process::Command::status(v30, dest);
  if ( v30[0] == 1 )
  {
    v12 = v31;
    v32 = v31;
    v13 = std::io::error::Error::kind(v31);
    v14 = *v6;
    v15 = v6[1];
    if ( v13 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v14, v15);
      v27 = v29;
      v26 = v28;
      v16 = 1;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v14, v15);
      v27 = v29;
      v26 = v28;
      v16 = 2;
    }
    *((_QWORD *)&v25 + 1) = v12;
    LODWORD(v25) = v16;
    v3 = alloc::boxed::Box<T>::new(&v25);
    core::ptr::drop_in_place<std::process::Command>(dest);
    goto LABEL_27;
  }
  v17 = v30[1];
  core::ptr::drop_in_place<std::process::Command>(dest);
  if ( v17 )
    v18 = BYTE1(v17) | (unsigned int)-((v17 & 0x7F) != 0);
  else
    v18 = 0LL;
  uucore::mods::error::set_exit_code(v18);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v21, v6);
  if ( v20 )
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v22, v23);
  core::ptr::drop_in_place<uu_chroot::Options>(v33);
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v37);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
  return 0LL;
}