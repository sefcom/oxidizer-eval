__int64 __fastcall uu_sort::FieldSelector::parse(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 (__fastcall *v8)(); // r13
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  char *v14; // r12
  unsigned __int64 v15; // rbx
  __int64 (__fastcall *v16)(); // r12
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r14
  __int128 v20; // xmm0
  __int64 v21; // rbx
  size_t v22; // rsi
  void *v23; // rdi
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int8 v28; // al
  __int8 v29; // al
  void *v30; // r15
  size_t v31; // r14
  int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // rcx
  __int128 *v35; // rsi
  __m256i *v36; // rdx
  _BYTE v37[7]; // [rsp+8h] [rbp-270h]
  size_t n; // [rsp+18h] [rbp-260h]
  unsigned __int64 v40; // [rsp+28h] [rbp-250h] BYREF
  __int64 v41; // [rsp+30h] [rbp-248h]
  unsigned __int64 v42; // [rsp+38h] [rbp-240h]
  __int128 v43; // [rsp+40h] [rbp-238h]
  __int64 v44; // [rsp+50h] [rbp-228h]
  __int128 v45; // [rsp+60h] [rbp-218h] BYREF
  __int128 v46; // [rsp+70h] [rbp-208h]
  __int128 v47; // [rsp+80h] [rbp-1F8h]
  __int64 v48; // [rsp+90h] [rbp-1E8h]
  _DWORD v49[2]; // [rsp+98h] [rbp-1E0h]
  __int128 v50; // [rsp+A0h] [rbp-1D8h]
  _BYTE v51[24]; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-1B0h]
  unsigned __int64 v53; // [rsp+D8h] [rbp-1A0h]
  unsigned __int64 v54; // [rsp+E0h] [rbp-198h]
  char *v55; // [rsp+E8h] [rbp-190h] BYREF
  unsigned __int64 v56; // [rsp+F0h] [rbp-188h]
  __int64 v57; // [rsp+F8h] [rbp-180h]
  unsigned __int64 v58; // [rsp+100h] [rbp-178h]
  __int32 v59; // [rsp+108h] [rbp-170h]
  int v60; // [rsp+10Ch] [rbp-16Ch]
  char v61; // [rsp+110h] [rbp-168h]
  __int16 v62; // [rsp+118h] [rbp-160h]
  __int128 v63; // [rsp+120h] [rbp-158h] BYREF
  __int64 v64; // [rsp+130h] [rbp-148h]
  __m256i v65; // [rsp+140h] [rbp-138h] BYREF
  __int64 v66; // [rsp+160h] [rbp-118h]
  __int64 v67; // [rsp+168h] [rbp-110h]
  unsigned __int64 v68; // [rsp+170h] [rbp-108h]
  _BYTE v69[25]; // [rsp+188h] [rbp-F0h] BYREF
  __int64 v70; // [rsp+1A8h] [rbp-D0h]
  __int64 v71; // [rsp+1B0h] [rbp-C8h]
  int v72; // [rsp+1B8h] [rbp-C0h]
  __int64 v73; // [rsp+1BCh] [rbp-BCh]
  int v74; // [rsp+1C4h] [rbp-B4h]
  __int16 v75; // [rsp+1D8h] [rbp-A0h]
  __int64 v76; // [rsp+1E0h] [rbp-98h]
  __int64 v77; // [rsp+1E8h] [rbp-90h]
  __int128 v78; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v79; // [rsp+200h] [rbp-78h]
  __int128 v80; // [rsp+210h] [rbp-68h] BYREF
  __int64 v81; // [rsp+220h] [rbp-58h]
  __int128 v82; // [rsp+230h] [rbp-48h]

  v65.m256i_i32[0] = 0;
  core::char::methods::encode_utf8_raw(44LL, &v65, 4LL);
  if ( v6 >= 0x100 )
    core::result::unwrap_failed(
      anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
      32LL,
      v51,
      &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
      &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
  v53 = 0LL;
  v54 = a3;
  v55 = a2;
  v56 = a3;
  v57 = 0LL;
  v58 = a3;
  v59 = v65.m256i_i32[0];
  v60 = 44;
  v61 = v6;
  v62 = 1;
  <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v65, &v55);
  if ( v65.m256i_i64[0] )
  {
    v7 = v65.m256i_i64[1] - v53;
    if ( v65.m256i_i64[1] < v53 || v65.m256i_i64[1] > a3 )
      goto LABEL_68;
    v8 = (__int64 (__fastcall *)())&a2[v53];
    v53 = v65.m256i_u64[2];
    if ( !v8 )
      goto LABEL_67;
  }
  else
  {
    if ( (v62 & 0x100) != 0 || (HIBYTE(v62) = 1, (v62 & 1) == 0) && v54 == v53 )
LABEL_67:
      core::option::unwrap_failed(&off_1D2E90);
    v7 = v54 - v53;
    if ( v54 < v53 || v54 > v56 )
      goto LABEL_68;
    v8 = (__int64 (__fastcall *)())&v55[v53];
    if ( !&v55[v53] )
      goto LABEL_67;
  }
  v77 = a4;
  *(_QWORD *)&v51[16] = 0LL;
  *(_QWORD *)v51 = v8;
  *(_QWORD *)&v51[8] = (char *)v8 + v7;
  v9 = core::iter::traits::iterator::Iterator::try_fold(v51);
  n = a3;
  if ( v10 == 1114112 )
  {
    v11 = 1LL;
    v12 = 0LL;
    if ( (v62 & 0x100) != 0 )
      goto LABEL_29;
  }
  else
  {
    v13 = v9;
    core::str::<impl str>::split_at_checked(&v65, v8, v7, v9);
    if ( !v65.m256i_i64[0] )
      core::str::slice_error_fail(v8, v7, 0LL, v13, &anon_fe38f741e54badf7015918e7aa68e0c9_6_llvm_9495795450009312203);
    v11 = v65.m256i_i64[2];
    v7 = v65.m256i_u64[1];
    v12 = v65.m256i_i64[3];
    v8 = (__int64 (__fastcall *)())v65.m256i_i64[0];
    if ( (v62 & 0x100) != 0 )
      goto LABEL_29;
  }
  v14 = v55;
  v15 = v56;
  <core::str::pattern::CharSearcher as core::str::pattern::Searcher>::next_match(&v65, &v55);
  if ( v65.m256i_i64[0] )
  {
    v42 = v65.m256i_i64[1] - v53;
    if ( v65.m256i_i64[1] >= v53 && v65.m256i_i64[1] <= v15 )
    {
      v16 = (__int64 (__fastcall *)())&v14[v53];
      v53 = v65.m256i_u64[2];
      goto LABEL_22;
    }
LABEL_68:
    core::panicking::panic_nounwind(anon_8fd984650b32faced47dbe24bc844e61_4_llvm_1964130512766541972, 102LL);
  }
  if ( (v62 & 0x100) != 0 || (HIBYTE(v62) = 1, (v62 & 1) == 0) && v54 == v53 )
  {
LABEL_29:
    v16 = 0LL;
    if ( v12 )
      goto LABEL_36;
    goto LABEL_30;
  }
  v42 = v54 - v53;
  if ( v54 < v53 || v54 > v56 )
    goto LABEL_68;
  v16 = (__int64 (__fastcall *)())&v55[v53];
