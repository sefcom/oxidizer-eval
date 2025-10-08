__int64 __fastcall uu_ls::list(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  bool v4; // bl
  __int128 v5; // rax
  __int128 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // bp
  char v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r12
  bool v24; // cl
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // edi
  __int128 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  char v32; // [rsp+Fh] [rbp-539h]
  char v33; // [rsp+Fh] [rbp-539h]
  unsigned __int64 v34; // [rsp+18h] [rbp-530h]
  char v35; // [rsp+18h] [rbp-530h]
  __int128 v36; // [rsp+20h] [rbp-528h] BYREF
  __int128 v37; // [rsp+30h] [rbp-518h]
  __int128 v38; // [rsp+40h] [rbp-508h]
  __int64 v39; // [rsp+50h] [rbp-4F8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-4F0h]
  __int64 v41; // [rsp+60h] [rbp-4E8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-4E0h]
  __int64 v43; // [rsp+70h] [rbp-4D8h]
  __int64 v44; // [rsp+78h] [rbp-4D0h] BYREF
  __int64 v45; // [rsp+80h] [rbp-4C8h]
  __int64 v46; // [rsp+88h] [rbp-4C0h]
  __int64 v47; // [rsp+90h] [rbp-4B8h] BYREF
  unsigned __int8 v48; // [rsp+98h] [rbp-4B0h]
  __int64 v49; // [rsp+A0h] [rbp-4A8h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-4A0h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-490h]
  __int64 v52; // [rsp+C8h] [rbp-480h]
  __int128 v53; // [rsp+D0h] [rbp-478h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-468h]
  _QWORD v55[2]; // [rsp+E8h] [rbp-460h] BYREF
  __int128 v56; // [rsp+F8h] [rbp-450h]
  __int64 v57; // [rsp+108h] [rbp-440h]
  __int128 v58; // [rsp+110h] [rbp-438h]
  __int64 v59; // [rsp+120h] [rbp-428h] BYREF
  unsigned __int8 v60; // [rsp+128h] [rbp-420h]
  _OWORD v61[2]; // [rsp+130h] [rbp-418h] BYREF
  __int64 v62; // [rsp+150h] [rbp-3F8h]
  __int128 v63; // [rsp+158h] [rbp-3F0h]
  __int128 v64; // [rsp+168h] [rbp-3E0h]
  __int128 v65; // [rsp+178h] [rbp-3D0h]
  __int128 v66; // [rsp+188h] [rbp-3C0h]
  __int64 v67; // [rsp+198h] [rbp-3B0h]
  char v68; // [rsp+1A0h] [rbp-3A8h]
  char v69; // [rsp+1B5h] [rbp-393h]
  __int128 v70; // [rsp+1B8h] [rbp-390h]
  __int128 v71; // [rsp+1C8h] [rbp-380h]
  __int128 v72; // [rsp+1D8h] [rbp-370h]
  __int128 v73; // [rsp+1E8h] [rbp-360h]
  __int128 v74; // [rsp+1F8h] [rbp-350h]
  __int128 v75; // [rsp+208h] [rbp-340h]
  _OWORD dest[19]; // [rsp+220h] [rbp-328h] BYREF
  _OWORD src[19]; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v78; // [rsp+488h] [rbp-C0h] BYREF
  _BYTE v79[136]; // [rsp+490h] [rbp-B8h] BYREF

  v41 = 0LL;
  v42 = 8LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 8LL;
  v46 = 0LL;
  v55[0] = 0LL;
  v55[1] = 8LL;
  v56 = 0LL;
  v57 = 8LL;
  v58 = 0LL;
  v39 = a1;
  v34 = *(_QWORD *)(a1 + 16);
  v2 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v50, v2);
  v3 = a2 + 24;
  v4 = __OFSUB__(0LL, *(_QWORD *)(a2 + 24));
  if ( v4 )
    v3 = 0LL;
  *(_QWORD *)&v5 = std::thread::local::LocalKey<T>::with();
  v37 = xmmword_2865A8;
  v36 = *(_OWORD *)&off_286598;
  v38 = v5;
  *(_QWORD *)&v6 = std::thread::local::LocalKey<T>::with();
  src[1] = xmmword_2865A8;
  src[0] = *(_OWORD *)&off_286598;
  src[2] = v6;
  uu_ls::TimeStyler::new((__int64)dest, (_QWORD *)(a2 + 184));
  v40 = 0x8000000000000000LL;
  v62 = v52;
  v61[1] = v51;
  v61[0] = v50;
  v67 = v3;
  v68 = 2;
  v69 = 2 * v4;
  v70 = *(_OWORD *)&off_286598;
  v71 = xmmword_2865A8;
  v72 = v38;
  v73 = src[0];
  v74 = src[1];
  v75 = src[2];
  v66 = dest[3];
  v65 = dest[2];
  v64 = dest[1];
  v63 = dest[0];
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v36, v39);
  v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
  if ( v7 )
  {
    v32 = *(_BYTE *)(a2 + 240);
    v9 = *(_BYTE *)(a2 + 243);
    v10 = *(_BYTE *)(a2 + 250);
    do
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, v7, v8);
      v54 = *(_QWORD *)&dest[1];
      v53 = dest[0];
      *(_QWORD *)&dest[0] = 0LL;
      *(_QWORD *)&v50 = 0x8000000000000000LL;
      uu_ls::PathData::new((__int64)src, (__int64)&v53, dest, (__int64 *)&v50, v9, v10, 1u);
      if ( uu_ls::PathData::get_metadata((__int64)src, (__int64)v61) )
      {
        v11 = (_DWORD *)uu_ls::PathData::file_type((__int64)src, (__int64)v61);
        if ( !v11 )
        {
          uucore::mods::error::set_exit_code(1LL);
LABEL_13:
          memcpy(dest, src, sizeof(dest));
          alloc::vec::Vec<T,A>::push(&v41, dest, &off_286B80);
          goto LABEL_6;
        }
        if ( (v32 & 1) != 0 || (*v11 & 0xF000) != 0x4000 )
          goto LABEL_13;
        memcpy(dest, src, sizeof(dest));
        alloc::vec::Vec<T,A>::push(&v44, dest, &off_286B68);
      }
      else
      {
        core::ptr::drop_in_place<uu_ls::PathData>(src);
      }
