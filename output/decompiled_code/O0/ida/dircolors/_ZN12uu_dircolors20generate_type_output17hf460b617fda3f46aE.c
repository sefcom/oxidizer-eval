_OWORD *__fastcall uu_dircolors::generate_type_output(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  __int64 j; // rbp
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  __int128 *v11; // rdi
  __int64 v12; // rbx
  __int64 i; // r13
  __int128 v14; // xmm0
  _BYTE v16[24]; // [rsp+0h] [rbp-1D8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-1C0h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-1B0h]
  __int64 v19; // [rsp+30h] [rbp-1A8h]
  __int128 v20; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-190h]
  __int128 v22; // [rsp+50h] [rbp-188h] BYREF
  __int128 v23; // [rsp+60h] [rbp-178h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-168h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-160h]
  char **v26; // [rsp+80h] [rbp-158h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp-150h]
  __int128 *v28; // [rsp+90h] [rbp-148h]
  __int64 (__fastcall *v29)(); // [rsp+98h] [rbp-140h]
  __int128 *v30; // [rsp+A0h] [rbp-138h]
  __int64 v31; // [rsp+A8h] [rbp-130h]
  __int128 v32; // [rsp+B0h] [rbp-128h] BYREF
  unsigned __int64 v33; // [rsp+C0h] [rbp-118h]
  __int128 v34; // [rsp+D0h] [rbp-108h] BYREF
  unsigned __int64 v35; // [rsp+E0h] [rbp-F8h]
  _QWORD v36[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v37; // [rsp+100h] [rbp-D8h] BYREF
  char ***v38; // [rsp+110h] [rbp-C8h]
  __int64 v39; // [rsp+118h] [rbp-C0h]
  __int64 v40; // [rsp+120h] [rbp-B8h]
  __int64 v41; // [rsp+128h] [rbp-B0h]
  char v42; // [rsp+130h] [rbp-A8h]
  __int64 v43; // [rsp+138h] [rbp-A0h]
  __int64 v44; // [rsp+148h] [rbp-90h]
  __int64 v45; // [rsp+158h] [rbp-80h]
  __int64 v46; // [rsp+160h] [rbp-78h]
  char v47; // [rsp+168h] [rbp-70h]
  __int64 v48; // [rsp+170h] [rbp-68h]
  __int64 v49; // [rsp+180h] [rbp-58h]
  __int64 v50; // [rsp+190h] [rbp-48h]
  __int64 v51; // [rsp+198h] [rbp-40h]
  char v52; // [rsp+1A0h] [rbp-38h]

  v2 = *a2 == 2;
  v19 = a1;
  if ( !v2 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v20, 18LL, 0LL);
    if ( (_QWORD)v20 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v20 + 1), v21);
    v5 = v21;
    *(_QWORD *)v16 = *((_QWORD *)&v20 + 1);
    *(_QWORD *)&v16[8] = v21;
    *(_QWORD *)&v16[16] = 0LL;
    if ( *((_QWORD *)&v20 + 1) >= 0x12uLL )
    {
      v6 = 0LL;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v16, 0LL, 18LL);
      v5 = *(_QWORD *)&v16[8];
      v6 = *(_QWORD *)&v16[16];
    }
    v12 = v5 + 24 * v6;
    for ( i = 0LL; i != 108; i += 6LL )
    {
      *(_QWORD *)&v22 = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_96_llvm_18322555434409866145)[i + 2];
      *((_QWORD *)&v22 + 1) = 2LL;
      v17 = *(_OWORD *)&(&anon_fc8b0a57c72ccea5fed8d71b627fdd79_96_llvm_18322555434409866145)[i + 4];
      v26 = (char **)&v22;
      v27 = <&T as core::fmt::Display>::fmt;
      v28 = &v17;
      v29 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &unk_11D728;
      *((_QWORD *)&v37 + 1) = 2LL;
      v38 = &v26;
      v39 = 2LL;
      v40 = 0LL;
      alloc::fmt::format::format_inner(&v23, &v37);
      v14 = v23;
      *(_QWORD *)(v12 + i * 4 + 16) = v24;
      *(_OWORD *)(v12 + i * 4) = v14;
      ++v6;
    }
    v34 = *(_OWORD *)v16;
    v35 = v6;
    if ( *(_QWORD *)&v16[8] && (v16[8] & 7) == 0 && v6 <= 0x555555555555555LL )
    {
      alloc::str::join_generic_copy(&v37, *(_QWORD *)&v16[8], v6, asc_28B31, 1LL);
      v10 = (_OWORD *)v19;
      *(_QWORD *)(v19 + 16) = v38;
      *v10 = v37;
      v11 = &v34;
      goto LABEL_22;
    }
LABEL_23:
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16, 18LL, 0LL);
  if ( *(_QWORD *)v16 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v16[8], *(_QWORD *)&v16[16]);
  v3 = *(_QWORD *)&v16[16];
  v17 = *(_OWORD *)&v16[8];
  v18 = 0LL;
  if ( *(_QWORD *)&v16[8] >= 0x12uLL )
  {
    v4 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v17, 0LL, 18LL);
    v3 = *((_QWORD *)&v17 + 1);
    v4 = v18;
  }
  v7 = v3 + 24 * v4;
  for ( j = 0LL; j != 108; j += 6LL )
  {
    v36[0] = (&anon_fc8b0a57c72ccea5fed8d71b627fdd79_96_llvm_18322555434409866145)[j + 2];
    v36[1] = 2LL;
    v22 = *(_OWORD *)&(&anon_fc8b0a57c72ccea5fed8d71b627fdd79_96_llvm_18322555434409866145)[j + 4];
    *(_QWORD *)&v23 = &v22;
    *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
    v24 = v36;
    v25 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v37 = 2LL;
    v38 = (char ***)(&dword_0 + 2);
    v40 = 0LL;
    v41 = 32LL;
    v42 = 3;
    v43 = 2LL;
    v44 = 2LL;
    v45 = 1LL;
    v46 = 32LL;
    v47 = 3;
    v48 = 2LL;
    v49 = 2LL;
    v50 = 0LL;
    v51 = 32LL;
    v52 = 3;
    v26 = &off_11D6E8;
    v27 = (__int64 (__fastcall *)())&byte_4;
    v28 = &v23;
    v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v30 = &v37;
    v31 = 3LL;
    alloc::fmt::format::format_inner(&v20, &v26);
    v9 = v20;
    *(_QWORD *)(v7 + j * 4 + 16) = v21;
    *(_OWORD *)(v7 + j * 4) = v9;
    ++v4;
  }
  v32 = v17;
  v33 = v4;
  if ( !*((_QWORD *)&v17 + 1) || (BYTE8(v17) & 7) != 0 || v4 > 0x555555555555555LL )
    goto LABEL_23;
  alloc::str::join_generic_copy(&v37, *((_QWORD *)&v17 + 1), v4, asc_28B30, 1LL);
  v10 = (_OWORD *)v19;
  *(_QWORD *)(v19 + 16) = v38;
  *v10 = v37;
  v11 = &v32;
LABEL_22:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v11);
  return v10;
}
