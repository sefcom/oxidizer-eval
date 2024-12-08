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
  __int64 v26; // r13
  __int128 v27; // rax
  char **v28; // r8
  __int64 v29; // rdx
  __int128 v30; // [rsp+0h] [rbp-168h] BYREF
  __int128 v31; // [rsp+10h] [rbp-158h]
  __int128 v32; // [rsp+20h] [rbp-148h]
  __int128 v33; // [rsp+30h] [rbp-138h] BYREF
  __int128 v34; // [rsp+40h] [rbp-128h]
  __int128 v35; // [rsp+50h] [rbp-118h] BYREF
  __int64 v36; // [rsp+60h] [rbp-108h]
  __int128 v37; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-E8h]
  __int128 v39; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-C8h]
  __int128 v41; // [rsp+B0h] [rbp-B8h]
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

  hostname::get(&v30);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v39,
    &v30);
  result = *((_QWORD *)&v39 + 1);
  if ( (_QWORD)v39 != 0x8000000000000000LL )
  {
    v33 = v39;
    *(_QWORD *)&v34 = v40;
    std::sys::os_str::bytes::Slice::to_string_lossy(&v37, *((_QWORD *)&v39 + 1));
    if ( (_QWORD)v37 == 0x8000000000000000LL )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v30, *((_QWORD *)&v37 + 1), v38);
      v36 = v31;
      v2 = v30;
    }
    else
    {
      v36 = v38;
      v2 = v37;
    }
    v35 = v2;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v33);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aIpAddress, 10LL) )
    {
      *(_QWORD *)&v31 = v36;
      v30 = v35;
      <alloc::string::String as core::ops::arith::Add<&str>>::add(&v33, &v30);
      <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v30, &v33);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v39,
        &v30);
      if ( !(_QWORD)v39 )
      {
        v24 = *((_QWORD *)&v39 + 1);
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        return v24;
      }
      v48 = v39;
      v49 = v40;
      core::ptr::drop_in_place<alloc::string::String>(&v33);
      <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v30);
      v41 = v32;
      v40 = v31;
      v39 = v30;
      v42 = 0LL;
      v43 = 1LL;
      v44 = 0LL;
      v38 = v49;
      v37 = v48;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33, &v37);
      while ( (_WORD)v33 != 2 )
      {
        v51 = v34;
        v50 = v33;
        if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v39, &v50) )
        {
          <T as alloc::string::ToString>::to_string(v45, &v50);
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v46, v47, ::a1, 2LL) )
            alloc::string::String::truncate(v45, v47 - 2);
          slice = core::slice::iter::Iter<T>::make_slice(v46, v46 + v47);
          alloc::vec::Vec<T,A>::append_elements(&v42, slice);
          alloc::string::String::push(&v42, 32LL);
          v31 = v51;
          v30 = v50;
          ((void (__fastcall *)(__int128 *, __int128 *))hashbrown::map::HashMap<K,V,S,A>::insert)(&v39, &v30);
          core::ptr::drop_in_place<alloc::string::String>(v45);
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v33, &v37);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>(&v37);
      v3 = v44;
      if ( v44 )
      {
        v4 = v43;
        v5 = v43;
        *(_QWORD *)&v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                           v44 - 1,
                           v43,
                           v44);
        if ( !(_QWORD)v6 )
          core::str::slice_error_fail(v4, v3, 0LL, v3 - 1, &off_1193C8);
        v33 = v6;
        *(_QWORD *)&v37 = &v33;
        *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v30 = &unk_119390;
        *((_QWORD *)&v30 + 1) = 2LL;
        *(_QWORD *)&v32 = 0LL;
        *(_QWORD *)&v31 = &v37;
        *((_QWORD *)&v31 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
          &v30,
          v5,
          *((_QWORD *)&v6 + 1),
          v7,
          v8,
          v9);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v42);
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>(&v39);
      return 0LL;
    }
    v10 = aShort;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL)
      && (v10 = aDomain,
          !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aDomain, 6LL))
      || (*(_QWORD *)&v39 = *((_QWORD *)&v35 + 1),
          *((_QWORD *)&v39 + 1) = *((_QWORD *)&v35 + 1) + v36,
          *(_QWORD *)&v40 = 0LL,
          v15 = core::iter::traits::iterator::Iterator::try_fold(&v39),
          (_DWORD)v11 == (_DWORD)&loc_110000) )
    {
      *(_QWORD *)&v39 = &v35;
      *((_QWORD *)&v39 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v30 = &unk_119390;
      *((_QWORD *)&v30 + 1) = 2LL;
      *(_QWORD *)&v32 = 0LL;
      *(_QWORD *)&v31 = &v39;
      *((_QWORD *)&v31 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, const char *, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v30,
        v10,
        v11,
        v12,
        v13,
        v14);
LABEL_28:
      core::ptr::drop_in_place<alloc::string::String>(&v35);
      return 0LL;
    }
    v16 = v15;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, aShort, 5LL) )
    {
      v17 = *((_QWORD *)&v35 + 1);
      v18 = v36;
      v19 = *((_QWORD *)&v35 + 1);
      *(_QWORD *)&v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          v16,
                          *((_QWORD *)&v35 + 1),
                          v36);
      if ( (_QWORD)v20 )
      {
        v33 = v20;
        *(_QWORD *)&v37 = &v33;
        *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v30 = &unk_119390;
        *((_QWORD *)&v30 + 1) = 2LL;
        *(_QWORD *)&v32 = 0LL;
        *(_QWORD *)&v31 = &v37;
        *((_QWORD *)&v31 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))std::io::stdio::_print)(
          &v30,
          v19,
          *((_QWORD *)&v20 + 1),
          v21,
          v22,
          v23);
        goto LABEL_28;
      }
      v28 = &off_1193B0;
      v29 = 0LL;
    }
    else
    {
      v26 = v16 + 1;
      v17 = *((_QWORD *)&v35 + 1);
      v18 = v36;
      *(_QWORD *)&v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                          v26,
                          *((_QWORD *)&v35 + 1),
                          v36);
      if ( (_QWORD)v27 )
      {
        v33 = v27;
        *(_QWORD *)&v37 = &v33;
        *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v30 = &unk_119390;
        *((_QWORD *)&v30 + 1) = 2LL;
        *(_QWORD *)&v32 = 0LL;
        *(_QWORD *)&v31 = &v37;
        *((_QWORD *)&v31 + 1) = 1LL;
        ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v30);
        goto LABEL_28;
      }
      v28 = &off_119378;
      v29 = v26;
      v16 = v18;
    }
    core::str::slice_error_fail(v17, v18, v29, v16, v28);
  }
  return result;
}
