__int64 __fastcall uu_cksum::cksum(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 (__fastcall **v7)(); // rbx
  __int64 v8; // rdx
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall **v12)(); // rcx
  __int128 v13; // rax
  unsigned int v14; // eax
  __int128 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rdx
  __int64 (__fastcall **v20)(); // rcx
  unsigned __int64 v21; // rsi
  __int64 (__fastcall *v22)(); // r15
  __int64 (__fastcall *v23)(); // r13
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  const char *v32; // rax
  unsigned __int8 v33; // r14
  __int64 (__fastcall **v34)(); // rax
  unsigned __int64 v35; // rax
  const char *v36; // rcx
  unsigned __int8 v37; // al
  char v38; // cl
  unsigned __int64 v39; // rax
  const char *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 (__fastcall **v43)(); // rdx
  _OWORD *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  const char *v48; // rax
  __int64 v50; // rax
  unsigned int v51; // eax
  char v52; // bp
  __int64 v53; // rax
  __int128 v54; // [rsp+10h] [rbp-308h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+20h] [rbp-2F8h]
  __int64 (__fastcall *v56)(); // [rsp+28h] [rbp-2F0h]
  __int128 *v57; // [rsp+30h] [rbp-2E8h]
  __int64 (__fastcall *v58)(); // [rsp+38h] [rbp-2E0h]
  __int64 v59; // [rsp+40h] [rbp-2D8h]
  __int64 v60; // [rsp+48h] [rbp-2D0h]
  __int128 v61; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 (__fastcall **v62)(); // [rsp+60h] [rbp-2B8h]
  __int128 v63; // [rsp+70h] [rbp-2A8h] BYREF
  __int64 (__fastcall **v64)(); // [rsp+80h] [rbp-298h]
  __int64 v65; // [rsp+88h] [rbp-290h]
  __int128 *v66; // [rsp+90h] [rbp-288h]
  __int64 v67; // [rsp+98h] [rbp-280h]
  __int16 v68; // [rsp+AEh] [rbp-26Ah] BYREF
  __int128 v69; // [rsp+B0h] [rbp-268h] BYREF
  __int64 (__fastcall **v70)(); // [rsp+C0h] [rbp-258h]
  __int128 v71; // [rsp+D0h] [rbp-248h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+E0h] [rbp-238h]
  __int64 (__fastcall *v73)(); // [rsp+E8h] [rbp-230h]
  __int128 *v74; // [rsp+F0h] [rbp-228h]
  __int64 v75; // [rsp+F8h] [rbp-220h]
  char v76; // [rsp+100h] [rbp-218h]
  __int64 v77; // [rsp+108h] [rbp-210h]
  __int64 v78; // [rsp+118h] [rbp-200h]
  __int64 v79; // [rsp+120h] [rbp-1F8h]
  __int64 v80; // [rsp+128h] [rbp-1F0h]
  __int64 v81; // [rsp+130h] [rbp-1E8h]
  char v82; // [rsp+138h] [rbp-1E0h]
  __int64 v83; // [rsp+140h] [rbp-1D8h]
  __int64 v84; // [rsp+150h] [rbp-1C8h]
  __int64 v85; // [rsp+160h] [rbp-1B8h]
  __int64 v86; // [rsp+168h] [rbp-1B0h]
  char v87; // [rsp+170h] [rbp-1A8h]
  __int128 v88; // [rsp+178h] [rbp-1A0h] BYREF
  __int64 (__fastcall **v89)(); // [rsp+188h] [rbp-190h]
  unsigned __int64 v90; // [rsp+190h] [rbp-188h] BYREF
  char **v91; // [rsp+198h] [rbp-180h]
  __int64 (__fastcall **v92)(); // [rsp+1A0h] [rbp-178h]
  __int64 v93; // [rsp+1A8h] [rbp-170h]
  __int64 (__fastcall *v94)(); // [rsp+1B0h] [rbp-168h] BYREF
  _BYTE v95[16]; // [rsp+1B8h] [rbp-160h] BYREF
  unsigned __int64 v96; // [rsp+1C8h] [rbp-150h]
  _QWORD v97[3]; // [rsp+1D0h] [rbp-148h] BYREF
  _QWORD v98[3]; // [rsp+1E8h] [rbp-130h] BYREF
  _BYTE v99[32]; // [rsp+200h] [rbp-118h] BYREF
  __int128 v100; // [rsp+220h] [rbp-F8h] BYREF
  __int64 (__fastcall **v101)(); // [rsp+230h] [rbp-E8h]
  __int128 v102; // [rsp+238h] [rbp-E0h] BYREF
  __int64 (__fastcall **v103)(); // [rsp+248h] [rbp-D0h]
  __int128 v104; // [rsp+250h] [rbp-C8h] BYREF
  __int64 (__fastcall **v105)(); // [rsp+260h] [rbp-B8h]
  __int128 v106; // [rsp+268h] [rbp-B0h] BYREF
  __int64 (__fastcall **v107)(); // [rsp+278h] [rbp-A0h]
  __int128 v108; // [rsp+280h] [rbp-98h] BYREF
  __int64 (__fastcall **v109)(); // [rsp+290h] [rbp-88h]
  __int128 v110; // [rsp+298h] [rbp-80h] BYREF
  __int64 (__fastcall **v111)(); // [rsp+2A8h] [rbp-70h]
  _BYTE v112[104]; // [rsp+2B0h] [rbp-68h] BYREF

  v1 = a1;
  core::iter::traits::iterator::Iterator::collect(v95);
  if ( *(_BYTE *)(a1 + 58) == 1 && v96 >= 2 )
  {
    v2 = alloc::boxed::Box<T>::new(0LL);
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(v95);
    goto LABEL_65;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v99, v95);
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v99);
  if ( !v3 )
  {
LABEL_62:
    v1 = a1;
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v99);
    v2 = 0LL;
    goto LABEL_65;
  }
  v5 = v3;
  v6 = v4;
  v93 = a1 + 32;
  v92 = (__int64 (__fastcall **)())(a1 + 59);
  v7 = (__int64 (__fastcall **)())&v54;
  v91 = &off_353480;
  while ( 1 )
  {
    std::path::Path::components(v7, v5, v6);
    std::path::Path::components(&v71, asc_55778, 1LL);
    v9 = <std::path::Components as core::cmp::PartialEq>::eq(v7, &v71);
    if ( v9 )
    {
      v10 = std::io::stdio::stdin();
      v11 = alloc::boxed::Box<T>::new(v10);
      v12 = (__int64 (__fastcall **)())&unk_3532F8;
      goto LABEL_14;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v5, v6) )
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v71, 0x2000LL);
      v11 = alloc::boxed::Box<T>::new(&v71);
      v12 = &off_3532A0;
      goto LABEL_14;
    }
    std::fs::File::open(&v61, v5, v6);
    if ( !(_DWORD)v61 )
      break;
    *(_QWORD *)&v69 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                        *((_QWORD *)&v61 + 1),
                        v5,
                        v6);
    uucore::mods::error::set_exit_code(1LL);
    *(_QWORD *)&v13 = uucore::util_name();
    v63 = v13;
    *(_QWORD *)&v54 = &v63;
    *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
    v55 = (__int64 (__fastcall **)())&v69;
    v56 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &unk_353270;
    *((_QWORD *)&v71 + 1) = 3LL;
    v74 = 0LL;
    v72 = v7;
    v73 = (__int64 (__fastcall *)())(&dword_0 + 2);
    std::io::stdio::_eprint(&v71);
    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v69);
