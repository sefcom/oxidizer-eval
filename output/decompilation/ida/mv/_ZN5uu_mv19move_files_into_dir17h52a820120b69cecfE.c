__int64 __fastcall uu_mv::move_files_into_dir(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int8 v10; // cl
  __int64 v11; // rbp
  __int128 *v12; // r15
  __int128 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int128 v39; // rax
  unsigned __int8 v41; // [rsp+17h] [rbp-261h]
  __int128 v42; // [rsp+18h] [rbp-260h] BYREF
  __int128 v43; // [rsp+28h] [rbp-250h] BYREF
  _BYTE *v44; // [rsp+38h] [rbp-240h]
  __int64 (__fastcall *v45)(); // [rsp+40h] [rbp-238h]
  __int64 v46; // [rsp+48h] [rbp-230h] BYREF
  __int64 v47; // [rsp+50h] [rbp-228h] BYREF
  __int128 v48; // [rsp+58h] [rbp-220h]
  __int64 v49; // [rsp+68h] [rbp-210h] BYREF
  unsigned __int8 *v50; // [rsp+70h] [rbp-208h]
  __int64 v51; // [rsp+78h] [rbp-200h]
  __int128 *v52; // [rsp+80h] [rbp-1F8h]
  int v53; // [rsp+88h] [rbp-1F0h]
  int v54; // [rsp+8Ch] [rbp-1ECh]
  __int128 v55; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 *v56; // [rsp+A0h] [rbp-1D8h]
  __int128 v57; // [rsp+B0h] [rbp-1C8h] BYREF
  __int128 *v58; // [rsp+C0h] [rbp-1B8h]
  __int64 (__fastcall *v59)(); // [rsp+C8h] [rbp-1B0h]
  __int64 v60; // [rsp+D0h] [rbp-1A8h]
  _BYTE dest[24]; // [rsp+140h] [rbp-138h] BYREF
  __int64 v62; // [rsp+158h] [rbp-120h]
  __int64 v63; // [rsp+160h] [rbp-118h]
  __int64 v64; // [rsp+1F0h] [rbp-88h]
  __int64 v65; // [rsp+1F8h] [rbp-80h]
  __int128 v66; // [rsp+200h] [rbp-78h] BYREF
  __int64 v67; // [rsp+210h] [rbp-68h]
  _BYTE v68[96]; // [rsp+218h] [rbp-60h] BYREF

  v50 = a5;
  v65 = a1;
  v7 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v68, a2, v7, v8);
  v51 = a3;
  v52 = (__int128 *)a4;
  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    if ( v50[51] )
    {
      v46 = indicatif::multi::MultiProgress::new();
      if ( a2 > 1 )
      {
        indicatif::progress_bar::ProgressBar::new(&v43, a2);
        indicatif::style::ProgressStyle::with_template(dest, aMovingMsgWideB, 35LL);
        core::result::Result<T,E>::unwrap(&v57, dest, &off_141988);
        indicatif::progress_bar::ProgressBar::with_style(dest, &v43, &v57);
        indicatif::multi::MultiProgress::add(&v57, &v46, dest);
        v55 = v57;
        v56 = v58;
LABEL_8:
        v10 = v50[54];
        v64 = 24 * a2;
        v11 = 0LL;
        v12 = &v57;
        v41 = v10;
        v54 = v10;
        v53 = v50[48];
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = v12;
            v14 = *(_QWORD *)(v65 + v11 + 8);
            v15 = *(_QWORD *)(v65 + v11 + 16);
            std::fs::metadata(dest);
            v16 = *(_DWORD *)dest;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v14);
            if ( v16 != 2 )
              break;
            *(_QWORD *)&v57 = 1LL;
            *((_QWORD *)&v57 + 1) = v14;
            v58 = (__int128 *)v15;
            LOBYTE(v59) = 1;
            <T as alloc::string::SpecToString>::spec_to_string(&v43, v13);
            v62 = (__int64)v44;
            *(_OWORD *)&dest[8] = v43;
            *(_QWORD *)dest = 0LL;
            uucore::mods::error::set_exit_code(1LL);
            v12 = v13;
            v47 = uucore::util_name(1LL, v13, v17, v18);
            *(_QWORD *)&v48 = v19;
            *(_QWORD *)&v43 = &v47;
            *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
            v44 = dest;
            v45 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
            *(_QWORD *)&v57 = &unk_1416A0;
            *((_QWORD *)&v57 + 1) = 3LL;
            v60 = 0LL;
            v58 = &v43;
            v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(v13);
LABEL_9:
            core::ptr::drop_in_place<uu_mv::error::MvError>(dest);
            v11 += 24LL;
            if ( v64 == v11 )
              goto LABEL_32;
          }
          if ( (_QWORD)v55 )
          {
            alloc::string::String::from_utf8_lossy(dest, v14, v15);
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v13, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
            indicatif::progress_bar::ProgressBar::set_message(v55, v13);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(dest);
          }
          v20 = std::path::Path::file_name(v14, v15);
          if ( !v20 )
          {
            *(_QWORD *)&v57 = 1LL;
            *((_QWORD *)&v57 + 1) = v14;
            v58 = (__int128 *)v15;
            LOBYTE(v59) = 1;
            <T as alloc::string::SpecToString>::spec_to_string(&v43, v13);
            v62 = (__int64)v44;
            *(_OWORD *)&dest[8] = v43;
            *(_QWORD *)dest = 0LL;
            uucore::mods::error::set_exit_code(1LL);
            v12 = v13;
            *(_QWORD *)&v29 = uucore::util_name(1LL, v13, v27, v28);
            v42 = v29;
            *(_QWORD *)&v43 = &v42;
            *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
            v44 = dest;
            v45 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
            *(_QWORD *)&v57 = &unk_1416A0;
            *((_QWORD *)&v57 + 1) = 3LL;
            v60 = 0LL;
            v58 = &v43;
            v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(v13);
            goto LABEL_9;
          }
          std::path::Path::join(&v47, v51, v52, v20, v21);
          v12 = v13;
          if ( (v41 == 2) | (hashbrown::map::HashMap<K,V,S,A>::get_inner(v68, &v47) == 0) )
          {
            *(_QWORD *)&v22 = uu_mv::assert_not_same_file(v14, v15, v51, (__int64)v52, 1, v53, v54);
            if ( (_QWORD)v22 )
            {
              v42 = v22;
              v23 = (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)&v22 + 1) + 88LL))(v22);
              uucore::mods::error::set_exit_code(v23);
              *(_QWORD *)&v26 = uucore::util_name(v23, v15, v24, v25);
              v43 = v26;
              *(_QWORD *)&v57 = &v43;
              *((_QWORD *)&v57 + 1) = <&T as core::fmt::Display>::fmt;
              v58 = &v42;
              v59 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              *(_QWORD *)dest = &unk_1416A0;
              *(_QWORD *)&dest[8] = 3LL;
              v63 = 0LL;
              *(_QWORD *)&dest[16] = v13;
              v62 = 2LL;
              std::io::stdio::_eprint(dest);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                v42,
                *((_QWORD *)&v42 + 1));
            }
            else
            {
              core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
                0LL,
                *((_QWORD *)&v22 + 1));
              v34 = (__int64 *)v46;
              if ( v46 )
                v34 = &v46;
              v49 = uu_mv::rename(v14, v15, v48, *((_QWORD *)&v48 + 1), v50, v34);
              if ( v49 )
              {
                <T as alloc::string::SpecToString>::spec_to_string(dest, &v49);
                v35 = *(_QWORD *)&dest[16];
                core::ptr::drop_in_place<alloc::string::String>(dest);
                if ( v35 )
                {
                  v36 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v49,
                          v14,
                          v15,
                          v48,
                          *((_QWORD *)&v48 + 1));
                  v12 = v13;
                  if ( v46 )
                  {
                    indicatif::multi::MultiProgress::suspend(v46, v36);
                  }
                  else
                  {
                    *(_QWORD *)&v42 = v36;
                    uucore::mods::error::set_exit_code(1LL);
                    *(_QWORD *)&v39 = uucore::util_name(1LL, v14, v37, v38);
                    v43 = v39;
                    *(_QWORD *)&v57 = &v43;
                    *((_QWORD *)&v57 + 1) = <&T as core::fmt::Display>::fmt;
                    v58 = &v42;
                    v59 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    *(_QWORD *)dest = &unk_1416A0;
                    *(_QWORD *)&dest[8] = 3LL;
                    v63 = 0LL;
                    *(_QWORD *)&dest[16] = v13;
                    v62 = 2LL;
                    std::io::stdio::_eprint(dest);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v42);
                  }
                }
                else
                {
                  *(_QWORD *)dest = v49;
                  uucore::mods::error::set_exit_code(1LL);
                  v12 = v13;
                  core::ptr::drop_in_place<std::io::error::Error>(dest);
                }
              }
              if ( (_QWORD)v55 )
                indicatif::progress_bar::ProgressBar::inc(&v55, 1LL);
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, v48, *((_QWORD *)&v48 + 1));
              v58 = *(__int128 **)&dest[16];
              v57 = *(_OWORD *)dest;
              hashbrown::map::HashMap<K,V,S,A>::insert(v68, v12);
            }
          }
          else
          {
            v42 = v48;
            *(_QWORD *)&v43 = v14;
            *((_QWORD *)&v43 + 1) = v15;
            *(_QWORD *)&v57 = &v42;
            *((_QWORD *)&v57 + 1) = <std::path::Display as core::fmt::Display>::fmt;
            v58 = &v43;
            v59 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)dest = &off_141958;
            *(_QWORD *)&dest[8] = 3LL;
            v63 = 0LL;
            *(_QWORD *)&dest[16] = v13;
            v62 = 2LL;
            core::option::Option<T>::map_or_else(&v66, dest);
            LODWORD(v62) = 1;
            *(_OWORD *)dest = v66;
            *(_QWORD *)&dest[16] = v67;
            *(_QWORD *)&v42 = alloc::boxed::Box<T>::new(dest);
            *((_QWORD *)&v42 + 1) = &off_141810;
            v30 = (unsigned int)<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v42);
            uucore::mods::error::set_exit_code(v30);
            *(_QWORD *)&v33 = uucore::util_name(v30, dest, v31, v32);
            v43 = v33;
            *(_QWORD *)&v57 = &v43;
            *((_QWORD *)&v57 + 1) = <&T as core::fmt::Display>::fmt;
            v58 = &v42;
            v59 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)dest = &unk_1416A0;
            *(_QWORD *)&dest[8] = 3LL;
            v63 = 0LL;
            *(_QWORD *)&dest[16] = v13;
            v62 = 2LL;
            std::io::stdio::_eprint(dest);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v42,
              *((_QWORD *)&v42 + 1));
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v47, v48);
          v11 += 24LL;
          if ( v64 == v11 )
            goto LABEL_32;
        }
      }
    }
    else
    {
      v46 = 0LL;
    }
    *(_QWORD *)&v55 = 0LL;
    if ( a2 )
      goto LABEL_8;
LABEL_32:
    core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v55);
    core::ptr::drop_in_place<core::option::Option<indicatif::multi::MultiProgress>>(&v46);
    v9 = 0LL;
  }
  else
  {
    *(_QWORD *)&v57 = 1LL;
    *((_QWORD *)&v57 + 1) = v51;
    v58 = v52;
    LOBYTE(v59) = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v43, &v57);
    v62 = (__int64)v44;
    *(_OWORD *)&dest[8] = v43;
    *(_QWORD *)dest = 6LL;
    v9 = alloc::boxed::Box<T>::new(dest);
  }
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v68);
  return v9;
}