__int64 __fastcall uu_cksum::cksum(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 (__fastcall *v4)(); // rdx
  __int64 v5; // r14
  __int64 (__fastcall *v6)(); // r12
  __int64 (__fastcall *v7)(); // rdx
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall **v11)(); // rdx
  __int128 v12; // rax
  unsigned int v13; // eax
  __int128 v14; // rax
  __int64 *v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  const char *v30; // rax
  unsigned __int8 v31; // bp
  __int64 *v32; // r15
  __int64 (__fastcall **v33)(); // r13
  __int64 v34; // rax
  char *v35; // rbx
  __int64 *v36; // rax
  const char *v37; // rcx
  const char *v38; // rax
  __int64 v39; // rcx
  char *v40; // rdx
  __int64 v41; // rax
  char v42; // al
  char v43; // cl
  __int64 v44; // r15
  const char *v45; // rax
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 (__fastcall *v49)(); // r12
  __int64 v50; // rax
  char v51; // al
  unsigned int v52; // eax
  char v53; // bp
  __int64 v54; // r14
  __int64 v55; // rax
  __int16 v56; // [rsp+Eh] [rbp-24Ah] BYREF
  __int128 v57; // [rsp+10h] [rbp-248h] BYREF
  __int64 **v58; // [rsp+20h] [rbp-238h]
  __int64 (__fastcall *v59)(); // [rsp+28h] [rbp-230h]
  __int128 *v60; // [rsp+30h] [rbp-228h]
  __int64 (__fastcall *v61)(); // [rsp+38h] [rbp-220h]
  __int64 v62; // [rsp+40h] [rbp-218h]
  __int16 v63; // [rsp+48h] [rbp-210h]
  __int128 v64; // [rsp+50h] [rbp-208h] BYREF
  char *v65; // [rsp+60h] [rbp-1F8h]
  __int64 v66; // [rsp+68h] [rbp-1F0h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+70h] [rbp-1E8h]
  __int64 *v68; // [rsp+78h] [rbp-1E0h]
  __int64 (__fastcall *v69)(); // [rsp+80h] [rbp-1D8h]
  void *v70; // [rsp+88h] [rbp-1D0h]
  __int64 v71; // [rsp+90h] [rbp-1C8h]
  __int64 *v72; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 (__fastcall **v73)(); // [rsp+A0h] [rbp-1B8h]
  char *v74; // [rsp+A8h] [rbp-1B0h]
  __int64 (__fastcall *v75)(); // [rsp+B0h] [rbp-1A8h]
  __int64 v76; // [rsp+B8h] [rbp-1A0h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+C0h] [rbp-198h]
  __int64 *v78; // [rsp+C8h] [rbp-190h]
  __int64 v79; // [rsp+D0h] [rbp-188h]
  __int64 v80; // [rsp+D8h] [rbp-180h]
  char **v81; // [rsp+E0h] [rbp-178h]
  __int64 (__fastcall *v82)(); // [rsp+E8h] [rbp-170h]
  _QWORD v83[3]; // [rsp+F0h] [rbp-168h] BYREF
  __int64 *v84; // [rsp+108h] [rbp-150h]
  __int64 v85; // [rsp+110h] [rbp-148h]
  __int64 (__fastcall *v86)(); // [rsp+118h] [rbp-140h] BYREF
  _QWORD v87[3]; // [rsp+120h] [rbp-138h] BYREF
  _QWORD v88[3]; // [rsp+138h] [rbp-120h] BYREF
  _QWORD v89[3]; // [rsp+150h] [rbp-108h] BYREF
  _QWORD v90[3]; // [rsp+168h] [rbp-F0h] BYREF
  _QWORD v91[3]; // [rsp+180h] [rbp-D8h] BYREF
  _QWORD v92[3]; // [rsp+198h] [rbp-C0h] BYREF
  _BYTE v93[32]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v94; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 **v95; // [rsp+1E0h] [rbp-78h]
  _BYTE v96[112]; // [rsp+1E8h] [rbp-70h] BYREF

  v1 = a1;
  core::iter::traits::iterator::Iterator::collect(v83);
  if ( *(_BYTE *)(a1 + 58) == 1 && v83[2] >= 2uLL )
  {
    v2 = alloc::boxed::Box<T>::new(0LL);
    core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v83[0], v83[1]);
    goto LABEL_66;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v93, v83);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v93);
  if ( !v3 )
  {
LABEL_63:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v93);
    v2 = 0LL;
    goto LABEL_66;
  }
  v5 = v3;
  v6 = v4;
  v85 = a1 + 32;
  v84 = (__int64 *)(a1 + 59);
  v81 = &off_162DB0;
  v80 = a1;
  while ( 1 )
  {
    std::path::Path::components(v96, v5, v6);
    std::path::Path::components(&v57, asc_12AB0, 1LL);
    v8 = <std::path::Components as core::cmp::PartialEq>::eq(v96, &v57);
    if ( v8 )
    {
      v9 = std::io::stdio::stdin();
      v10 = alloc::boxed::Box<T>::new(v9);
      v11 = (__int64 (__fastcall **)())&unk_162CC8;
    }
    else if ( (unsigned __int8)std::path::Path::is_dir(v5, v6) )
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v57);
      v10 = alloc::boxed::Box<T>::new(&v57);
      v11 = &off_162C70;
    }
    else
    {
      std::fs::File::open(&v72, v5, v6);
      if ( (_DWORD)v72 == 1 )
      {
        v76 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v73,
                v5,
                v6);
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v12 = uucore::util_name();
        v64 = v12;
        v66 = (__int64)&v64;
        v67 = <&T as core::fmt::Display>::fmt;
        v68 = &v76;
        v69 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v57 = &unk_162AA0;
        *((_QWORD *)&v57 + 1) = 3LL;
        v60 = 0LL;
        v58 = (__int64 **)&v66;
        v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v57);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v76);
        goto LABEL_8;
      }
      v10 = alloc::boxed::Box<T>::new(HIDWORD(v72));
      v11 = &off_162C18;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v96, v10, v11);
    if ( !(unsigned __int8)std::path::Path::is_dir(v5, v6) )
      break;
    v66 = v5;
    v67 = v6;
    *(_QWORD *)&v64 = &v66;
    *((_QWORD *)&v64 + 1) = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v57 = &unk_162AD0;
    *((_QWORD *)&v57 + 1) = 2LL;
    v60 = 0LL;
    v58 = (__int64 **)&v64;
    v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
    core::option::Option<T>::map_or_else(&v94, &v57);
    LODWORD(v59) = 1;
    v57 = v94;
    v58 = v95;
    v72 = (__int64 *)alloc::boxed::Box<T>::new(&v57);
    v73 = &off_1629E8;
    v13 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v72);
    uucore::mods::error::set_exit_code(v13);
    *(_QWORD *)&v14 = uucore::util_name();
    v64 = v14;
    v66 = (__int64)&v64;
    v67 = <&T as core::fmt::Display>::fmt;
    v68 = (__int64 *)&v72;
    v69 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v57 = &unk_162AA0;
    *((_QWORD *)&v57 + 1) = 3LL;
    v60 = 0LL;
    v58 = (__int64 **)&v66;
    v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
    std::io::stdio::_eprint(&v57);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v72, v73);
