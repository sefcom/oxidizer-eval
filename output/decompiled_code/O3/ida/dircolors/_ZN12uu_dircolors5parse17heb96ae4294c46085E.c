__int64 __fastcall uu_dircolors::parse(__int64 a1, __int64 a2, char *a3, __int64 (__fastcall *a4)(), char ****a5)
{
  __int64 slice; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r13
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // [rsp+7h] [rbp-3B1h]
  char v25; // [rsp+8h] [rbp-3B0h]
  __int64 v26; // [rsp+8h] [rbp-3B0h]
  __int64 v27; // [rsp+8h] [rbp-3B0h]
  char **v28; // [rsp+10h] [rbp-3A8h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+18h] [rbp-3A0h]
  char ****v30; // [rsp+20h] [rbp-398h]
  __int64 (__fastcall *v31)(); // [rsp+28h] [rbp-390h]
  _BYTE *v32; // [rsp+30h] [rbp-388h]
  __int64 v33; // [rsp+38h] [rbp-380h]
  _BYTE v34[24]; // [rsp+40h] [rbp-378h] BYREF
  __int128 v35; // [rsp+58h] [rbp-360h]
  __int64 (__fastcall *v36)(); // [rsp+68h] [rbp-350h]
  char v37; // [rsp+70h] [rbp-348h]
  _BYTE v38[7]; // [rsp+71h] [rbp-347h]
  __int64 v39; // [rsp+78h] [rbp-340h]
  __int64 v40; // [rsp+88h] [rbp-330h]
  __int64 v41; // [rsp+98h] [rbp-320h]
  __int64 v42; // [rsp+A0h] [rbp-318h]
  char v43; // [rsp+A8h] [rbp-310h]
  __int64 v44; // [rsp+B0h] [rbp-308h]
  __int64 v45; // [rsp+C0h] [rbp-2F8h]
  __int64 v46; // [rsp+D0h] [rbp-2E8h]
  __int64 v47; // [rsp+D8h] [rbp-2E0h]
  char v48; // [rsp+E0h] [rbp-2D8h]
  _BYTE v49[7]; // [rsp+E1h] [rbp-2D7h]
  char ***v50; // [rsp+E8h] [rbp-2D0h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+F0h] [rbp-2C8h]
  __int64 *v52; // [rsp+F8h] [rbp-2C0h]
  __int64 (__fastcall *v53)(); // [rsp+100h] [rbp-2B8h]
  __int128 v54; // [rsp+108h] [rbp-2B0h] BYREF
  __int128 v55; // [rsp+118h] [rbp-2A0h] BYREF
  __int64 v56; // [rsp+128h] [rbp-290h]
  __int64 v57; // [rsp+130h] [rbp-288h] BYREF
  __int64 v58; // [rsp+138h] [rbp-280h]
  char v59[8]; // [rsp+140h] [rbp-278h] BYREF
  __int128 v60; // [rsp+148h] [rbp-270h]
  _BYTE v61[7]; // [rsp+15Bh] [rbp-25Dh]
  _BYTE v62[7]; // [rsp+162h] [rbp-256h]
  _BYTE v63[7]; // [rsp+169h] [rbp-24Fh]
  __int64 v64; // [rsp+170h] [rbp-248h]
  __int64 v65; // [rsp+178h] [rbp-240h]
  __int64 (__fastcall *v66)(); // [rsp+180h] [rbp-238h]
  char ****v67; // [rsp+188h] [rbp-230h]
  __int64 v68; // [rsp+190h] [rbp-228h]
  char *v69; // [rsp+198h] [rbp-220h]
  __int64 v70; // [rsp+1A0h] [rbp-218h] BYREF
  __int64 v71; // [rsp+1A8h] [rbp-210h] BYREF
  __int128 v72; // [rsp+1B0h] [rbp-208h] BYREF
  __int64 v73; // [rsp+1C0h] [rbp-1F8h]
  __int128 v74; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v75; // [rsp+1E0h] [rbp-1D8h]
  __int128 v76; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+200h] [rbp-1B8h]
  __int128 v78; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v79; // [rsp+220h] [rbp-198h]
  __int64 v80; // [rsp+228h] [rbp-190h]
  __int64 v81; // [rsp+230h] [rbp-188h]
  char v82[8]; // [rsp+238h] [rbp-180h] BYREF
  __int64 v83; // [rsp+240h] [rbp-178h]
  __int64 v84; // [rsp+248h] [rbp-170h]
  _QWORD v85[2]; // [rsp+250h] [rbp-168h] BYREF
  __int128 v86; // [rsp+260h] [rbp-158h] BYREF
  __int64 v87; // [rsp+270h] [rbp-148h]
  __int64 v88; // [rsp+298h] [rbp-120h] BYREF
  __int128 v89; // [rsp+2A0h] [rbp-118h]
  __int64 v90; // [rsp+2B0h] [rbp-108h]
  __int128 v91; // [rsp+2B8h] [rbp-100h] BYREF
  __int64 v92; // [rsp+2C8h] [rbp-F0h]
  __int128 v93; // [rsp+2D0h] [rbp-E8h] BYREF
  __int128 v94; // [rsp+2E0h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+2F0h] [rbp-C8h]
  __int128 v96; // [rsp+2F8h] [rbp-C0h] BYREF
  __int64 v97; // [rsp+308h] [rbp-B0h]
  __int128 v98; // [rsp+310h] [rbp-A8h] BYREF
  __int64 v99; // [rsp+320h] [rbp-98h]
  __int128 v100; // [rsp+328h] [rbp-90h] BYREF
  __int64 v101; // [rsp+338h] [rbp-80h]
  __int128 v102; // [rsp+340h] [rbp-78h] BYREF
  __int64 v103; // [rsp+350h] [rbp-68h]
  __int128 v104; // [rsp+358h] [rbp-60h] BYREF
  __int64 v105; // [rsp+368h] [rbp-50h]
  __int128 v106; // [rsp+370h] [rbp-48h] BYREF
  __int64 v107; // [rsp+380h] [rbp-38h]

  v67 = a5;
  v66 = a4;
  v68 = a2;
  v65 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v34, 1790LL, 0LL);
  if ( *(_QWORD *)v34 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v34[8], *(_QWORD *)&v34[16]);
  v55 = *(_OWORD *)&v34[8];
  v56 = 0LL;
  uu_dircolors::get_colors_format_strings(v34, a3);
  v79 = *(_QWORD *)&v34[16];
  v78 = *(_OWORD *)v34;
  v77 = v36;
  v76 = v35;
  slice = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)&v34[8], *(_QWORD *)&v34[8] + *(_QWORD *)&v34[16]);
  alloc::vec::Vec<T,A>::append_elements(&v55, slice);
  std::env::var(v34, aTerm_0, 4LL);
  v69 = a3;
  if ( *(_QWORD *)v34 )
  {
    v87 = v35;
    v86 = *(_OWORD *)&v34[8];
    uu_dircolors::parse::{{closure}}(&v72, &v86);
  }
  else
  {
    v73 = v35;
    v72 = *(_OWORD *)&v34[8];
  }
  v81 = *((_QWORD *)&v72 + 1);
  v80 = v73;
  <I as core::iter::traits::collect::IntoIterator>::into_iter(v34, v68);
  core::iter::traits::iterator::Iterator::enumerate(&v86, v34);
  v24 = *v69;
  v25 = 0;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v88, &v86);
    if ( (_QWORD)v89 == 0x8000000000000000LL )
      break;
    v75 = v90;
    v74 = v89;
    v70 = v88 + 1;
    v7 = alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(*((_QWORD *)&v89 + 1));
    v9 = <str as uu_dircolors::StrUtils>::purify(v7, v8);
    if ( v10 )
    {
      uu_dircolors::escape(v82, v9);
      <str as uu_dircolors::StrUtils>::split_two(v34, v83, v84);
      v54 = *(_OWORD *)v34;
      v57 = *(_QWORD *)&v34[16];
      v58 = v35;
      if ( !(_QWORD)v35 )
      {
        v28 = 0LL;
        v29 = v66;
        v30 = v67;
        LOBYTE(v31) = 0;
        v50 = &v28;
        v51 = <os_display::Quoted as core::fmt::Display>::fmt;
        v52 = &v70;
        v53 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)v34 = &unk_1249F8;
        *(_QWORD *)&v34[8] = 3LL;
        *(_QWORD *)&v34[16] = &v50;
        v35 = 2uLL;
        core::option::Option<T>::map_or_else(&v91, v34);
        v22 = v65;
        *(_QWORD *)(v65 + 24) = v92;
        *(_OWORD *)(v22 + 8) = v91;
        *(_QWORD *)v22 = 1LL;
LABEL_38:
        core::ptr::drop_in_place<alloc::string::String>(v82);
        core::ptr::drop_in_place<alloc::string::String>(&v74);
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(&v86);
        core::ptr::drop_in_place<alloc::string::String>(&v72);
        core::ptr::drop_in_place<alloc::string::String>(&v76);
        core::ptr::drop_in_place<alloc::string::String>(&v78);
        return core::ptr::drop_in_place<alloc::string::String>(&v55);
      }
      alloc::str::<impl str>::to_lowercase(v59);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v60, *((_QWORD *)&v60 + 1), aTerm, 4LL)
        || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v60,
                              *((_QWORD *)&v60 + 1),
                              aColorterm,
                              9LL) )
      {
        v11 = 1;
        if ( !(unsigned __int8)<str as uu_dircolors::StrUtils>::fnmatch(v81, v80, v57, v58) )
          v11 = (2 * (v25 != 1)) | 1;
      }
      else
      {
        v12 = v25;
        if ( v25 == 1 )
          v12 = 2;
        v11 = 3;
        if ( v12 != 3 )
        {
          v11 = v12;
          v93 = v60;
          v64 = *((_QWORD *)&v54 + 1);
          v26 = v54;
          *(_DWORD *)v34 = 0;
          v13 = core::char::methods::encode_utf8_raw(46LL, v34);
          if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v26, v64, v13, v14) )
          {
            if ( v24 == 2 )
            {
              v50 = (char ***)&v57;
              v51 = <&T as core::fmt::Display>::fmt;
              v52 = (__int64 *)&v54;
              v53 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = 2LL;
              *(_QWORD *)&v34[16] = 2LL;
              *((_QWORD *)&v35 + 1) = 0LL;
              v36 = (__int64 (__fastcall *)())&qword_20;
              v37 = 3;
              *(_DWORD *)&v38[3] = *(_DWORD *)&v61[3];
              *(_DWORD *)v38 = *(_DWORD *)v61;
              v39 = 2LL;
              v40 = 2LL;
              v41 = 1LL;
              v42 = 32LL;
              v43 = 3;
              v44 = 2LL;
              v45 = 2LL;
              v46 = 0LL;
              v47 = 32LL;
              v48 = 3;
              *(_DWORD *)&v49[3] = *(_DWORD *)&v61[3];
              *(_DWORD *)v49 = *(_DWORD *)v61;
              v28 = &off_124AC8;
              v29 = (__int64 (__fastcall *)())&byte_4;
              v32 = v34;
              v33 = 3LL;
              v30 = &v50;
              v31 = (__int64 (__fastcall *)())(&dword_0 + 2);
              core::option::Option<T>::map_or_else(&v94, &v28);
              *(_OWORD *)v34 = v94;
              *(_QWORD *)&v34[16] = v95;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v94 + 1), *((_QWORD *)&v94 + 1) + v95);
            }
            else
            {
              v28 = (char **)&v54;
              v29 = <&T as core::fmt::Display>::fmt;
              v30 = (char ****)&v57;
              v31 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = &off_124B08;
              *(_QWORD *)&v34[8] = 3LL;
              *(_QWORD *)&v34[16] = &v28;
              v35 = 2uLL;
              core::option::Option<T>::map_or_else(&v96, v34);
              *(_OWORD *)v34 = v96;
              *(_QWORD *)&v34[16] = v97;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v96 + 1), *((_QWORD *)&v96 + 1) + v97);
            }
