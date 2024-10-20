__int64 __fastcall uu_comm::comm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r12
  int v15; // eax
  int v16; // ebp
  __int64 v17; // r14
  __int64 v18; // r13
  size_t v19; // rdx
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  bool v28; // zf
  char v29; // al
  __int64 result; // rax
  char v31; // [rsp+0h] [rbp-2E8h] BYREF
  _BYTE v32[7]; // [rsp+1h] [rbp-2E7h]
  __int64 v33; // [rsp+8h] [rbp-2E0h]
  __int64 v34; // [rsp+10h] [rbp-2D8h] BYREF
  void *s1; // [rsp+18h] [rbp-2D0h]
  size_t n; // [rsp+20h] [rbp-2C8h]
  int v37; // [rsp+28h] [rbp-2C0h]
  int v38; // [rsp+2Ch] [rbp-2BCh] BYREF
  int v39; // [rsp+30h] [rbp-2B8h] BYREF
  int v40; // [rsp+34h] [rbp-2B4h] BYREF
  __int64 v41; // [rsp+38h] [rbp-2B0h] BYREF
  void *s2; // [rsp+40h] [rbp-2A8h]
  size_t v43; // [rsp+48h] [rbp-2A0h]
  __int64 v44; // [rsp+50h] [rbp-298h]
  __int64 v45; // [rsp+58h] [rbp-290h]
  int v46; // [rsp+64h] [rbp-284h]
  int **v47; // [rsp+68h] [rbp-280h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+70h] [rbp-278h]
  int **v49; // [rsp+78h] [rbp-270h]
  __int64 v50; // [rsp+80h] [rbp-268h]
  void **v51; // [rsp+88h] [rbp-260h]
  __int64 v52; // [rsp+90h] [rbp-258h]
  __int64 v53; // [rsp+98h] [rbp-250h]
  int *v54; // [rsp+A0h] [rbp-248h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+A8h] [rbp-240h]
  int ***v56; // [rsp+B0h] [rbp-238h]
  __int64 (__fastcall *v57)(); // [rsp+B8h] [rbp-230h]
  int *v58; // [rsp+C0h] [rbp-228h]
  __int64 (__fastcall *v59)(); // [rsp+C8h] [rbp-220h]
  int *v60; // [rsp+D0h] [rbp-218h]
  __int64 (__fastcall *v61)(); // [rsp+D8h] [rbp-210h]
  char *v62; // [rsp+E0h] [rbp-208h]
  __int64 (__fastcall *v63)(); // [rsp+E8h] [rbp-200h]
  _QWORD v64[3]; // [rsp+F0h] [rbp-1F8h] BYREF
  _QWORD v65[3]; // [rsp+108h] [rbp-1E0h] BYREF
  _QWORD v66[2]; // [rsp+120h] [rbp-1C8h] BYREF
  void *v67; // [rsp+130h] [rbp-1B8h] BYREF
  __int64 v68; // [rsp+138h] [rbp-1B0h]
  _QWORD *v69; // [rsp+140h] [rbp-1A8h]
  __int64 v70; // [rsp+148h] [rbp-1A0h]
  __int64 v71; // [rsp+150h] [rbp-198h]
  __int64 v72; // [rsp+158h] [rbp-190h]
  char v73; // [rsp+160h] [rbp-188h]
  __int64 v74; // [rsp+168h] [rbp-180h]
  __int64 v75; // [rsp+178h] [rbp-170h]
  __int64 v76; // [rsp+188h] [rbp-160h]
  __int64 v77; // [rsp+190h] [rbp-158h]
  char v78; // [rsp+198h] [rbp-150h]
  _BYTE v79[7]; // [rsp+199h] [rbp-14Fh]
  __int64 v80; // [rsp+1A0h] [rbp-148h]
  __int64 v81; // [rsp+1B0h] [rbp-138h]
  __int64 v82; // [rsp+1C0h] [rbp-128h]
  __int64 v83; // [rsp+1C8h] [rbp-120h]
  char v84; // [rsp+1D0h] [rbp-118h]
  __int64 v85; // [rsp+1D8h] [rbp-110h]
  __int64 v86; // [rsp+1E8h] [rbp-100h]
  __int64 v87; // [rsp+1F8h] [rbp-F0h]
  __int64 v88; // [rsp+200h] [rbp-E8h]
  char v89; // [rsp+208h] [rbp-E0h]
  _BYTE v90[7]; // [rsp+209h] [rbp-DFh]
  __int64 v91; // [rsp+210h] [rbp-D8h]
  __int64 v92; // [rsp+220h] [rbp-C8h]
  __int64 v93; // [rsp+230h] [rbp-B8h]
  __int64 v94; // [rsp+238h] [rbp-B0h]
  char v95; // [rsp+240h] [rbp-A8h]
  __int64 v96; // [rsp+248h] [rbp-A0h]
  __int64 v97; // [rsp+258h] [rbp-90h]
  __int64 v98; // [rsp+268h] [rbp-80h]
  __int64 v99; // [rsp+270h] [rbp-78h]
  char v100; // [rsp+278h] [rbp-70h]
  _BYTE v101[7]; // [rsp+279h] [rbp-6Fh]
  __int64 v102; // [rsp+280h] [rbp-68h]
  __int64 v103; // [rsp+290h] [rbp-58h]
  __int64 v104; // [rsp+2A0h] [rbp-48h]
  __int64 v105; // [rsp+2A8h] [rbp-40h]
  char v106; // [rsp+2B0h] [rbp-38h]

  v45 = a2;
  v66[0] = a3;
  v66[1] = a4;
  v8 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a1, 1LL) ^ 1u;
  v33 = a5;
  v9 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a2, 1LL) ^ 1u;
  alloc::str::<impl str>::repeat(v64, a3, a4, v8);
  alloc::str::<impl str>::repeat(v65, a3, a4, v8 + v9);
  v34 = 0LL;
  s1 = &dword_0 + 1;
  n = 0LL;
  v10 = uu_comm::LineReader::read_line(a1, &v34);
  v12 = v11;
  v53 = a1;
  v41 = 0LL;
  s2 = &dword_0 + 1;
  v43 = 0LL;
  v44 = uu_comm::LineReader::read_line(v45, &v41);
  v14 = v13;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v15 = 0;
  v37 = 0;
  v16 = 0;