LABEL_7:
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v96);
LABEL_8:
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v93);
    v6 = v7;
    if ( !v5 )
      goto LABEL_63;
  }
  uucore::features::checksum::digest_reader(&v57, v85, v96, *(_QWORD *)(v1 + 48));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v66,
    &v57);
  v75 = v67;
  v15 = v68;
  if ( __OFSUB__(-v66, 1LL) )
  {
    v2 = (__int64)v75;
    goto LABEL_65;
  }
  v86 = v69;
  v16 = *(unsigned __int8 *)(v1 + 58);
  v82 = v69;
  if ( !v16 )
  {
    v76 = v66;
    v77 = v75;
    v78 = v68;
    goto LABEL_27;
  }
  v79 = v66;
  if ( v16 == 2 )
  {
    v17 = v1;
    v18 = *(_QWORD *)(v1 + 16);
    v19 = *(_QWORD *)(v17 + 24);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aCrc, 3LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aCrc32b, 6LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aSysv, 4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aBsd, 3LL) )
    {
      v76 = v79;
      v77 = v75;
      v78 = v15;
      v1 = v80;
    }
    else
    {
      v65 = (char *)&dword_200 + 2;
      v64 = unk_162D68;
      *(_QWORD *)&v57 = v79;
      *((_QWORD *)&v57 + 1) = v75;
      v58 = (__int64 **)v15;
      <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v66, &v57);
      core::result::Result<T,E>::unwrap(&v57, &v66, &off_162D80);
      v44 = *((_QWORD *)&v57 + 1);
      v1 = v80;
      data_encoding::Encoding::encode(&v76, &v64, *((_QWORD *)&v57 + 1), v58);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v57, v44);
      core::ptr::drop_in_place<data_encoding::Encoding>(v64, *((_QWORD *)&v64 + 1));
    }
