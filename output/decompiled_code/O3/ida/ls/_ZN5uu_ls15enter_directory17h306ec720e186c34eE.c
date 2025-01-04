        __int64 a8)
{
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  char v13; // r13
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // r13
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  char v28; // al
  __int64 (__fastcall *v29)(); // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 (__fastcall *v35)(); // rdx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  char v42; // [rsp+1Fh] [rbp-549h]
  char v44; // [rsp+2Ch] [rbp-53Ch]
  unsigned __int8 v45; // [rsp+2Ch] [rbp-53Ch]
  __int64 v46; // [rsp+30h] [rbp-538h] BYREF
  __int64 v47; // [rsp+38h] [rbp-530h]
  __int64 v48; // [rsp+40h] [rbp-528h]
  __int64 v49; // [rsp+48h] [rbp-520h] BYREF
  __int64 v50; // [rsp+50h] [rbp-518h]
  __int64 v51; // [rsp+58h] [rbp-510h]
  __int64 v52; // [rsp+60h] [rbp-508h] BYREF
  char v53; // [rsp+68h] [rbp-500h]
  __int128 v54; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v55; // [rsp+80h] [rbp-4E8h]
  __int64 v56; // [rsp+90h] [rbp-4D8h]
  _BYTE v57[24]; // [rsp+A0h] [rbp-4C8h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-4B0h]
  __int64 v59; // [rsp+C8h] [rbp-4A0h]
  __int64 v60; // [rsp+D0h] [rbp-498h]
  __int64 *v61; // [rsp+D8h] [rbp-490h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+E0h] [rbp-488h]
  _OWORD *v63; // [rsp+E8h] [rbp-480h]
  __int64 (__fastcall *v64)(); // [rsp+F0h] [rbp-478h]
  _BYTE *v65; // [rsp+F8h] [rbp-470h]
  __int64 v66; // [rsp+100h] [rbp-468h] BYREF
  _OWORD v67[19]; // [rsp+108h] [rbp-460h] BYREF
  __int64 v68; // [rsp+238h] [rbp-330h]
  char v69; // [rsp+240h] [rbp-328h]
  __int128 src[19]; // [rsp+248h] [rbp-320h] BYREF
  __int64 v71; // [rsp+378h] [rbp-1F0h] BYREF
  _BYTE dest[136]; // [rsp+380h] [rbp-1E8h] BYREF
  _BYTE v73[352]; // [rsp+408h] [rbp-160h] BYREF

  v60 = a6;
  v68 = a2;
  v69 = a3;
  v42 = a4[240];
  v65 = a4;
  if ( v42 )
  {
    v49 = 0LL;
    v50 = 8LL;
    v51 = 0LL;
    v8 = a4[235];
    v9 = a4[242];
  }
  else
  {
    v48 = a2;
    v44 = a3;
    v11 = alloc::alloc::Global::alloc_impl(608LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v12 = v11;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v67, a1 + 24);
    *(_QWORD *)&v55 = *(_QWORD *)&v67[1];
    v54 = v67[0];
    *(_QWORD *)&v67[0] = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(src, asc_34771, 1LL);
    *(_QWORD *)&v57[16] = *(_QWORD *)&src[1];
    *(_OWORD *)v57 = src[0];
    v9 = a4[242];
    v13 = a4[235];
    uu_ls::PathData::new((__int64)src, (__int64)&v54, (__int64)v67, (__int128 *)v57, v13, v9, 0);
    std::path::Path::join(&v61, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), asc_34772, 2LL);
    *(_QWORD *)v57 = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(v67, asc_34772, 2LL);
    *(_QWORD *)&v55 = *(_QWORD *)&v67[1];
    v54 = v67[0];
    uu_ls::PathData::new((__int64)v67, (__int64)&v61, (__int64)v57, &v54, v13, v9, 0);
    memcpy((void *)v12, src, 0x130uLL);
    memcpy((void *)(v12 + 304), v67, 0x130uLL);
    alloc::slice::hack::into_vec(&v49, v12, 2LL);
    a3 = v44;
    a2 = v48;
    v8 = v13;
  }
  v52 = a2;
  v53 = a3;
  LODWORD(v48) = v8;
  v45 = v9;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v57, &v52);
    if ( !*(_QWORD *)v57 )
      break;
    v14 = *(_QWORD *)&v57[16];
    if ( *(_QWORD *)&v57[8] )
    {
      v56 = v59;
      v55 = v58;
      v54 = *(_OWORD *)&v57[8];
      if ( (unsigned __int8)uu_ls::should_display((__int64)&v54, (__int64)v65) )
      {
        std::fs::DirEntry::path(&v61, &v54);
        *((_QWORD *)&v67[2] + 1) = v56;
        *(_OWORD *)((char *)&v67[1] + 8) = v55;
        *(_OWORD *)((char *)v67 + 8) = v54;
        *(_QWORD *)&v67[0] = 1LL;
        *(_QWORD *)&src[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v73, (__int64)&v61, (__int64)v67, src, v48, v45, 0);
        alloc::vec::Vec<T,A>::push(&v49, v73);
      }
      else
      {
        core::ptr::drop_in_place<std::fs::DirEntry>(&v54);
      }
    }
    else
    {
      v66 = *(_QWORD *)&v57[16];
      v15 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
      if ( v15 )
      {
        v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        core::ptr::drop_in_place<std::io::error::Error>(&v66);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v52);
        goto LABEL_21;
      }
      *((_QWORD *)&v67[0] + 1) = v14;
      LOBYTE(v67[0]) = 1;
      uucore::mods::error::set_exit_code(1LL);
      v46 = uucore::util_name();
      v47 = v16;
      v61 = &v46;
      v62 = <&T as core::fmt::Display>::fmt;
      v63 = v67;
      v64 = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_212588;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v61;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<uu_ls::LsError>(v67);
    }
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v52);
  v17 = v65;
  uu_ls::sort_entries(v50, v51, v65, a5);
  if ( v17[248] == 1 || v17[234] )
  {
    uu_ls::return_total(v67, v50, v51, v17, a5);
    v18 = *((_QWORD *)&v67[0] + 1);
    if ( *(_QWORD *)&v67[0] == 0x8000000000000000LL )
      goto LABEL_21;
    src[0] = v67[0];
    *(_QWORD *)&src[1] = *(_QWORD *)&v67[1];
    *(_QWORD *)v57 = *((_QWORD *)&v67[0] + 1);
    *(_QWORD *)&v57[8] = *(_QWORD *)&v67[1];
    *(_QWORD *)&v54 = v57;
    *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v67[0] = &xmmword_23C10;
    *((_QWORD *)&v67[0] + 1) = 1LL;
    *(_QWORD *)&v67[1] = &v54;
    *(_OWORD *)((char *)&v67[1] + 8) = 1uLL;
    v22 = std::io::Write::write_fmt(a5, v67, v19, 0x8000000000000000LL, v20, v21);
    if ( v22 )
    {
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
      core::ptr::drop_in_place<alloc::string::String>(src);
      goto LABEL_21;
    }
    if ( v17[238] )
      uu_ls::dired::add_total(a7, *(__int64 *)&src[1]);
    core::ptr::drop_in_place<alloc::string::String>(src);
  }
  v18 = uu_ls::display_items(v50, v51, v17, a5, a7, a8);
  if ( v18 )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v49);
  }
  else
  {
    if ( v17[230] )
    {
      *(_QWORD *)&v54 = v50;
      *((_QWORD *)&v54 + 1) = v50 + 304 * v51;
      *(_QWORD *)&v55 = 2 * (unsigned int)(v42 == 0);
      v24 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v54);
      if ( v24 )
      {
        v25 = v24;
        LOBYTE(v48) = v17[238];
        do
        {
          std::fs::read_dir(&v52, v25 + 24);
          if ( v53 == 2 )
          {
            v26 = v52;
            v46 = v52;
            v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
            if ( v27 )
            {
              v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
              core::ptr::drop_in_place<std::io::error::Error>(&v46);
              goto LABEL_21;
            }
            *(_QWORD *)v57 = v26;
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
            *(_QWORD *)&v67[2] = *(_QWORD *)&src[1];
            v67[1] = src[0];
            v28 = *(_BYTE *)(v25 + 297);
            *((_QWORD *)&v67[0] + 1) = v26;
            BYTE1(v67[0]) = v28;
            LOBYTE(v67[0]) = 2;
            uucore::mods::error::set_exit_code(2 - (unsigned int)(v28 == 0));
            v61 = (__int64 *)uucore::util_name();
            v62 = v29;
            *(_QWORD *)v57 = &v61;
            *(_QWORD *)&v57[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v57[16] = v67;
            *(_QWORD *)&v58 = <uu_ls::LsError as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &unk_212588;
            *((_QWORD *)&src[0] + 1) = 3LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v57;
            *((_QWORD *)&src[1] + 1) = 2LL;
            std::io::stdio::_eprint(src);
            core::ptr::drop_in_place<uu_ls::LsError>(v67);
          }
          else
          {
            v46 = v52;
            LOBYTE(v47) = v53;
            uucore::features::fs::FileInformation::from_path(v67, v25 + 24, *(unsigned __int8 *)(v25 + 296));
            if ( *(_QWORD *)&v67[0] )
            {
              v41 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v67[0] + 1));
LABEL_49:
              v18 = v41;
LABEL_50:
              core::ptr::drop_in_place<std::fs::ReadDir>(&v46);
              goto LABEL_21;
            }
            memcpy(dest, &v67[1], sizeof(dest));
            v71 = *((_QWORD *)&v67[0] + 1);
            if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v60, &v71) )
            {
              v34 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
              if ( v34 )
                goto LABEL_48;
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
              *((_QWORD *)&v67[1] + 1) = *(_QWORD *)&src[1];
              *(_OWORD *)((char *)v67 + 8) = src[0];
              LOBYTE(v67[0]) = 5;
              uucore::mods::error::set_exit_code(2LL);
              v61 = (__int64 *)uucore::util_name();
              v62 = v35;
              *(_QWORD *)v57 = &v61;
              *(_QWORD *)&v57[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v57[16] = v67;
              *(_QWORD *)&v58 = <uu_ls::LsError as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_212588;
              *((_QWORD *)&src[0] + 1) = 3LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = v57;
              *((_QWORD *)&src[1] + 1) = 2LL;
              std::io::stdio::_eprint(src);
              core::ptr::drop_in_place<uu_ls::LsError>(v67);
              core::ptr::drop_in_place<std::fs::ReadDir>(&v46);
            }
            else
            {
              *(_QWORD *)&v67[0] = &off_2125B8;
              *((_QWORD *)&v67[0] + 1) = 1LL;
              v67[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v67, v30, v31, v32, v33);
              if ( v34 )
                goto LABEL_48;
              if ( (_BYTE)v48 )
              {
                a7[6] = 2LL;
                v18 = uu_ls::dired::indent(a5);
                if ( v18 )
                  goto LABEL_50;
                std::sys::os_str::bytes::Slice::to_string_lossy(v67, *(_QWORD *)(v25 + 32));
                v36 = *(_QWORD *)&v67[1];
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v67);
                uu_ls::dired::calculate_subdired(a7, v36);
                a7[6] += v36 + 3;
              }
              uu_ls::show_dir_name(v25, a5, (__int64)v17);
              *(_QWORD *)&v67[0] = &off_2125B8;
              *((_QWORD *)&v67[0] + 1) = 1LL;
              v67[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v67, v37, v38, v39, v40);
              if ( v34 )
              {
LABEL_48:
                v41 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
                goto LABEL_49;
              }
              v18 = uu_ls::enter_directory(v25, v46, (unsigned __int8)v47, (_DWORD)v17, a5, v60, (__int64)a7, a8);
              if ( v18 )
                goto LABEL_21;
              uucore::features::fs::FileInformation::from_path(v67, v25 + 24, *(unsigned __int8 *)(v25 + 296));
              if ( *(_QWORD *)&v67[0] )
              {
                v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v67[0] + 1));
                goto LABEL_21;
              }
              memcpy((char *)src + 8, &v67[1], 0x88uLL);
              *(_QWORD *)&src[0] = *((_QWORD *)&v67[0] + 1);
              hashbrown::map::HashMap<K,V,S,A>::remove(v60, src);
            }
          }
          v25 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v54);
        }
        while ( v25 );
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v49);
    return 0LL;
  }
  return v18;
}
