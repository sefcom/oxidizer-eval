        __int64 a6)
{
  char **v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  char **v13; // rsi
  __int64 v14; // rbp
  char **v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  signed __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  signed __int64 v27; // rdx
  __int64 v28; // rax
  char **v29; // rsi
  __int64 v30; // rdi
  signed __int64 v32; // r13
  char **v33; // r12
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rsi
  char **v45; // [rsp+0h] [rbp-108h] BYREF
  __int64 v46; // [rsp+8h] [rbp-100h]
  char **v47; // [rsp+10h] [rbp-F8h]
  __int64 v48; // [rsp+18h] [rbp-F0h]
  __int64 v49; // [rsp+20h] [rbp-E8h]
  __int64 v50; // [rsp+28h] [rbp-E0h]
  __int64 v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  char **v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-88h]
  __int64 v55; // [rsp+88h] [rbp-80h]
  char **v56; // [rsp+90h] [rbp-78h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h]
  char **v59; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-58h]
  __int64 v61; // [rsp+B8h] [rbp-50h]
  char **v62; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-40h]
  __int64 v64; // [rsp+D0h] [rbp-38h]

  switch ( *(_BYTE *)a3 )
  {
    case 0:
      v10 = *a2;
      v11 = (__int64)a2[1];
      v12 = *(_QWORD *)(a3 + 8);
      v13 = a2[2];
      v45 = a2[1];
      v46 = v11;
      v47 = v10;
      v48 = (__int64)v13 + v11;
      v49 = v12;
      ((void (__fastcall *)(char ***, char ***, __int64, __int64, __int64, __int64))alloc::vec::in_place_collect::from_iter_in_place)(
        a1,
        &v45,
        v12,
        v11,
        a5,
        a6);
      return a1;
    case 1:
      v24 = (__int64)a2[1];
      if ( !v24 )
        goto LABEL_43;
      v25 = (__int64)a2[2];
      if ( v25 < 0 )
        goto LABEL_43;
      uu_dd::blocks::block((__int64)&v59, v24, v25, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1) & 1, a4);
      v45 = (char **)v60;
      v46 = v60;
      v47 = v59;
      v48 = v60 + 24 * v61;
      v49 = 0LL;
      v51 = 0LL;
      ((void (__fastcall *)(char ***, char ***))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
        a1,
        &v45);
      goto LABEL_19;
    case 2:
      v19 = (__int64)a2[1];
      if ( !v19 )
        goto LABEL_43;
      v20 = (signed __int64)a2[2];
      if ( v20 < 0 )
        goto LABEL_43;
      uu_dd::blocks::unblock(a1, v19, v20, *(_QWORD *)(a3 + 8));
      goto LABEL_19;
    case 3:
      v21 = (__int64)a2[1];
      if ( !v21 )
        goto LABEL_43;
      v22 = (__int64)a2[2];
      if ( v22 < 0 )
        goto LABEL_43;
      uu_dd::blocks::block((__int64)&v53, v21, v22, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1) & 1, a4);
      v23 = *(_QWORD *)(a3 + 16);
      v45 = (char **)v54;
      v46 = v54;
      v47 = v53;
      v48 = v54 + 24 * v55;
      v49 = v23;
      v50 = 0LL;
      v52 = 0LL;
      ((void (__fastcall *)(char ***, char ***))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
        a1,
        &v45);
      goto LABEL_19;
    case 4:
      v14 = (__int64)a2[2];
      if ( v14 < 0 )
        goto LABEL_44;
      v15 = *a2;
      v16 = (__int64)a2[1];
      if ( v14 )
      {
        v17 = *(_QWORD *)(a3 + 16);
        if ( (unsigned __int64)v14 >= 4 )
        {
          v37 = 0LL;
          do
          {
            *(_BYTE *)(v16 + v37) = *(_BYTE *)(v17 + *(unsigned __int8 *)(v16 + v37));
            *(_BYTE *)(v16 + v37 + 1) = *(_BYTE *)(v17 + *(unsigned __int8 *)(v16 + v37 + 1));
            *(_BYTE *)(v16 + v37 + 2) = *(_BYTE *)(v17 + *(unsigned __int8 *)(v16 + v37 + 2));
            v18 = v37 + 4;
            *(_BYTE *)(v16 + v37 + 3) = *(_BYTE *)(v17 + *(unsigned __int8 *)(v16 + v37 + 3));
            v37 = v18;
          }
          while ( (v14 & 0x7FFFFFFFFFFFFFFCLL) != v18 );
        }
        else
        {
          v18 = 0LL;
        }
        if ( (v14 & 3) != 0 )
        {
          v38 = v16 + v18;
          v39 = 0LL;
          do
          {
            *(_BYTE *)(v38 + v39) = *(_BYTE *)(v17 + *(unsigned __int8 *)(v38 + v39));
            ++v39;
          }
          while ( (v14 & 3) != v39 );
        }
      }
      v46 = 1LL;
      v45 = 0LL;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
      if ( !v16 )
        goto LABEL_43;
      uu_dd::blocks::block((__int64)&v56, v16, v14, *(_QWORD *)(a3 + 8), *(_BYTE *)(a3 + 1) & 1, a4);
      v45 = (char **)v57;
      v46 = v57;
      v47 = v56;
      v48 = v57 + 24 * v58;
      v49 = 0LL;
      v51 = 0LL;
      ((void (__fastcall *)(char ***, char ***, __int64, __int64, __int64, __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
        a1,
        &v45,
        v48,
        v57,
        v40,
        v41);
      if ( !v15 )
        return a1;
      v30 = v16;
      v29 = v15;
      break;
    case 5:
      v26 = (__int64)a2[1];
      if ( !v26 )
        goto LABEL_43;
      v27 = (signed __int64)a2[2];
      if ( v27 < 0 )
        goto LABEL_43;
      uu_dd::blocks::unblock(&v62, v26, v27, *(_QWORD *)(a3 + 8));
      v28 = *(_QWORD *)(a3 + 16);
      v45 = (char **)v63;
      v46 = v63;
      v47 = v62;
      v48 = v63 + v64;
      v49 = v28;
      ((void (__fastcall *)(char ***, char ***))alloc::vec::in_place_collect::from_iter_in_place)(a1, &v45);
LABEL_19:
      v29 = *a2;
      if ( !*a2 )
        return a1;
      v30 = (__int64)a2[1];
      break;
    case 6:
      v32 = (signed __int64)a2[2];
      if ( v32 < 0 )
LABEL_44:
        core::panicking::panic_nounwind(anon_a7472d8462a01bc7e29f233d3b0cda5a_3_llvm_2507697029788301799, 71LL);
      v33 = *a2;
      v34 = (__int64)a2[1];
      if ( v32 )
      {
        v35 = *(_QWORD *)(a3 + 16);
        if ( (unsigned __int64)v32 >= 4 )
        {
          v42 = 0LL;
          do
          {
            *(_BYTE *)(v34 + v42) = *(_BYTE *)(v35 + *(unsigned __int8 *)(v34 + v42));
            *(_BYTE *)(v34 + v42 + 1) = *(_BYTE *)(v35 + *(unsigned __int8 *)(v34 + v42 + 1));
            *(_BYTE *)(v34 + v42 + 2) = *(_BYTE *)(v35 + *(unsigned __int8 *)(v34 + v42 + 2));
            v36 = v42 + 4;
            *(_BYTE *)(v34 + v42 + 3) = *(_BYTE *)(v35 + *(unsigned __int8 *)(v34 + v42 + 3));
            v42 = v36;
          }
          while ( (v32 & 0x7FFFFFFFFFFFFFFCLL) != v36 );
        }
        else
        {
          v36 = 0LL;
        }
        if ( (v32 & 3) != 0 )
        {
          v43 = v34 + v36;
          v44 = 0LL;
          do
          {
            *(_BYTE *)(v43 + v44) = *(_BYTE *)(v35 + *(unsigned __int8 *)(v43 + v44));
            ++v44;
          }
          while ( (v32 & 3) != v44 );
        }
      }
      v46 = 1LL;
      v45 = 0LL;
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45);
      if ( !v34 )
LABEL_43:
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      uu_dd::blocks::unblock(a1, v34, v32, *(_QWORD *)(a3 + 8));
      if ( !v33 )
        return a1;
      v30 = v34;
      v29 = v33;
      break;
  }
  _rust_dealloc(v30, v29, 1LL);
  return a1;
}
