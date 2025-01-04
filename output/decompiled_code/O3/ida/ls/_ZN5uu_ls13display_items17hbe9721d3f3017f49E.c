__int64 __fastcall uu_ls::display_items(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbp
  unsigned __int8 v9; // al
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rax
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int16 v36; // bp
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int16 v46; // bp
  unsigned __int16 v47; // bx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int16 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  unsigned __int8 v60; // [rsp+24h] [rbp-1C4h]
  __int64 v61; // [rsp+28h] [rbp-1C0h]
  __int64 v62; // [rsp+28h] [rbp-1C0h]
  __int128 v63; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v64; // [rsp+40h] [rbp-1A8h]
  __int64 v65; // [rsp+50h] [rbp-198h]
  __int128 v66; // [rsp+60h] [rbp-188h] BYREF
  __int128 v67; // [rsp+70h] [rbp-178h]
  __int64 v68; // [rsp+88h] [rbp-160h]
  __int64 v69; // [rsp+90h] [rbp-158h]
  __int64 v70; // [rsp+98h] [rbp-150h]
  __int128 v71; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-138h]
  __int128 v73; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-118h]
  __int64 v75; // [rsp+E0h] [rbp-108h]
  __int128 v76; // [rsp+E8h] [rbp-100h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-F0h]
  __int128 v78; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v79; // [rsp+118h] [rbp-D0h]
  _QWORD v80[3]; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+138h] [rbp-B0h]
  __int64 v82; // [rsp+140h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+148h] [rbp-A0h]
  __int64 v84; // [rsp+180h] [rbp-68h]
  __int128 v85; // [rsp+188h] [rbp-60h] BYREF
  __int64 v86; // [rsp+198h] [rbp-50h]
  _BYTE v87[72]; // [rsp+1A0h] [rbp-48h] BYREF

  v70 = a6;
  v69 = a5;
  v82 = a1;
  v83 = a1 + 304 * a2;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v82, a3);
  v10 = *(unsigned __int8 *)(a3 + 248);
  v68 = a4;
  v61 = a3;
  v60 = v9;
  if ( v10 == 1 )
  {
    uu_ls::calculate_padding_collection(&v82, a1, a2, a3, a4);
    *(_QWORD *)&v76 = a1;
    *((_QWORD *)&v76 + 1) = a1 + 304 * a2;
    if ( *(_WORD *)(a3 + 233) )
    {
      v75 = v82;
      v81 = v84;
      v14 = v68;
      while ( 1 )
      {
        v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
        if ( !v15 )
          break;
        v16 = v15;
        uu_ls::display_additional_leading_info((__int64)&v63, v15, v75, v81, v61, v14);
        v20 = *((_QWORD *)&v63 + 1);
        if ( (_QWORD)v63 == 0x8000000000000000LL )
          return v20;
        v66 = v63;
        *(_QWORD *)&v67 = v64;
        *(_QWORD *)&v71 = &v66;
        *((_QWORD *)&v71 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v63 = &xmmword_23C10;
        *((_QWORD *)&v63 + 1) = 1LL;
        v65 = 0LL;
        *(_QWORD *)&v64 = &v71;
        *((_QWORD *)&v64 + 1) = 1LL;
        v21 = std::io::Write::write_fmt(v14, &v63, v17, 0x8000000000000000LL, v18, v19);
        if ( v21 )
          goto LABEL_30;
        core::ptr::drop_in_place<alloc::string::String>(&v66);
        v12 = uu_ls::display_item_long(v16, (unsigned int)&v82, v61, v14, v69, v70, v60);
        if ( v12 )
          return v12;
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v76);
        if ( !v11 )
          break;
        v12 = uu_ls::display_item_long(v11, (unsigned int)&v82, a3, v68, v69, v70, v60);
        if ( v12 )
          return v12;
      }
    }
    return 0LL;
  }
  LODWORD(v75) = v10;
  if ( *(_BYTE *)(a3 + 235) )
  {
    v82 = a1;
    v83 = a1 + 304 * a2;
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v82);
    v69 = 1LL;
    for ( i = 1LL; v13; v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v82) )
      i = core::cmp::max_by(*(_QWORD *)(v13 + 64), i);
  }
  else
  {
    v69 = 0LL;
  }
  v22 = v68;
  uu_ls::calculate_padding_collection(&v82, a1, a2, a3, v68);
  if ( *(_BYTE *)(v70 + 29) != 2 )
  {
    uu_ls::colors::StyleManager::apply_normal(&v66, v70);
    *(_QWORD *)&v71 = &v66;
    *((_QWORD *)&v71 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v63 = &xmmword_23C10;
    *((_QWORD *)&v63 + 1) = 1LL;
    v65 = 0LL;
    *(_QWORD *)&v64 = &v71;
    *((_QWORD *)&v64 + 1) = 1LL;
    v21 = std::io::Write::write_fmt(v22, &v63, v23, v24, v25, v26);
    if ( v21 )
    {
LABEL_30:
      v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
      core::ptr::drop_in_place<alloc::string::String>(&v66);
      return v20;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v66);
  }
  v80[0] = 0LL;
  v80[1] = 8LL;
  v80[2] = 0LL;
  *(_QWORD *)&v66 = a1;
  *((_QWORD *)&v66 + 1) = a1 + 304 * a2;
  v27 = v82;
  v28 = v84;
  v29 = v61;
  while ( 1 )
  {
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v66);
    if ( !v30 )
      break;
    v31 = v30;
    uu_ls::display_additional_leading_info((__int64)&v63, v30, v27, v28, v29, v22);
    v20 = *((_QWORD *)&v63 + 1);
    if ( (_QWORD)v63 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v80);
      return v20;
    }
    v85 = v63;
    v86 = v64;
    v22 = v68;
    v29 = v61;
    uu_ls::display_item_name((unsigned int)v87, v31, v61, v69, i, (unsigned int)&v85, v68, v70, 0LL);
    alloc::vec::Vec<T,A>::push(v80, v87);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v76, v80);
  switch ( (_DWORD)v75 )
  {
    case 0:
      v64 = v77;
      v63 = v76;
      v37 = *(unsigned int *)(v29 + 228);
      v38 = v60;
      v39 = 1LL;
LABEL_33:
      v12 = uu_ls::display_grid(&v63, v37, v39, v22, v38);
      if ( v12 )
        return v12;
      return 0LL;
    case 3:
      v64 = v77;
      v63 = v76;
      v37 = *(unsigned int *)(v29 + 228);
      v38 = v60;
      v39 = 0LL;
      goto LABEL_33;
    case 4:
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v71, &v76);
      if ( (_QWORD)v71 == 0x8000000000000000LL )
      {
        v36 = 0;
      }
      else
      {
        *(_QWORD *)&v67 = v72;
        v66 = v71;
        *(_QWORD *)&v73 = &v66;
        *((_QWORD *)&v73 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v63 = &xmmword_23C10;
        *((_QWORD *)&v63 + 1) = 1LL;
        v65 = 0LL;
        *(_QWORD *)&v64 = &v73;
        *((_QWORD *)&v64 + 1) = 1LL;
        v45 = std::io::Write::write_fmt(v22, &v63, v32, v33, v34, v35);
        if ( v45 )
        {
          v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45);
          core::ptr::drop_in_place<alloc::string::String>(&v66);
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v76);
          return v20;
        }
        v46 = ansi_width::ansi_width(*((_QWORD *)&v66 + 1), v67);
        core::ptr::drop_in_place<alloc::string::String>(&v66);
        v36 = v46 + 2;
      }
      v67 = v77;
      v66 = v76;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v73, &v66);
      if ( (_QWORD)v73 != 0x8000000000000000LL )
      {
        v47 = *(_WORD *)(v29 + 228);
        do
        {
          v71 = v73;
          *(_QWORD *)&v72 = v74;
          v52 = ansi_width::ansi_width(*((_QWORD *)&v73 + 1), v74);
          if ( v47 && (unsigned __int16)(v52 + v36 + 1) > v47 )
          {
            *(_QWORD *)&v78 = &v71;
            *((_QWORD *)&v78 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v63 = &off_212650;
            *((_QWORD *)&v63 + 1) = 1LL;
            v65 = 0LL;
            *(_QWORD *)&v64 = &v78;
            *((_QWORD *)&v64 + 1) = 1LL;
            v53 = std::io::Write::write_fmt(v68, &v63, v48, v49, v50, v51);
            if ( v53 )
              goto LABEL_58;
            v36 = v52 + 2;
          }
          else
          {
            *(_QWORD *)&v78 = &v71;
            *((_QWORD *)&v78 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v63 = &off_212660;
            *((_QWORD *)&v63 + 1) = 1LL;
            v65 = 0LL;
            *(_QWORD *)&v64 = &v78;
            *((_QWORD *)&v64 + 1) = 1LL;
            v53 = std::io::Write::write_fmt(v68, &v63, v48, v49, v50, v51);
            if ( v53 )
            {
LABEL_58:
              v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
              core::ptr::drop_in_place<alloc::string::String>(&v71);
              core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v66);
              return v20;
            }
            v36 += v52 + 2;
          }
          core::ptr::drop_in_place<alloc::string::String>(&v71);
          v29 = v61;
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v73, &v66);
        }
        while ( (_QWORD)v73 != 0x8000000000000000LL );
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v66);
      if ( !v36 )
        return 0LL;
      *(_QWORD *)&v66 = v29 + 250;
      *((_QWORD *)&v66 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      *(_QWORD *)&v63 = &xmmword_23C10;
      *((_QWORD *)&v63 + 1) = 1LL;
      v65 = 0LL;
      *(_QWORD *)&v64 = &v66;
      *((_QWORD *)&v64 + 1) = 1LL;
      v58 = std::io::Write::write_fmt(v68, &v63, v54, v55, v56, v57);
      if ( !v58 )
        return 0LL;
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v58);
  }
  v72 = v77;
  v71 = v76;
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v78, &v71);
  if ( (_QWORD)v78 == 0x8000000000000000LL )
  {
LABEL_39:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v71);
    return 0LL;
  }
  v62 = v61 + 250;
  while ( 1 )
  {
    v74 = v79;
    v73 = v78;
    *(_QWORD *)&v66 = &v73;
    *((_QWORD *)&v66 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v67 = v62;
    *((_QWORD *)&v67 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v63 = "\x01";
    *((_QWORD *)&v63 + 1) = 2LL;
    v65 = 0LL;
    *(_QWORD *)&v64 = &v66;
    *((_QWORD *)&v64 + 1) = 2LL;
    v44 = std::io::Write::write_fmt(v68, &v63, v40, v41, v42, v43);
    if ( v44 )
      break;
    core::ptr::drop_in_place<alloc::string::String>(&v73);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v78, &v71);
    if ( (_QWORD)v78 == 0x8000000000000000LL )
      goto LABEL_39;
  }
  v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v44);
  core::ptr::drop_in_place<alloc::string::String>(&v73);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v71);
  return v20;
}
