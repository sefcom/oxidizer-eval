__int64 __fastcall uu_comm::comm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 line; // r14
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rbp
  char v19; // al
  char v20; // al
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r13
  char flag; // al
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rdx
  bool v32; // zf
  char v33; // al
  int v35; // [rsp+0h] [rbp-2E8h]
  char v36; // [rsp+8h] [rbp-2E0h] BYREF
  _BYTE v37[7]; // [rsp+9h] [rbp-2DFh]
  __int64 v38; // [rsp+10h] [rbp-2D8h]
  int v39; // [rsp+18h] [rbp-2D0h]
  int v40; // [rsp+1Ch] [rbp-2CCh] BYREF
  int v41; // [rsp+20h] [rbp-2C8h] BYREF
  int v42; // [rsp+24h] [rbp-2C4h] BYREF
  __int64 v43; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 v44; // [rsp+30h] [rbp-2B8h]
  __int64 v45; // [rsp+38h] [rbp-2B0h]
  __int64 v46; // [rsp+40h] [rbp-2A8h]
  __int64 v47; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-298h]
  __int64 v49; // [rsp+58h] [rbp-290h]
  __int64 v50; // [rsp+60h] [rbp-288h]
  int v51; // [rsp+6Ch] [rbp-27Ch]
  int **v52; // [rsp+70h] [rbp-278h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+78h] [rbp-270h]
  int **v54; // [rsp+80h] [rbp-268h]
  __int64 v55; // [rsp+88h] [rbp-260h]
  void **v56; // [rsp+90h] [rbp-258h]
  __int64 v57; // [rsp+98h] [rbp-250h]
  int *v58; // [rsp+A0h] [rbp-248h] BYREF
  __int64 (__fastcall *v59)(); // [rsp+A8h] [rbp-240h]
  int ***v60; // [rsp+B0h] [rbp-238h]
  __int64 (__fastcall *v61)(); // [rsp+B8h] [rbp-230h]
  int *v62; // [rsp+C0h] [rbp-228h]
  __int64 (__fastcall *v63)(); // [rsp+C8h] [rbp-220h]
  int *v64; // [rsp+D0h] [rbp-218h]
  __int64 (__fastcall *v65)(); // [rsp+D8h] [rbp-210h]
  char *v66; // [rsp+E0h] [rbp-208h]
  __int64 (__fastcall *v67)(); // [rsp+E8h] [rbp-200h]
  _QWORD v68[2]; // [rsp+F0h] [rbp-1F8h] BYREF
  _BYTE v69[24]; // [rsp+100h] [rbp-1E8h] BYREF
  _BYTE v70[24]; // [rsp+118h] [rbp-1D0h] BYREF
  void *v71; // [rsp+130h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+138h] [rbp-1B0h]
  int **v73; // [rsp+140h] [rbp-1A8h]
  __int64 v74; // [rsp+148h] [rbp-1A0h]
  __int64 v75; // [rsp+150h] [rbp-198h]
  __int64 v76; // [rsp+158h] [rbp-190h]
  char v77; // [rsp+160h] [rbp-188h]
  __int64 v78; // [rsp+168h] [rbp-180h]
  __int64 v79; // [rsp+178h] [rbp-170h]
  __int64 v80; // [rsp+188h] [rbp-160h]
  __int64 v81; // [rsp+190h] [rbp-158h]
  char v82; // [rsp+198h] [rbp-150h]
  _BYTE v83[7]; // [rsp+199h] [rbp-14Fh]
  __int64 v84; // [rsp+1A0h] [rbp-148h]
  __int64 v85; // [rsp+1B0h] [rbp-138h]
  __int64 v86; // [rsp+1C0h] [rbp-128h]
  __int64 v87; // [rsp+1C8h] [rbp-120h]
  char v88; // [rsp+1D0h] [rbp-118h]
  __int64 v89; // [rsp+1D8h] [rbp-110h]
  __int64 v90; // [rsp+1E8h] [rbp-100h]
  __int64 v91; // [rsp+1F8h] [rbp-F0h]
  __int64 v92; // [rsp+200h] [rbp-E8h]
  char v93; // [rsp+208h] [rbp-E0h]
  _BYTE v94[7]; // [rsp+209h] [rbp-DFh]
  __int64 v95; // [rsp+210h] [rbp-D8h]
  __int64 v96; // [rsp+220h] [rbp-C8h]
  __int64 v97; // [rsp+230h] [rbp-B8h]
  __int64 v98; // [rsp+238h] [rbp-B0h]
  char v99; // [rsp+240h] [rbp-A8h]
  __int64 v100; // [rsp+248h] [rbp-A0h]
  __int64 v101; // [rsp+258h] [rbp-90h]
  __int64 v102; // [rsp+268h] [rbp-80h]
  __int64 v103; // [rsp+270h] [rbp-78h]
  char v104; // [rsp+278h] [rbp-70h]
  _BYTE v105[7]; // [rsp+279h] [rbp-6Fh]
  __int64 v106; // [rsp+280h] [rbp-68h]
  __int64 v107; // [rsp+290h] [rbp-58h]
  __int64 v108; // [rsp+2A0h] [rbp-48h]
  __int64 v109; // [rsp+2A8h] [rbp-40h]
  char v110; // [rsp+2B0h] [rbp-38h]

  v50 = a2;
  v68[0] = a3;
  v68[1] = a4;
  v8 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a1, 1LL) ^ 1u;
  v38 = a5;
  v9 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a2, 1LL) ^ 1u;
  alloc::str::<impl str>::repeat(v69, a3, a4, v8);
  alloc::str::<impl str>::repeat(v70, a3, a4, v8 + v9);
  v43 = 0LL;
  v44 = 1LL;
  v45 = 0LL;
  v46 = a1;
  line = uu_comm::LineReader::read_line(a1, (__int64)&v43);
  v12 = v11;
  v47 = 0LL;
  v48 = 1LL;
  v49 = 0LL;
  v13 = uu_comm::LineReader::read_line(v50, (__int64)&v47);
  v15 = v14;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v16 = 0;
  v39 = 0;
  v35 = 0;
