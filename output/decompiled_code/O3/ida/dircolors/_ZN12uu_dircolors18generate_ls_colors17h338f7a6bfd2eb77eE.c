__int64 __fastcall uu_dircolors::generate_ls_colors(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 i; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  void *v11; // rcx
  __int64 v12; // r15
  char ***v13; // rdi
  __int64 v14; // rax
  __int128 **v15; // rbx
  __int128 *v16; // r15
  __int128 *v17; // r14
  __int64 v18; // r15
  __int128 **v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  void *v26; // rcx
  _BYTE *v27; // r12
  __int128 v29; // [rsp+0h] [rbp-278h] BYREF
  __int64 v30; // [rsp+10h] [rbp-268h]
  _BYTE v31[7]; // [rsp+19h] [rbp-25Fh]
  __int128 v32; // [rsp+20h] [rbp-258h] BYREF
  __int128 *v33; // [rsp+30h] [rbp-248h]
  char **v34; // [rsp+38h] [rbp-240h] BYREF
  char **v35; // [rsp+40h] [rbp-238h]
  __int64 v36; // [rsp+48h] [rbp-230h]
  __int128 *v37; // [rsp+50h] [rbp-228h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+58h] [rbp-220h]
  __int128 *v39; // [rsp+60h] [rbp-218h]
  __int64 (__fastcall *v40)(); // [rsp+68h] [rbp-210h]
  __int128 *v41; // [rsp+70h] [rbp-208h]
  __int64 (__fastcall *v42)(); // [rsp+78h] [rbp-200h]
  __int128 v43; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+90h] [rbp-1E8h]
  __int128 v45; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 *v46; // [rsp+B0h] [rbp-1C8h]
  __int64 v47; // [rsp+B8h] [rbp-1C0h]
  __int128 v48; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 **v49; // [rsp+D0h] [rbp-1A8h]
  __int64 v50; // [rsp+D8h] [rbp-1A0h]
  __int128 *v51; // [rsp+E0h] [rbp-198h]
  __int64 v52; // [rsp+E8h] [rbp-190h]
  __int64 v53; // [rsp+F0h] [rbp-188h]
  __int64 v54; // [rsp+F8h] [rbp-180h]
  _BYTE *v55; // [rsp+100h] [rbp-178h]
  __int128 v56; // [rsp+108h] [rbp-170h] BYREF
  __int128 *v57; // [rsp+118h] [rbp-160h]
  __int128 v58; // [rsp+120h] [rbp-158h]
  __int64 (__fastcall *v59)(); // [rsp+130h] [rbp-148h]
  __int128 *v60; // [rsp+138h] [rbp-140h]
  __int64 (__fastcall *v61)(); // [rsp+140h] [rbp-138h]
  __int64 v62; // [rsp+150h] [rbp-128h]
  __int64 v63; // [rsp+160h] [rbp-118h]
  __int64 v64; // [rsp+168h] [rbp-110h]
  char v65; // [rsp+170h] [rbp-108h]
  __int64 v66; // [rsp+178h] [rbp-100h]
  __int64 v67; // [rsp+188h] [rbp-F0h]
  __int64 v68; // [rsp+198h] [rbp-E0h]
  __int64 v69; // [rsp+1A0h] [rbp-D8h]
  char v70; // [rsp+1A8h] [rbp-D0h]
  __int64 v71; // [rsp+1B0h] [rbp-C8h]
  __int64 v72; // [rsp+1C0h] [rbp-B8h]
  __int64 v73; // [rsp+1D0h] [rbp-A8h]
  __int64 v74; // [rsp+1D8h] [rbp-A0h]
  char v75; // [rsp+1E0h] [rbp-98h]
  _BYTE v76[7]; // [rsp+1E1h] [rbp-97h]
  __int128 v77; // [rsp+1E8h] [rbp-90h] BYREF
  __int128 **v78; // [rsp+1F8h] [rbp-80h]
  _BYTE v79[24]; // [rsp+200h] [rbp-78h] BYREF
  _BYTE v80[24]; // [rsp+218h] [rbp-60h] BYREF
  _BYTE v81[72]; // [rsp+230h] [rbp-48h] BYREF

  v4 = *a2 == 2;
  v47 = a1;
  if ( v4 )
  {
    *(_QWORD *)&v29 = 0LL;
    *((_QWORD *)&v29 + 1) = 8LL;
    v30 = 0LL;
    uu_dircolors::generate_type_output((__int64)v79, a2);
    alloc::vec::Vec<T,A>::push(&v29, v79);
    v34 = &anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447;
    v35 = &off_129848;
    for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v34);
          i;
          i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v34) )
    {
      v7 = *(_QWORD *)(i + 8);
      *(_QWORD *)&v32 = *(_QWORD *)i;
      v6 = v32;
      *((_QWORD *)&v32 + 1) = v7;
      v43 = *(_OWORD *)(i + 16);
      LODWORD(v56) = 0;
      v8 = core::char::methods::encode_utf8_raw(42LL, &v56);
      v10 = core::slice::<impl [T]>::starts_with(v6, v7, v8, v9);
      v11 = &unk_23435;
      if ( v10 )
        v11 = &dword_0 + 1;
      *(_QWORD *)&v45 = v11;
      *((_QWORD *)&v45 + 1) = v10 ^ 1u;
      v37 = &v43;
      v38 = <&T as core::fmt::Display>::fmt;
      v39 = &v45;
      v40 = <&T as core::fmt::Display>::fmt;
      v41 = &v32;
      v42 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v56 = 2LL;
      v57 = (_OWORD *)(&dword_0 + 2);
      *((_QWORD *)&v58 + 1) = 0LL;
      v59 = (__int64 (__fastcall *)())&qword_20;
      LOBYTE(v60) = 3;
      HIDWORD(v60) = *(_DWORD *)&v31[3];
      *(_DWORD *)((char *)&v60 + 1) = *(_DWORD *)v31;
      v61 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v62 = 2LL;
      v63 = 1LL;
      v64 = 32LL;
      v65 = 3;
      v66 = 2LL;
      v67 = 2LL;
      v68 = 2LL;
      v69 = 32LL;
      v70 = 3;
      v71 = 2LL;
      v72 = 2LL;
      v73 = 0LL;
      v74 = 32LL;
      v75 = 3;
      *(_DWORD *)&v76[3] = *(_DWORD *)&v31[3];
      *(_DWORD *)v76 = *(_DWORD *)v31;
      *(_QWORD *)&v48 = &off_1276D8;
      *((_QWORD *)&v48 + 1) = 5LL;
      v51 = &v56;
      v52 = 4LL;
      v49 = &v37;
      v50 = 3LL;
      core::option::Option<T>::map_or_else(v80, &v48);
      alloc::vec::Vec<T,A>::push(&v29, v80);
    }
    alloc::str::join_generic_copy(&v56, *((_QWORD *)&v29 + 1), v30, asc_23433, 1LL);
    v12 = v47;
    *(_QWORD *)(v47 + 16) = v57;
    *(_OWORD *)v12 = v56;
    v13 = (char ***)&v29;
  }
  else
  {
    v53 = a3;
    v54 = a4;
    v55 = a2;
    v34 = 0LL;
    v35 = (char **)&byte_8;
    v36 = 0LL;
    *(_QWORD *)&v32 = &anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447;
    *((_QWORD *)&v32 + 1) = &off_129848;
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v32);
    if ( v14 )
    {
      v15 = &v37;
      v16 = &v48;
      do
      {
        v17 = v16;
        v19 = v15;
        v20 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)&v43 = *(_QWORD *)v14;
        v18 = v43;
        *((_QWORD *)&v43 + 1) = v20;
        v45 = *(_OWORD *)(v14 + 16);
        LODWORD(v56) = 0;
        v21 = core::char::methods::encode_utf8_raw(42LL, &v56);
        v22 = v18;
        v16 = v17;
        v23 = v20;
        v15 = v19;
        v25 = core::slice::<impl [T]>::starts_with(v22, v23, v21, v24);
        v26 = &unk_23435;
        if ( v25 )
          v26 = &dword_0 + 1;
        *(_QWORD *)&v29 = v26;
        *((_QWORD *)&v29 + 1) = v25 ^ 1u;
        v37 = &v29;
        v38 = <&T as core::fmt::Display>::fmt;
        v39 = &v43;
        v40 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v56 = &unk_1BCD0;
        *((_QWORD *)&v56 + 1) = 2LL;
        v57 = (__int128 *)v19;
        v58 = 2uLL;
        core::option::Option<T>::map_or_else(&v77, &v56);
        v48 = v77;
        v49 = v78;
        v37 = v17;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v39 = &v45;
        v40 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v56 = &unk_127768;
        *((_QWORD *)&v56 + 1) = 2LL;
        v57 = (__int128 *)v19;
        v58 = 2uLL;
        core::option::Option<T>::map_or_else(v81, &v56);
        alloc::vec::Vec<T,A>::push(&v34, v81);
        core::ptr::drop_in_place<alloc::string::String>(v17);
        v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v32);
      }
      while ( v14 );
    }
    v27 = v55;
    uu_dircolors::get_colors_format_strings(&v56, v55);
    v12 = v47;
    v33 = v57;
    v32 = v56;
    v44 = v59;
    v43 = v58;
    alloc::str::join_generic_copy(&v56, v35, v36, v53, v54);
    v46 = v57;
    v45 = v56;
    uu_dircolors::generate_type_output((__int64)&v48, v27);
    *(_QWORD *)&v56 = &v32;
    *((_QWORD *)&v56 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v57 = &v48;
    *(_QWORD *)&v58 = <alloc::string::String as core::fmt::Display>::fmt;
    *((_QWORD *)&v58 + 1) = &v45;
    v59 = <alloc::string::String as core::fmt::Display>::fmt;
    v60 = &v43;
    v61 = <alloc::string::String as core::fmt::Display>::fmt;
    v37 = (__int128 *)&unk_127728;
    v38 = (__int64 (__fastcall *)())&byte_4;
    v41 = 0LL;
    v39 = &v56;
    v40 = (__int64 (__fastcall *)())&byte_4;
    core::option::Option<T>::map_or_else(&v29, &v37);
    core::ptr::drop_in_place<alloc::string::String>(&v48);
    *(_QWORD *)(v12 + 16) = v30;
    *(_OWORD *)v12 = v29;
    core::ptr::drop_in_place<alloc::string::String>(&v45);
    core::ptr::drop_in_place<alloc::string::String>(&v43);
    core::ptr::drop_in_place<alloc::string::String>(&v32);
    v13 = &v34;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v13);
  return v12;
}
