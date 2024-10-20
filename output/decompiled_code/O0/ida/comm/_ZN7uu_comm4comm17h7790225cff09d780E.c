__int64 __fastcall uu_comm::comm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r13
  unsigned __int8 flag; // bp
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r12
  size_t v16; // rdx
  __int64 v17; // r15
  int v18; // eax
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 result; // rax
  bool v25; // zf
  char v26; // al
  char **v27; // rdi
  char v28; // [rsp+3h] [rbp-425h] BYREF
  int v29; // [rsp+4h] [rbp-424h] BYREF
  int v30; // [rsp+8h] [rbp-420h] BYREF
  int v31; // [rsp+Ch] [rbp-41Ch] BYREF
  __int64 v32; // [rsp+10h] [rbp-418h] BYREF
  void *s1; // [rsp+18h] [rbp-410h]
  size_t n; // [rsp+20h] [rbp-408h]
  __int64 v35; // [rsp+28h] [rbp-400h] BYREF
  void *s2; // [rsp+30h] [rbp-3F8h]
  __int64 v37; // [rsp+38h] [rbp-3F0h]
  __int64 v38; // [rsp+40h] [rbp-3E8h]
  __int64 v39; // [rsp+48h] [rbp-3E0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-3D0h]
  __int64 v42; // [rsp+60h] [rbp-3C8h]
  __int64 v43; // [rsp+68h] [rbp-3C0h]
  __int64 v44; // [rsp+70h] [rbp-3B8h]
  __int64 v45; // [rsp+78h] [rbp-3B0h]
  __int64 v46; // [rsp+80h] [rbp-3A8h]
  _QWORD v47[3]; // [rsp+88h] [rbp-3A0h] BYREF
  _QWORD v48[3]; // [rsp+A0h] [rbp-388h] BYREF
  _QWORD v49[2]; // [rsp+B8h] [rbp-370h] BYREF
  _BYTE v50[8]; // [rsp+C8h] [rbp-360h] BYREF
  _QWORD v51[2]; // [rsp+D0h] [rbp-358h] BYREF
  _BYTE v52[8]; // [rsp+E0h] [rbp-348h] BYREF
  _QWORD v53[2]; // [rsp+E8h] [rbp-340h] BYREF
  _BYTE v54[8]; // [rsp+F8h] [rbp-330h] BYREF
  _QWORD v55[2]; // [rsp+100h] [rbp-328h] BYREF
  _QWORD v56[2]; // [rsp+110h] [rbp-318h] BYREF
  _QWORD v57[4]; // [rsp+120h] [rbp-308h] BYREF
  _QWORD v58[4]; // [rsp+140h] [rbp-2E8h] BYREF
  _QWORD v59[6]; // [rsp+160h] [rbp-2C8h] BYREF
  _QWORD v60[10]; // [rsp+190h] [rbp-298h] BYREF
  _QWORD v61[6]; // [rsp+1E0h] [rbp-248h] BYREF
  _QWORD v62[6]; // [rsp+210h] [rbp-218h] BYREF
  _QWORD v63[6]; // [rsp+240h] [rbp-1E8h] BYREF
  _QWORD v64[6]; // [rsp+270h] [rbp-1B8h] BYREF
  char v65; // [rsp+2A0h] [rbp-188h]
  __int64 v66; // [rsp+2A8h] [rbp-180h]
  __int64 v67; // [rsp+2B8h] [rbp-170h]
  __int64 v68; // [rsp+2C8h] [rbp-160h]
  __int64 v69; // [rsp+2D0h] [rbp-158h]
  char v70; // [rsp+2D8h] [rbp-150h]
  __int64 v71; // [rsp+2E0h] [rbp-148h]
  __int64 v72; // [rsp+2F0h] [rbp-138h]
  __int64 v73; // [rsp+300h] [rbp-128h]
  __int64 v74; // [rsp+308h] [rbp-120h]
  char v75; // [rsp+310h] [rbp-118h]
  __int64 v76; // [rsp+318h] [rbp-110h]
  __int64 v77; // [rsp+328h] [rbp-100h]
  __int64 v78; // [rsp+338h] [rbp-F0h]
  __int64 v79; // [rsp+340h] [rbp-E8h]
  char v80; // [rsp+348h] [rbp-E0h]
  __int64 v81; // [rsp+350h] [rbp-D8h]
  __int64 v82; // [rsp+360h] [rbp-C8h]
  __int64 v83; // [rsp+370h] [rbp-B8h]
  __int64 v84; // [rsp+378h] [rbp-B0h]
  char v85; // [rsp+380h] [rbp-A8h]
  __int64 v86; // [rsp+388h] [rbp-A0h]
  __int64 v87; // [rsp+398h] [rbp-90h]
  __int64 v88; // [rsp+3A8h] [rbp-80h]
  __int64 v89; // [rsp+3B0h] [rbp-78h]
  char v90; // [rsp+3B8h] [rbp-70h]
  __int64 v91; // [rsp+3C0h] [rbp-68h]
  __int64 v92; // [rsp+3D0h] [rbp-58h]
  __int64 v93; // [rsp+3E0h] [rbp-48h]
  __int64 v94; // [rsp+3E8h] [rbp-40h]
  char v95; // [rsp+3F0h] [rbp-38h]

  v46 = a2;
  v55[0] = a3;
  v55[1] = a4;
  v8 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a1, 1LL, &off_102608) ^ 1u;
  v38 = a5;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a5, ::a2, 1LL, &off_102620);
  alloc::str::<impl str>::repeat(v47, a3, a4, v8);
  alloc::str::<impl str>::repeat(v48, a3, a4, v8 + (flag ^ 1u));
  v32 = 0LL;
  s1 = &dword_0 + 1;
  n = 0LL;
  v10 = uu_comm::LineReader::read_line(a1, &v32);
  v12 = v11;
  v42 = v10;
  v43 = v11;
  v35 = 0LL;
  s2 = &dword_0 + 1;
  v37 = 0LL;
  v13 = uu_comm::LineReader::read_line(v46, &v35);
  v15 = v14;
  v44 = v13;
  v45 = v14;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  while ( 1 )
  {
    while ( v10 )
    {
      if ( v13 )
        goto LABEL_51;
LABEL_41:
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v38,
                               ::a2,
                               1LL,
                               &off_102738) )
      {
        if ( !s2 || v37 < 0 )
LABEL_73:
          core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
        alloc::string::String::from_utf8_lossy(v51);
        v57[0] = v47;
        v57[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v57[2] = v51;
        v57[3] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v62[0] = "\x01";
        v62[1] = 2LL;
        v62[4] = 0LL;
        v62[2] = v57;
        v62[3] = 2LL;
        std::io::stdio::_print(v62);
        if ( v51[0] != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v39, v51);
          if ( v40 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v52, v39, v40, v41);
        }
      }
      if ( !s2 || v37 < 0 )