LABEL_22:
  if ( !v16 )
    goto LABEL_29;
  *(_QWORD *)&v51[16] = 0LL;
  *(_QWORD *)v51 = v16;
  *(_QWORD *)&v51[8] = (char *)v16 + v42;
  v17 = core::iter::traits::iterator::Iterator::try_fold(v51);
  if ( v18 == 1114112 )
  {
    v76 = 1LL;
    v41 = 0LL;
    if ( v12 )
      goto LABEL_36;
  }
  else
  {
    v41 = v17;
    core::str::<impl str>::split_at_checked(&v65, v16, v42, v17);
    if ( !v65.m256i_i64[0] )
      core::str::slice_error_fail(v16, v42, 0LL, v41, &anon_fe38f741e54badf7015918e7aa68e0c9_6_llvm_9495795450009312203);
    v76 = v65.m256i_i64[2];
    v42 = v65.m256i_u64[1];
    v41 = v65.m256i_i64[3];
    v16 = (__int64 (__fastcall *)())v65.m256i_i64[0];
    if ( v12 )
    {
LABEL_36:
      v75 = 2566;
      v65.m256i_i64[0] = 0LL;
      v73 = 0LL;
      v74 = 0;
      v65.m256i_i64[1] = 8LL;
      *(_OWORD *)&v65.m256i_u64[2] = 0LL;
      v72 = 1114112;
      v66 = 1LL;
      v67 = 0LL;
      v70 = 1000000000LL;
      v68 = 0x8000000000000000LL;
      v71 = 32LL;
      memset(v69, 0, sizeof(v69));
      core::ptr::drop_in_place<uu_sort::GlobalSettings>(&v65);
      WORD2(v40) = 1536;
      LODWORD(v40) = 0;
      uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v78, v11, v12, &v40);
      if ( (_QWORD)v78 != 0x8000000000000000LL )
      {
        v44 = v79;
        v43 = v78;
LABEL_40:
        *(_QWORD *)&v46 = v44;
        v20 = v43;
        goto LABEL_41;
      }
      uu_sort::KeyPosition::new(v65.m256i_i64, v8, v7, 1LL, BYTE8(v78) & 1);
      v43 = *(_OWORD *)&v65.m256i_u64[1];
      v44 = v65.m256i_i64[3];
      if ( v65.m256i_i64[0] )
        goto LABEL_40;
      v81 = v44;
      v80 = v43;
      if ( v16 )
      {
        uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v63, v76, v41, &v40);
        if ( (_QWORD)v63 != 0x8000000000000000LL )
        {
          v50 = v63;
          v28 = v64;
          *(_DWORD *)v37 = *(_DWORD *)((char *)&v64 + 1);
          *(_DWORD *)&v37[3] = HIDWORD(v64);
LABEL_59:
          v21 = a1;
          v22 = n;
          v23 = a2;
          v45 = v50;
          LOBYTE(v46) = v28;
          v32 = *(_DWORD *)v37;
          v33 = *(_DWORD *)&v37[3];
LABEL_60:
          *(_DWORD *)((char *)&v46 + 1) = v32;
          DWORD1(v46) = v33;
          HIBYTE(v48) = 2;
          goto LABEL_42;
        }
        uu_sort::KeyPosition::new(v65.m256i_i64, v16, v42, 0LL, BYTE8(v63) & 1);
        v50 = *(_OWORD *)&v65.m256i_u64[1];
        v28 = v65.m256i_i8[24];
        *(_DWORD *)v37 = *(__int32 *)((char *)&v65.m256i_i32[6] + 1);
        *(_DWORD *)&v37[3] = v65.m256i_i32[7];
        if ( v65.m256i_i64[0] )
          goto LABEL_59;
        v82 = v50;
        v49[0] = *(_DWORD *)v37;
        *(_DWORD *)((char *)v49 + 3) = v65.m256i_i32[7];
      }
      else
      {
        v28 = 2;
      }
      v21 = a1;
      v31 = n;
      v30 = a2;
      *(_OWORD *)v51 = v82;
      v51[16] = v28;
      *(_DWORD *)&v51[17] = v49[0];
      *(_DWORD *)&v51[20] = *(_DWORD *)((char *)v49 + 3);
      v34 = v40;
      v35 = &v80;
      v36 = (__m256i *)v51;
      goto LABEL_66;
    }
  }
