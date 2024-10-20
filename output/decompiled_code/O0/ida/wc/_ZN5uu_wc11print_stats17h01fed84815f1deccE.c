__int64 __fastcall uu_wc::print_stats(_BYTE *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // di
  char v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rax
  char **v18; // rdx
  void *v19; // r9
  _QWORD *v20; // r10
  _QWORD *v21; // r11
  __int64 v22; // r13
  char *v23; // rax
  char *v24; // rcx
  bool v25; // zf
  char **v26; // r12
  void *v27; // r14
  _QWORD *v28; // r15
  _QWORD *v29; // rbp
  __int64 result; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  void **v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // [rsp+8h] [rbp-220h] BYREF
  _QWORD v40[2]; // [rsp+10h] [rbp-218h] BYREF
  __int64 v41; // [rsp+20h] [rbp-208h]
  __int64 v42; // [rsp+28h] [rbp-200h]
  __int64 v43; // [rsp+30h] [rbp-1F8h]
  __int64 v44; // [rsp+38h] [rbp-1F0h] BYREF
  char *v45; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v46[2]; // [rsp+48h] [rbp-1E0h] BYREF
  _QWORD v47[3]; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+70h] [rbp-1B8h] BYREF
  char v49; // [rsp+78h] [rbp-1B0h]
  __int64 v50; // [rsp+80h] [rbp-1A8h]
  char v51; // [rsp+88h] [rbp-1A0h]
  __int64 v52; // [rsp+90h] [rbp-198h]
  char v53; // [rsp+98h] [rbp-190h]
  __int64 v54; // [rsp+A0h] [rbp-188h]
  char v55; // [rsp+A8h] [rbp-180h]
  __int64 v56; // [rsp+B0h] [rbp-178h]
  char v57; // [rsp+B8h] [rbp-170h]
  __int64 v58; // [rsp+C0h] [rbp-168h]
  _QWORD v59[6]; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v60[6]; // [rsp+F8h] [rbp-130h] BYREF
  _QWORD v61[6]; // [rsp+128h] [rbp-100h] BYREF
  char v62; // [rsp+158h] [rbp-D0h]
  __int64 v63; // [rsp+160h] [rbp-C8h]
  __int64 v64; // [rsp+170h] [rbp-B8h]
  __int64 v65; // [rsp+178h] [rbp-B0h]
  __int64 v66; // [rsp+180h] [rbp-A8h]
  __int64 v67; // [rsp+188h] [rbp-A0h]
  char v68; // [rsp+190h] [rbp-98h]
  void *v69; // [rsp+198h] [rbp-90h] BYREF
  void *v70; // [rsp+1C8h] [rbp-60h] BYREF

  v43 = a5;
  v41 = a4;
  v44 = std::io::stdio::stdout();
  v39 = std::io::stdio::Stdout::lock(&v44);
  v8 = a2[2];
  v9 = a1[27] & 1;
  v10 = a2[3];
  v11 = a1[25] & 1;
  v12 = *a2;
  v13 = a2[1];
  v14 = a1[24] & 1;
  v15 = a1[28] & 1;
  v16 = a2[4];
  v49 = a1[26] & 1;
  v50 = v8;
  v51 = v9;
  v52 = v10;
  v53 = v11;
  v54 = v13;
  v55 = v14;
  v56 = v12;
  v57 = v15;
  v58 = v16;
  v40[0] = 1LL;
  v17 = 0LL;
  v18 = &v45;
  v19 = &unk_1B5B0;
  v20 = v61;
  v21 = v60;
  v22 = 0LL;
LABEL_2:
  v40[1] = v17;
  v23 = (char *)&v48 + v22;
  while ( v22 != 80 )
  {
    v22 += 16LL;
    v24 = v23 + 16;
    v25 = (v23[8] & 1) == 0;
    v23 += 16;
    if ( !v25 )
    {
      v42 = a3;
      v45 = v24;
      v60[0] = v40;
      v60[1] = <&T as core::fmt::Display>::fmt;
      v26 = v18;
      v60[2] = v18;
      v60[3] = <&T as core::fmt::Display>::fmt;
      v60[4] = v43;
      v60[5] = 0LL;
      v61[0] = 2LL;
      v61[2] = 2LL;
      v61[4] = 0LL;
      v61[5] = 32LL;
      v62 = 3;
      v63 = 2LL;
      v64 = 1LL;
      v65 = 2LL;
      v66 = 1LL;
      v67 = 32LL;
      v68 = 3;
      v27 = v19;
      v59[0] = v19;
      v59[1] = 2LL;
      v28 = v20;
      v59[4] = v20;
      v59[5] = 2LL;
      v29 = v21;
      v59[2] = v21;
      v59[3] = 3LL;
      result = std::io::Write::write_fmt(&v39, v59, v18, v24, <&T as core::fmt::Display>::fmt, v19);
      if ( result )
        goto LABEL_11;
      v40[0] = &unk_1FEF7;
      v17 = 1LL;
      v18 = v26;
      v19 = v27;
      a3 = v42;
      v20 = v28;
      v21 = v29;
      goto LABEL_2;
    }
  }
  if ( a3 )
  {
    v46[0] = a3;
    v46[1] = v41;
    v47[0] = v40;
    v47[1] = <&T as core::fmt::Display>::fmt;
    v47[2] = v46;
    v48 = <&T as core::fmt::Display>::fmt;
    v69 = &unk_118DB8;
    v31 = 2LL;
    v32 = v47;
    v33 = 3LL;
    v34 = &v69;
  }
  else
  {
    v70 = &off_118DE8;
    v32 = (_QWORD *)&byte_8;
    v33 = 1LL;
    v34 = &v70;
    v31 = 0LL;
  }
  v34[1] = (void *)v33;
  v34[4] = 0LL;
  v34[2] = v32;
  v34[3] = (void *)v31;
  result = std::io::Write::write_fmt(&v39, v34, v33, v31, <&T as core::fmt::Display>::fmt, v19);
LABEL_11:
  v35 = v39;
  v25 = (*(_DWORD *)(v39 + 12))-- == 1;
  if ( v25 )
  {
    v36 = result;
    v37 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v35, v37, 0LL);
    v38 = v39;
    if ( _InterlockedExchange((volatile __int32 *)(v39 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v38 + 8);
    return v36;
  }
  return result;
}