LABEL_70:
        core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
      v37 = 0LL;
      v13 = uu_comm::LineReader::read_line(v46, &v35);
      v15 = v23;
      v44 = v13;
      v45 = v23;
      if ( __OFADD__(1, v30) )
      {
        v27 = &off_102750;
        goto LABEL_72;
      }
      ++v30;
    }
    if ( v13 )
      goto LABEL_15;
    if ( !v12 )
      break;
    if ( !v15 )
      goto LABEL_15;
    if ( !s1 || (n & 0x8000000000000000LL) != 0LL || !s2 || (v16 = v37, v37 < 0) )
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    v17 = n - v37;
    if ( n < v37 )
      v16 = n;
    v18 = memcmp(s1, s2, v16);
    if ( v18 )
      v17 = v18;
    v19 = (v17 > 0) + (v17 >> 63);
    if ( v19 != -1 )
    {
      if ( v19 )
        goto LABEL_41;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v38,
                               ::a3,
                               1LL,
                               &off_102708) )
      {
        if ( !s1 || (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_73;
        alloc::string::String::from_utf8_lossy(v53);
        v58[0] = v48;
        v58[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v58[2] = v53;
        v58[3] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v63[0] = "\x01";
        v63[1] = 2LL;
        v63[4] = 0LL;
        v63[2] = v58;
        v63[3] = 2LL;
        std::io::stdio::_print(v63);
        if ( v53[0] != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v39, v53);
          if ( v40 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v54, v39, v40, v41);
        }
      }
      if ( !s1 )
        goto LABEL_70;
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_70;
      n = 0LL;
      if ( !s2 || v37 < 0 )
        goto LABEL_70;
      v37 = 0LL;
      v10 = uu_comm::LineReader::read_line(a1, &v32);
      v12 = v21;
      v42 = v10;
      v43 = v21;
      v13 = uu_comm::LineReader::read_line(v46, &v35);
      v15 = v22;
      v44 = v13;
      v45 = v22;
      if ( __OFADD__(1, v31) )
      {
        v27 = &off_102720;
LABEL_72:
        core::panicking::panic_const::panic_const_add_overflow(v27);
      }
      ++v31;
    }
    else
    {
LABEL_15:
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                               v38,
                               ::a1,
                               1LL,
                               &off_1026D8) )
      {
        if ( !s1 || (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_73;
        alloc::string::String::from_utf8_lossy(v49);
        v56[0] = v49;
        v56[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v61[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v61[1] = 1LL;
        v61[4] = 0LL;
        v61[2] = v56;
        v61[3] = 1LL;
        std::io::stdio::_print(v61);
        if ( v49[0] != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(&v39, v49);
          if ( v40 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v50, v39, v40, v41);
        }
      }
      if ( !s1 || (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_70;
      n = 0LL;
      v10 = uu_comm::LineReader::read_line(a1, &v32);
      v12 = v20;
      v42 = v10;
      v43 = v20;
      if ( __OFADD__(1, v29) )
      {
        v27 = &off_1026F0;
        goto LABEL_72;
      }
      ++v29;
    }
  }
  if ( v15 )
    goto LABEL_41;
LABEL_51:
  result = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aTotal, 5LL, &off_102638);
  if ( (_BYTE)result )
  {
    v25 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v38,
                             aZeroTerminated_0,
                             15LL,
                             &off_102650) == 0;
    v26 = 10;
    if ( !v25 )
      v26 = 0;
    v28 = v26;
    v60[0] = &v29;
    v60[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v60[2] = v55;
    v60[3] = <&T as core::fmt::Display>::fmt;
    v60[4] = &v30;
    v60[5] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v60[6] = &v31;
    v60[7] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v60[8] = &v28;
    v60[9] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v64[0] = 2LL;
    v64[2] = 2LL;
    v64[4] = 0LL;
    v64[5] = 32LL;
    v65 = 3;
    v66 = 2LL;
    v67 = 2LL;
    v68 = 1LL;
    v69 = 32LL;
    v70 = 3;
    v71 = 2LL;
    v72 = 2LL;
    v73 = 2LL;
    v74 = 32LL;
    v75 = 3;
    v76 = 2LL;
    v77 = 2LL;
    v78 = 1LL;
    v79 = 32LL;
    v80 = 3;
    v81 = 2LL;
    v82 = 2LL;
    v83 = 3LL;
    v84 = 32LL;
    v85 = 3;
    v86 = 2LL;
    v87 = 2LL;
    v88 = 1LL;
    v89 = 32LL;
    v90 = 3;
    v91 = 2LL;
    v92 = 2LL;
    v93 = 4LL;
    v94 = 32LL;
    v95 = 3;
    v59[0] = &unk_102668;
    v59[1] = 7LL;
    v59[4] = v64;
    v59[5] = 7LL;
    v59[2] = v60;
    v59[3] = 5LL;
    result = std::io::stdio::_print(v59);
    v13 = v44;
  }
  if ( v13 )
  {
    result = std::io::error::repr_bitpacked::decode_repr(&v39, v45);
    if ( (unsigned __int8)v39 >= 3u )
      result = core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v40);
  }
  if ( v35 )
    result = _rust_dealloc(s2, v35, 1LL);
  if ( v42 )
  {
    result = std::io::error::repr_bitpacked::decode_repr(&v39, v43);
    if ( (unsigned __int8)v39 >= 3u )
      result = core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v40);
  }
  if ( v32 )
    result = _rust_dealloc(s1, v32, 1LL);
  if ( v48[0] )
    result = _rust_dealloc(v48[1], v48[0], 1LL);
  if ( v47[0] )
    return _rust_dealloc(v47[1], v47[0], 1LL);
  return result;
}
