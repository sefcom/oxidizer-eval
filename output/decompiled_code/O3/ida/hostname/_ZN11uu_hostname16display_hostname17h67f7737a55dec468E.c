__int64 __fastcall uu_hostname::display_hostname(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int128 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rsi
  __int128 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 slice; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  char **v31; // r8
  __int64 v32; // rdx
  __int128 v33; // [rsp+0h] [rbp-168h] BYREF
  __int128 v34; // [rsp+10h] [rbp-158h]
  __int128 v35; // [rsp+20h] [rbp-148h]
  __int128 v36; // [rsp+30h] [rbp-138h] BYREF
  __int128 v37; // [rsp+40h] [rbp-128h]
  __int128 v38; // [rsp+50h] [rbp-118h] BYREF
  __int64 v39; // [rsp+60h] [rbp-108h]
  __int128 v40; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v41; // [rsp+80h] [rbp-E8h]
  __int128 v42; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-C8h]
  __int128 v44; // [rsp+B0h] [rbp-B8h]
  __int64 v45; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-A0h]
  __int64 v47; // [rsp+D0h] [rbp-98h]
  char v48[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-88h]
  __int64 v50; // [rsp+E8h] [rbp-80h]
  __int128 v51; // [rsp+F0h] [rbp-78h]
  __int128 v52; // [rsp+100h] [rbp-68h]
  __int128 v53; // [rsp+110h] [rbp-58h] BYREF
  __int128 v54; // [rsp+120h] [rbp-48h]

  hostname::get(&v33);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v42,
    &v33);
  result = *((_QWORD *)&v42 + 1);
  if ( (_QWORD)v42 != 0x8000000000000000LL )
  {
    v36 = v42;
    *(_QWORD *)&v37 = v43;
    std::sys::os_str::bytes::Slice::to_string_lossy(&v40, *((_QWORD *)&v42 + 1));
    if ( (_QWORD)v40 == 0x8000000000000000LL )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v33, *((_QWORD *)&v40 + 1), v41);
      v39 = v34;
      v2 = v33;
    }
    else
    {
      v39 = v41;
      v2 = v40;
    }
    v38 = v2;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v36);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aIpAddress, 10LL) )
    {
      *(_QWORD *)&v34 = v39;
      v33 = v38;
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v36, &v33);
      <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v33, &v36);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v42,
        &v33);
      if ( !(_QWORD)v42 )
      {
        v24 = *((_QWORD *)&v42 + 1);
        core::ptr::drop_in_place<alloc::string::String>(&v36);
        return v24;
      }
      v51 = v42;
      v52 = v43;
      core::ptr::drop_in_place<alloc::string::String>(&v36);
      <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v33);
      v44 = v35;
      v43 = v34;
      v42 = v33;
      v45 = 0LL;
      v46 = 1LL;
      v47 = 0LL;
      v41 = v52;
      v40 = v51;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36, &v40);
      while ( (_WORD)v36 != 2 )
      {
        v54 = v37;
        v53 = v36;
        if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v42, &v53) )
        {
          <T as alloc::string::ToString>::to_string(v48, &v53);
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v49, v50, ::a1, 2LL) )
            alloc::string::String::truncate(v48, v50 - 2);
          slice = core::slice::iter::Iter<T>::make_slice(v49, v49 + v50);
          alloc::vec::Vec<T,A>::append_elements(&v45, slice);
          alloc::string::String::push(&v45, 32LL);
          v34 = v54;
          v33 = v53;
          ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))hashbrown::map::HashMap<K,V,S,A>::insert)(
            &v42,
            &v33,
            v26,
            v27,
            v28,
            v29);
          core::ptr::drop_in_place<alloc::string::String>(v48);
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36, &v40);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>(&v40);
      v3 = v47;
      if ( v47 )
      {
        v4 = v46;
        v5 = v46;
        *(_QWORD *)&v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                           v47 - 1,
                           v46,
                           v47);
        if ( !(_QWORD)v6 )
          core::str::slice_error_fail(v4, v3, 0LL, v3 - 1, &off_1193C8);
        v36 = v6;
        *(_QWORD *)&v40 = &v36;
        *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v33 = &unk_119390;
        *((_QWORD *)&v33 + 1) = 2LL;
        *(_QWORD *)&v35 = 0LL;
        *(_QWORD *)&v34 = &v40;
        *((_QWORD *)&v34 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
          &v33,
          v5,
          *((_QWORD *)&v6 + 1),
          v7,
          v8,
          v9);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v45);
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>(&v42);
      return 0LL;
    }
    v10 = aShort;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL)
      && (v10 = aDomain,
          !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aDomain, 6LL))
      || (*(_QWORD *)&v42 = *((_QWORD *)&v38 + 1),
          *((_QWORD *)&v42 + 1) = *((_QWORD *)&v38 + 1) + v39,
          *(_QWORD *)&v43 = 0LL,
          v15 = core::iter::traits::iterator::Iterator::try_fold(&v42),
          (_DWORD)v11 == (_DWORD)&loc_110000) )
    {
      *(_QWORD *)&v42 = &v38;
      *((_QWORD *)&v42 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v33 = &unk_119390;
      *((_QWORD *)&v33 + 1) = 2LL;
      *(_QWORD *)&v35 = 0LL;
      *(_QWORD *)&v34 = &v42;
      *((_QWORD *)&v34 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v33,
        v10,
        v11,
        v12,
        v13,
        v14);
LABEL_28:
      core::ptr::drop_in_place<alloc::string::String>(&v38);
      return 0LL;
    }
    v16 = v15;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL) )
    {
      v17 = *((_QWORD *)&v38 + 1);
      v18 = v39;
      v19 = *((_QWORD *)&v38 + 1);
      *(_QWORD *)&v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          v16,
                          *((_QWORD *)&v38 + 1),
                          v39);
      if ( (_QWORD)v20 )
        goto LABEL_27;
      v31 = &off_1193B0;
      v32 = 0LL;
    }
    else
    {
      v30 = v16 + 1;
      v17 = *((_QWORD *)&v38 + 1);
      v18 = v39;
      v19 = *((_QWORD *)&v38 + 1);
      *(_QWORD *)&v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                          v30,
                          *((_QWORD *)&v38 + 1),
                          v39);
      if ( (_QWORD)v20 )
      {
LABEL_27:
        v36 = v20;
        *(_QWORD *)&v40 = &v36;
        *((_QWORD *)&v40 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v33 = &unk_119390;
        *((_QWORD *)&v33 + 1) = 2LL;
        *(_QWORD *)&v35 = 0LL;
        *(_QWORD *)&v34 = &v40;
        *((_QWORD *)&v34 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
          &v33,
          v19,
          *((_QWORD *)&v20 + 1),
          v21,
          v22,
          v23);
        goto LABEL_28;
      }
      v31 = &off_119378;
      v32 = v30;
      v16 = v18;
    }
    core::str::slice_error_fail(v17, v18, v32, v16, v31);
  }
  return result;
}