LABEL_27:
    v20 = *(_QWORD *)(v1 + 16);
    v21 = *(_QWORD *)(v1 + 24);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aSysv, 4LL) )
    {
      v22 = core::num::<impl u16>::from_ascii_radix(v77, v78);
      v56 = core::result::Result<T,E>::unwrap(v22, &off_162DC8);
      v23 = *(_QWORD *)(v1 + 48);
      if ( !v23 )
      {
        v81 = &off_162DE0;
LABEL_80:
        core::panicking::panic_const::panic_const_div_by_zero(v81);
      }
      if ( (v23 | (unsigned __int64)v82) >> 32 )
      {
        v24 = (unsigned __int64)v82 / v23;
        v25 = (unsigned __int64)v82 % v23;
      }
      else
      {
        v25 = (unsigned int)v82 % (unsigned int)v23;
        v24 = (unsigned int)v82 / (unsigned int)v23;
      }
      v36 = (__int64 *)(v24 - ((v25 == 0) - 1LL));
      v37 = asc_12AC7;
      if ( v8 )
        v37 = (_BYTE *)(&dword_0 + 1);
      v72 = v36;
      v31 = v8 ^ 1;
      *(_QWORD *)&v64 = v37;
      *((_QWORD *)&v64 + 1) = v31;
      *(_QWORD *)&v57 = &v56;
      *((_QWORD *)&v57 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v58 = &v72;
      v59 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v60 = &v64;
      v61 = <&T as core::fmt::Display>::fmt;
      v66 = (__int64)&unk_162AF0;
      v67 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v70 = 0LL;
      v68 = (__int64 *)&v57;
      v69 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(v87, &v66);
      v32 = (__int64 *)v87[0];
      v33 = (__int64 (__fastcall **)())v87[1];
      v34 = 1LL;
      v35 = (char *)v87[2];
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aBsd, 3LL) )
    {
      v26 = core::num::<impl u16>::from_ascii_radix(v77, v78);
      v56 = core::result::Result<T,E>::unwrap(v26, &off_162D98);
      v27 = *(_QWORD *)(v1 + 48);
      if ( !v27 )
        goto LABEL_80;
      if ( (v27 | (unsigned __int64)v82) >> 32 )
      {
        v28 = (unsigned __int64)v82 / v27;
        v29 = (unsigned __int64)v82 % v27;
      }
      else
      {
        v29 = (unsigned int)v82 % (unsigned int)v27;
        v28 = (unsigned int)v82 / (unsigned int)v27;
      }
      v72 = (__int64 *)(v28 - ((v29 == 0) - 1LL));
      v38 = asc_12AC7;
      if ( v8 )
        v38 = (_BYTE *)(&dword_0 + 1);
      v31 = v8 ^ 1;
      *(_QWORD *)&v64 = v38;
      *((_QWORD *)&v64 + 1) = v31;
      *(_QWORD *)&v57 = &v56;
      *((_QWORD *)&v57 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v58 = &v72;
      v59 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v60 = &v64;
      v61 = <&T as core::fmt::Display>::fmt;
      v62 = 0LL;
      v63 = 5;
      v66 = (__int64)&unk_162AF0;
      v67 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v70 = &unk_12F38;
      v71 = 3LL;
      v68 = (__int64 *)&v57;
      v69 = (__int64 (__fastcall *)())&byte_4;
      core::option::Option<T>::map_or_else(v88, &v66);
      v32 = (__int64 *)v88[0];
      v33 = (__int64 (__fastcall **)())v88[1];
      v34 = 1LL;
      v35 = (char *)v88[2];
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aCrc, 3LL)
           || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aCrc32b, 6LL) )
    {
      v30 = asc_12AC7;
      if ( v8 )
        v30 = (_BYTE *)(&dword_0 + 1);
      v31 = v8 ^ 1;
      *(_QWORD *)&v64 = v30;
      *((_QWORD *)&v64 + 1) = v31;
      *(_QWORD *)&v57 = &v76;
      *((_QWORD *)&v57 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v58 = (__int64 **)&v86;
      v59 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v60 = &v64;
      v61 = <&T as core::fmt::Display>::fmt;
      v66 = (__int64)&unk_162AF0;
      v67 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v70 = 0LL;
      v68 = (__int64 *)&v57;
      v69 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(v89, &v66);
      v32 = (__int64 *)v89[0];
      v33 = (__int64 (__fastcall **)())v89[1];
      v34 = 1LL;
      v35 = (char *)v89[2];
    }
    else
    {
      v42 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aBlake2b, 7LL);
      v43 = *(_BYTE *)(v1 + 56);
      if ( v42 )
      {
        if ( (v43 & 1) != 0 )
        {
          if ( (*(_BYTE *)v1 & 1) != 0 )
          {
            v72 = (__int64 *)(8LL * *(_QWORD *)(v1 + 8));
            *(_QWORD *)&v64 = &v72;
            *((_QWORD *)&v64 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            *(_QWORD *)&v57 = &off_162B20;
            *((_QWORD *)&v57 + 1) = 2LL;
            v60 = 0LL;
            v58 = (__int64 **)&v64;
            v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
            core::option::Option<T>::map_or_else(&v66, &v57);
            v32 = (__int64 *)v66;
            v33 = (__int64 (__fastcall **)())v67;
            v35 = (char *)v68;
          }
          else
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v57, aBlake2b_0, 9LL);
            v33 = (__int64 (__fastcall **)())*((_QWORD *)&v57 + 1);
            v32 = (__int64 *)v57;
            v35 = (char *)v58;
          }
          v66 = (__int64)&v76;
          v67 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v57 = &off_162B40;
          *((_QWORD *)&v57 + 1) = 1LL;
          v60 = 0LL;
          v58 = (__int64 **)&v66;
          v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
          core::option::Option<T>::map_or_else(v90, &v57);
          v39 = v90[0];
          v34 = v90[1];
          v31 = 1;
          v40 = (char *)v90[2];
LABEL_49:
          v72 = v32;
          v73 = v33;
          v74 = v35;
          *(_QWORD *)&v64 = v39;
          *((_QWORD *)&v64 + 1) = v34;
          v65 = v40;
          v66 = (__int64)&v72;
          v67 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v57 = &unk_11620;
          *((_QWORD *)&v57 + 1) = 1LL;
          v60 = 0LL;
          v58 = (__int64 **)&v66;
          v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_print(&v57);
          if ( v31 )
          {
            *(_QWORD *)&v57 = std::io::stdio::stdout();
            v41 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v57, v5, v6);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v41);
          }
          v66 = (__int64)&v64;
          v67 = <alloc::string::String as core::fmt::Display>::fmt;
          v68 = v84;
          v69 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
          *(_QWORD *)&v57 = "\x01";
          *((_QWORD *)&v57 + 1) = 2LL;
          v60 = 0LL;
          v58 = (__int64 **)&v66;
          v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_print(&v57);
          core::ptr::drop_in_place<alloc::string::String>(v64, *((_QWORD *)&v64 + 1));
          core::ptr::drop_in_place<alloc::string::String>(v72, v73);
          core::ptr::drop_in_place<alloc::string::String>(v76, v77);
          v1 = v80;
          goto LABEL_7;
        }
      }
      else if ( (v43 & 1) != 0 )
      {
        alloc::str::<impl str>::to_ascii_uppercase(&v66, v20, v21);
        v72 = &v66;
        v73 = (__int64 (__fastcall **)())<alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v57 = &unk_162B50;
        *((_QWORD *)&v57 + 1) = 2LL;
        v60 = 0LL;
        v58 = &v72;
        v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(&v64, &v57);
        core::ptr::drop_in_place<alloc::string::String>(v66, v67);
        v33 = (__int64 (__fastcall **)())*((_QWORD *)&v64 + 1);
        v32 = (__int64 *)v64;
        v35 = v65;
        v66 = (__int64)&v76;
        v67 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v57 = &off_162B40;
        *((_QWORD *)&v57 + 1) = 1LL;
        v60 = 0LL;
        v58 = (__int64 **)&v66;
        v59 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(v91, &v57);
        v39 = v91[0];
        v34 = v91[1];
        v31 = 1;
        v40 = (char *)v91[2];
        goto LABEL_49;
      }
      v45 = asc_12AC7;
      if ( *(_BYTE *)(v1 + 57) )
        v45 = (const char *)&unk_12F33;
      *(_QWORD *)&v64 = v45;
      *((_QWORD *)&v64 + 1) = 1LL;
      v66 = (__int64)&v76;
      v67 = <alloc::string::String as core::fmt::Display>::fmt;
      v68 = (__int64 *)&v64;
      v69 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v57 = &unk_162B70;
      *((_QWORD *)&v57 + 1) = 2LL;
      v60 = 0LL;
      v58 = (__int64 **)&v66;
      v59 = (__int64 (__fastcall *)())(&dword_0 + 2);
      core::option::Option<T>::map_or_else(v92, &v57);
      v32 = (__int64 *)v92[0];
      v33 = (__int64 (__fastcall **)())v92[1];
      v35 = (char *)v92[2];
      v34 = 1LL;
      v31 = 1;
    }
    v39 = 0LL;
    v40 = 0LL;
    goto LABEL_49;
  }
  v47 = *(_QWORD *)(v1 + 16);
  v48 = *(_QWORD *)(v1 + 24);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, aCrc, 3LL) )
  {
    v49 = v75;
    v50 = core::num::<impl u32>::from_ascii_radix(v75, v15);
    LODWORD(v66) = _byteswap_ulong(core::result::Result<T,E>::unwrap(v50));
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v57, &v66, 4LL);
    goto LABEL_72;
  }
  v51 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, aSysv, 4LL);
  v49 = v75;
  if ( v51 || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, aBsd, 3LL) )
  {
    v52 = core::num::<impl u16>::from_ascii_radix(v49, v15);
    LOWORD(v66) = __ROL2__(core::result::Result<T,E>::unwrap(v52, &off_162D38), 8);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v57, &v66, 2LL);
LABEL_72:
    v53 = 1;
  }
  else
  {
    *(_QWORD *)&v57 = v79;
    *((_QWORD *)&v57 + 1) = v49;
    v58 = (__int64 **)v15;
    <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v66, &v57);
    core::result::Result<T,E>::unwrap(&v57, &v66, &off_162D20);
    v53 = 0;
  }
  v66 = std::io::stdio::stdout();
  v54 = *((_QWORD *)&v57 + 1);
  v55 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v66, *((_QWORD *)&v57 + 1), v58);
  if ( v55 )
    v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v55);
  else
    v2 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v57, v54);
  if ( v53 )
    core::ptr::drop_in_place<alloc::string::String>(v79, v49);
LABEL_65:
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v96);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v93);
LABEL_66:
  core::ptr::drop_in_place<uu_cksum::Options>(*(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
  return v2;
}