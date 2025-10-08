__int64 __fastcall uu_mktemp::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  __int64 v6; // r15
  char v7; // bp
  char v8; // r12
  char v9; // bp
  char v10; // r15
  __int128 v11; // kr00_16
  int v12; // edx
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-440h] BYREF
  __int128 v16; // [rsp+10h] [rbp-438h]
  _BYTE v17[48]; // [rsp+20h] [rbp-428h] BYREF
  __int64 v18; // [rsp+50h] [rbp-3F8h]
  __int128 v19; // [rsp+58h] [rbp-3F0h]
  __int64 v20; // [rsp+68h] [rbp-3E0h]
  __int128 v21; // [rsp+70h] [rbp-3D8h]
  __int64 v22; // [rsp+80h] [rbp-3C8h]
  _BYTE v23[8]; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v24; // [rsp+98h] [rbp-3B0h]
  __int64 v25; // [rsp+A0h] [rbp-3A8h]
  __int128 v26; // [rsp+A8h] [rbp-3A0h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-390h]
  __int128 v28; // [rsp+C8h] [rbp-380h]
  __int128 v29; // [rsp+D8h] [rbp-370h]
  __int128 v30; // [rsp+E8h] [rbp-360h]
  __int128 v31; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v32; // [rsp+108h] [rbp-340h]
  __int128 v33; // [rsp+110h] [rbp-338h] BYREF
  __m256i v34; // [rsp+120h] [rbp-328h]
  __int64 v35; // [rsp+140h] [rbp-308h]
  __int128 dest; // [rsp+150h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+160h] [rbp-2E8h]
  __int128 v38; // [rsp+170h] [rbp-2D8h]
  __int128 v39; // [rsp+180h] [rbp-2C8h]
  __int128 v40; // [rsp+190h] [rbp-2B8h]

  core::iter::traits::iterator::Iterator::collect(v23, a1, a2);
  uu_mktemp::uu_app(&dest);
  v2 = v24;
  v3 = v25;
  clap_builder::builder::command::Command::try_get_matches_from(v17, &dest, v24, v25);
  if ( !__OFSUB__(0LL, *(_QWORD *)v17) )
  {
    v35 = v18;
    v34 = *(__m256i *)&v17[16];
    v33 = *(_OWORD *)v17;
    uu_mktemp::Options::from(&v26, &v33);
    std::env::var(&dest);
    v7 = dest;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&dest);
    if ( (v7 & 1) == 0
      && (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                            &v33,
                            aTemplate,
                            *(&uu_mktemp::ARG_TEMPLATE + 1)) )
    {
      if ( !v3 || v2 + 24 * v3 == 24 )
        core::option::unwrap_failed(&off_F82C0);
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                               *(_QWORD *)(v2 + 24 * v3 - 16),
                               *(_QWORD *)(v2 + 24 * v3 - 8),
                               *((_QWORD *)&v26 + 1),
                               v27) )
      {
        *(_QWORD *)&dest = 0x8000000000000006LL;
        v6 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<uu_mktemp::Options>(&v26);
        goto LABEL_21;
      }
    }
    v8 = BYTE9(v30);
    v9 = BYTE10(v30);
    v10 = BYTE8(v30);
    v40 = v30;
    v39 = v29;
    v38 = v28;
    v37 = v27;
    dest = v26;
    uu_mktemp::Params::from(v17, &dest);
    v11 = *(_OWORD *)v17;
    v12 = *(_DWORD *)&v17[16];
    v21 = *(_OWORD *)&v17[24];
    v22 = *(_QWORD *)&v17[40];
    if ( *(_QWORD *)v17 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v38 = v22;
      v37 = v21;
      dest = *(_OWORD *)&v17[8];
      *((_QWORD *)&v38 + 1) = v18;
      v6 = alloc::boxed::Box<T>::new(&dest);
LABEL_21:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
      goto LABEL_23;
    }
    v16 = v19;
    *(_QWORD *)&v17[16] = v22;
    *(_OWORD *)v17 = v21;
    v15 = v18;
    if ( v8 )
      uu_mktemp::dry_exec((unsigned int)&dest, DWORD2(v11), v12, DWORD2(v21), v22, v20, v19, *((__int64 *)&v19 + 1));
    else
      uu_mktemp::exec((unsigned int)&dest, DWORD2(v11), v12, DWORD2(v21), v22, v20, v19, *((__int64 *)&v19 + 1), v10);
    v6 = *((_QWORD *)&dest + 1);
    if ( v9 )
    {
      if ( (_QWORD)dest == 0x8000000000000000LL )
      {
        v6 = uu_mktemp::uumain::uumain::{{closure}}(*((_QWORD *)&dest + 1), v37);
LABEL_20:
        core::ptr::drop_in_place<alloc::string::String>(&v15);
        core::ptr::drop_in_place<alloc::string::String>(v17);
        core::mem::drop(v11, *((_QWORD *)&v11 + 1));
        goto LABEL_21;
      }
    }
    else if ( (_QWORD)dest == 0x8000000000000000LL )
    {
      goto LABEL_20;
    }
    v31 = dest;
    v32 = v37;
    v13 = uucore::mods::display::println_verbatim(&v31);
    v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    core::ptr::drop_in_place<alloc::string::String>(v17);
    core::mem::drop(v11, *((_QWORD *)&v11 + 1));
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
    goto LABEL_23;
  }
  v4 = *(_QWORD *)&v17[8];
  if ( *(_BYTE *)(*(_QWORD *)&v17[8] + 221LL) == 5
    && (clap_builder::util::flat_map::FlatMap<K,V>::iter(&dest, *(_QWORD *)&v17[8] + 32LL),
        v5 = core::iter::traits::iterator::Iterator::try_fold(&dest),
        (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v5)) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aTooManyTemplat, 18LL);
    *(_QWORD *)&v37 = v27;
    dest = v26;
    DWORD2(v37) = 1;
    v6 = alloc::boxed::Box<T>::new(&dest);
    core::ptr::drop_in_place<clap_builder::error::Error>(v4);
  }
  else
  {
    v6 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
  }
LABEL_23:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v23);
  return v6;
}