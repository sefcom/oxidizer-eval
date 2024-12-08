__int64 __fastcall uu_mv::move_files_into_dir(__int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int128 *v14; // r14
  __int128 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int128 v19; // rax
  __int128 v20; // rax
  __int64 *v21; // r9
  __int64 v22; // rax
  unsigned int v23; // eax
  __int128 v24; // rax
  __int128 v25; // rax
  char v26; // [rsp+7h] [rbp-301h]
  __int128 v27; // [rsp+8h] [rbp-300h] BYREF
  __int64 v28; // [rsp+20h] [rbp-2E8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-2E0h]
  __int128 *v30; // [rsp+30h] [rbp-2D8h]
  __int128 v31; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+48h] [rbp-2C0h]
  __int64 (__fastcall *v33)(); // [rsp+50h] [rbp-2B8h]
  __int64 v34; // [rsp+70h] [rbp-298h]
  __int64 v35; // [rsp+78h] [rbp-290h] BYREF
  __int128 v36; // [rsp+80h] [rbp-288h]
  __int128 v37; // [rsp+90h] [rbp-278h] BYREF
  __int128 *v38; // [rsp+A0h] [rbp-268h]
  char v39[8]; // [rsp+B0h] [rbp-258h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-250h]
  __int128 v41; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-230h]
  __int128 v43; // [rsp+E0h] [rbp-228h] BYREF
  __int128 *v44; // [rsp+F0h] [rbp-218h]
  __int64 (__fastcall *v45)(); // [rsp+F8h] [rbp-210h]
  __int64 v46; // [rsp+100h] [rbp-208h]
  __int128 v47; // [rsp+170h] [rbp-198h] BYREF
  __int64 v48; // [rsp+180h] [rbp-188h]
  _BYTE v49[24]; // [rsp+190h] [rbp-178h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+1A8h] [rbp-160h]
  __int128 *v51; // [rsp+1B0h] [rbp-158h]
  __int64 (__fastcall *v52)(); // [rsp+1B8h] [rbp-150h]
  __int128 v53; // [rsp+240h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+250h] [rbp-B8h]
  _QWORD v55[2]; // [rsp+260h] [rbp-A8h] BYREF
  _QWORD v56[2]; // [rsp+270h] [rbp-98h] BYREF
  _BYTE v57[48]; // [rsp+280h] [rbp-88h] BYREF
  __int128 v58; // [rsp+2B0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+2C0h] [rbp-48h]
  __int128 v60; // [rsp+2C8h] [rbp-40h] BYREF

  v34 = a5;
  std::thread::local::LocalKey<T>::try_with(v49);
  v7 = core::result::Result<T,E>::expect(v49);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v57, a2, v7, v8);
  v29 = a3;
  v30 = a4;
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    *(_QWORD *)&v43 = 1LL;
    *((_QWORD *)&v43 + 1) = v29;
    v44 = v30;
    LOBYTE(v45) = 1;
    <T as alloc::string::ToString>::to_string(&v31, &v43);
    v50 = v32;
    *(_OWORD *)&v49[8] = v31;
    *(_QWORD *)v49 = 7LL;
    v9 = alloc::boxed::Box<T>::new(v49);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v57);
    return v9;
  }
  std::fs::canonicalize(v49, v29, v30);
  if ( *(_QWORD *)v49 == 0x8000000000000000LL )
  {
    uu_mv::move_files_into_dir::{{closure}}(&v47, v29, v30, *(_QWORD *)&v49[8]);
  }
  else
  {
    v48 = *(_QWORD *)&v49[16];
    v47 = *(_OWORD *)v49;
  }
  if ( !*(_BYTE *)(v34 + 51) )
  {
    v28 = 0LL;
    goto LABEL_10;
  }
  v28 = core::ops::function::FnOnce::call_once();
  if ( a2 <= 1 )
  {
LABEL_10:
    *(_QWORD *)&v37 = 0LL;
    goto LABEL_11;
  }
  indicatif::progress_bar::ProgressBar::new(&v31, a2);
  indicatif::style::ProgressStyle::with_template(v49, aMovingMsgWideB, 35LL);
  core::result::Result<T,E>::unwrap(&v43, v49, &off_187358);
  indicatif::progress_bar::ProgressBar::with_style(v49, &v31, &v43);
  indicatif::multi::MultiProgress::add(&v43, &v28, v49);
  v37 = v43;
  v38 = v44;
