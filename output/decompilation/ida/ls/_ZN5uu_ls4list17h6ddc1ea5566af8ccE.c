__int64 __fastcall uu_ls::list(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // bp
  unsigned __int8 v6; // r15
  _DWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // rax
  char v26; // al
  __int128 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  char v39; // [rsp+Fh] [rbp-469h]
  bool v40; // [rsp+Fh] [rbp-469h]
  unsigned __int64 v41; // [rsp+18h] [rbp-460h]
  char v42; // [rsp+18h] [rbp-460h]
  __int64 v43; // [rsp+20h] [rbp-458h] BYREF
  __int64 v44; // [rsp+28h] [rbp-450h]
  __int64 v45; // [rsp+30h] [rbp-448h]
  __int64 v46; // [rsp+38h] [rbp-440h] BYREF
  __int64 v47; // [rsp+40h] [rbp-438h]
  __int64 v48; // [rsp+48h] [rbp-430h]
  _BYTE v49[40]; // [rsp+50h] [rbp-428h] BYREF
  __int128 *v50; // [rsp+78h] [rbp-400h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+80h] [rbp-3F8h]
  _OWORD *v52; // [rsp+88h] [rbp-3F0h]
  __int64 (__fastcall *v53)(); // [rsp+90h] [rbp-3E8h]
  __int64 v54; // [rsp+98h] [rbp-3E0h]
  __int64 v55; // [rsp+A0h] [rbp-3D8h] BYREF
  char v56; // [rsp+A8h] [rbp-3D0h]
  __int64 v57; // [rsp+B0h] [rbp-3C8h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-3B0h]
  __int128 v60; // [rsp+D0h] [rbp-3A8h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-398h]
  _QWORD v62[2]; // [rsp+E8h] [rbp-390h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-380h]
  __int64 v64; // [rsp+108h] [rbp-370h]
  __int128 v65; // [rsp+110h] [rbp-368h]
  __int64 v66; // [rsp+120h] [rbp-358h] BYREF
  char v67; // [rsp+128h] [rbp-350h]
  _QWORD v68[3]; // [rsp+130h] [rbp-348h] BYREF
  char v69; // [rsp+14Dh] [rbp-32Bh]
  _OWORD dest[19]; // [rsp+150h] [rbp-328h] BYREF
  _OWORD src[19]; // [rsp+280h] [rbp-1F8h] BYREF
  __int64 v72; // [rsp+3B8h] [rbp-C0h] BYREF
  _BYTE v73[136]; // [rsp+3C0h] [rbp-B8h] BYREF

  v54 = a1;
  v43 = 0LL;
  v44 = 8LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 8LL;
  v48 = 0LL;
  v2 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v49, 0x2000LL, v2);
  v62[0] = 0LL;
  v62[1] = 8LL;
  v63 = 0LL;
  v64 = 8LL;
  v65 = 0LL;
  if ( *(_QWORD *)(a2 + 24) == 0x8000000000000000LL )
    v69 = 2;
  else
    core::ops::function::FnOnce::call_once(v68, a2 + 24);
  v41 = *(_QWORD *)(v54 + 16);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v50);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v50);
  if ( v3 )
  {
    v39 = *(_BYTE *)(a2 + 232);
    v5 = *(_BYTE *)(a2 + 235);
    v6 = *(_BYTE *)(a2 + 242);
    do
    {
      std::sys::os_str::bytes::Slice::to_owned(dest, v3, v4);
      v61 = *(_QWORD *)&dest[1];
      v60 = dest[0];
      *(_QWORD *)&dest[0] = 0LL;
      *(_QWORD *)&v58 = 0x8000000000000000LL;
      uu_ls::PathData::new((__int64)src, (__int64)&v60, (__int64)dest, &v58, v5, v6, 1u);
      if ( !uu_ls::PathData::get_metadata((__int64)src, (__int64)v49) )
      {
        core::ptr::drop_in_place<uu_ls::PathData>(src);
        goto LABEL_8;
      }
      v7 = uu_ls::PathData::file_type((__int64)src, (__int64)v49);
      if ( v7 )
      {
        if ( !v39 && (*v7 & 0xF000) == 0x4000 )
        {
          memcpy(dest, src, sizeof(dest));
          alloc::vec::Vec<T,A>::push(&v46, dest);
          goto LABEL_8;
        }
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
      }
      memcpy(dest, src, sizeof(dest));
      alloc::vec::Vec<T,A>::push(&v43, dest);
LABEL_8:
      v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v50);
    }
    while ( v3 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::path::Path>>(&v50);
  v8 = a2;
  uu_ls::sort_entries(v44, v45, (_BYTE *)a2, (__int64)v49);
  uu_ls::sort_entries(v47, v48, (_BYTE *)a2, (__int64)v49);
  if ( v69 == 2 || !uu_ls::colors::StyleManager::get_normal_style(v68) )
  {
LABEL_20:
    v14 = uu_ls::display_items(v44, v45, a2, (__int64)v49, (__int64)v62, v68);
    if ( v14 )
      goto LABEL_21;
    *(_QWORD *)&v58 = v47;
    *((_QWORD *)&v58 + 1) = v47 + 304 * v48;
    v59 = 0LL;
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v58);
    if ( v17 )
    {
      v18 = v16;
      v19 = v17;
      v40 = v41 < 2 && *(_BYTE *)(a2 + 230) == 0;
      v42 = *(_BYTE *)(a2 + 238);
      do
      {
        std::fs::read_dir(&v66, v19 + 24);
        if ( v67 == 2 )
        {
          v24 = v66;
          v57 = v66;
          v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v49);
          if ( v25 )
          {
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
            core::ptr::drop_in_place<std::io::error::Error>(&v57);
            goto LABEL_21;
          }
          v50 = (__int128 *)v24;
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v19 + 24);
          *(_QWORD *)&dest[2] = *(_QWORD *)&src[1];
          dest[1] = src[0];
          v26 = *(_BYTE *)(v19 + 297);
          *((_QWORD *)&dest[0] + 1) = v24;
          BYTE1(dest[0]) = v26;
          LOBYTE(dest[0]) = 2;
          uucore::mods::error::set_exit_code(2 - (unsigned int)(v26 == 0));
          *(_QWORD *)&v27 = uucore::util_name();
          v60 = v27;
          v50 = &v60;
          v51 = <&T as core::fmt::Display>::fmt;
          v52 = dest;
          v53 = <uu_ls::LsError as core::fmt::Display>::fmt;
          *(_QWORD *)&src[0] = &unk_212588;
          *((_QWORD *)&src[0] + 1) = 3LL;
          *(_QWORD *)&src[2] = 0LL;
          *(_QWORD *)&src[1] = &v50;
          *((_QWORD *)&src[1] + 1) = 2LL;
          std::io::stdio::_eprint(src);
          core::ptr::drop_in_place<uu_ls::LsError>(dest);
        }
        else
        {
          v55 = v66;
          v56 = v67;
          if ( !v40 )
          {
            if ( v45 | v18 )
            {
              *(_QWORD *)&dest[0] = &off_2125B8;
              *((_QWORD *)&dest[0] + 1) = 1LL;
              dest[1] = 8uLL;
              v32 = std::io::Write::write_fmt(v49, dest, v21, v66, v22, v23);
              if ( v32
                || (uu_ls::show_dir_name(v19, (__int64)v49, a2),
                    *(_QWORD *)&dest[0] = &off_2125B8,
                    *((_QWORD *)&dest[0] + 1) = 1LL,
                    dest[1] = 8uLL,
                    (v32 = std::io::Write::write_fmt(v49, dest, v34, v35, v36, v37)) != 0) )
              {
LABEL_51:
                v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
                goto LABEL_52;
              }
            }
            else
            {
              if ( v42 )
              {
                v14 = uu_ls::dired::indent((__int64)v49, v19 + 24, v21, v66, v22, v23);
                if ( v14 )
                  goto LABEL_52;
              }
              uu_ls::show_dir_name(v19, (__int64)v49, a2);
              *(_QWORD *)&dest[0] = &off_2125B8;
              *((_QWORD *)&dest[0] + 1) = 1LL;
              dest[1] = 8uLL;
              v32 = std::io::Write::write_fmt(v49, dest, v28, v29, v30, v31);
              if ( v32 )
                goto LABEL_51;
              if ( v42 )
              {
                v33 = *(_QWORD *)(v19 + 16);
                uu_ls::dired::calculate_subdired(v62, v33);
                *((_QWORD *)&v65 + 1) += v33 + 3;
              }
            }
          }
          <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(dest);
          src[2] = dest[2];
          src[1] = dest[1];
          src[0] = dest[0];
          uucore::features::fs::FileInformation::from_path(dest, v19 + 24, *(unsigned __int8 *)(v19 + 296));
          v38 = *(_QWORD *)&dest[0];
          if ( *(_QWORD *)&dest[0] )
          {
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
LABEL_49:
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(src);
            if ( !v38 )
              goto LABEL_21;
LABEL_52:
            core::ptr::drop_in_place<std::fs::ReadDir>(&v55);
            goto LABEL_21;
          }
          memcpy(v73, &dest[1], sizeof(v73));
          v72 = *((_QWORD *)&dest[0] + 1);
          hashbrown::map::HashMap<K,V,S,A>::insert(src, &v72);
          v14 = uu_ls::enter_directory(v19, v55, v56, (_BYTE *)a2, (__int64)v49, (__int64)src, v62, (__int64)v68);
          if ( v14 )
            goto LABEL_49;
          core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(src);
        }
        v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v58);
        v19 = v20;
      }
      while ( v20 );
      v8 = a2;
      if ( !v42 )
        goto LABEL_46;
    }
    else if ( !*(_BYTE *)(a2 + 238) )
    {
      goto LABEL_46;
    }
    if ( !*(_BYTE *)(v8 + 239) )
    {
      v14 = uu_ls::dired::print_dired_output(v8, v62, (__int64)v49);
      if ( v14 )
        goto LABEL_21;
    }
LABEL_46:
    core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v62);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v49);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v46);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v43);
    return 0LL;
  }
  uu_ls::colors::StyleManager::reset(src, (__int64)v68, 1);
  v50 = src;
  v51 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[0] = &xmmword_23C10;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[2] = 0LL;
  *(_QWORD *)&dest[1] = &v50;
  *((_QWORD *)&dest[1] + 1) = 1LL;
  v13 = std::io::Write::write_fmt(v49, dest, v9, v10, v11, v12);
  if ( !v13 )
  {
    core::ptr::drop_in_place<alloc::string::String>(src);
    goto LABEL_20;
  }
  v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
  core::ptr::drop_in_place<alloc::string::String>(src);
LABEL_21:
  core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v62);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v49);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v46);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v43);
  return v14;
}
