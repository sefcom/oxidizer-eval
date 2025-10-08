__int64 __fastcall uu_hostname::display_hostname(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int128 v3; // xmm0
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int128 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbp
  __int128 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rbp
  __int128 v27; // rax
  char **v29; // r8
  __int64 v30; // rdx
  __int128 v31; // [rsp+0h] [rbp-168h] BYREF
  __int128 v32; // [rsp+10h] [rbp-158h]
  __int128 v33; // [rsp+20h] [rbp-148h]
  __int128 v34; // [rsp+30h] [rbp-138h] BYREF
  __int128 v35; // [rsp+40h] [rbp-128h]
  __int128 v36; // [rsp+50h] [rbp-118h] BYREF
  __int64 v37; // [rsp+60h] [rbp-108h]
  __int128 v38; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+80h] [rbp-E8h]
  __int128 v40; // [rsp+90h] [rbp-D8h]
  _OWORD v41[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-A0h]
  __int64 v44; // [rsp+D0h] [rbp-98h]
  char v45[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-88h]
  __int64 v47; // [rsp+E8h] [rbp-80h]
  __int128 v48; // [rsp+F0h] [rbp-78h]
  __int128 v49; // [rsp+100h] [rbp-68h]
  __int128 v50; // [rsp+110h] [rbp-58h] BYREF
  __int128 v51; // [rsp+120h] [rbp-48h]

  hostname::get(&v31);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v38,
    &v31);
  v1 = *((_QWORD *)&v38 + 1);
  v2 = v38;
  if ( __OFSUB__(-(__int64)v38, 1LL) )
    return v1;
  alloc::string::String::from_utf8_lossy(&v34, *((_QWORD *)&v38 + 1), v39);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v31, *((_QWORD *)&v34 + 1), v35);
    v37 = v32;
    v3 = v31;
  }
  else
  {
    v37 = v35;
    v3 = v34;
  }
  v36 = v3;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v1);
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aIpAddress, 10LL) )
  {
    v11 = aShort;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL)
      && (v11 = aDomain,
          !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aDomain, 6LL))
      || (v16 = *((_QWORD *)&v36 + 1),
          v17 = v37,
          *(_QWORD *)&v38 = *((_QWORD *)&v36 + 1),
          *((_QWORD *)&v38 + 1) = *((_QWORD *)&v36 + 1) + v37,
          *(_QWORD *)&v39 = 0LL,
          v18 = core::iter::traits::iterator::Iterator::try_fold(&v38),
          (_DWORD)v12 == 1114112) )
    {
      *(_QWORD *)&v38 = &v36;
      *((_QWORD *)&v38 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &unk_E4E10;
      *((_QWORD *)&v31 + 1) = 2LL;
      *(_QWORD *)&v33 = 0LL;
      *(_QWORD *)&v32 = &v38;
      *((_QWORD *)&v32 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v31,
        v11,
        v12,
        v13,
        v14,
        v15);
LABEL_28:
      core::ptr::drop_in_place<alloc::string::String>(&v36);
      return 0LL;
    }
    v19 = v18;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL) )
    {
      *(_QWORD *)&v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          v19,
                          v16,
                          v17);
      if ( (_QWORD)v20 )
      {
        v34 = v20;
        *(_QWORD *)&v41[0] = &v34;
        *((_QWORD *)&v41[0] + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v31 = &unk_E4E10;
        *((_QWORD *)&v31 + 1) = 2LL;
        *(_QWORD *)&v33 = 0LL;
        *(_QWORD *)&v32 = v41;
        *((_QWORD *)&v32 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
          &v31,
          v16,
          *((_QWORD *)&v20 + 1),
          v21,
          v22,
          v23);
        goto LABEL_28;
      }
      v29 = &off_E4E48;
      v30 = 0LL;
    }
    else
    {
      v26 = v19 + 1;
      *(_QWORD *)&v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                          v26,
                          v16,
                          v17);
      if ( (_QWORD)v27 )
      {
        v34 = v27;
        *(_QWORD *)&v41[0] = &v34;
        *((_QWORD *)&v41[0] + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v31 = &unk_E4E10;
        *((_QWORD *)&v31 + 1) = 2LL;
        *(_QWORD *)&v33 = 0LL;
        *(_QWORD *)&v32 = v41;
        *((_QWORD *)&v32 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v31);
        goto LABEL_28;
      }
      v29 = &off_E4E30;
      v30 = v26;
      v19 = v17;
    }
    core::str::slice_error_fail(v16, v17, v30, v19, v29);
  }
  *(_QWORD *)&v32 = v37;
  v31 = v36;
  <alloc::string::String as core::ops::arith::Add<&str>>::add(&v34, &v31);
  <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v31, &v34);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v38,
    &v31);
  v1 = *((_QWORD *)&v38 + 1);
  if ( (_QWORD)v38 )
  {
    v48 = v38;
    v49 = v39;
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v31);
    v40 = v33;
    v39 = v32;
    v38 = v31;
    v42 = 0LL;
    v43 = 1LL;
    v44 = 0LL;
    v41[1] = v49;
    v41[0] = v48;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34, v41);
    while ( (_WORD)v34 != 2 )
    {
      v51 = v35;
      v50 = v34;
      if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v38, &v50) )
      {
        <T as alloc::string::SpecToString>::spec_to_string(v45, &v50);
        v24 = v46;
        v25 = v47;
        if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v46, v47) )
        {
          alloc::string::String::truncate(v45, v25 - 2);
          v24 = v46;
          v25 = v47;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v42,
          v24,
          v24 + v25);
        alloc::string::String::push(&v42, 32LL);
        v32 = v51;
        v31 = v50;
        ((void (__fastcall *)(__int128 *, __int128 *))hashbrown::map::HashMap<K,V,S,A>::insert)(&v38, &v31);
        core::ptr::drop_in_place<alloc::string::String>(v45);
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v34, v41);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>(v41);
    v4 = v44;
    if ( v44 )
    {
      v5 = v43;
      v6 = v43;
      *(_QWORD *)&v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                         v44 - 1,
                         v43,
                         v44);
      if ( !(_QWORD)v7 )
        core::str::slice_error_fail(v5, v4, 0LL, v4 - 1, &off_E4E60);
      v34 = v7;
      *(_QWORD *)&v41[0] = &v34;
      *((_QWORD *)&v41[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &unk_E4E10;
      *((_QWORD *)&v31 + 1) = 2LL;
      *(_QWORD *)&v33 = 0LL;
      *(_QWORD *)&v32 = v41;
      *((_QWORD *)&v32 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
        &v31,
        v6,
        *((_QWORD *)&v7 + 1),
        v8,
        v9,
        v10);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v42);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>(
      v38,
      *((_QWORD *)&v38 + 1));
    return 0LL;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v34);
  return v1;
}