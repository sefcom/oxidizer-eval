__int64 __fastcall uu_split::strategy::NumberType::from(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 end; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r15
  char v23; // al
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // [rsp+0h] [rbp-238h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-230h]
  __int128 v30; // [rsp+10h] [rbp-228h]
  __int128 v31; // [rsp+20h] [rbp-218h]
  __int64 v32; // [rsp+30h] [rbp-208h]
  __int64 v33; // [rsp+38h] [rbp-200h]
  __int64 v34; // [rsp+40h] [rbp-1F8h]
  __int64 v35; // [rsp+48h] [rbp-1F0h]
  __int64 v36; // [rsp+50h] [rbp-1E8h]
  _QWORD v37[2]; // [rsp+58h] [rbp-1E0h] BYREF
  char v38[48]; // [rsp+68h] [rbp-1D0h] BYREF
  __int16 v39; // [rsp+98h] [rbp-1A0h]
  int v40; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-190h]
  int v42; // [rsp+C0h] [rbp-178h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp-170h]
  int v44; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-150h]
  int v46; // [rsp+100h] [rbp-138h] BYREF
  __int64 v47; // [rsp+108h] [rbp-130h]
  int v48; // [rsp+120h] [rbp-118h] BYREF
  unsigned __int64 v49; // [rsp+128h] [rbp-110h]
  int v50; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+148h] [rbp-F0h]
  int v52; // [rsp+160h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+168h] [rbp-D0h]
  int v54; // [rsp+180h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+188h] [rbp-B0h]
  int v56; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v57; // [rsp+1A8h] [rbp-90h]
  __int128 v58; // [rsp+1C0h] [rbp-78h] BYREF
  __int64 v59; // [rsp+1D0h] [rbp-68h]
  __int128 v60; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+1E8h] [rbp-50h]
  __int128 v62; // [rsp+1F0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+200h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v38);
  v37[0] = 0LL;
  v37[1] = a3;
  v39 = 1;
  v34 = a2;
  v32 = core::str::iter::SplitInternal<P>::next(v37);
  v5 = v4;
  v6 = core::str::iter::SplitInternal<P>::next(v37);
  v33 = v7;
  v8 = core::str::iter::SplitInternal<P>::next(v37);
  v35 = v9;
  v36 = 0LL;
  end = core::str::iter::SplitInternal<P>::get_end(v37);
  v11 = a2;
  if ( !v32 )
    goto LABEL_30;
  if ( !v6 )
  {
    if ( end | v8 )
      goto LABEL_30;
    uucore::features::parser::parse_size::parse_size_u64(&v40, v32);
    if ( v40 == 4 )
    {
      result = v41;
    }
    else
    {
      uu_split::strategy::NumberType::from::{{closure}}(&v28, v32, v5, &v40);
      v21 = v28;
      result = v29;
      v31 = v30;
      if ( v28 != 2 )
        goto LABEL_56;
    }
    if ( !result )
      goto LABEL_30;
    a1[1] = 0LL;
LABEL_20:
    a1[2] = result;
    *a1 = 2LL;
    return result;
  }
  if ( v8 )
  {
    if ( !end )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v5, asc_1CA63, 1LL) )
      {
        uucore::features::parser::parse_size::parse_size_u64(&v48, v8);
        if ( v48 == 4 )
        {
          v12 = v49;
LABEL_25:
          v22 = v33;
          uucore::features::parser::parse_size::parse_size_u64(&v50, v6);
          if ( v50 == 4 )
          {
            result = v51;
LABEL_32:
            if ( result - 1 < v12 )
            {
              a1[1] = 3LL;
LABEL_55:
              a1[2] = result;
              a1[3] = v12;
              *a1 = 2LL;
              return result;
            }
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v60, v6, v22);
            *a1 = 1LL;
            *(_OWORD *)(a1 + 1) = v60;
            result = v61;
            goto LABEL_58;
          }
          uu_split::strategy::NumberType::from::{{closure}}(&v28, v6, v22, &v50);
          v21 = v28;
          result = v29;
          v31 = v30;
          if ( v28 == 2 )
            goto LABEL_32;
LABEL_56:
          *((_OWORD *)a1 + 1) = v31;
          *a1 = v21;
          a1[1] = result;
          return result;
        }
        uu_split::strategy::NumberType::from::{{closure}}(&v28, v8, v35, &v48);
        result = v28;
        v12 = v29;
        v31 = v30;
        if ( v28 == 2 )
          goto LABEL_25;
