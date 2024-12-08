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
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // [rsp+1Fh] [rbp-549h]
  char v46; // [rsp+2Ch] [rbp-53Ch]
  unsigned __int8 v47; // [rsp+2Ch] [rbp-53Ch]
  __int64 v48; // [rsp+30h] [rbp-538h] BYREF
  __int64 v49; // [rsp+38h] [rbp-530h]
  __int64 v50; // [rsp+40h] [rbp-528h]
  __int64 v51; // [rsp+48h] [rbp-520h] BYREF
  __int64 v52; // [rsp+50h] [rbp-518h]
  __int64 v53; // [rsp+58h] [rbp-510h]
  __int64 v54; // [rsp+60h] [rbp-508h] BYREF
  char v55; // [rsp+68h] [rbp-500h]
  __int128 v56; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v57; // [rsp+80h] [rbp-4E8h]
  __int64 v58; // [rsp+90h] [rbp-4D8h]
  _BYTE v59[24]; // [rsp+A0h] [rbp-4C8h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-4B0h]
  __int64 v61; // [rsp+C8h] [rbp-4A0h]
  __int64 v62; // [rsp+D0h] [rbp-498h]
  __int64 *v63; // [rsp+D8h] [rbp-490h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+E0h] [rbp-488h]
  _OWORD *v65; // [rsp+E8h] [rbp-480h]
  __int64 (__fastcall *v66)(); // [rsp+F0h] [rbp-478h]
  _BYTE *v67; // [rsp+F8h] [rbp-470h]
  __int64 v68; // [rsp+100h] [rbp-468h] BYREF
  _OWORD v69[19]; // [rsp+108h] [rbp-460h] BYREF
  __int64 v70; // [rsp+238h] [rbp-330h]
  char v71; // [rsp+240h] [rbp-328h]
  __int128 src[19]; // [rsp+248h] [rbp-320h] BYREF
  __int64 v73; // [rsp+378h] [rbp-1F0h] BYREF
  _BYTE dest[136]; // [rsp+380h] [rbp-1E8h] BYREF
  _BYTE v75[352]; // [rsp+408h] [rbp-160h] BYREF

  v62 = a6;
  v70 = a2;
  v71 = a3;
  v44 = a4[240];
  v67 = a4;
  if ( v44 )
  {
    v51 = 0LL;
    v52 = 8LL;
    v53 = 0LL;
    v8 = a4[235];
    v9 = a4[242];
  }
  else
  {
    v50 = a2;
    v46 = a3;
    v11 = alloc::alloc::Global::alloc_impl(608LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v12 = v11;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v69, a1 + 24);
    *(_QWORD *)&v57 = *(_QWORD *)&v69[1];
    v56 = v69[0];
    *(_QWORD *)&v69[0] = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(src, asc_34871, 1LL);
    *(_QWORD *)&v59[16] = *(_QWORD *)&src[1];
    *(_OWORD *)v59 = src[0];
    v9 = a4[242];
    v13 = a4[235];
    uu_ls::PathData::new((__int64)src, (__int64)&v56, (__int64)v69, (__int128 *)v59, v13, v9, 0);
    std::path::Path::join(&v63, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), asc_34872, 2LL);
    *(_QWORD *)v59 = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(v69, asc_34872, 2LL);
    *(_QWORD *)&v57 = *(_QWORD *)&v69[1];
    v56 = v69[0];
    uu_ls::PathData::new((__int64)v69, (__int64)&v63, (__int64)v59, &v56, v13, v9, 0);
    memcpy((void *)v12, src, 0x130uLL);
    memcpy((void *)(v12 + 304), v69, 0x130uLL);
    alloc::slice::hack::into_vec(&v51, v12, 2LL);
    a3 = v46;
    a2 = v50;
    v8 = v13;
  }
  v54 = a2;
  v55 = a3;
  LODWORD(v50) = v8;
  v47 = v9;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v59, &v54);
    if ( !*(_QWORD *)v59 )
      break;
    v14 = *(_QWORD *)&v59[16];
    if ( *(_QWORD *)&v59[8] )
    {
      v58 = v61;
      v57 = v60;
      v56 = *(_OWORD *)&v59[8];
      if ( (unsigned __int8)uu_ls::should_display((__int64)&v56, (__int64)v67) )
      {
        std::fs::DirEntry::path(&v63, &v56);
        *((_QWORD *)&v69[2] + 1) = v58;
        *(_OWORD *)((char *)&v69[1] + 8) = v57;
        *(_OWORD *)((char *)v69 + 8) = v56;
        *(_QWORD *)&v69[0] = 1LL;
        *(_QWORD *)&src[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v75, (__int64)&v63, (__int64)v69, src, v50, v47, 0);
        alloc::vec::Vec<T,A>::push(&v51, v75);
      }
      else
      {
        core::ptr::drop_in_place<std::fs::DirEntry>(&v56);
      }
    }
    else
    {
      v68 = *(_QWORD *)&v59[16];
      v15 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
      if ( v15 )
      {
        v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        core::ptr::drop_in_place<std::io::error::Error>(&v68);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v54);
        goto LABEL_21;
      }
      *((_QWORD *)&v69[0] + 1) = v14;
      LOBYTE(v69[0]) = 1;
      uucore::mods::error::set_exit_code(1LL);
      v48 = uucore::util_name();
      v49 = v16;
      v63 = &v48;
      v64 = <&T as core::fmt::Display>::fmt;
      v65 = v69;
      v66 = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_212798;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v63;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<uu_ls::LsError>(v69);
    }
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v54);
  v17 = v67;
  uu_ls::sort_entries(v52, v53, v67, a5);
  if ( v17[248] == 1 || v17[234] )
  {
    uu_ls::return_total(v69, v52, v53, v17, a5);
    v18 = *((_QWORD *)&v69[0] + 1);
    if ( *(_QWORD *)&v69[0] == 0x8000000000000000LL )
      goto LABEL_21;
    src[0] = v69[0];
    *(_QWORD *)&src[1] = *(_QWORD *)&v69[1];
    *(_QWORD *)v59 = *((_QWORD *)&v69[0] + 1);
    *(_QWORD *)&v59[8] = *(_QWORD *)&v69[1];
    *(_QWORD *)&v56 = v59;
    *((_QWORD *)&v56 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v69[0] = &xmmword_23D10;
    *((_QWORD *)&v69[0] + 1) = 1LL;
    *(_QWORD *)&v69[1] = &v56;
    *(_OWORD *)((char *)&v69[1] + 8) = 1uLL;
    v22 = std::io::Write::write_fmt(a5, v69, v19, 0x8000000000000000LL, v20, v21);
    if ( v22 )
    {
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
      core::ptr::drop_in_place<alloc::string::String>(src);
      goto LABEL_21;
    }
    if ( v17[238] )
    {
      v41 = a7[6];
      if ( !v41 )
      {
        v42 = a7[2];
        if ( v42 )
          v41 = *(_QWORD *)(16 * v42 + a7[1] - 8) + 1LL;
        else
          v41 = 0LL;
      }
      a7[6] = v41 + *(_QWORD *)&src[1] + 2;
    }
    core::ptr::drop_in_place<alloc::string::String>(src);
  }
  v18 = uu_ls::display_items(v52, v53, v17, a5, a7, a8);
  if ( v18 )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v51);
  }
  else
  {
    if ( v17[230] )
    {
      *(_QWORD *)&v56 = v52;
      *((_QWORD *)&v56 + 1) = v52 + 304 * v53;
      *(_QWORD *)&v57 = 2 * (unsigned int)(v44 == 0);
      v24 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v56);
      if ( v24 )
      {
        v25 = v24;
        LOBYTE(v50) = v17[238];
        do
        {
          std::fs::read_dir(&v54, v25 + 24);
          if ( v55 == 2 )
          {
            v26 = v54;
            v48 = v54;
            v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
            if ( v27 )
            {
              v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
              core::ptr::drop_in_place<std::io::error::Error>(&v48);
              goto LABEL_21;
            }
            *(_QWORD *)v59 = v26;
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
            *(_QWORD *)&v69[2] = *(_QWORD *)&src[1];
            v69[1] = src[0];
            v28 = *(_BYTE *)(v25 + 297);
            *((_QWORD *)&v69[0] + 1) = v26;
            BYTE1(v69[0]) = v28;
            LOBYTE(v69[0]) = 2;
            uucore::mods::error::set_exit_code(2 - (unsigned int)(v28 == 0));
            v63 = (__int64 *)uucore::util_name();
            v64 = v29;
            *(_QWORD *)v59 = &v63;
            *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v59[16] = v69;
            *(_QWORD *)&v60 = <uu_ls::LsError as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &unk_212798;
            *((_QWORD *)&src[0] + 1) = 3LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v59;
            *((_QWORD *)&src[1] + 1) = 2LL;
            std::io::stdio::_eprint(src);
            core::ptr::drop_in_place<uu_ls::LsError>(v69);
          }
          else
          {
            v48 = v54;
            LOBYTE(v49) = v55;
            uucore::features::fs::FileInformation::from_path(v69, v25 + 24, *(unsigned __int8 *)(v25 + 296));
            if ( *(_QWORD *)&v69[0] )
            {
              v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v69[0] + 1));
LABEL_53:
              v18 = v43;
LABEL_54:
              core::ptr::drop_in_place<std::fs::ReadDir>(&v48);
              goto LABEL_21;
            }
            memcpy(dest, &v69[1], sizeof(dest));
            v73 = *((_QWORD *)&v69[0] + 1);
            if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v62, &v73) )
            {
              v34 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
              if ( v34 )
                goto LABEL_52;
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
              *((_QWORD *)&v69[1] + 1) = *(_QWORD *)&src[1];
              *(_OWORD *)((char *)v69 + 8) = src[0];
              LOBYTE(v69[0]) = 5;
              uucore::mods::error::set_exit_code(2LL);
              v63 = (__int64 *)uucore::util_name();
              v64 = v35;
              *(_QWORD *)v59 = &v63;
              *(_QWORD *)&v59[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v59[16] = v69;
              *(_QWORD *)&v60 = <uu_ls::LsError as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_212798;
              *((_QWORD *)&src[0] + 1) = 3LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = v59;
              *((_QWORD *)&src[1] + 1) = 2LL;
              std::io::stdio::_eprint(src);
              core::ptr::drop_in_place<uu_ls::LsError>(v69);
              core::ptr::drop_in_place<std::fs::ReadDir>(&v48);
            }
            else
            {
              *(_QWORD *)&v69[0] = &off_212788;
              *((_QWORD *)&v69[0] + 1) = 1LL;
              v69[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v69, v30, v31, v32, v33);
              if ( v34 )
                goto LABEL_52;
              if ( (_BYTE)v50 )
              {
                a7[6] = 2LL;
                v18 = uu_ls::dired::indent(a5);
                if ( v18 )
                  goto LABEL_54;
                std::sys::os_str::bytes::Slice::to_string_lossy(v69, *(_QWORD *)(v25 + 32));
                v36 = *(_QWORD *)&v69[1];
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v69);
                uu_ls::dired::calculate_subdired(a7, v36);
                a7[6] += v36 + 3;
              }
              uu_ls::show_dir_name(v25, a5, (__int64)v17);
              *(_QWORD *)&v69[0] = &off_212788;
              *((_QWORD *)&v69[0] + 1) = 1LL;
              v69[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v69, v37, v38, v39, v40);
              if ( v34 )
              {
LABEL_52:
                v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
                goto LABEL_53;
              }
              v18 = uu_ls::enter_directory(v25, v48, (unsigned __int8)v49, (_DWORD)v17, a5, v62, (__int64)a7, a8);
              if ( v18 )
                goto LABEL_21;
              uucore::features::fs::FileInformation::from_path(v69, v25 + 24, *(unsigned __int8 *)(v25 + 296));
              if ( *(_QWORD *)&v69[0] )
              {
                v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v69[0] + 1));
                goto LABEL_21;
              }
              memcpy((char *)src + 8, &v69[1], 0x88uLL);
              *(_QWORD *)&src[0] = *((_QWORD *)&v69[0] + 1);
              hashbrown::map::HashMap<K,V,S,A>::remove(v62, src);
            }
          }
          v25 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v56);
        }
        while ( v25 );
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v51);
    return 0LL;
  }
  return v18;
}
