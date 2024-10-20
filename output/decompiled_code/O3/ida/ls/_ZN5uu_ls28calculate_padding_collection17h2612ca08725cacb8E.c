        __int64 a5)
{
  __int64 *v5; // r12
  __int64 *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 *v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r13
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  _QWORD *v32; // rcx
  __int64 (__fastcall **v33)(); // rax
  unsigned int v34; // esi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v39; // [rsp+2h] [rbp-146h]
  unsigned __int8 v40; // [rsp+3h] [rbp-145h]
  char v41; // [rsp+4h] [rbp-144h]
  char v42; // [rsp+5h] [rbp-143h]
  char v43; // [rsp+6h] [rbp-142h]
  char v44; // [rsp+7h] [rbp-141h]
  __int64 (__fastcall **v45)(); // [rsp+8h] [rbp-140h]
  __m128i v46; // [rsp+10h] [rbp-138h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-128h]
  __int64 v48; // [rsp+28h] [rbp-120h]
  __int64 v49; // [rsp+30h] [rbp-118h]
  _QWORD *v50; // [rsp+38h] [rbp-110h]
  unsigned __int64 v51; // [rsp+40h] [rbp-108h]
  unsigned __int64 v52; // [rsp+48h] [rbp-100h]
  unsigned __int64 v53; // [rsp+50h] [rbp-F8h]
  __int64 v54; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-E8h]
  int v56; // [rsp+6Ch] [rbp-DCh]
  __m128i v57; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v58; // [rsp+80h] [rbp-C8h]
  __int64 v59; // [rsp+88h] [rbp-C0h]
  __m128i *v60; // [rsp+90h] [rbp-B8h]
  __int64 (__fastcall **v61)(); // [rsp+98h] [rbp-B0h]
  __int64 v62; // [rsp+A0h] [rbp-A8h]
  char v63; // [rsp+A8h] [rbp-A0h]
  __int64 v64; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-90h]
  unsigned __int64 v66; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-80h]
  unsigned __int64 v68; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v69; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v70; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v71; // [rsp+E8h] [rbp-60h]
  __int64 v72; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v73[2]; // [rsp+F8h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+108h] [rbp-40h]
  __int64 v75; // [rsp+110h] [rbp-38h]

  v54 = a5;
  v5 = a2;
  v75 = a3;
  v7 = &a2[38 * a3];
  v44 = *(_BYTE *)(a4 + 233);
  v43 = *(_BYTE *)(a4 + 234);
  v74 = *(_QWORD *)(a4 + 208);
  v67 = *(_QWORD *)(a4 + 216);
  v39 = *(_BYTE *)(a4 + 241);
  v42 = *(_BYTE *)(a4 + 248);
  v40 = *(_BYTE *)(a4 + 227);
  v41 = *(_BYTE *)(a4 + 235);
  v8 = 1LL;
  v55 = 1LL;
  v9 = 1LL;
  v10 = 1LL;
  v11 = 1LL;
  v53 = 1LL;
  v52 = 1LL;
  v51 = 1LL;
  v12 = 1LL;
