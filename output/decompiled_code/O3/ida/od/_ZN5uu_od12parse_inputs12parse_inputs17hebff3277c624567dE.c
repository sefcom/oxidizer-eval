__int64 *__fastcall uu_od::parse_inputs::parse_inputs(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(); // r12
  _QWORD *v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // r15
  _BYTE *v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 (__fastcall *v12)(); // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  const void *v16; // r12
  signed __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // r12
  _BYTE *v20; // rax
  __int64 v21; // r13
  _BYTE *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v27; // r13
  __int64 v28; // rax
  void *v29; // rbp
  __int64 v30; // r13
  _BYTE *v31; // r12
  __int64 v32; // rax
  void *v33; // rbp
  _QWORD *v34; // [rsp+0h] [rbp-D8h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+8h] [rbp-D0h]
  __int128 v36; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD *v37; // [rsp+20h] [rbp-B8h]
  __int64 v38; // [rsp+28h] [rbp-B0h]
  __int64 v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-90h]
  __int64 v42; // [rsp+50h] [rbp-88h]
  __int64 v43; // [rsp+58h] [rbp-80h]
  __int64 v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+68h] [rbp-70h] BYREF
  __int64 v46; // [rsp+70h] [rbp-68h]
  _QWORD v47[2]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v48[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v49; // [rsp+98h] [rbp-40h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-38h]

  (*(void (__fastcall **)(__int64 *))(a3 + 24))(&v40);
  v5 = *(__int64 (__fastcall **)())(a3 + 32);
  if ( ((unsigned __int8 (__fastcall *)(__int64, char **, __int64))v5)(a2, &off_104988, 1LL) )
  {
    v6 = v41;
    switch ( v42 )
    {
      case 0LL:
        v7 = _rust_alloc(24LL, 8LL);
        if ( !v7 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        v8 = (_QWORD *)v7;
        v9 = (_BYTE *)_rust_alloc(1LL, 1LL);
        if ( !v9 )
          alloc::raw_vec::handle_error(1LL, 1LL);
        *v9 = 45;
        *v8 = 1LL;
        v8[1] = v9;
        v8[2] = 1LL;
        *a1 = 1LL;
        a1[1] = (__int64)v8;
        a1[2] = 1LL;
        a1[4] = 2LL;
        goto LABEL_34;
      case 1LL:
        uu_od::parse_inputs::parse_offset_operand(&v34, *v41, v41[1]);
        if ( v34 )
        {
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36, v6, v6 + 2);
          v22 = (_BYTE *)*((_QWORD *)&v36 + 1);
          v23 = v36;
          v24 = (__int64)v37;
          v25 = 2LL;
LABEL_30:
          *a1 = v23;
          a1[1] = (__int64)v22;
          a1[2] = v24;
          a1[3] = (__int64)v5;
          a1[4] = v25;
          goto LABEL_34;
        }
        v5 = v35;
        v17 = 1LL;
        v22 = (_BYTE *)_rust_alloc(1LL, 1LL);
        v21 = 1LL;
        if ( v22 )
        {
          *v22 = 45;
          v23 = 1LL;
          v25 = 0LL;
          v24 = 1LL;
          goto LABEL_30;
        }
        goto LABEL_57;
      case 2LL:
        v16 = (const void *)*v41;
        v17 = v41[1];
        uu_od::parse_inputs::parse_offset_operand(v47, *v41, v17);
        uu_od::parse_inputs::parse_offset_operand(&v45, v6[2], v6[3]);
        if ( !(v45 | v47[0]) )
        {
          v18 = v47[1];
          v19 = v46;
          v17 = 1LL;
          v20 = (_BYTE *)_rust_alloc(1LL, 1LL);
          v21 = 1LL;
          if ( v20 )
          {
            *v20 = 45;
            *a1 = 1LL;
            a1[1] = (__int64)v20;
            a1[2] = 1LL;
            a1[3] = v18;
            a1[4] = 1LL;
            a1[5] = v19;
            goto LABEL_34;
          }
LABEL_57:
          alloc::raw_vec::handle_error(v21, v17);
        }
        if ( v45 )
        {
LABEL_22:
          v34 = v6 + 2;
          v35 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v36 = &off_1049F8;
          *((_QWORD *)&v36 + 1) = 1LL;
          v39 = 0LL;
          v37 = &v34;
          v38 = 1LL;
          alloc::fmt::format::format_inner(a1, &v36);
LABEL_33:
          a1[4] = 3LL;
          goto LABEL_34;
        }
        v27 = v46;
        if ( !v17 )
        {
          v29 = &dword_0 + 1;
LABEL_51:
          memcpy(v29, v16, v17);
          *a1 = v17;
          a1[1] = (__int64)v29;
          a1[2] = v17;
          a1[3] = v27;
          a1[4] = 0LL;
          goto LABEL_34;
        }
        v43 = v46;
        if ( v17 >= 0 )
        {
          v21 = 1LL;
          v28 = _rust_alloc(v17, 1LL);
          if ( !v28 )
            goto LABEL_57;
          v29 = (void *)v28;
          v27 = v43;
          goto LABEL_51;
        }
        goto LABEL_56;
      case 3LL:
        uu_od::parse_inputs::parse_offset_operand(v48, v41[2], v41[3]);
        uu_od::parse_inputs::parse_offset_operand(&v49, v6[4], v6[5]);
        if ( v48[0] )
          goto LABEL_22;
        if ( v49 )
        {
          v34 = v6 + 4;
          v35 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v36 = &off_104A08;
          *((_QWORD *)&v36 + 1) = 1LL;
          v39 = 0LL;
          v37 = &v34;
          v38 = 1LL;
          alloc::fmt::format::format_inner(a1, &v36);
          goto LABEL_33;
        }
        v30 = v50;
        v31 = (_BYTE *)*v6;
        v17 = v6[1];
        v43 = v48[1];
        if ( v17 )
        {
          v44 = v50;
          if ( v17 < 0 )
          {
LABEL_56:
            v21 = 0LL;
            goto LABEL_57;
          }
          v21 = 1LL;
          v32 = _rust_alloc(v17, 1LL);
          if ( !v32 )
            goto LABEL_57;
          v33 = (void *)v32;
          v30 = v44;
        }
        else
        {
          v33 = &dword_0 + 1;
        }
        memcpy(v33, v31, v17);
        *a1 = v17;
        a1[1] = (__int64)v33;
        a1[2] = v17;
        a1[3] = v43;
        a1[4] = 1LL;
        a1[5] = v30;
LABEL_34:
        if ( v40 )
        {
          v15 = 16 * v40;
          v14 = v6;
          goto LABEL_36;
        }
        return a1;
      default:
        v34 = v41 + 6;
        v35 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v36 = &off_104A18;
        *((_QWORD *)&v36 + 1) = 1LL;
        v39 = 0LL;
        v37 = &v34;
        v38 = 1LL;
        alloc::fmt::format::format_inner(a1, &v36);
        goto LABEL_33;
    }
  }
  v10 = v42;
  v11 = v42 - 1;
  if ( (unsigned __int64)(v42 - 1) >= 2 )
  {
    if ( !v42 )
    {
      if ( !v40 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v40);
      v13 = v41;
      *v41 = asc_1E3C5;
      v13[1] = 1LL;
      v42 = 1LL;
      v10 = 1LL;
    }
  }
  else if ( !((unsigned __int8 (__fastcall *)(__int64, char **, __int64))v5)(a2, &off_104998, 6LL) )
  {
    v6 = v41;
    uu_od::parse_inputs::parse_offset_operand(&v34, v41[2 * v11], v41[2 * v11 + 1]);
    if ( !v34 )
    {
      v12 = v35;
      if ( v10 == 1 )
      {
        if ( v6[1] && *(_BYTE *)*v6 == 43 )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v36, asc_1E3C5, 1LL);
          goto LABEL_45;
        }
      }
      else if ( v10 == 2 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v36, *v6, v6[1]);
LABEL_45:
        a1[2] = (__int64)v37;
        *(_OWORD *)a1 = v36;
        a1[3] = (__int64)v12;
        a1[4] = 0LL;
        goto LABEL_34;
      }
    }
  }
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36, v41, &v41[2 * v10]);
  a1[2] = (__int64)v37;
  *(_OWORD *)a1 = v36;
  a1[4] = 2LL;
  if ( v40 )
  {
    v14 = v41;
    v15 = 16 * v40;
LABEL_36:
    _rust_dealloc(v14, v15, 8LL);
  }
  return a1;
}