LABEL_6:
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v99);
    v6 = v8;
    if ( !v5 )
      goto LABEL_62;
  }
  v11 = alloc::boxed::Box<T>::new(DWORD1(v61));
  v12 = &off_353218;
LABEL_14:
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v112, 0x2000LL, v11, v12);
  if ( (unsigned __int8)std::path::Path::is_dir(v5, v6) )
  {
    *(_QWORD *)&v54 = v5;
    *((_QWORD *)&v54 + 1) = v6;
    *(_QWORD *)&v63 = v7;
    *((_QWORD *)&v63 + 1) = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &unk_3534C8;
    *((_QWORD *)&v71 + 1) = 2LL;
    v74 = 0LL;
    v72 = (__int64 (__fastcall **)())&v63;
    v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
    core::option::Option<T>::map_or_else(&v100, &v71);
    LODWORD(v73) = 1;
    v71 = v100;
    v72 = v101;
    *(_QWORD *)&v61 = alloc::boxed::Box<T>::new(&v71);
    *((_QWORD *)&v61 + 1) = &off_353520;
    v14 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v61);
    uucore::mods::error::set_exit_code(v14);
    *(_QWORD *)&v15 = uucore::util_name();
    v63 = v15;
    *(_QWORD *)&v54 = &v63;
    *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
    v55 = (__int64 (__fastcall **)())&v61;
    v56 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &unk_353270;
    *((_QWORD *)&v71 + 1) = 3LL;
    v74 = 0LL;
    v72 = v7;
    v73 = (__int64 (__fastcall *)())(&dword_0 + 2);
    std::io::stdio::_eprint(&v71);
    v16 = *((_QWORD *)&v61 + 1);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
      v61,
      *((_QWORD *)&v61 + 1));
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      v112,
      v16,
      v17,
      v18);
    goto LABEL_6;
  }
  uucore::features::checksum::digest_reader(&v71, v93, v112, 0LL, *(_QWORD *)(a1 + 48));
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v7,
    &v71);
  v19 = asc_55778;
  v20 = v7;
  v2 = *((_QWORD *)&v54 + 1);
  v21 = 0x8000000000000000LL;
  if ( (_QWORD)v54 == 0x8000000000000000LL )
  {
    v1 = a1;
    goto LABEL_64;
  }
  v22 = v56;
  v88 = v54;
  v89 = v55;
  v94 = v56;
  if ( !*(_BYTE *)(a1 + 58) )
  {
    v70 = v89;
    v69 = v88;
    v7 = v20;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(a1 + 58) == 2 )
  {
    v7 = v20;
    v23 = v56;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aCrc,
                            3LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aSysv,
                            4LL)
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aBsd,
                            3LL) )
    {
      v70 = v89;
      v69 = v88;
    }
    else
    {
      v64 = (__int64 (__fastcall **)())((char *)&dword_200 + 2);
      v63 = unk_353398;
      v72 = v89;
      v71 = v88;
      <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(v7, &v71);
      core::result::Result<T,E>::unwrap(&v71, v7, &off_3533B0);
      data_encoding::Encoding::encode(&v69, &v63, *((_QWORD *)&v71 + 1), v72);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v71);
      core::ptr::drop_in_place<data_encoding::Encoding>(&v63);
    }
    v22 = v23;
