__int64 __fastcall uu_df::table::RowFormatter::get_values(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 i; // r14
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rcx
  _QWORD *v6; // rdx
  double *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int128 *v10; // rsi
  _QWORD *v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+Fh] [rbp-119h]
  __int64 v14; // [rsp+10h] [rbp-118h]
  __int128 v15; // [rsp+28h] [rbp-100h] BYREF
  __int64 v16; // [rsp+38h] [rbp-F0h]
  __int64 v17; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-E0h]
  __int64 v19; // [rsp+50h] [rbp-D8h]
  _QWORD *v20; // [rsp+58h] [rbp-D0h]
  __int64 v21; // [rsp+60h] [rbp-C8h]
  unsigned __int64 *v22; // [rsp+68h] [rbp-C0h]
  unsigned __int64 *v23; // [rsp+70h] [rbp-B8h]
  unsigned __int64 *v24; // [rsp+78h] [rbp-B0h]
  unsigned __int64 *v25; // [rsp+80h] [rbp-A8h]
  double *v26; // [rsp+88h] [rbp-A0h]
  _QWORD *v27; // [rsp+90h] [rbp-98h]
  double *v28; // [rsp+98h] [rbp-90h]
  unsigned __int64 *v29; // [rsp+A0h] [rbp-88h]
  __int64 v30; // [rsp+A8h] [rbp-80h]
  __int64 v31; // [rsp+B0h] [rbp-78h]
  __int64 v32; // [rsp+B8h] [rbp-70h]
  __int128 v33; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-38h]

  v20 = a1;
  v17 = 0LL;
  v18 = 8LL;
  v19 = 0LL;
  v14 = a2[1];
  v32 = *(_QWORD *)(v14 + 16);
  if ( v32 )
  {
    v31 = *(_QWORD *)(v14 + 8);
    v2 = *a2;
    v30 = *a2 + 104;
    v27 = (_QWORD *)(v2 + 16);
    v26 = (double *)(v2 + 24);
    v25 = (unsigned __int64 *)(v2 + 64);
    v24 = (unsigned __int64 *)(v2 + 48);
    v29 = (unsigned __int64 *)(v2 + 32);
    v13 = *((_BYTE *)a2 + 16);
    v28 = (double *)(v2 + 8);
    v23 = (unsigned __int64 *)(v2 + 192);
    v22 = (unsigned __int64 *)(v2 + 184);
    v21 = v2 + 80;
    for ( i = 0LL; i != v32; ++i )
    {
      v4 = (unsigned __int64 *)(v2 + 176);
      v5 = v29;
      v6 = (_QWORD *)v2;
      v7 = v28;
      v8 = v30;
      switch ( v2 )
      {
        case -176LL:
          v8 = v21;
          if ( (v13 & 1) == 0 )
            goto LABEL_15;
          goto LABEL_22;
        case -175LL:
          goto LABEL_12;
        case -174LL:
          v4 = v22;
          goto LABEL_12;
        case -173LL:
          v4 = v23;
LABEL_12:
          uu_df::table::RowFormatter::scaled_bytes((__int64)&v33, v14, *v4);
          break;
        case -172LL:
          goto LABEL_17;
        case -171LL:
          v8 = v2 + 128;
          if ( (v13 & 1) == 0 )
            goto LABEL_15;
          v8 = v2 + 128;
          if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                                  *(_QWORD *)(v14 + 8),
                                  *(_QWORD *)(v14 + 16),
                                  v2,
                                  v29) )
            goto LABEL_15;
LABEL_22:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, "total%", 5LL);
          v34 = v16;
          v33 = v15;
          break;
        case -170LL:
          goto LABEL_19;
        case -169LL:
          v5 = v24;
          goto LABEL_19;
        case -168LL:
          v5 = v25;
LABEL_19:
          uu_df::table::RowFormatter::scaled_inodes((__int64)&v33, v14, *v5, v5[1]);
          break;
        case -167LL:
          v6 = v27;
          v7 = v26;
LABEL_17:
          uu_df::table::RowFormatter::percentage((__int64)&v33, *v6, *v7);
          break;
        case -166LL:
          v9 = *(_QWORD *)(v2 + 152);
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, "-total%", 1LL);
          v10 = (__int128 *)(v2 + 152);
          if ( __OFSUB__(-v9, 1LL) )
            v10 = &v35;
          v36 = v16;
          v35 = v15;
          <alloc::string::String as core::clone::Clone>::clone(&v33, v10);
          core::ptr::drop_in_place<alloc::string::String>(&v35);
          break;
        case -165LL:
LABEL_15:
          <alloc::string::String as core::clone::Clone>::clone(&v33, v8);
          break;
      }
      alloc::vec::Vec<T,A>::push(&v17, &v33, &off_102EB8);
    }
  }
  v11 = v20;
  v20[2] = v19;
  *v11 = v17;
  result = v18;
  v11[1] = v18;
  return result;
}