LABEL_2:
  v46 = v15;
  v17 = v14;
  v18 = v44;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( v18 )
          goto LABEL_31;
LABEL_25:
        if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v33, ::a2, 1LL) )
        {
          alloc::string::String::from_utf8_lossy(&v47, s2, v43);
          v54 = (int *)v64;
          v55 = <alloc::string::String as core::fmt::Display>::fmt;
          v56 = &v47;
          v57 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
          v67 = &unk_14400;
          v68 = 2LL;
          v71 = 0LL;
          v69 = &v54;
          v70 = 2LL;
          std::io::stdio::_print(&v67);
          if ( v47 != (int **)0x8000000000000000LL )
          {
            if ( v47 )
              _rust_dealloc(v48, v47, 1LL);
          }
        }
        v43 = 0LL;
        v44 = uu_comm::LineReader::read_line(v45, &v41);
        v14 = v27;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18, v17);
        v15 = v46 + 1;
        v39 = v46 + 1;
        goto LABEL_2;
      }
      if ( !v18 )
        break;
LABEL_19:
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v33, ::a1, 1LL) )
      {
        alloc::string::String::from_utf8_lossy(&v54, s1, n);
        v47 = &v54;
        v48 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v67 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        v68 = 1LL;
        v71 = 0LL;
        v69 = &v47;
        v70 = 1LL;
        std::io::stdio::_print(&v67);
        if ( v54 != (int *)0x8000000000000000LL )
        {
          if ( v54 )
            _rust_dealloc(v55, v54, 1LL);
        }
      }
      n = 0LL;
      v10 = uu_comm::LineReader::read_line(v53, &v34);
      v38 = ++v37;
      v12 = v26;
    }
    if ( !(v17 | v12) )
      break;
    if ( !v12 )
      goto LABEL_25;
    if ( !v17 )
      goto LABEL_19;
    v19 = v43;
    v20 = n - v43;
    if ( n < v43 )
      v19 = n;
    v21 = memcmp(s1, s2, v19);
    if ( v21 )
      v20 = v21;
    if ( v20 < 0 )
      goto LABEL_19;
    if ( v20 )
      goto LABEL_25;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v33, ::a3, 1LL) )
    {
      alloc::string::String::from_utf8_lossy(&v47, s1, n);
      v54 = (int *)v65;
      v55 = <alloc::string::String as core::fmt::Display>::fmt;
      v56 = &v47;
      v57 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v67 = &unk_14400;
      v68 = 2LL;
      v71 = 0LL;
      v69 = &v54;
      v70 = 2LL;
      std::io::stdio::_print(&v67);
      if ( v47 != (int **)0x8000000000000000LL )
      {
        if ( v47 )
          _rust_dealloc(v48, v47, 1LL);
      }
    }
    n = 0LL;
    v43 = 0LL;
    v22 = uu_comm::LineReader::read_line(v53, &v34);
    v24 = v23;
    v10 = v22;
    v18 = uu_comm::LineReader::read_line(v45, &v41);
    v40 = ++v16;
    v17 = v25;
    v12 = v24;
  }
  v17 = 0LL;
  v18 = 0LL;
  v12 = 0LL;
