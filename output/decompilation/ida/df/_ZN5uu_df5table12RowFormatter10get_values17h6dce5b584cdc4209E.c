__int64 __fastcall uu_df::table::RowFormatter::get_values(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // rax
  __int64 *v9; // rdx
  double *v10; // rdi
  __int64 v11; // r12
  __int128 *v12; // rsi
  char v13; // al
  __int64 result; // rax
  _OWORD *v15; // rcx
  char v16; // [rsp+Fh] [rbp-119h]
  __int128 v17; // [rsp+10h] [rbp-118h] BYREF
  __int64 v18; // [rsp+20h] [rbp-108h]
  __int128 v19; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-E8h]
  __int128 *v21; // [rsp+50h] [rbp-D8h]
  __int64 v22; // [rsp+58h] [rbp-D0h]
  __int128 v23; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-B8h]
  __int128 v25; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+90h] [rbp-98h]
  __int64 v27; // [rsp+98h] [rbp-90h]
  __int64 v28; // [rsp+A0h] [rbp-88h]
  unsigned __int64 *v29; // [rsp+A8h] [rbp-80h]
  unsigned __int64 *v30; // [rsp+B0h] [rbp-78h]
  unsigned __int64 *v31; // [rsp+B8h] [rbp-70h]
  unsigned __int64 *v32; // [rsp+C0h] [rbp-68h]
  double *v33; // [rsp+C8h] [rbp-60h]
  __int64 *v34; // [rsp+D0h] [rbp-58h]
  __int64 v35; // [rsp+D8h] [rbp-50h]
  __int64 v36; // [rsp+E0h] [rbp-48h]
  _QWORD v37[8]; // [rsp+E8h] [rbp-40h] BYREF

  v27 = a1;
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 8LL;
  v26 = 0LL;
  v3 = a2[1];
  v4 = *(_QWORD *)(v3 + 8);
  v35 = *(_QWORD *)(v3 + 16);
  v36 = v4;
  v37[0] = v4;
  v37[1] = v4 + v35;
  if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37) )
  {
    v5 = *a2;
    v6 = *a2 + 104;
    v21 = (__int128 *)(*a2 + 152);
    v34 = (__int64 *)(v5 + 16);
    v33 = (double *)(v5 + 24);
    v32 = (unsigned __int64 *)(v5 + 64);
    v7 = (unsigned __int64 *)(v5 + 48);
    v31 = (unsigned __int64 *)(v5 + 32);
    v16 = *((_BYTE *)a2 + 16);
    v22 = v5 + 128;
    v30 = (unsigned __int64 *)(v5 + 192);
    v29 = (unsigned __int64 *)(v5 + 184);
    v28 = v5 + 80;
    v8 = (unsigned __int64 *)(v5 + 176);
    v9 = (__int64 *)v5;
    v10 = (double *)(v5 + 8);
    v11 = v6;
    switch ( v5 )
    {
      case -176LL:
LABEL_4:
        v6 = v28;
        if ( !v16 )
          goto LABEL_14;
        goto LABEL_15;
      case -175LL:
        goto LABEL_17;
      case -174LL:
LABEL_16:
        v8 = v29;
        goto LABEL_17;
      case -173LL:
LABEL_7:
        v8 = v30;
LABEL_17:
        uu_df::table::RowFormatter::scaled_bytes((__int64)&v19, v3, *v8);
        break;
      case -172LL:
        goto LABEL_21;
      case -171LL:
LABEL_12:
        v6 = v22;
        if ( !v16 )
          goto LABEL_14;
        v13 = <T as core::slice::cmp::SliceContains>::slice_contains(&byte_15B8E, v36, v35);
        v6 = v22;
        if ( v13 )
          goto LABEL_14;
LABEL_15:
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aTotal_0, 5LL);
        v20 = v18;
        v19 = v17;
        break;
      case -170LL:
LABEL_18:
        v7 = v31;
        goto LABEL_19;
      case -169LL:
        goto LABEL_19;
      case -168LL:
LABEL_6:
        v7 = v32;
LABEL_19:
        uu_df::table::RowFormatter::scaled_inodes((__int64)&v19, v3, *v7, v7[1]);
        break;
      case -167LL:
LABEL_20:
        v9 = v34;
        v10 = v33;
LABEL_21:
        uu_df::table::RowFormatter::percentage((__int64)&v19, *v9, *v10);
        break;
      case -166LL:
LABEL_8:
        if ( *(_QWORD *)v21 == 0x8000000000000000LL )
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, asc_15B87, 1LL);
          v24 = v18;
          v23 = v17;
          v12 = &v23;
        }
        else
        {
          <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, asc_15B87, 1LL);
          v24 = v18;
          v23 = v17;
          v12 = v21;
        }
        <alloc::string::String as core::clone::Clone>::clone(&v19, v12);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        break;
      case -165LL:
LABEL_14:
        <alloc::string::String as core::clone::Clone>::clone(&v19, v6);
        break;
    }
    v18 = v20;
    v17 = v19;
    alloc::vec::Vec<T,A>::push(&v25, &v17);
    if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37) )
    {
      v8 = (unsigned __int64 *)(v5 + 176);
      v7 = (unsigned __int64 *)(v5 + 48);
      v9 = (__int64 *)v5;
      v10 = (double *)(v5 + 8);
      v6 = v11;
      switch ( v5 )
      {
        case -176LL:
          goto LABEL_4;
        case -175LL:
          goto LABEL_17;
        case -174LL:
          goto LABEL_16;
        case -173LL:
          goto LABEL_7;
        case -172LL:
          goto LABEL_21;
        case -171LL:
          goto LABEL_12;
        case -170LL:
          goto LABEL_18;
        case -169LL:
          goto LABEL_19;
        case -168LL:
          goto LABEL_6;
        case -167LL:
          goto LABEL_20;
        case -166LL:
          goto LABEL_8;
        case -165LL:
          goto LABEL_14;
      }
    }
  }
  result = v26;
  v15 = (_OWORD *)v27;
  *(_QWORD *)(v27 + 16) = v26;
  *v15 = v25;
  return result;
}
