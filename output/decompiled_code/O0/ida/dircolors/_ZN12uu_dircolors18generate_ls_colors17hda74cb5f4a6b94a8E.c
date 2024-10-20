__int64 __fastcall uu_dircolors::generate_ls_colors(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  unsigned __int64 v11; // r12
  char *v12; // r12
  char *v13; // r15
  const void *v14; // rax
  size_t v15; // rdx
  _BOOL8 v16; // rcx
  void *v17; // rax
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r14
  char *v21; // rbp
  char *v22; // rbx
  const void *v23; // rax
  size_t v24; // rdx
  _BOOL8 v25; // rcx
  void *v26; // rax
  int v27; // eax
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // r14
  _BYTE *v33; // r15
  __int128 v35; // [rsp+0h] [rbp-418h] BYREF
  _QWORD *v36; // [rsp+10h] [rbp-408h]
  __int64 v37; // [rsp+18h] [rbp-400h]
  _QWORD *v38; // [rsp+20h] [rbp-3F8h]
  __int64 v39; // [rsp+28h] [rbp-3F0h]
  __int64 v40; // [rsp+30h] [rbp-3E8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-3E0h]
  __int64 v42; // [rsp+40h] [rbp-3D8h]
  __int64 v43; // [rsp+48h] [rbp-3D0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-3C8h]
  unsigned __int64 v45; // [rsp+58h] [rbp-3C0h]
  __int64 *v46; // [rsp+60h] [rbp-3B8h]
  __int64 v47; // [rsp+68h] [rbp-3B0h]
  __int128 v48; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v49; // [rsp+80h] [rbp-398h] BYREF
  __int128 v50; // [rsp+90h] [rbp-388h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-368h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-358h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-348h] BYREF
  _QWORD *v55; // [rsp+E0h] [rbp-338h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-330h]
  __int64 v57; // [rsp+F0h] [rbp-328h]
  _BYTE *v58; // [rsp+F8h] [rbp-320h]
  __int128 v59; // [rsp+100h] [rbp-318h]
  __int64 v60; // [rsp+110h] [rbp-308h]
  __int128 v61; // [rsp+120h] [rbp-2F8h]
  __int64 v62; // [rsp+130h] [rbp-2E8h]
  _QWORD v63[2]; // [rsp+138h] [rbp-2E0h] BYREF
  _QWORD v64[2]; // [rsp+148h] [rbp-2D0h] BYREF
  _QWORD v65[2]; // [rsp+158h] [rbp-2C0h] BYREF
  _QWORD v66[2]; // [rsp+168h] [rbp-2B0h] BYREF
  __int128 v67; // [rsp+178h] [rbp-2A0h] BYREF
  __int64 v68; // [rsp+188h] [rbp-290h]
  __int128 v69; // [rsp+190h] [rbp-288h] BYREF
  __int64 v70; // [rsp+1A0h] [rbp-278h]
  _BYTE v71[16]; // [rsp+1A8h] [rbp-270h] BYREF
  _BYTE v72[8]; // [rsp+1B8h] [rbp-260h] BYREF
  _QWORD v73[4]; // [rsp+1C0h] [rbp-258h] BYREF
  _QWORD v74[4]; // [rsp+1E0h] [rbp-238h] BYREF
  _QWORD v75[6]; // [rsp+200h] [rbp-218h] BYREF
  _QWORD v76[8]; // [rsp+230h] [rbp-1E8h] BYREF
  __int128 v77; // [rsp+270h] [rbp-1A8h] BYREF
  __int128 v78; // [rsp+280h] [rbp-198h] BYREF
  __int64 v79; // [rsp+290h] [rbp-188h]
  __int128 v80; // [rsp+298h] [rbp-180h] BYREF
  __int128 v81; // [rsp+2A8h] [rbp-170h] BYREF
  __int64 v82; // [rsp+2B8h] [rbp-160h]
  __int128 v83; // [rsp+2C0h] [rbp-158h] BYREF
  __int64 v84; // [rsp+2D0h] [rbp-148h]
  __int128 v85; // [rsp+2D8h] [rbp-140h] BYREF
  __int64 v86; // [rsp+2E8h] [rbp-130h]
  __int128 v87; // [rsp+2F0h] [rbp-128h]
  __int64 v88; // [rsp+300h] [rbp-118h]
  _QWORD v89[6]; // [rsp+308h] [rbp-110h] BYREF
  char v90; // [rsp+338h] [rbp-E0h]
  __int64 v91; // [rsp+340h] [rbp-D8h]
  __int64 v92; // [rsp+350h] [rbp-C8h]
  __int64 v93; // [rsp+360h] [rbp-B8h]
  __int64 v94; // [rsp+368h] [rbp-B0h]
  char v95; // [rsp+370h] [rbp-A8h]
  __int64 v96; // [rsp+378h] [rbp-A0h]
  __int64 v97; // [rsp+388h] [rbp-90h]
  __int64 v98; // [rsp+398h] [rbp-80h]
  __int64 v99; // [rsp+3A0h] [rbp-78h]
  char v100; // [rsp+3A8h] [rbp-70h]
  __int64 v101; // [rsp+3B0h] [rbp-68h]
  __int64 v102; // [rsp+3C0h] [rbp-58h]
  __int64 v103; // [rsp+3D0h] [rbp-48h]
  __int64 v104; // [rsp+3D8h] [rbp-40h]
  char v105; // [rsp+3E0h] [rbp-38h]

  v4 = *a2 == 2;
  v47 = a1;
  if ( v4 )
  {
    v40 = 0LL;
    v41 = 8LL;
    v42 = 0LL;
    uu_dircolors::generate_type_output((__int64)&v67, a2);
    alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
    v5 = (_OWORD *)v41;
    v6 = v67;
    *(_QWORD *)(v41 + 16) = v68;
    *v5 = v6;
    v42 = 1LL;
    v7 = 3LL;
    v46 = &v40;
    do
    {
      v12 = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v7 - 3];
      v13 = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v7 - 2];
      v63[0] = v12;
      v63[1] = v13;
      v77 = *(_OWORD *)&(&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v7 - 1];
      LODWORD(v35) = 0;
      v14 = (const void *)core::char::methods::encode_utf8_raw(42LL, &v35, 4LL);
      if ( v15 <= (unsigned __int64)v13 )
      {
        v18 = bcmp(v14, v12, v15);
        v4 = v18 == 0;
        v16 = v18 != 0;
        v17 = &dword_0 + 1;
        if ( !v4 )
          v17 = &unk_28B37;
      }
      else
      {
        v16 = 1LL;
        v17 = &unk_28B37;
      }
      v64[0] = v17;
      v64[1] = v16;
      v75[0] = &v77;
      v75[1] = <&T as core::fmt::Display>::fmt;
      v75[2] = v64;
      v75[3] = <&T as core::fmt::Display>::fmt;
      v75[4] = v63;
      v75[5] = <&T as core::fmt::Display>::fmt;
      v89[0] = 2LL;
      v89[2] = 2LL;
      v89[4] = 0LL;
      v89[5] = 32LL;
      v90 = 3;
      v91 = 2LL;
      v92 = 2LL;
      v93 = 1LL;
      v94 = 32LL;
      v95 = 3;
      v96 = 2LL;
      v97 = 2LL;
      v98 = 2LL;
      v99 = 32LL;
      v100 = 3;
      v101 = 2LL;
      v102 = 2LL;
      v103 = 0LL;
      v104 = 32LL;
      v105 = 3;
      *(_QWORD *)&v35 = &off_11D748;
      *((_QWORD *)&v35 + 1) = 5LL;
      v36 = v75;
      v37 = 3LL;
      v38 = v89;
      v39 = 4LL;
      alloc::fmt::format::format_inner(&v78, &v35);
      v59 = v78;
      v60 = v79;
      v19 = v42;
      if ( v42 == v40 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
      v8 = v41;
      v9 = 3 * v19;
      v10 = v59;
      *(_QWORD *)(v41 + 8 * v9 + 16) = v60;
      *(_OWORD *)(v8 + 8 * v9) = v10;
      v11 = v19 + 1;
      v42 = v11;
      v7 += 4LL;
    }
    while ( v7 != 523 );
    if ( v41 && (v41 & 7) == 0 && v11 <= 0x555555555555555LL )
    {
      alloc::str::join_generic_copy(&v35, v41, v11, asc_28B30, 1LL);
      v32 = v47;
      *(_QWORD *)(v47 + 16) = v36;
      *(_OWORD *)v32 = v35;
      goto LABEL_35;
    }
LABEL_36:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  }
  v56 = a3;
  v57 = a4;
  v58 = a2;
  v43 = 0LL;
  v44 = 8LL;
  v45 = 0LL;
  v20 = 3LL;
  v46 = &v43;
  do
  {
    v21 = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v20 - 3];
    v22 = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v20 - 2];
    v65[0] = v21;
    v65[1] = v22;
    v80 = *(_OWORD *)&(&anon_fc8b0a57c72ccea5fed8d71b627fdd79_230_llvm_18322555434409866145)[v20 - 1];
    LODWORD(v35) = 0;
    v23 = (const void *)core::char::methods::encode_utf8_raw(42LL, &v35, 4LL);
    if ( v24 <= (unsigned __int64)v22 )
    {
      v27 = bcmp(v23, v21, v24);
      v4 = v27 == 0;
      v25 = v27 != 0;
      v26 = &dword_0 + 1;
      if ( !v4 )
        v26 = &unk_28B37;
    }
    else
    {
      v25 = 1LL;
      v26 = &unk_28B37;
    }
    v66[0] = v26;
    v66[1] = v25;
    v73[0] = v66;
    v73[1] = <&T as core::fmt::Display>::fmt;
    v73[2] = v65;
    v73[3] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = "\x01";
    *((_QWORD *)&v35 + 1) = 2LL;
    v36 = v73;
    v37 = 2LL;
    v38 = 0LL;
    alloc::fmt::format::format_inner(&v81, &v35);
    v48 = v81;
    v49 = v82;
    v74[0] = &v48;
    v74[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v74[2] = &v80;
    v74[3] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = &unk_11D728;
    *((_QWORD *)&v35 + 1) = 2LL;
    v36 = v74;
    v37 = 2LL;
    v38 = 0LL;
    alloc::fmt::format::format_inner(&v83, &v35);
    v61 = v83;
    v62 = v84;
    v28 = v45;
    if ( v45 == v43 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v43);
    v29 = v44;
    v30 = 3 * v28;
    v31 = v61;
    *(_QWORD *)(v44 + 8 * v30 + 16) = v62;
    *(_OWORD *)(v29 + 8 * v30) = v31;
    v45 = v28 + 1;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v35, &v48);
    if ( *((_QWORD *)&v35 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v49, v35, *((_QWORD *)&v35 + 1), v36);
    v20 += 4LL;
  }
  while ( v20 != 523 );
  v33 = v58;
  uu_dircolors::get_colors_format_strings(&v85, v58);
  v32 = v47;
  v51 = v86;
  v50 = v85;
  v52 = v87;
  v53 = v88;
  if ( !v44 || (v44 & 7) != 0 || v45 > 0x555555555555555LL )
    goto LABEL_36;
  alloc::str::join_generic_copy(&v35, v44, v45, v56, v57);
  v55 = v36;
  v54 = v35;
  uu_dircolors::generate_type_output((__int64)v71, v33);
  v76[0] = &v50;
  v76[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v76[2] = v71;
  v76[3] = <alloc::string::String as core::fmt::Display>::fmt;
  v76[4] = &v54;
  v76[5] = <alloc::string::String as core::fmt::Display>::fmt;
  v76[6] = &v52;
  v76[7] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v35 = &unk_11D798;
  *((_QWORD *)&v35 + 1) = 4LL;
  v36 = v76;
  v37 = 4LL;
  v38 = 0LL;
  alloc::fmt::format::format_inner(&v69, &v35);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v35, v71);
  if ( *((_QWORD *)&v35 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v72, v35, *((_QWORD *)&v35 + 1), v36);
  *(_QWORD *)(v32 + 16) = v70;
  *(_OWORD *)v32 = v69;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v35, &v54);
  if ( *((_QWORD *)&v35 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v55, v35, *((_QWORD *)&v35 + 1), v36);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v35, &v52);
  if ( *((_QWORD *)&v35 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v53, v35, *((_QWORD *)&v35 + 1), v36);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v35, &v50);
  if ( *((_QWORD *)&v35 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v51, v35, *((_QWORD *)&v35 + 1), v36);
LABEL_35:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v46);
  return v32;
}