LABEL_30:
  if ( v16 && v41 )
    goto LABEL_36;
  v19 = v77;
  uu_sort::KeyPosition::new((__int64 *)v51, v8, v7, 1LL, *(_BYTE *)(v77 + 125) & 1);
  if ( *(_QWORD *)v51 )
  {
    *(_QWORD *)&v46 = v52;
    v20 = *(_OWORD *)&v51[8];
LABEL_41:
    v45 = v20;
    HIBYTE(v48) = 2;
    v21 = a1;
    v22 = n;
    v23 = a2;
    goto LABEL_42;
  }
  v64 = v52;
  v63 = *(_OWORD *)&v51[8];
  if ( !v16
    || (uu_sort::KeyPosition::new(v65.m256i_i64, v16, v42, 0LL, *(_BYTE *)(v19 + 125) & 1),
        v80 = *(_OWORD *)&v65.m256i_u64[1],
        v29 = v65.m256i_i8[24],
        LODWORD(v43) = *(__int32 *)((char *)&v65.m256i_i32[6] + 1),
        *(_DWORD *)((char *)&v43 + 3) = v65.m256i_i32[7],
        v65.m256i_i64[0] == 2) )
  {
    v29 = 2;
    v21 = a1;
    v31 = n;
    v30 = a2;
    goto LABEL_62;
  }
  v21 = a1;
  v22 = n;
  v23 = a2;
  if ( v65.m256i_i64[0] )
  {
    v45 = v80;
    LOBYTE(v46) = v65.m256i_i8[24];
    v32 = v43;
    v33 = *(_DWORD *)((char *)&v43 + 3);
    goto LABEL_60;
  }
  v30 = a2;
  v31 = n;
  v78 = v80;
  LODWORD(v50) = v43;
  *(_DWORD *)((char *)&v50 + 3) = *(_DWORD *)((char *)&v43 + 3);
LABEL_62:
  *(_OWORD *)v65.m256i_i8 = v78;
  v65.m256i_i8[16] = v29;
  *(__int32 *)((char *)&v65.m256i_i32[4] + 1) = v50;
  v65.m256i_i32[5] = *(_DWORD *)((char *)&v50 + 3);
  v34 = ((unsigned __int64)*(unsigned int *)(v77 + 152) << 40) | ((unsigned __int64)(*(_BYTE *)(v77 + 130) & 1) << 32) | ((unsigned __int8)(*(_BYTE *)(v77 + 128) & 1) << 24) | ((unsigned __int8)(*(_BYTE *)(v77 + 127) & 1) << 16) | ((unsigned __int8)(*(_BYTE *)(v77 + 126) & 1) << 8) | *(_BYTE *)(v77 + 125) & 1;
  v35 = &v63;
  v36 = &v65;
LABEL_66:
  uu_sort::FieldSelector::new(&v45, v35, v36, v34);
  v22 = v31;
  v23 = v30;
LABEL_42:
  if ( HIBYTE(v48) == 2 )
  {
    v65.m256i_i64[2] = v46;
    *(_OWORD *)v65.m256i_i8 = v45;
    *(_QWORD *)v21 = uu_sort::FieldSelector::parse::{{closure}}(v23, v22);
    *(_QWORD *)(v21 + 8) = v24;
    *(_BYTE *)(v21 + 55) = 2;
  }
  else
  {
    *(_QWORD *)(v21 + 48) = v48;
    v25 = v45;
    v26 = v46;
    *(_OWORD *)(v21 + 32) = v47;
    *(_OWORD *)(v21 + 16) = v26;
    *(_OWORD *)v21 = v25;
  }
  return v21;
}
