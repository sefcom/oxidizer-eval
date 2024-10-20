__int64 __fastcall uu_split::filter_args(__int64 a1, _QWORD *a2, char *a3, bool *a4, bool *a5)
{
  __int64 v8; // rbx
  char *v9; // rbp
  unsigned __int64 v10; // r12
  bool v11; // cl
  bool v12; // al
  __int64 v13; // rsi
  _BYTE *v14; // rsi
  bool *v15; // rax
  bool v17; // al
  bool v18; // r8
  const void *v19; // rdi
  size_t v20; // rdx
  int v21; // eax
  int *v22; // rsi
  const char *v23; // rsi
  int v24; // eax
  int v25; // eax
  bool *v26; // rcx
  _BYTE *v27; // [rsp+0h] [rbp-E8h]
  _BYTE *v28; // [rsp+0h] [rbp-E8h]
  char v29; // [rsp+Fh] [rbp-D9h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+18h] [rbp-D0h]
  void *s1; // [rsp+20h] [rbp-C8h]
  bool *v33; // [rsp+28h] [rbp-C0h]
  bool *v34; // [rsp+30h] [rbp-B8h]
  __int64 v35; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  char *v38; // [rsp+50h] [rbp-98h] BYREF
  char *v39; // [rsp+58h] [rbp-90h]
  unsigned __int64 v40; // [rsp+60h] [rbp-88h]
  __int64 *v41; // [rsp+68h] [rbp-80h]
  _QWORD v42[3]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v43; // [rsp+88h] [rbp-60h] BYREF
  __int64 v44; // [rsp+90h] [rbp-58h]
  unsigned __int64 v45; // [rsp+98h] [rbp-50h]
  __int128 v46; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-38h]

  v34 = a5;
  v33 = a4;
  v8 = a2[1];
  std::sys::os_str::bytes::Slice::to_str(&v38, v8);
  if ( v38 )
  {
    *(_QWORD *)(a1 + 16) = a2[2];
    *(_OWORD *)a1 = *(_OWORD *)a2;
    return a1;
  }
  v9 = v39;
  v10 = v40;
  if ( v40 && *v39 == 45 )
  {
    v11 = *v33;
    v12 = *v34;
    if ( v40 == 1 )
    {
      if ( !v12 && !v11 )
        goto LABEL_7;
    }
    else if ( *(_WORD *)v39 != 11565
           && !v11
           && !v12
           && *(_WORD *)v39 != 24877
           && *(_WORD *)v39 != 25133
           && *(_WORD *)v39 != 17197
           && *(_WORD *)v39 != 27693
           && *(_WORD *)v39 != 28205
           && *(_WORD *)v39 != 29741 )
    {
LABEL_7:
      v35 = 0LL;
      v36 = 4LL;
      v37 = 0LL;
      v29 = 0;
      v38 = v39;
      v39 += v40;
      v40 = (unsigned __int64)&v29;
      v41 = &v35;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v43, &v38);
      if ( v37 )
      {
        <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(&v46, v36, v36 + 4 * v37);
        v13 = *(_QWORD *)a3;
        v30 = 0x8000000000000000LL;
        if ( v13 != 0x8000000000000000LL && v13 )
          _rust_dealloc(*((_QWORD *)a3 + 1), v13, 1LL);
        *((_QWORD *)a3 + 2) = v47;
        *(_OWORD *)a3 = v46;
        if ( v45 < 2 )
          goto LABEL_31;
        <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v42, v44, v44 + 4 * v45);
      }
      else
      {
        std::sys::os_str::bytes::Slice::to_owned(v42, v9, v10);
      }
      v30 = v42[0];
      a3 = (char *)v42[1];
      v27 = (_BYTE *)v42[2];
LABEL_31:
      if ( v43 )
        _rust_dealloc(v44, 4 * v43, 4LL);
      if ( v35 )
        _rust_dealloc(v36, 4 * v35, 4LL);
      if ( v10 == 1 )
      {
        v17 = 0;
        v14 = v27;
        goto LABEL_63;
      }
      v14 = v27;
LABEL_38:
      if ( *(_WORD *)v9 == 11565 )
      {
        if ( v10 >= 3 )
        {
          if ( v9[2] > -65 )
          {
            v18 = 0;
            v19 = v9 + 2;
            v20 = v10 - 2;
            v28 = v14;
            switch ( v10 )
            {
              case 7uLL:
                s1 = v9 + 2;
                n = v10 - 2;
                v21 = bcmp(v19, &anon_80a68c298b3244c7b6f64951acf55080_10_llvm_4507047988568940441, v20);
                v18 = 1;
                if ( !v21 )
                  goto LABEL_60;
                v22 = &anon_80a68c298b3244c7b6f64951acf55080_12_llvm_4507047988568940441;
                goto LABEL_55;
              case 8uLL:
                s1 = v9 + 2;
                n = v10 - 2;
                v24 = bcmp(v19, aFilter, v20);
                v18 = 1;
                if ( !v24 )
                  goto LABEL_60;
                v22 = &anon_80a68c298b3244c7b6f64951acf55080_15_llvm_4507047988568940441;
LABEL_55:
                v25 = bcmp(s1, v22, n);
                v18 = 1;
                v14 = v28;
                if ( v25 )
                  goto LABEL_56;
                goto LABEL_61;
              case 0xBuLL:
                v18 = bcmp(v19, aSeparator, v20) == 0;
                goto LABEL_61;
              case 0xCuLL:
                v23 = (const char *)&anon_80a68c298b3244c7b6f64951acf55080_11_llvm_4507047988568940441;
                goto LABEL_59;
              case 0xFuLL:
                v23 = anon_80a68c298b3244c7b6f64951acf55080_20_llvm_4507047988568940441;
                goto LABEL_59;
              case 0x13uLL:
                v23 = anon_80a68c298b3244c7b6f64951acf55080_13_llvm_4507047988568940441;
LABEL_59:
                v18 = bcmp(v19, v23, v20) == 0;
LABEL_60:
                v14 = v28;
                goto LABEL_61;
              default:
                goto LABEL_61;
            }
          }
          core::str::slice_error_fail(v9, v10, 2LL, v10, &off_10B660);
        }
LABEL_56:
        v18 = 0;
LABEL_61:
        *v33 = v18;
        if ( v10 == 2 )
          goto LABEL_40;
      }
      else if ( v10 == 2 )
      {
LABEL_40:
        v17 = 1;
        if ( *(_WORD *)v9 != 25133
          && *(_WORD *)v9 != 17197
          && *(_WORD *)v9 != 27693
          && *(_WORD *)v9 != 28205
          && *(_WORD *)v9 != 24877 )
        {
          v17 = *(unsigned __int16 *)v9 == 29741;
        }
LABEL_63:
        v26 = v34;
        *v34 = v17;
        v15 = v26;
        if ( *v9 == 45 )
          goto LABEL_26;
LABEL_25:
        *v15 = 0;
        *v33 = 0;
        goto LABEL_26;
      }
      v17 = 0;
      goto LABEL_63;
    }
  }
  std::sys::os_str::bytes::Slice::to_owned(&v38, v39, v40);
  v30 = (unsigned __int64)v38;
  a3 = v39;
  v14 = (_BYTE *)v40;
  if ( v10 >= 2 )
    goto LABEL_38;
  v15 = v34;
  *v34 = 0;
  if ( !v10 || *v9 != 45 )
    goto LABEL_25;
LABEL_26:
  *(_QWORD *)a1 = v30;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = v14;
  if ( *a2 )
    _rust_dealloc(v8, *a2, 1LL);
  return a1;
}