LABEL_6:
      v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v36);
    }
    while ( v7 );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::path::Path>>(&v36);
  v12 = a2;
  v13 = v42;
  v14 = v43;
  uu_ls::sort_entries(v42, v43, a2, v61);
  v15 = v45;
  v16 = v46;
  uu_ls::sort_entries(v45, v46, a2, v61);
  if ( v69 == 2 )
    goto LABEL_18;
  if ( !uu_ls::colors::StyleManager::get_normal_style(v67) )
    goto LABEL_18;
  v69 = 1;
  v68 = 2;
  *(_QWORD *)&v36 = a0m;
  *((_QWORD *)&v36 + 1) = 4LL;
  *(_QWORD *)&src[0] = &v36;
  *((_QWORD *)&src[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[0] = &unk_CF290;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[2] = 0LL;
  *(_QWORD *)&dest[1] = src;
  *((_QWORD *)&dest[1] + 1) = 1LL;
  v17 = std::io::Write::write_fmt(v61, dest);
  if ( !v17 )
  {
LABEL_18:
    v18 = uu_ls::display_items(v13, v14, a2, v61, v55);
    if ( v18 )
      goto LABEL_19;
    *(_QWORD *)&v50 = v15;
    *((_QWORD *)&v50 + 1) = v15 + 304 * v16;
    *(_QWORD *)&v51 = 0LL;
    v20 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50);
    if ( v21 )
    {
      v22 = v20;
      v23 = v21;
      v24 = v34 >= 2;
      v35 = *(_BYTE *)(a2 + 246);
      v33 = *(_BYTE *)(a2 + 238) | v24;
      v40 += 2LL;
      do
      {
        std::fs::read_dir(&v59, v23 + 24);
        if ( v60 == 2 )
        {
          v26 = v59;
          v49 = v59;
          v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v61);
          v12 = a2;
          if ( v27 )
          {
            v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
            core::ptr::drop_in_place<std::io::error::Error>(&v49);
            goto LABEL_19;
          }
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, *(_QWORD *)(v23 + 32), *(_QWORD *)(v23 + 40));
          *((_QWORD *)&src[1] + 1) = *(_QWORD *)&dest[1];
          *(_OWORD *)((char *)src + 8) = dest[0];
          v28 = *(unsigned __int8 *)(v23 + 297);
          *(_QWORD *)&src[2] = v26;
          BYTE8(src[2]) = v28;
          *(_QWORD *)&src[0] = v40;
          uucore::mods::error::set_exit_code((unsigned int)(v28 + 1));
          *(_QWORD *)&v29 = uucore::util_name();
          v53 = v29;
          *(_QWORD *)&v36 = &v53;
          *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v37 = src;
          *((_QWORD *)&v37 + 1) = <uu_ls::LsError as core::fmt::Display>::fmt;
          *(_QWORD *)&dest[0] = &unk_286B10;
          *((_QWORD *)&dest[0] + 1) = 3LL;
          *(_QWORD *)&dest[2] = 0LL;
          *(_QWORD *)&dest[1] = &v36;
          *((_QWORD *)&dest[1] + 1) = 2LL;
          std::io::stdio::_eprint(dest);
          core::ptr::drop_in_place<uu_ls::LsError>(src);
        }
        else
        {
          v47 = v59;
          v48 = v60;
          if ( (v33 & 1) != 0 )
          {
            if ( v22 || v43 )
            {
              *(_QWORD *)&dest[0] = &off_2866E0;
              *((_QWORD *)&dest[0] + 1) = 1LL;
              dest[1] = 8uLL;
              v30 = std::io::Write::write_fmt(v61, dest);
              if ( v30 )
                goto LABEL_50;
              v30 = uu_ls::show_dir_name(v23, (__int64)v61, a2);
              if ( v30 )
                goto LABEL_50;
              *(_QWORD *)&dest[0] = &off_2866E0;
              *((_QWORD *)&dest[0] + 1) = 1LL;
              dest[1] = 8uLL;
              v30 = std::io::Write::write_fmt(v61, dest);
              if ( v30 )
                goto LABEL_50;
            }
            else
            {
              if ( (v35 & 1) != 0 )
              {
                v18 = uu_ls::dired::indent((__int64)v61);
                if ( v18 )
                  goto LABEL_51;
              }
              v30 = uu_ls::show_dir_name(v23, (__int64)v61, a2);
              if ( v30
                || (*(_QWORD *)&dest[0] = &off_2866E0,
                    *((_QWORD *)&dest[0] + 1) = 1LL,
                    dest[1] = 8uLL,
                    (v30 = std::io::Write::write_fmt(v61, dest)) != 0) )
              {
LABEL_50:
                v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
                goto LABEL_51;
              }
              if ( (v35 & 1) != 0 )
              {
                v31 = *(_QWORD *)(v23 + 16);
                uu_ls::dired::calculate_subdired(v55, v31);
                *((_QWORD *)&v58 + 1) += v31 + 3;
              }
            }
          }
          <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(dest);
          src[2] = dest[2];
          src[1] = dest[1];
          src[0] = dest[0];
          uucore::features::fs::FileInformation::from_path(dest, v23 + 24, *(unsigned __int8 *)(v23 + 296));
          v12 = a2;
          if ( LODWORD(dest[0]) == 1 )
          {
            v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(
              *(_QWORD *)&src[0],
              *((_QWORD *)&src[0] + 1));
LABEL_51:
            core::ptr::drop_in_place<std::fs::ReadDir>(&v47);
            goto LABEL_19;
          }
          memcpy(v79, &dest[1], sizeof(v79));
          v78 = *((_QWORD *)&dest[0] + 1);
          hashbrown::map::HashMap<K,V,S,A>::insert(src, &v78);
          v18 = uu_ls::enter_directory(v23, v47, v48, a2, (unsigned int)v61, (unsigned int)src, (__int64)v55);
          core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(
            *(_QWORD *)&src[0],
            *((_QWORD *)&src[0] + 1));
          if ( v18 )
            goto LABEL_19;
        }
        v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50);
        v23 = v25;
      }
      while ( v25 );
      if ( (v35 & 1) == 0 )
        goto LABEL_47;
    }
    else if ( (*(_BYTE *)(a2 + 246) & 1) == 0 )
    {
      goto LABEL_47;
    }
    if ( !*(_BYTE *)(v12 + 247) )
    {
      v18 = uu_ls::dired::print_dired_output(v12, v55, (__int64)v61);
      if ( v18 )
        goto LABEL_19;
    }
LABEL_47:
    core::ptr::drop_in_place<uu_ls::ListState>(v61);
    core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v55);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v44);
    v18 = 0LL;
    goto LABEL_20;
  }
  v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
LABEL_19:
  core::ptr::drop_in_place<uu_ls::ListState>(v61);
  core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v55);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v44);
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v41);
  return v18;
}