LABEL_2:
  v51 = v16;
  v17 = v15;
  v18 = v13;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( line )
      {
        if ( v18 )
          goto LABEL_21;
LABEL_17:
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, ::a2, 1LL) )
        {
          alloc::string::String::from_utf8_lossy(&v52, v48, v49);
          v58 = (int *)v69;
          v59 = <alloc::string::String as core::fmt::Display>::fmt;
          v60 = &v52;
          v61 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
          v71 = &unk_17FD8;
          v72 = 2LL;
          v75 = 0LL;
          v73 = &v58;
          v74 = 2LL;
          std::io::stdio::_print(&v71);
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v52);
        }
        v49 = 0LL;
        v13 = uu_comm::LineReader::read_line(v50, (__int64)&v47);
        v15 = v31;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18, v17);
        v16 = v51 + 1;
        v41 = v51 + 1;
        goto LABEL_2;
      }
      if ( !v18 )
        break;
LABEL_13:
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, ::a1, 1LL);
      v28 = v46;
      if ( !flag )
      {
        alloc::string::String::from_utf8_lossy(&v58, v44, v45);
        v52 = &v58;
        v53 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v71 = &unk_14010;
        v72 = 1LL;
        v75 = 0LL;
        v73 = (int **)&v52;
        v74 = 1LL;
        std::io::stdio::_print(&v71);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v58);
        v28 = v46;
      }
      v45 = 0LL;
      line = uu_comm::LineReader::read_line(v28, (__int64)&v43);
      v30 = v29;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v12);
      v40 = ++v39;
      v12 = v30;
    }
    if ( !(v17 | v12) )
      break;
    if ( !v12 )
      goto LABEL_17;
    if ( !v17 )
      goto LABEL_13;
    v19 = <alloc::vec::Vec<T,A> as core::cmp::Ord>::cmp(v44, v45, v48, v49);
    if ( v19 )
    {
      if ( v19 == 1 )
        goto LABEL_17;
      goto LABEL_13;
    }
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, ::a3, 1LL);
    v21 = v46;
    if ( !v20 )
    {
      alloc::string::String::from_utf8_lossy(&v52, v44, v45);
      v58 = (int *)v70;
      v59 = <alloc::string::String as core::fmt::Display>::fmt;
      v60 = &v52;
      v61 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v71 = &unk_17FD8;
      v72 = 2LL;
      v75 = 0LL;
      v73 = &v58;
      v74 = 2LL;
      std::io::stdio::_print(&v71);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v52);
      v21 = v46;
    }
    v45 = 0LL;
    v49 = 0LL;
    v22 = uu_comm::LineReader::read_line(v21, (__int64)&v43);
    v24 = v23;
    line = v22;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v12);
    v18 = uu_comm::LineReader::read_line(v50, (__int64)&v47);
    v26 = v25;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v17);
    v42 = ++v35;
    v17 = v26;
    v12 = v24;
  }
  v17 = 0LL;
  v18 = 0LL;
  v12 = 0LL;
LABEL_21:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aTotal, 5LL) )
  {
    v32 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v38,
                             aZeroTerminated_0,
                             15LL) == 0;
    v33 = 10;
    if ( !v32 )
      v33 = 0;
    v36 = v33;
    v58 = &v40;
    v59 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v60 = (int ***)v68;
    v61 = <&T as core::fmt::Display>::fmt;
    v62 = &v41;
    v63 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v64 = &v42;
    v65 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v66 = &v36;
    v67 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v71 = &dword_0 + 2;
    v73 = (int **)(&dword_0 + 2);
    v75 = 0LL;
    v76 = 32LL;
    v77 = 3;
    v78 = 2LL;
    v79 = 2LL;
    v80 = 1LL;
    v81 = 32LL;
    v82 = 3;
    *(_DWORD *)v83 = *(_DWORD *)v37;
    *(_DWORD *)&v83[3] = *(_DWORD *)&v37[3];
    v84 = 2LL;
    v85 = 2LL;
    v86 = 2LL;
    v87 = 32LL;
    v88 = 3;
    v89 = 2LL;
    v90 = 2LL;
    v91 = 1LL;
    v92 = 32LL;
    v93 = 3;
    *(_DWORD *)&v94[3] = *(_DWORD *)&v37[3];
    *(_DWORD *)v94 = *(_DWORD *)v37;
    v95 = 2LL;
    v96 = 2LL;
    v97 = 3LL;
    v98 = 32LL;
    v99 = 3;
    v100 = 2LL;
    v101 = 2LL;
    v102 = 1LL;
    v103 = 32LL;
    v104 = 3;
    *(_DWORD *)&v105[3] = *(_DWORD *)&v37[3];
    *(_DWORD *)v105 = *(_DWORD *)v37;
    v106 = 2LL;
    v107 = 2LL;
    v108 = 4LL;
    v109 = 32LL;
    v110 = 3;
    v52 = (int **)&unk_111398;
    v53 = (__int64 (__fastcall *)())&byte_7;
    v56 = &v71;
    v57 = 7LL;
    v54 = &v58;
    v55 = 5LL;
    std::io::stdio::_print(&v52);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18, v17);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v47);
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(line, v12);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v43);
  core::ptr::drop_in_place<alloc::string::String>(v70);
  return core::ptr::drop_in_place<alloc::string::String>(v69);
}
