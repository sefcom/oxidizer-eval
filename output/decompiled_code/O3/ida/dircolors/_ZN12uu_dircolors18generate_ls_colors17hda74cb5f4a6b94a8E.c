__int64 __fastcall uu_dircolors::generate_ls_colors(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _OWORD *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r12
  char *v10; // rax
  char *v11; // rcx
  bool v12; // al
  void *v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r15
  __int128 **v16; // rbp
  char *v17; // rax
  char *v18; // rcx
  bool v19; // al
  void *v20; // rcx
  __int128 **v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rbx
  _QWORD *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  _BYTE *v31; // r14
  __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rsi
  __int128 v36; // [rsp+0h] [rbp-298h] BYREF
  __int64 v37; // [rsp+10h] [rbp-288h]
  __int64 *v38; // [rsp+18h] [rbp-280h]
  __int64 v39; // [rsp+20h] [rbp-278h] BYREF
  __int64 v40; // [rsp+28h] [rbp-270h]
  __int64 v41; // [rsp+30h] [rbp-268h]
  _BYTE v42[7]; // [rsp+39h] [rbp-25Fh]
  __int128 v43; // [rsp+40h] [rbp-258h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+50h] [rbp-248h]
  __int128 v45; // [rsp+60h] [rbp-238h] BYREF
  __int128 *v46; // [rsp+70h] [rbp-228h]
  __int128 *v47; // [rsp+80h] [rbp-218h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+88h] [rbp-210h]
  __int128 *v49; // [rsp+90h] [rbp-208h]
  __int64 (__fastcall *v50)(); // [rsp+98h] [rbp-200h]
  __int128 *v51; // [rsp+A0h] [rbp-1F8h]
  __int64 (__fastcall *v52)(); // [rsp+A8h] [rbp-1F0h]
  __int128 v53; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 *v54; // [rsp+C0h] [rbp-1D8h]
  __int128 v55; // [rsp+D0h] [rbp-1C8h] BYREF
  __int128 **v56; // [rsp+E0h] [rbp-1B8h]
  __int64 v57; // [rsp+E8h] [rbp-1B0h]
  __int128 *v58; // [rsp+F0h] [rbp-1A8h]
  __int64 v59; // [rsp+F8h] [rbp-1A0h]
  __int64 v60; // [rsp+108h] [rbp-190h]
  __int64 v61; // [rsp+110h] [rbp-188h]
  __int64 v62; // [rsp+118h] [rbp-180h]
  _BYTE *v63; // [rsp+120h] [rbp-178h]
  __int128 v64; // [rsp+128h] [rbp-170h] BYREF
  __int128 *v65; // [rsp+138h] [rbp-160h]
  __int128 v66; // [rsp+140h] [rbp-158h]
  __int64 (__fastcall *v67)(); // [rsp+150h] [rbp-148h]
  __int128 *v68; // [rsp+158h] [rbp-140h]
  __int64 (__fastcall *v69)(); // [rsp+160h] [rbp-138h]
  __int64 v70; // [rsp+170h] [rbp-128h]
  __int64 v71; // [rsp+180h] [rbp-118h]
  __int64 v72; // [rsp+188h] [rbp-110h]
  char v73; // [rsp+190h] [rbp-108h]
  __int64 v74; // [rsp+198h] [rbp-100h]
  __int64 v75; // [rsp+1A8h] [rbp-F0h]
  __int64 v76; // [rsp+1B8h] [rbp-E0h]
  __int64 v77; // [rsp+1C0h] [rbp-D8h]
  char v78; // [rsp+1C8h] [rbp-D0h]
  __int64 v79; // [rsp+1D0h] [rbp-C8h]
  __int64 v80; // [rsp+1E0h] [rbp-B8h]
  __int64 v81; // [rsp+1F0h] [rbp-A8h]
  __int64 v82; // [rsp+1F8h] [rbp-A0h]
  char v83; // [rsp+200h] [rbp-98h]
  _BYTE v84[7]; // [rsp+201h] [rbp-97h]
  __int128 v85; // [rsp+208h] [rbp-90h] BYREF
  __int64 v86; // [rsp+218h] [rbp-80h]
  __int128 v87; // [rsp+220h] [rbp-78h] BYREF
  __int64 v88; // [rsp+230h] [rbp-68h]
  __int128 v89; // [rsp+238h] [rbp-60h] BYREF
  __int64 v90; // [rsp+248h] [rbp-50h]
  __int128 v91; // [rsp+250h] [rbp-48h] BYREF
  __int128 **v92; // [rsp+260h] [rbp-38h]

  v4 = *a2 == 2;
  v60 = a1;
  if ( v4 )
  {
    *(_QWORD *)&v36 = 0LL;
    *((_QWORD *)&v36 + 1) = 8LL;
    v37 = 0LL;
    uu_dircolors::generate_type_output((__int64)&v85, a2);
    alloc::raw_vec::RawVec<T,A>::grow_one(&v36);
    v5 = (_OWORD *)*((_QWORD *)&v36 + 1);
    *(_QWORD *)(*((_QWORD *)&v36 + 1) + 16LL) = v86;
    *v5 = v85;
    v37 = 1LL;
    v6 = 3LL;
    v38 = (__int64 *)&v36;
    do
    {
      v10 = (&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v6 - 3];
      v11 = (&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v6 - 2];
      *(_QWORD *)&v53 = v10;
      *((_QWORD *)&v53 + 1) = v11;
      v43 = *(_OWORD *)&(&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v6 - 1];
      if ( v11 )
      {
        v12 = *v10 == 42;
        v13 = &unk_22901;
        if ( v12 )
          v13 = &dword_0 + 1;
      }
      else
      {
        v12 = 0;
        v13 = &unk_22901;
      }
      *(_QWORD *)&v45 = v13;
      *((_QWORD *)&v45 + 1) = !v12;
      v47 = &v43;
      v48 = <&T as core::fmt::Display>::fmt;
      v49 = &v45;
      v50 = <&T as core::fmt::Display>::fmt;
      v51 = &v53;
      v52 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v64 = 2LL;
      v65 = (_OWORD *)(&dword_0 + 2);
      *((_QWORD *)&v66 + 1) = 0LL;
      v67 = (__int64 (__fastcall *)())&qword_20;
      LOBYTE(v68) = 3;
      HIDWORD(v68) = *(_DWORD *)&v42[3];
      *(_DWORD *)((char *)&v68 + 1) = *(_DWORD *)v42;
      v69 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v70 = 2LL;
      v71 = 1LL;
      v72 = 32LL;
      v73 = 3;
      v74 = 2LL;
      v75 = 2LL;
      v76 = 2LL;
      v77 = 32LL;
      v78 = 3;
      v79 = 2LL;
      v80 = 2LL;
      v81 = 0LL;
      v82 = 32LL;
      v83 = 3;
      *(_DWORD *)&v84[3] = *(_DWORD *)&v42[3];
      *(_DWORD *)v84 = *(_DWORD *)v42;
      *(_QWORD *)&v55 = &off_F3120;
      *((_QWORD *)&v55 + 1) = 5LL;
      v58 = &v64;
      v59 = 4LL;
      v56 = &v47;
      v57 = 3LL;
      alloc::fmt::format::format_inner(&v87, &v55);
      v14 = v37;
      if ( v37 == (_QWORD)v36 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v36);
      v7 = *((_QWORD *)&v36 + 1);
      v8 = 3 * v14;
      *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v8 + 16) = v88;
      *(_OWORD *)(v7 + 8 * v8) = v87;
      v9 = v14 + 1;
      v37 = v9;
      v6 += 4LL;
    }
    while ( v6 != 523 );
    alloc::str::join_generic_copy(&v64, *((_QWORD *)&v36 + 1), v9, asc_228FF, 1LL);
    v25 = v60;
    *(_QWORD *)(v60 + 16) = v65;
    *(_OWORD *)v25 = v64;
    v26 = v37;
    if ( v37 )
    {
      v27 = (_QWORD *)(*((_QWORD *)&v36 + 1) + 8LL);
      do
      {
        v28 = *(v27 - 1);
        if ( v28 )
          _rust_dealloc(*v27, v28, 1LL);
        v27 += 3;
        --v26;
      }
      while ( v26 );
    }
    v29 = v36;
    if ( (_QWORD)v36 )
    {
      v30 = *((_QWORD *)&v36 + 1);
LABEL_44:
      _rust_dealloc(v30, 24 * v29, 8LL);
    }
  }
  else
  {
    v61 = a3;
    v62 = a4;
    v63 = a2;
    v39 = 0LL;
    v40 = 8LL;
    v41 = 0LL;
    v15 = 3LL;
    v16 = &v47;
    v38 = &v39;
    do
    {
      v17 = (&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v15 - 3];
      v18 = (&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v15 - 2];
      *(_QWORD *)&v43 = v17;
      *((_QWORD *)&v43 + 1) = v18;
      v45 = *(_OWORD *)&(&anon_4406f472a8377c7ece58ca9d20f54484_263_llvm_13238753694568376422)[v15 - 1];
      if ( v18 )
      {
        v19 = *v17 == 42;
        v20 = &unk_22901;
        if ( v19 )
          v20 = &dword_0 + 1;
      }
      else
      {
        v19 = 0;
        v20 = &unk_22901;
      }
      *(_QWORD *)&v36 = v20;
      *((_QWORD *)&v36 + 1) = !v19;
      v47 = &v36;
      v48 = <&T as core::fmt::Display>::fmt;
      v49 = &v43;
      v50 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v64 = &unk_17E08;
      *((_QWORD *)&v64 + 1) = 2LL;
      v65 = (__int128 *)v16;
      v66 = 2uLL;
      alloc::fmt::format::format_inner(&v91, &v64);
      v55 = v91;
      v56 = v92;
      v47 = &v55;
      v48 = <alloc::string::String as core::fmt::Display>::fmt;
      v49 = &v45;
      v50 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v64 = &unk_F31B0;
      *((_QWORD *)&v64 + 1) = 2LL;
      v21 = v16;
      v65 = (__int128 *)v16;
      v66 = 2uLL;
      alloc::fmt::format::format_inner(&v89, &v64);
      v22 = v41;
      if ( v41 == v39 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v39);
      v23 = v40;
      v24 = 3 * v22;
      *(_QWORD *)(v40 + 8 * v24 + 16) = v90;
      *(_OWORD *)(v23 + 8 * v24) = v89;
      v41 = v22 + 1;
      if ( (_QWORD)v55 )
        _rust_dealloc(*((_QWORD *)&v55 + 1), v55, 1LL);
      v15 += 4LL;
      v16 = v21;
    }
    while ( v15 != 523 );
    v31 = v63;
    uu_dircolors::get_colors_format_strings((__int64 *)&v64, v63);
    v54 = v65;
    v53 = v64;
    v44 = v67;
    v43 = v66;
    alloc::str::join_generic_copy(&v64, v40, v41, v61, v62);
    v46 = v65;
    v45 = v64;
    uu_dircolors::generate_type_output((__int64)&v55, v31);
    *(_QWORD *)&v64 = &v53;
    *((_QWORD *)&v64 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v65 = &v55;
    *(_QWORD *)&v66 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v66 + 1) = &v45;
    v67 = <alloc::string::String as core::fmt::Display>::fmt;
    v68 = &v43;
    v69 = <alloc::string::String as core::fmt::Display>::fmt;
    v47 = (__int128 *)&unk_F3170;
    v48 = (__int64 (__fastcall *)())&byte_4;
    v51 = 0LL;
    v49 = &v64;
    v50 = (__int64 (__fastcall *)())&byte_4;
    alloc::fmt::format::format_inner(&v36, &v47);
    v25 = v60;
    if ( (_QWORD)v55 )
      _rust_dealloc(*((_QWORD *)&v55 + 1), v55, 1LL);
    *(_QWORD *)(v25 + 16) = v37;
    *(_OWORD *)v25 = v36;
    if ( (_QWORD)v45 )
      _rust_dealloc(*((_QWORD *)&v45 + 1), v45, 1LL);
    if ( (_QWORD)v43 )
      _rust_dealloc(*((_QWORD *)&v43 + 1), v43, 1LL);
    if ( (_QWORD)v53 )
      _rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1LL);
    v32 = v41;
    if ( v41 )
    {
      v33 = (_QWORD *)(v40 + 8);
      do
      {
        v34 = *(v33 - 1);
        if ( v34 )
          _rust_dealloc(*v33, v34, 1LL);
        v33 += 3;
        --v32;
      }
      while ( v32 );
    }
    v29 = v39;
    if ( v39 )
    {
      v30 = v40;
      goto LABEL_44;
    }
  }
  return v25;
}