LABEL_30:
            alloc::vec::Vec<T,A>::append_elements(&v55, v15);
            core::ptr::drop_in_place<alloc::string::String>(v34);
            goto LABEL_32;
          }
          v64 = *((_QWORD *)&v54 + 1);
          v27 = v54;
          *(_DWORD *)v34 = 0;
          v16 = core::char::methods::encode_utf8_raw(42LL, v34);
          if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v27, v64, v16, v17) )
          {
            if ( v24 == 2 )
            {
              v50 = (char ***)&v57;
              v51 = <&T as core::fmt::Display>::fmt;
              v52 = (__int64 *)&v54;
              v53 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = 2LL;
              *(_QWORD *)&v34[16] = 2LL;
              *((_QWORD *)&v35 + 1) = 0LL;
              v36 = (__int64 (__fastcall *)())&qword_20;
              v37 = 3;
              *(_DWORD *)&v38[3] = *(_DWORD *)&v62[3];
              *(_DWORD *)v38 = *(_DWORD *)v62;
              v39 = 2LL;
              v40 = 2LL;
              v41 = 1LL;
              v42 = 32LL;
              v43 = 3;
              v44 = 2LL;
              v45 = 2LL;
              v46 = 0LL;
              v47 = 32LL;
              v48 = 3;
              *(_DWORD *)&v49[3] = *(_DWORD *)&v62[3];
              *(_DWORD *)v49 = *(_DWORD *)v62;
              v28 = &off_124A28;
              v29 = (__int64 (__fastcall *)())&byte_4;
              v32 = v34;
              v33 = 3LL;
              v30 = &v50;
              v31 = (__int64 (__fastcall *)())(&dword_0 + 2);
              core::option::Option<T>::map_or_else(&v98, &v28);
              *(_OWORD *)v34 = v98;
              *(_QWORD *)&v34[16] = v99;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v98 + 1), *((_QWORD *)&v98 + 1) + v99);
            }
            else
            {
              v28 = (char **)&v54;
              v29 = <&T as core::fmt::Display>::fmt;
              v30 = (char ****)&v57;
              v31 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = &unk_124A68;
              *(_QWORD *)&v34[8] = 3LL;
              *(_QWORD *)&v34[16] = &v28;
              v35 = 2uLL;
              core::option::Option<T>::map_or_else(&v100, v34);
              *(_OWORD *)v34 = v100;
              *(_QWORD *)&v34[16] = v101;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v100 + 1), *((_QWORD *)&v100 + 1) + v101);
            }
            goto LABEL_30;
          }
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v60,
                                   *((_QWORD *)&v60 + 1),
                                   aOptions,
                                   7LL)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v60,
                                   *((_QWORD *)&v60 + 1),
                                   aColor,
                                   5LL)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   v60,
                                   *((_QWORD *)&v60 + 1),
                                   aEightbit,
                                   8LL) )
          {
            v85[0] = &off_129848;
            v85[1] = &off_129848 + 148;
            v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v85, &v93);
            if ( !v18 )
            {
              v50 = 0LL;
              v51 = v66;
              v52 = (__int64 *)v67;
              LOBYTE(v53) = 0;
              *(_QWORD *)v34 = &v50;
              *(_QWORD *)&v34[8] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v34[16] = &v70;
              *(_QWORD *)&v35 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *((_QWORD *)&v35 + 1) = &v54;
              v36 = <&T as core::fmt::Display>::fmt;
              v28 = (char **)&unk_124A98;
              v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
              v32 = 0LL;
              v30 = (char ****)v34;
              v31 = (__int64 (__fastcall *)())(&dword_0 + 3);
              core::option::Option<T>::map_or_else(&v106, &v28);
              v23 = v65;
              *(_QWORD *)(v65 + 24) = v107;
              *(_OWORD *)(v23 + 8) = v106;
              *(_QWORD *)v23 = 1LL;
              core::ptr::drop_in_place<alloc::string::String>(v59);
              goto LABEL_38;
            }
            v71 = v18 + 16;
            if ( v24 == 2 )
            {
              v50 = (char ***)&v57;
              v51 = <&T as core::fmt::Display>::fmt;
              v52 = &v71;
              v53 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = 2LL;
              *(_QWORD *)&v34[16] = 2LL;
              *((_QWORD *)&v35 + 1) = 0LL;
              v36 = (__int64 (__fastcall *)())&qword_20;
              v37 = 3;
              *(_DWORD *)&v38[3] = *(_DWORD *)&v63[3];
              *(_DWORD *)v38 = *(_DWORD *)v63;
              v39 = 2LL;
              v40 = 2LL;
              v41 = 1LL;
              v42 = 32LL;
              v43 = 3;
              v44 = 2LL;
              v45 = 2LL;
              v46 = 0LL;
              v47 = 32LL;
              v48 = 3;
              *(_DWORD *)&v49[3] = *(_DWORD *)&v63[3];
              *(_DWORD *)v49 = *(_DWORD *)v63;
              v28 = &off_124A28;
              v29 = (__int64 (__fastcall *)())&byte_4;
              v32 = v34;
              v33 = 3LL;
              v30 = &v50;
              v31 = (__int64 (__fastcall *)())(&dword_0 + 2);
              core::option::Option<T>::map_or_else(&v102, &v28);
              *(_OWORD *)v34 = v102;
              *(_QWORD *)&v34[16] = v103;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v102 + 1), *((_QWORD *)&v102 + 1) + v103);
            }
            else
            {
              v28 = (char **)&v71;
              v29 = <&T as core::fmt::Display>::fmt;
              v30 = (char ****)&v57;
              v31 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = &unk_124A68;
              *(_QWORD *)&v34[8] = 3LL;
              *(_QWORD *)&v34[16] = &v28;
              v35 = 2uLL;
              core::option::Option<T>::map_or_else(&v104, v34);
              *(_OWORD *)v34 = v104;
              *(_QWORD *)&v34[16] = v105;
              v15 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v104 + 1), *((_QWORD *)&v104 + 1) + v105);
            }
            goto LABEL_30;
          }
        }
      }
LABEL_32:
      core::ptr::drop_in_place<alloc::string::String>(v59);
      core::ptr::drop_in_place<alloc::string::String>(v82);
      core::ptr::drop_in_place<alloc::string::String>(&v74);
      v25 = v11;
    }
    else
    {
      core::ptr::drop_in_place<alloc::string::String>(&v74);
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(&v86);
  if ( *v69 == 2 )
    alloc::string::String::pop(&v55);
  v19 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v76 + 1), (char *)v77 + *((_QWORD *)&v76 + 1));
  alloc::vec::Vec<T,A>::append_elements(&v55, v19);
  v20 = v65;
  *(_QWORD *)(v65 + 24) = v56;
  *(_OWORD *)(v20 + 8) = v55;
  *(_QWORD *)v20 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(&v72);
  core::ptr::drop_in_place<alloc::string::String>(&v76);
  return core::ptr::drop_in_place<alloc::string::String>(&v78);
}
