__int64 __fastcall uu_ls::display_items(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r15
  char v11; // r14
  char v12; // r14
  __int64 v13; // r13
  __int64 result; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int128 v22; // kr00_16
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int16 v34; // r14
  __int64 v35; // rbp
  __int64 v36; // r13
  __int16 v37; // bx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r14
  unsigned __int8 v43; // [rsp+Fh] [rbp-179h]
  __int64 v44; // [rsp+10h] [rbp-178h]
  __int64 v45; // [rsp+18h] [rbp-170h]
  __int64 v46; // [rsp+18h] [rbp-170h]
  __int128 v47; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v48[24]; // [rsp+30h] [rbp-158h]
  __int128 v49; // [rsp+50h] [rbp-138h] BYREF
  __int128 v50; // [rsp+60h] [rbp-128h]
  __int64 v51; // [rsp+78h] [rbp-110h]
  __int128 v52; // [rsp+80h] [rbp-108h] BYREF
  __int128 v53; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-E8h]
  __int64 v55; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-D8h]
  __int64 v57; // [rsp+B8h] [rbp-D0h]
  __int64 v58; // [rsp+C0h] [rbp-C8h]
  _QWORD v59[3]; // [rsp+C8h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+E0h] [rbp-A8h]
  _QWORD v61[2]; // [rsp+E8h] [rbp-A0h] BYREF
  _QWORD v62[8]; // [rsp+F8h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+138h] [rbp-50h]
  _BYTE v64[72]; // [rsp+140h] [rbp-48h] BYREF

  v51 = a5;
  v8 = a1;
  v62[0] = a1;
  v58 = a1 + 304 * a2;
  v62[1] = v58;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v62, a3);
  v44 = a4;
  v45 = (__int64)a3;
  if ( a3[256] == 1 )
  {
    v10 = v9;
    uu_ls::calculate_padding_collection(v62, a1, a2, a3, a4);
    v11 = a3[242];
    v54 = v62[0];
    v60 = v63;
    v12 = a3[241] | v11;
    v13 = (__int64)a3;
    while ( v8 != v58 )
    {
      if ( (v12 & 1) != 0 )
      {
        uu_ls::display_additional_leading_info((__int64)&v47, v8, v54, v60, v13, v44);
        result = *((_QWORD *)&v47 + 1);
        if ( (_QWORD)v47 == 0x8000000000000000LL )
          return result;
        v49 = v47;
        *(_QWORD *)&v50 = *(_QWORD *)v48;
        *(_QWORD *)&v52 = &v49;
        *((_QWORD *)&v52 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v47 = &unk_CF290;
        *((_QWORD *)&v47 + 1) = 1LL;
        *(_QWORD *)&v48[16] = 0LL;
        *(_QWORD *)v48 = &v52;
        *(_QWORD *)&v48[8] = 1LL;
        v15 = std::io::Write::write_fmt(v44, &v47);
        v13 = (__int64)a3;
        if ( v15 )
          goto LABEL_19;
        core::ptr::drop_in_place<alloc::string::String>(&v49);
      }
      result = uu_ls::display_item_long(v8, v62, v13, v44, v51, v10);
      v8 += 304LL;
      if ( result )
        return result;
    }
    return 0LL;
  }
  v16 = a3[243] == 1;
  v43 = v9;
  LODWORD(v54) = (unsigned __int8)a3[256];
  if ( v16 )
  {
    if ( a2 )
    {
      v51 = 1LL;
      v17 = 0LL;
      v5 = 1LL;
      do
      {
        v5 = core::cmp::Ord::max(*(_QWORD *)(a1 + v17 + 64), v5);
        v17 += 304LL;
      }
      while ( 304 * a2 != v17 );
    }
    else
    {
      LODWORD(v5) = 1;
      v51 = 1LL;
    }
  }
  else
  {
    v51 = 0LL;
  }
  uu_ls::calculate_padding_collection(v62, a1, a2, v45, a4);
  if ( *(_BYTE *)(a4 + 133) != 2 )
  {
    uu_ls::colors::StyleManager::apply_normal(&v49, (__int64 *)(a4 + 104));
    *(_QWORD *)&v52 = &v49;
    *((_QWORD *)&v52 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &unk_CF290;
    *((_QWORD *)&v47 + 1) = 1LL;
    *(_QWORD *)&v48[16] = 0LL;
    *(_QWORD *)v48 = &v52;
    *(_QWORD *)&v48[8] = 1LL;
    v15 = std::io::Write::write_fmt(a4, &v47);
    if ( v15 )
    {
LABEL_19:
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
      core::ptr::drop_in_place<alloc::string::String>(&v49);
      return v18;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v49);
  }
  v59[0] = 0LL;
  v59[1] = 8LL;
  v59[2] = 0LL;
  v19 = v62[0];
  v20 = v63;
  while ( v8 != v58 )
  {
    uu_ls::display_additional_leading_info((__int64)&v47, v8, v19, v20, v45, v44);
    if ( (_QWORD)v47 == 0x8000000000000000LL )
    {
      v26 = *((_QWORD *)&v47 + 1);
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v59);
      return v26;
    }
    v49 = v47;
    *(_QWORD *)&v50 = *(_QWORD *)v48;
    v21 = alloc::boxed::Box<T>::new();
    *(_QWORD *)&v47 = 0LL;
    *((_QWORD *)&v47 + 1) = v21;
    *(_QWORD *)v48 = &unk_286C80;
    uu_ls::display_item_name((unsigned int)v64, v8, v45, v51, v5, (unsigned int)&v49, v44, (__int64)&v47);
    alloc::vec::Vec<T,A>::push(v59, v64);
    v8 += 304LL;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v52, v59);
  switch ( (_DWORD)v54 )
  {
    case 0:
      *(_OWORD *)v48 = v53;
      v47 = v52;
      result = uu_ls::display_grid(&v47, *(unsigned int *)(v45 + 236), 1LL, v44, v43, *(_QWORD *)(v45 + 224));
      if ( result )
        return result;
      return 0LL;
    case 3:
      *(_OWORD *)v48 = v53;
      v47 = v52;
      result = uu_ls::display_grid(&v47, *(unsigned int *)(v45 + 236), 0LL, v44, v43, *(_QWORD *)(v45 + 224));
      if ( result )
        return result;
      return 0LL;
    case 4:
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v49, &v52, 4LL, v44);
      v22 = v49;
      if ( (_QWORD)v49 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<std::env::VarError>(0x8000000000000000LL, *((_QWORD *)&v49 + 1));
        LOWORD(v25) = 0;
      }
      else
      {
        v32 = uu_ls::write_os_str(v44, *((_QWORD *)&v49 + 1), v50);
        if ( v32 )
        {
          v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(v22, *((_QWORD *)&v22 + 1));
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v52);
          return v18;
        }
        alloc::string::String::from_utf8_lossy(&v47, *((_QWORD *)&v22 + 1));
        v25 = ansi_width::ansi_width(*((_QWORD *)&v47 + 1), *(_QWORD *)v48) + 2;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v47);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v22, *((_QWORD *)&v22 + 1));
      }
      v50 = v53;
      v49 = v52;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v55, &v49, v23, v24);
      v33 = v55;
      if ( v55 == 0x8000000000000000LL )
      {
LABEL_56:
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v49);
        if ( (_WORD)v25 )
        {
          *(_QWORD *)&v49 = v45 + 258;
          *((_QWORD *)&v49 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
          *(_QWORD *)&v47 = &unk_CF290;
          *((_QWORD *)&v47 + 1) = 1LL;
          *(_QWORD *)&v48[16] = 0LL;
          *(_QWORD *)v48 = &v49;
          *(_QWORD *)&v48[8] = 1LL;
          v41 = std::io::Write::write_fmt(v44, &v47);
          if ( v41 )
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
        }
        return 0LL;
      }
      v34 = *(_WORD *)(v45 + 236);
      while ( 1 )
      {
        v35 = v56;
        v36 = v57;
        alloc::string::String::from_utf8_lossy(&v47, v56);
        v37 = ansi_width::ansi_width(*((_QWORD *)&v47 + 1), *(_QWORD *)v48);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v47);
        if ( v34 && (unsigned __int16)(v25 + v37 + 1) > v34 )
        {
          *(_QWORD *)&v47 = &off_286C60;
          *((_QWORD *)&v47 + 1) = 1LL;
          *(_QWORD *)v48 = 8LL;
          *(_OWORD *)&v48[8] = 0LL;
          v38 = std::io::Write::write_fmt(v44, &v47);
          if ( v38 )
            break;
          LOWORD(v25) = v37 + 2;
        }
        else
        {
          *(_QWORD *)&v47 = &off_286C70;
          *((_QWORD *)&v47 + 1) = 1LL;
          *(_QWORD *)v48 = 8LL;
          *(_OWORD *)&v48[8] = 0LL;
          v38 = std::io::Write::write_fmt(v44, &v47);
          if ( v38 )
            break;
          LOWORD(v25) = v37 + v25 + 2;
        }
        v38 = uu_ls::write_os_str(v44, v35, v36);
        if ( v38 )
          break;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v33, v35);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v55, &v49, v39, v40);
        v33 = v55;
        if ( v55 == 0x8000000000000000LL )
          goto LABEL_56;
      }
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v33, v35);
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v49);
      return v18;
  }
  v50 = v53;
  v49 = v52;
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(
    &v55,
    &v49,
    (unsigned int)v54,
    v44);
  v27 = v55;
  if ( v55 == 0x8000000000000000LL )
  {
LABEL_42:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v49);
    return 0LL;
  }
  v46 = v45 + 258;
  while ( 1 )
  {
    v28 = v56;
    v29 = uu_ls::write_os_str(v44, v56, v57);
    if ( v29 )
      break;
    v61[0] = v46;
    v61[1] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v47 = &unk_CF290;
    *((_QWORD *)&v47 + 1) = 1LL;
    *(_QWORD *)&v48[16] = 0LL;
    *(_QWORD *)v48 = v61;
    *(_QWORD *)&v48[8] = 1LL;
    v29 = std::io::Write::write_fmt(v44, &v47);
    if ( v29 )
      break;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v27, v28);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v55, &v49, v30, v31);
    v27 = v55;
    if ( v55 == 0x8000000000000000LL )
      goto LABEL_42;
  }
  v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v27, v28);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v49);
  return v42;
}