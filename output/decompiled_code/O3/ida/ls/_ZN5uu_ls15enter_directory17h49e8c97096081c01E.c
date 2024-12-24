        _QWORD *a8)
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
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  char v48; // [rsp+1Fh] [rbp-549h]
  char v50; // [rsp+2Ch] [rbp-53Ch]
  unsigned __int8 v51; // [rsp+2Ch] [rbp-53Ch]
  __int64 v52; // [rsp+30h] [rbp-538h] BYREF
  __int64 v53; // [rsp+38h] [rbp-530h]
  __int64 v54; // [rsp+40h] [rbp-528h]
  __int64 v55; // [rsp+48h] [rbp-520h] BYREF
  char **v56; // [rsp+50h] [rbp-518h]
  __int64 v57; // [rsp+58h] [rbp-510h]
  __int64 v58; // [rsp+60h] [rbp-508h] BYREF
  char v59; // [rsp+68h] [rbp-500h]
  __int128 v60; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v61; // [rsp+80h] [rbp-4E8h]
  __int64 v62; // [rsp+90h] [rbp-4D8h]
  _BYTE v63[24]; // [rsp+A0h] [rbp-4C8h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-4B0h]
  __int64 v65; // [rsp+C8h] [rbp-4A0h]
  __int64 v66; // [rsp+D0h] [rbp-498h]
  __int64 *v67; // [rsp+D8h] [rbp-490h] BYREF
  __int64 (__fastcall *v68)(); // [rsp+E0h] [rbp-488h]
  _OWORD *v69; // [rsp+E8h] [rbp-480h]
  __int64 (__fastcall *v70)(); // [rsp+F0h] [rbp-478h]
  _BYTE *v71; // [rsp+F8h] [rbp-470h]
  __int64 v72; // [rsp+100h] [rbp-468h] BYREF
  _OWORD v73[19]; // [rsp+108h] [rbp-460h] BYREF
  __int64 v74; // [rsp+238h] [rbp-330h]
  char v75; // [rsp+240h] [rbp-328h]
  __int128 src[19]; // [rsp+248h] [rbp-320h] BYREF
  __int64 v77; // [rsp+378h] [rbp-1F0h] BYREF
  _BYTE dest[136]; // [rsp+380h] [rbp-1E8h] BYREF
  _BYTE v79[352]; // [rsp+408h] [rbp-160h] BYREF

  v66 = a6;
  v74 = a2;
  v75 = a3;
  v48 = a4[240];
  v71 = a4;
  if ( v48 )
  {
    v55 = 0LL;
    v56 = (char **)&byte_8;
    v57 = 0LL;
    v8 = a4[235];
    v9 = a4[242];
  }
  else
  {
    v54 = a2;
    v50 = a3;
    v11 = alloc::alloc::Global::alloc_impl(608LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 608LL);
    v12 = v11;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v73, a1 + 24);
    *(_QWORD *)&v61 = *(_QWORD *)&v73[1];
    v60 = v73[0];
    *(_QWORD *)&v73[0] = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(src, asc_34871, 1LL);
    *(_QWORD *)&v63[16] = *(_QWORD *)&src[1];
    *(_OWORD *)v63 = src[0];
    v9 = a4[242];
    v13 = a4[235];
    uu_ls::PathData::new((__int64)src, (__int64)&v60, (__int64)v73, (__int128 *)v63, v13, v9, 0);
    std::path::Path::join(&v67, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), asc_34872, 2LL);
    *(_QWORD *)v63 = 0LL;
    std::sys::os_str::bytes::Slice::to_owned(v73, asc_34872, 2LL);
    *(_QWORD *)&v61 = *(_QWORD *)&v73[1];
    v60 = v73[0];
    uu_ls::PathData::new((__int64)v73, (__int64)&v67, (__int64)v63, &v60, v13, v9, 0);
    memcpy((void *)v12, src, 0x130uLL);
    memcpy((void *)(v12 + 304), v73, 0x130uLL);
    alloc::slice::hack::into_vec(&v55, v12, 2LL);
    a3 = v50;
    a2 = v54;
    v8 = v13;
  }
  v58 = a2;
  v59 = a3;
  LODWORD(v54) = v8;
  v51 = v9;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v63, &v58);
    if ( !*(_QWORD *)v63 )
      break;
    v14 = *(_QWORD *)&v63[16];
    if ( *(_QWORD *)&v63[8] )
    {
      v62 = v65;
      v61 = v64;
      v60 = *(_OWORD *)&v63[8];
      if ( (unsigned __int8)uu_ls::should_display((__int64)&v60, (__int64)v71) )
      {
        std::fs::DirEntry::path(&v67, &v60);
        *((_QWORD *)&v73[2] + 1) = v62;
        *(_OWORD *)((char *)&v73[1] + 8) = v61;
        *(_OWORD *)((char *)v73 + 8) = v60;
        *(_QWORD *)&v73[0] = 1LL;
        *(_QWORD *)&src[0] = 0x8000000000000000LL;
        uu_ls::PathData::new((__int64)v79, (__int64)&v67, (__int64)v73, src, v54, v51, 0);
        alloc::vec::Vec<T,A>::push(&v55, v79);
      }
      else
      {
        core::ptr::drop_in_place<std::fs::DirEntry>(&v60);
      }
    }
    else
    {
      v72 = *(_QWORD *)&v63[16];
      v15 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
      if ( v15 )
      {
        v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        core::ptr::drop_in_place<std::io::error::Error>(&v72);
        core::ptr::drop_in_place<std::fs::ReadDir>(&v58);
        goto LABEL_21;
      }
      *((_QWORD *)&v73[0] + 1) = v14;
      LOBYTE(v73[0]) = 1;
      uucore::mods::error::set_exit_code(1LL);
      v52 = uucore::util_name();
      v53 = v16;
      v67 = &v52;
      v68 = <&T as core::fmt::Display>::fmt;
      v69 = v73;
      v70 = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_212798;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v67;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<uu_ls::LsError>(v73);
    }
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v58);
  v17 = v71;
  uu_ls::sort_entries((__int64)v56, v57, v71, a5);
  if ( v17[248] == 1 || v17[234] )
  {
    uu_ls::return_total(v73, v56, v57, (__int64)v17, a5);
    v18 = *((_QWORD *)&v73[0] + 1);
    if ( *(_QWORD *)&v73[0] == 0x8000000000000000LL )
      goto LABEL_21;
    src[0] = v73[0];
    *(_QWORD *)&src[1] = *(_QWORD *)&v73[1];
    *(_QWORD *)v63 = *((_QWORD *)&v73[0] + 1);
    *(_QWORD *)&v63[8] = *(_QWORD *)&v73[1];
    *(_QWORD *)&v60 = v63;
    *((_QWORD *)&v60 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v73[0] = &xmmword_23D10;
    *((_QWORD *)&v73[0] + 1) = 1LL;
    *(_QWORD *)&v73[1] = &v60;
    *(_OWORD *)((char *)&v73[1] + 8) = 1uLL;
    v22 = std::io::Write::write_fmt(a5, v73, v19, 0x8000000000000000LL, v20, v21);
    if ( v22 )
    {
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
      core::ptr::drop_in_place<alloc::string::String>(src);
      goto LABEL_21;
    }
    if ( v17[238] )
    {
      v45 = a7[6];
      if ( !v45 )
      {
        v46 = a7[2];
        if ( v46 )
          v45 = *(_QWORD *)(16 * v46 + a7[1] - 8) + 1LL;
        else
          v45 = 0LL;
      }
      a7[6] = v45 + *(_QWORD *)&src[1] + 2;
    }
    core::ptr::drop_in_place<alloc::string::String>(src);
  }
  v18 = uu_ls::display_items((__int64)v56, v57, (__int64)v17, a5, (__int64)a7, a8);
  if ( v18 )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v55);
  }
  else
  {
    if ( v17[230] )
    {
      *(_QWORD *)&v60 = v56;
      *((_QWORD *)&v60 + 1) = &v56[38 * v57];
      *(_QWORD *)&v61 = 2 * (unsigned int)(v48 == 0);
      v24 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v60);
      if ( v24 )
      {
        v25 = v24;
        LOBYTE(v54) = v17[238];
        do
        {
          std::fs::read_dir(&v58, v25 + 24);
          if ( v59 == 2 )
          {
            v26 = v58;
            v52 = v58;
            v27 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
            if ( v27 )
            {
              v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
              core::ptr::drop_in_place<std::io::error::Error>(&v52);
              goto LABEL_21;
            }
            *(_QWORD *)v63 = v26;
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
            *(_QWORD *)&v73[2] = *(_QWORD *)&src[1];
            v73[1] = src[0];
            v28 = *(_BYTE *)(v25 + 297);
            *((_QWORD *)&v73[0] + 1) = v26;
            BYTE1(v73[0]) = v28;
            LOBYTE(v73[0]) = 2;
            uucore::mods::error::set_exit_code(2 - (unsigned int)(v28 == 0));
            v67 = (__int64 *)uucore::util_name();
            v68 = v29;
            *(_QWORD *)v63 = &v67;
            *(_QWORD *)&v63[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v63[16] = v73;
            *(_QWORD *)&v64 = <uu_ls::LsError as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &unk_212798;
            *((_QWORD *)&src[0] + 1) = 3LL;
            *(_QWORD *)&src[2] = 0LL;
            *(_QWORD *)&src[1] = v63;
            *((_QWORD *)&src[1] + 1) = 2LL;
            std::io::stdio::_eprint(src);
            core::ptr::drop_in_place<uu_ls::LsError>(v73);
          }
          else
          {
            v52 = v58;
            LOBYTE(v53) = v59;
            uucore::features::fs::FileInformation::from_path(v73, v25 + 24, *(unsigned __int8 *)(v25 + 296));
            if ( *(_QWORD *)&v73[0] )
            {
              v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v73[0] + 1));
LABEL_53:
              v18 = v47;
LABEL_54:
              core::ptr::drop_in_place<std::fs::ReadDir>(&v52);
              goto LABEL_21;
            }
            memcpy(dest, &v73[1], sizeof(dest));
            v77 = *((_QWORD *)&v73[0] + 1);
            if ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(v66, &v77) )
            {
              v34 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a5);
              if ( v34 )
                goto LABEL_52;
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v25 + 24);
              *((_QWORD *)&v73[1] + 1) = *(_QWORD *)&src[1];
              *(_OWORD *)((char *)v73 + 8) = src[0];
              LOBYTE(v73[0]) = 5;
              uucore::mods::error::set_exit_code(2LL);
              v67 = (__int64 *)uucore::util_name();
              v68 = v35;
              *(_QWORD *)v63 = &v67;
              *(_QWORD *)&v63[8] = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v63[16] = v73;
              *(_QWORD *)&v64 = <uu_ls::LsError as core::fmt::Display>::fmt;
              *(_QWORD *)&src[0] = &unk_212798;
              *((_QWORD *)&src[0] + 1) = 3LL;
              *(_QWORD *)&src[2] = 0LL;
              *(_QWORD *)&src[1] = v63;
              *((_QWORD *)&src[1] + 1) = 2LL;
              std::io::stdio::_eprint(src);
              core::ptr::drop_in_place<uu_ls::LsError>(v73);
              core::ptr::drop_in_place<std::fs::ReadDir>(&v52);
            }
            else
            {
              *(_QWORD *)&v73[0] = &off_212788;
              *((_QWORD *)&v73[0] + 1) = 1LL;
              v73[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v73, v30, v31, v32, v33);
              if ( v34 )
                goto LABEL_52;
              if ( (_BYTE)v54 )
              {
                a7[6] = 2LL;
                v18 = uu_ls::dired::indent(a5, (__int64)v73, v36, v37, v38, v39);
                if ( v18 )
                  goto LABEL_54;
                std::sys::os_str::bytes::Slice::to_string_lossy(v73, *(_QWORD *)(v25 + 32));
                v40 = *(_QWORD *)&v73[1];
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v73);
                uu_ls::dired::calculate_subdired(a7, v40);
                a7[6] += v40 + 3;
              }
              uu_ls::show_dir_name(v25, a5, (__int64)v17);
              *(_QWORD *)&v73[0] = &off_212788;
              *((_QWORD *)&v73[0] + 1) = 1LL;
              v73[1] = 8uLL;
              v34 = std::io::Write::write_fmt(a5, v73, v41, v42, v43, v44);
              if ( v34 )
              {
LABEL_52:
                v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
                goto LABEL_53;
              }
              v18 = uu_ls::enter_directory(v25, v52, v53, v17, a5, v66, a7, a8);
              if ( v18 )
                goto LABEL_21;
              uucore::features::fs::FileInformation::from_path(v73, v25 + 24, *(unsigned __int8 *)(v25 + 296));
              if ( *(_QWORD *)&v73[0] )
              {
                v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v73[0] + 1));
                goto LABEL_21;
              }
              memcpy((char *)src + 8, &v73[1], 0x88uLL);
              *(_QWORD *)&src[0] = *((_QWORD *)&v73[0] + 1);
              hashbrown::map::HashMap<K,V,S,A>::remove(v66, src);
            }
          }
          v25 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v60);
        }
        while ( v25 );
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v55);
    return 0LL;
  }
  return v18;
}