LABEL_2:
  v71 = v11;
  v70 = v10;
  v69 = v9;
  v68 = v8;
  while ( !v44 )
  {
    if ( v5 == v7 )
      goto LABEL_75;
    v16 = v5 + 38;
    v17 = v5;
LABEL_20:
    v5 = v16;
    if ( !v43 )
      goto LABEL_6;
    v19 = v17[9];
    if ( v19 == 3 )
    {
      core::cell::once::OnceCell<T>::try_init(v17 + 9, v17, v54);
      if ( v17[9] != 2 )
      {
LABEL_23:
        if ( (v17[16] & 0xB000 | 0x4000) == 0x6000 )
          v20 = 0LL;
        else
          v20 = v17[21] << 9;
        if ( !v39 )
        {
          if ( !v67 )
            core::panicking::panic_const::panic_const_div_by_zero(&off_1AC830);
          if ( (v67 | v20) >> 32 )
            v20 /= v67;
          else
            v20 = (unsigned int)v20 / (unsigned int)v67;
        }
        uucore::features::format::human::human_readable(&v57, v20, v39);
        v21 = v58;
        if ( v57.m128i_i64[0] )
          _rust_dealloc(v57.m128i_i64[1], v57.m128i_i64[0], 1LL);
        v13 = v55;
        if ( (unsigned __int64)v21 > v55 )
          v13 = (unsigned __int64)v21;
        v55 = v13;
      }
    }
    else if ( v19 != 2 )
    {
      goto LABEL_23;
    }
LABEL_6:
    if ( v42 == 1 )
    {
      v11 = v17[8];
      v22 = v17[9];
      v23 = (__int64)(v17 + 9);
      if ( v22 == 3 )
      {
        core::cell::once::OnceCell<T>::try_init(v17 + 9, v17, v54);
        v23 = (__int64)(v17 + 9);
        if ( v17[9] != 2 )
          goto LABEL_39;
LABEL_37:
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0LL;
      }
      else
      {
        if ( v22 == 2 )
          goto LABEL_37;
LABEL_39:
        uu_ls::display_len_or_rdev((__int64)&v57, v23, v74, v39);
        v30 = v57.m128i_i64[0];
        if ( v59 == 0x8000000000000000LL )
        {
          v48 = (__int64)v58;
          if ( v57.m128i_i64[0] )
          {
            v31 = v57.m128i_i64[1];
            v45 = 0LL;
            v50 = 0LL;
            goto LABEL_45;
          }
          v45 = 0LL;
          v50 = 0LL;
        }
        else
        {
          v31 = v57.m128i_i64[1];
          v32 = v58;
          v33 = v61;
          v45 = v61;
          v50 = v58;
          if ( v59 )
          {
            v48 = v57.m128i_i64[1];
            v49 = v57.m128i_i64[0];
            _rust_dealloc(v60, v59, 1LL);
            v31 = v48;
            v30 = v49;
            v32 = v50;
            v33 = v45;
          }
          v48 = (__int64)v33 + (_QWORD)v32 + 2;
          if ( v30 )
LABEL_45:
            _rust_dealloc(v31, v30, 1LL);
        }
        v73[0] = v17[15];
        v46.m128i_i64[0] = 0LL;
        v46.m128i_i64[1] = 1LL;
        v47 = 0LL;
        v62 = 32LL;
        v63 = 3;
        v57.m128i_i64[0] = 0LL;
        v58 = 0LL;
        v60 = &v46;
        v61 = &off_1AC0E8;
        if ( (unsigned __int8)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt(v73, &v57) )
          core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v72, &unk_1AC1A0, &off_1AC118);
        v64 = v46.m128i_i64[1];
        v49 = v46.m128i_i64[0];
        v66 = v47;
        v34 = *((_DWORD *)v17 + 33);
        v56 = v40;
        uu_ls::display_uname(&v46, v34, v40);
        v65 = v47;
        uu_ls::display_group(&v57, *((_DWORD *)v17 + 34), v56);
        v25 = v58;
        if ( v57.m128i_i64[0] )
          _rust_dealloc(v57.m128i_i64[1], v57.m128i_i64[0], 1LL);
        if ( v46.m128i_i64[0] )
          _rust_dealloc(v46.m128i_i64[1], v46.m128i_i64[0], 1LL);
        if ( v49 )
          _rust_dealloc(v64, v49, 1LL);
        v28 = (unsigned __int64)v45;
        v26 = v48;
        v27 = (unsigned __int64)v50;
        v29 = v66;
        v24 = v65;
      }
      v35 = v51;
      if ( v29 > v51 )
        v35 = v29;
      v51 = v35;
      v36 = v52;
      if ( v24 > v52 )
        v36 = v24;
      v52 = v36;
      v37 = v53;
      if ( (unsigned __int64)v25 > v53 )
        v37 = (unsigned __int64)v25;
      v53 = v37;
      if ( v11 <= v71 )
        v11 = v71;
      if ( !v41 )
        v11 = v71;
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      if ( v75 != 1 )
      {
        v9 = v69;
        if ( v27 > v69 )
          v9 = v27;
        v8 = v68;
        if ( v28 > v68 )
          v8 = v28;
        v10 = v70;
        if ( v26 > v70 )
          v10 = v26;
        if ( v10 <= v9 )
          v10 = v9;
      }
      goto LABEL_2;
    }
  }
  v14 = v5 + 9;
  while ( v14 - 9 != v7 )
  {
    v15 = *v14;
    if ( *v14 == 3 )
    {
      core::cell::once::OnceCell<T>::try_init(v14, v14 - 9, v54);
      v15 = *v14;
    }
    v14 += 38;
    if ( v15 != 2 )
    {
      v72 = *(v14 - 33);
      v73[0] = &v72;
      v73[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v57.m128i_i64[0] = (__int64)anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      v57.m128i_i64[1] = 1LL;
      v60 = 0LL;
      v58 = v73;
      v59 = 1LL;
      alloc::fmt::format::format_inner(&v46, &v57);
      v18 = v47;
      if ( v46.m128i_i64[0] )
        _rust_dealloc(v46.m128i_i64[1], v46.m128i_i64[0], 1LL);
      v17 = v14 - 47;
      v16 = v14 - 9;
      if ( v18 > v12 )
        v12 = v18;
      goto LABEL_20;
    }
  }
LABEL_75:
  *a1 = v12;
  a1[1] = v51;
  a1[2] = v52;
  a1[3] = v53;
  a1[4] = v71;
  a1[5] = v70;
  a1[6] = v69;
  a1[7] = v68;
  result = v55;
  a1[8] = v55;
  return result;
}