LABEL_11:
  v55[0] = a1;
  v55[1] = a1 + 24 * a2;
  v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v55);
  if ( v11 )
  {
    v12 = v11;
    v26 = *(_BYTE *)(v34 + 54);
    do
    {
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(__int128 **)(v12 + 16);
      std::fs::metadata(v49, v13, v14);
      if ( *(_DWORD *)v49 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v49);
        *(_QWORD *)&v43 = 1LL;
        *((_QWORD *)&v43 + 1) = v13;
        v44 = v14;
        LOBYTE(v45) = 1;
        <T as alloc::string::ToString>::to_string(&v31, &v43);
        v50 = v32;
        *(_OWORD *)&v49[8] = v31;
        *(_QWORD *)v49 = 0LL;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v15 = uucore::util_name();
        v27 = v15;
        *(_QWORD *)&v31 = &v27;
        *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
        v32 = (__int64 (__fastcall *)())v49;
        v33 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
        *(_QWORD *)&v43 = &unk_187370;
        *((_QWORD *)&v43 + 1) = 3LL;
        v46 = 0LL;
        v44 = &v31;
        v45 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v43);
        core::ptr::drop_in_place<uu_mv::error::MvError>(v49);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v49);
        if ( (_QWORD)v37 )
        {
          std::sys::os_str::bytes::Slice::to_string_lossy(v49, v13, v14);
          <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(&v43, *(_QWORD *)&v49[8], *(_QWORD *)&v49[16]);
          indicatif::progress_bar::ProgressBar::set_message(&v37, &v43);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49);
        }
        v16 = std::path::Path::file_name(v13, v14);
        if ( v16 )
        {
          std::path::Path::join(v39, v29, v30, v16, v17);
          if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(v57, v39) || v26 == 2 )
          {
            std::fs::canonicalize(&v41, v13, v14);
            if ( (_QWORD)v41 == 0x8000000000000000LL )
              goto LABEL_25;
            v53 = v41;
            v54 = v42;
            if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                                     *((_QWORD *)&v41 + 1),
                                     v42,
                                     *((_QWORD *)&v47 + 1),
                                     v48) )
            {
              core::ptr::drop_in_place<std::path::PathBuf>(&v53);
              if ( (_QWORD)v41 == 0x8000000000000000LL )
LABEL_25:
                core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v41);
              v21 = (__int64 *)v28;
              if ( v28 )
                v21 = &v28;
              v35 = uu_mv::rename(v13, v14, v40, *((_QWORD *)&v40 + 1), v34, v21);
              if ( v35 )
              {
                <T as alloc::string::ToString>::to_string(v49, &v35);
                if ( *(_QWORD *)&v49[16] )
                {
                  core::ptr::drop_in_place<alloc::string::String>(v49);
                  v22 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v35,
                          v12,
                          v39);
                  if ( v28 )
                  {
                    indicatif::multi::MultiProgress::suspend(&v28, v22);
                  }
                  else
                  {
                    *(_QWORD *)&v27 = v22;
                    uucore::mods::error::set_exit_code(1LL);
                    *(_QWORD *)&v25 = uucore::util_name();
                    v31 = v25;
                    *(_QWORD *)&v43 = &v31;
                    *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
                    v44 = &v27;
                    v45 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    *(_QWORD *)v49 = &unk_187370;
                    *(_QWORD *)&v49[8] = 3LL;
                    v51 = 0LL;
                    *(_QWORD *)&v49[16] = &v43;
                    v50 = (__int64 (__fastcall *)())(&dword_0 + 2);
                    std::io::stdio::_eprint(v49);
                    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v27);
                  }
                }
                else
                {
                  core::ptr::drop_in_place<alloc::string::String>(v49);
                  *(_QWORD *)v49 = v35;
                  uucore::mods::error::set_exit_code(1LL);
                  core::ptr::drop_in_place<std::io::error::Error>(v49);
                }
              }
              if ( (_QWORD)v37 )
                indicatif::progress_bar::ProgressBar::inc(&v37, 1LL);
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v49, v39);
              v44 = *(__int128 **)&v49[16];
              v43 = *(_OWORD *)v49;
              hashbrown::map::HashMap<K,V,S,A>::insert(v57, &v43);
              core::ptr::drop_in_place<std::path::PathBuf>(v39);
              goto LABEL_14;
            }
            v56[0] = v13;
            v56[1] = v14;
            uucore::features::fs::normalize_path(&v35, v29, v30);
            v60 = v36;
            std::path::Path::components(v49, *((_QWORD *)&v47 + 1), v48);
            LOBYTE(v43) = 10;
            core::iter::traits::iterator::Iterator::fold(&v31, v49, &v43);
            core::option::Option<T>::map_or_else(&v27, &v31, v29, v30);
            *(_QWORD *)v49 = v56;
            *(_QWORD *)&v49[8] = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v49[16] = &v60;
            v50 = <std::path::Display as core::fmt::Display>::fmt;
            v51 = &v27;
            v52 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v43 = &off_1873D0;
            *((_QWORD *)&v43 + 1) = 4LL;
            v46 = 0LL;
            v44 = (__int128 *)v49;
            v45 = (__int64 (__fastcall *)())(&dword_0 + 3);
            core::option::Option<T>::map_or_else(&v31, &v43);
            core::ptr::drop_in_place<alloc::string::String>(&v27);
            core::ptr::drop_in_place<std::path::PathBuf>(&v35);
            *(_QWORD *)&v49[16] = v32;
            *(_OWORD *)v49 = v31;
            LODWORD(v50) = 1;
            *(_QWORD *)&v27 = alloc::boxed::Box<T>::new(v49);
            *((_QWORD *)&v27 + 1) = &off_1871D0;
            v23 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v27);
            uucore::mods::error::set_exit_code(v23);
            *(_QWORD *)&v24 = uucore::util_name();
            v31 = v24;
            *(_QWORD *)&v43 = &v31;
            *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
            v44 = &v27;
            v45 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &unk_187370;
            *(_QWORD *)&v49[8] = 3LL;
            v51 = 0LL;
            *(_QWORD *)&v49[16] = &v43;
            v50 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(v49);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v27, *((_QWORD *)&v27 + 1));
            core::ptr::drop_in_place<std::path::PathBuf>(&v53);
            if ( (_QWORD)v41 == 0x8000000000000000LL )
              core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v41);
          }
          else
          {
            v27 = v40;
            *(_QWORD *)&v31 = v13;
            *((_QWORD *)&v31 + 1) = v14;
            *(_QWORD *)&v43 = &v27;
            *((_QWORD *)&v43 + 1) = <std::path::Display as core::fmt::Display>::fmt;
            v44 = &v31;
            v45 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &off_1873A0;
            *(_QWORD *)&v49[8] = 3LL;
            v51 = 0LL;
            *(_QWORD *)&v49[16] = &v43;
            v50 = (__int64 (__fastcall *)())(&dword_0 + 2);
            core::option::Option<T>::map_or_else(&v58, v49);
            LODWORD(v50) = 1;
            *(_OWORD *)v49 = v58;
            *(_QWORD *)&v49[16] = v59;
            *(_QWORD *)&v27 = alloc::boxed::Box<T>::new(v49);
            *((_QWORD *)&v27 + 1) = &off_1871D0;
            v18 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v27);
            uucore::mods::error::set_exit_code(v18);
            *(_QWORD *)&v19 = uucore::util_name();
            v31 = v19;
            *(_QWORD *)&v43 = &v31;
            *((_QWORD *)&v43 + 1) = <&T as core::fmt::Display>::fmt;
            v44 = &v27;
            v45 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v49 = &unk_187370;
            *(_QWORD *)&v49[8] = 3LL;
            v51 = 0LL;
            *(_QWORD *)&v49[16] = &v43;
            v50 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(v49);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v27, *((_QWORD *)&v27 + 1));
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v39);
        }
        else
        {
          *(_QWORD *)&v43 = 1LL;
          *((_QWORD *)&v43 + 1) = v13;
          v44 = v14;
          LOBYTE(v45) = 1;
          <T as alloc::string::ToString>::to_string(&v31, &v43);
          v50 = v32;
          *(_OWORD *)&v49[8] = v31;
          *(_QWORD *)v49 = 0LL;
          uucore::mods::error::set_exit_code(1LL);
          *(_QWORD *)&v20 = uucore::util_name();
          v27 = v20;
          *(_QWORD *)&v31 = &v27;
          *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
          v32 = (__int64 (__fastcall *)())v49;
          v33 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
          *(_QWORD *)&v43 = &unk_187370;
          *((_QWORD *)&v43 + 1) = 3LL;
          v46 = 0LL;
          v44 = &v31;
          v45 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_eprint(&v43);
          core::ptr::drop_in_place<uu_mv::error::MvError>(v49);
        }
      }
LABEL_14:
      v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v55);
    }
    while ( v12 );
  }
  core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v37);
  core::ptr::drop_in_place<core::option::Option<indicatif::multi::MultiProgress>>(&v28);
  core::ptr::drop_in_place<std::path::PathBuf>(&v47);
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v57);
  return 0LL;
}