LABEL_48:
        *((_OWORD *)a1 + 1) = v31;
        *a1 = result;
        a1[1] = v12;
        return result;
      }
      v11 = v34;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v5, aR, 1LL) )
      {
        uucore::features::parser::parse_size::parse_size_u64(&v54, v8);
        if ( v54 == 4 )
        {
          v12 = v55;
        }
        else
        {
          uu_split::strategy::NumberType::from::{{closure}}(&v28, v8, v35, &v54);
          result = v28;
          v12 = v29;
          v31 = v30;
          if ( v28 != 2 )
            goto LABEL_48;
        }
        v26 = v33;
        uucore::features::parser::parse_size::parse_size_u64(&v56, v6);
        if ( v56 == 4 )
        {
          result = v57;
        }
        else
        {
          uu_split::strategy::NumberType::from::{{closure}}(&v28, v6, v26, &v56);
          v21 = v28;
          result = v29;
          v31 = v30;
          if ( v28 != 2 )
            goto LABEL_56;
        }
        if ( result - 1 < v12 )
        {
          a1[1] = 5LL;
          goto LABEL_55;
        }
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v62, v6, v26);
        *a1 = 1LL;
        *(_OWORD *)(a1 + 1) = v62;
        result = v63;
        goto LABEL_58;
      }
    }
LABEL_30:
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, v11, a3);
    *a1 = 0LL;
    return result;
  }
  if ( end )
    goto LABEL_30;
  LODWORD(v28) = 0;
  v14 = v5;
  v15 = core::char::methods::encode_utf8_raw(108LL, &v28);
  v16 = v32;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v32, v14, v15, v17)
    || (LODWORD(v28) = 0,
        v18 = core::char::methods::encode_utf8_raw(114LL, &v28),
        (unsigned __int8)core::slice::<impl [T]>::starts_with(v16, v14, v18, v19)) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v14, asc_1CA63, 1LL) )
    {
      v20 = v33;
      uucore::features::parser::parse_size::parse_size_u64(&v46, v6);
      if ( v46 == 4 )
      {
        result = v47;
      }
      else
      {
        uu_split::strategy::NumberType::from::{{closure}}(&v28, v6, v20, &v46);
        v21 = v28;
        result = v29;
        v31 = v30;
        if ( v28 != 2 )
          goto LABEL_56;
      }
      a1[1] = 2LL;
    }
    else
    {
      v23 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v14, aR, 1LL);
      v11 = v34;
      if ( !v23 )
        goto LABEL_30;
      v24 = v33;
      uucore::features::parser::parse_size::parse_size_u64(&v52, v6);
      if ( v52 == 4 )
      {
        result = v53;
        a1[1] = 4LL;
      }
      else
      {
        uu_split::strategy::NumberType::from::{{closure}}(&v28, v6, v24, &v52);
        v21 = v28;
        result = v29;
        v31 = v30;
        if ( v28 != 2 )
          goto LABEL_56;
        a1[1] = 4LL;
      }
    }
    goto LABEL_20;
  }
  v25 = v33;
  uucore::features::parser::parse_size::parse_size_u64(&v42, v6);
  if ( v42 == 4 )
  {
    v12 = v43;
  }
  else
  {
    uu_split::strategy::NumberType::from::{{closure}}(&v28, v6, v25, &v42);
    result = v28;
    v12 = v29;
    v31 = v30;
    if ( v28 != 2 )
      goto LABEL_48;
  }
  v27 = v32;
  uucore::features::parser::parse_size::parse_size_u64(&v44, v32);
  if ( v44 == 4 )
  {
    result = v45;
  }
  else
  {
    uu_split::strategy::NumberType::from::{{closure}}(&v28, v27, v14, &v44);
    v21 = v28;
    result = v29;
    v31 = v30;
    if ( v28 != 2 )
      goto LABEL_56;
  }
  if ( result - 1 < v12 )
  {
    a1[1] = 1LL;
    goto LABEL_55;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v58, v32, v14);
  *a1 = 1LL;
  *(_OWORD *)(a1 + 1) = v58;
  result = v59;
LABEL_58:
  a1[3] = result;
  return result;
}