LABEL_31:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v33, aTotal, 5LL) )
  {
    v28 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v33,
                             aZeroTerminated_0,
                             15LL) == 0;
    v29 = 10;
    if ( !v28 )
      v29 = 0;
    v31 = v29;
    v54 = &v38;
    v55 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v56 = (int ***)v66;
    v57 = <&T as core::fmt::Display>::fmt;
    v58 = &v39;
    v59 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v60 = &v40;
    v61 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v62 = &v31;
    v63 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v67 = &dword_0 + 2;
    v69 = (_QWORD *)(&dword_0 + 2);
    v71 = 0LL;
    v72 = 32LL;
    v73 = 3;
    v74 = 2LL;
    v75 = 2LL;
    v76 = 1LL;
    v77 = 32LL;
    v78 = 3;
    *(_DWORD *)v79 = *(_DWORD *)v32;
    *(_DWORD *)&v79[3] = *(_DWORD *)&v32[3];
    v80 = 2LL;
    v81 = 2LL;
    v82 = 2LL;
    v83 = 32LL;
    v84 = 3;
    v85 = 2LL;
    v86 = 2LL;
    v87 = 1LL;
    v88 = 32LL;
    v89 = 3;
    *(_DWORD *)&v90[3] = *(_DWORD *)&v32[3];
    *(_DWORD *)v90 = *(_DWORD *)v32;
    v91 = 2LL;
    v92 = 2LL;
    v93 = 3LL;
    v94 = 32LL;
    v95 = 3;
    v96 = 2LL;
    v97 = 2LL;
    v98 = 1LL;
    v99 = 32LL;
    v100 = 3;
    *(_DWORD *)&v101[3] = *(_DWORD *)&v32[3];
    *(_DWORD *)v101 = *(_DWORD *)v32;
    v102 = 2LL;
    v103 = 2LL;
    v104 = 4LL;
    v105 = 32LL;
    v106 = 3;
    v47 = (int **)&unk_DD3E0;
    v48 = (__int64 (__fastcall *)())&byte_7;
    v51 = &v67;
    v52 = 7LL;
    v49 = &v54;
    v50 = 5LL;
    std::io::stdio::_print(&v47);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v18, v17);
  if ( v41 )
    _rust_dealloc(s2, v41, 1LL);
  result = core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v10, v12);
  if ( v34 )
    result = _rust_dealloc(s1, v34, 1LL);
  if ( v65[0] )
    result = _rust_dealloc(v65[1], v65[0], 1LL);
  if ( v64[0] )
    return _rust_dealloc(v64[1], v64[0], 1LL);
  return result;
}