LABEL_25:
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 16),
                            *(_QWORD *)(a1 + 24),
                            aSysv,
                            4LL) )
    {
      v24 = core::num::<impl core::str::traits::FromStr for u16>::from_str(*((_QWORD *)&v69 + 1), v70);
      LOWORD(v90) = core::result::Result<T,E>::unwrap(v24, &off_353498);
      v25 = *(_QWORD *)(a1 + 48);
      if ( !v25 )
      {
        v91 = &off_3534B0;
LABEL_79:
        core::panicking::panic_const::panic_const_div_by_zero(v91);
      }
      if ( (v25 | (unsigned __int64)v22) >> 32 )
      {
        v26 = (unsigned __int64)v22 / v25;
        v27 = (unsigned __int64)v22 % v25;
      }
      else
      {
        v27 = (unsigned int)v22 % (unsigned int)v25;
        v26 = (unsigned int)v22 / (unsigned int)v25;
      }
      v35 = v26 - ((v27 == 0) - 1LL);
      v36 = asc_559E4;
      if ( v9 )
        v36 = (_BYTE *)(&dword_0 + 1);
      *(_QWORD *)&v61 = v35;
      v33 = v9 ^ 1;
      *(_QWORD *)&v63 = v36;
      *((_QWORD *)&v63 + 1) = v33;
      *(_QWORD *)&v71 = &v90;
      *((_QWORD *)&v71 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v72 = (__int64 (__fastcall **)())&v61;
      v73 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v74 = &v63;
      v75 = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v54 = &unk_353438;
      *((_QWORD *)&v54 + 1) = 3LL;
      v57 = 0LL;
      v55 = (__int64 (__fastcall **)())&v71;
      v56 = (__int64 (__fastcall *)())(&dword_0 + 3);
      core::option::Option<T>::map_or_else(&v102, v7);
      v71 = v102;
      v34 = v103;
LABEL_48:
      v72 = v34;
      v41 = 1LL;
LABEL_49:
      v42 = 0LL;
      v43 = 0LL;
    }
    else
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              *(_QWORD *)(a1 + 16),
                              *(_QWORD *)(a1 + 24),
                              aBsd,
                              3LL) )
      {
        v28 = core::num::<impl core::str::traits::FromStr for u16>::from_str(*((_QWORD *)&v69 + 1), v70);
        v68 = core::result::Result<T,E>::unwrap(v28, &off_353468);
        v29 = *(_QWORD *)(a1 + 48);
        if ( !v29 )
          goto LABEL_79;
        if ( (v29 | (unsigned __int64)v22) >> 32 )
        {
          v30 = (unsigned __int64)v22 / v29;
          v31 = (unsigned __int64)v22 % v29;
        }
        else
        {
          v31 = (unsigned int)v22 % (unsigned int)v29;
          v30 = (unsigned int)v22 / (unsigned int)v29;
        }
        v39 = v30 - ((v31 == 0) - 1LL);
        v40 = asc_559E4;
        if ( v9 )
          v40 = (_BYTE *)(&dword_0 + 1);
        v90 = v39;
        v33 = v9 ^ 1;
        *(_QWORD *)&v61 = v40;
        *((_QWORD *)&v61 + 1) = v33;
        *(_QWORD *)&v54 = &v68;
        *((_QWORD *)&v54 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v55 = (__int64 (__fastcall **)())&v90;
        v56 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v57 = &v61;
        v58 = <&T as core::fmt::Display>::fmt;
        v59 = 5LL;
        v60 = 0LL;
        *(_QWORD *)&v71 = 2LL;
        v72 = (__int64 (__fastcall **)())(&dword_0 + 1);
        v73 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v74 = 0LL;
        v75 = 0x800000020LL;
        v76 = 3;
        v77 = 2LL;
        v78 = 1LL;
        v79 = 3LL;
        v80 = 1LL;
        v81 = 32LL;
        v82 = 3;
        v83 = 2LL;
        v84 = 2LL;
        v85 = 2LL;
        v86 = 32LL;
        v87 = 3;
        *(_QWORD *)&v63 = &unk_353438;
        *((_QWORD *)&v63 + 1) = 3LL;
        v66 = &v71;
        v67 = 3LL;
        v64 = v7;
        v65 = 4LL;
        core::option::Option<T>::map_or_else(&v104, &v63);
        v71 = v104;
        v34 = v105;
        goto LABEL_48;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              *(_QWORD *)(a1 + 16),
                              *(_QWORD *)(a1 + 24),
                              aCrc,
                              3LL) )
      {
        v32 = asc_559E4;
        if ( v9 )
          v32 = (_BYTE *)(&dword_0 + 1);
        v33 = v9 ^ 1;
        *(_QWORD *)&v63 = v32;
        *((_QWORD *)&v63 + 1) = v33;
        *(_QWORD *)&v71 = &v69;
        *((_QWORD *)&v71 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v72 = &v94;
        v73 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v74 = &v63;
        v75 = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v54 = &unk_353438;
        *((_QWORD *)&v54 + 1) = 3LL;
        v57 = 0LL;
        v55 = (__int64 (__fastcall **)())&v71;
        v56 = (__int64 (__fastcall *)())(&dword_0 + 3);
        core::option::Option<T>::map_or_else(&v106, v7);
        v71 = v106;
        v34 = v107;
        goto LABEL_48;
      }
      v37 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 24),
              aBlake2b_0,
              7LL);
      v38 = *(_BYTE *)(a1 + 56);
      if ( ((v38 != 0) & v37) != 0 )
      {
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)&v63 = 8LL * *(_QWORD *)(a1 + 8);
          *(_QWORD *)&v54 = &v63;
          *((_QWORD *)&v54 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v71 = &off_353418;
          *((_QWORD *)&v71 + 1) = 2LL;
          v74 = 0LL;
          v72 = v7;
          v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
          core::option::Option<T>::map_or_else(&v108, &v71);
          v54 = v108;
          v55 = v109;
        }
        else
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v71, aBlake2b_1, 9LL);
          v55 = v72;
          v54 = v71;
        }
        *(_QWORD *)&v63 = &v69;
        *((_QWORD *)&v63 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &off_353408;
        *((_QWORD *)&v71 + 1) = 1LL;
        v74 = 0LL;
        v72 = (__int64 (__fastcall **)())&v63;
        v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(v97, &v71);
        v71 = v54;
        v72 = v55;
        v42 = v97[0];
        v41 = v97[1];
        v43 = (__int64 (__fastcall **)())v97[2];
      }
      else
      {
        if ( !v38 )
        {
          v48 = asc_559E5;
          if ( !*(_BYTE *)(a1 + 57) )
            v48 = asc_559E4;
          *(_QWORD *)&v63 = v48;
          *((_QWORD *)&v63 + 1) = 1LL;
          *(_QWORD *)&v54 = &v69;
          *((_QWORD *)&v54 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v55 = (__int64 (__fastcall **)())&v63;
          v56 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v71 = &unk_3533C8;
          *((_QWORD *)&v71 + 1) = 2LL;
          v74 = 0LL;
          v72 = v7;
          v73 = (__int64 (__fastcall *)())(&dword_0 + 2);
          core::option::Option<T>::map_or_else(&v110, &v71);
          v71 = v110;
          v72 = v111;
          v41 = 1LL;
          v33 = 1;
          goto LABEL_49;
        }
        alloc::str::<impl str>::to_ascii_uppercase(v7, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
        *(_QWORD *)&v61 = v7;
        *((_QWORD *)&v61 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &unk_3533E8;
        *((_QWORD *)&v71 + 1) = 2LL;
        v74 = 0LL;
        v72 = (__int64 (__fastcall **)())&v61;
        v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(&v63, &v71);
        core::ptr::drop_in_place<alloc::string::String>(v7);
        v54 = v63;
        v55 = v64;
        *(_QWORD *)&v63 = &v69;
        *((_QWORD *)&v63 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v71 = &off_353408;
        *((_QWORD *)&v71 + 1) = 1LL;
        v74 = 0LL;
        v72 = (__int64 (__fastcall **)())&v63;
        v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(v98, &v71);
        v71 = v54;
        v72 = v55;
        v42 = v98[0];
        v41 = v98[1];
        v43 = (__int64 (__fastcall **)())v98[2];
      }
      v33 = 1;
    }
    v44 = v72;
    v62 = v72;
    v61 = v71;
    *(_QWORD *)&v63 = v42;
    *((_QWORD *)&v63 + 1) = v41;
    v64 = v43;
    *(_QWORD *)&v54 = &v61;
    *((_QWORD *)&v54 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = &xmmword_55040;
    *((_QWORD *)&v71 + 1) = 1LL;
    v74 = 0LL;
    v72 = v7;
    v73 = (__int64 (__fastcall *)())(&dword_0 + 1);
    std::io::stdio::_print(&v71);
    if ( v33 )
    {
      *(_QWORD *)&v71 = std::io::stdio::stdout();
      v44 = (_OWORD *)v5;
      v45 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v71, v5, v6);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v45);
    }
    *(_QWORD *)&v54 = &v63;
    *((_QWORD *)&v54 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v55 = v92;
    v56 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v71 = "\x01";
    *((_QWORD *)&v71 + 1) = 2LL;
    v74 = 0LL;
    v72 = v7;
    v73 = (__int64 (__fastcall *)())(&dword_0 + 2);
    std::io::stdio::_print(&v71);
    core::ptr::drop_in_place<alloc::string::String>(&v63);
    core::ptr::drop_in_place<alloc::string::String>(&v61);
    core::ptr::drop_in_place<alloc::string::String>(&v69);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
      v112,
      v44,
      v46,
      v47);
    goto LABEL_6;
  }
  v1 = a1;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aCrc,
                          3LL) )
  {
    v50 = core::num::<impl core::str::traits::FromStr for u32>::from_str(*((_QWORD *)&v88 + 1), v89);
    LODWORD(v54) = _byteswap_ulong(core::result::Result<T,E>::unwrap(v50));
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v71, &v54, 4LL);
    goto LABEL_71;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aSysv,
                          4LL)
    || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          aBsd,
                          3LL) )
  {
    v51 = core::num::<impl core::str::traits::FromStr for u16>::from_str(*((_QWORD *)&v88 + 1), v89);
    LOWORD(v54) = __ROL2__(core::result::Result<T,E>::unwrap(v51, &off_353368), 8);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v71, &v54, 2LL);
LABEL_71:
    v52 = 0;
  }
  else
  {
    v72 = v89;
    v71 = v88;
    <alloc::vec::Vec<u8> as hex::FromHex>::from_hex(&v54, &v71);
    core::result::Result<T,E>::unwrap(&v71, &v54, &off_353350);
    v52 = 1;
  }
  *(_QWORD *)&v54 = std::io::stdio::stdout();
  v21 = *((_QWORD *)&v71 + 1);
  v53 = <std::io::stdio::Stdout as std::io::Write>::write_all(&v54, *((_QWORD *)&v71 + 1), v72);
  if ( v53 )
    v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
  else
    v2 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v71);
  if ( !v52 )
    core::ptr::drop_in_place<alloc::string::String>(&v88);
LABEL_64:
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
    v112,
    v21,
    v19,
    v20);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(v99);
LABEL_65:
  core::ptr::drop_in_place<uu_cksum::Options>(*(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
  return v2;
}
