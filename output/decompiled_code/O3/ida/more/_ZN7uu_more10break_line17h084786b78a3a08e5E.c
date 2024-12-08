__int64 __fastcall uu_more::break_line(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-168h]
  __int64 v18; // [rsp+10h] [rbp-158h]
  __int128 v19; // [rsp+18h] [rbp-150h] BYREF
  __int64 v20; // [rsp+28h] [rbp-140h]
  __int128 v21; // [rsp+30h] [rbp-138h] BYREF
  __int64 v22; // [rsp+40h] [rbp-128h]
  char **v23; // [rsp+48h] [rbp-120h]
  __int64 v24; // [rsp+50h] [rbp-118h]
  __int128 v25; // [rsp+58h] [rbp-110h] BYREF
  __int64 v26; // [rsp+68h] [rbp-100h]
  __int64 v27; // [rsp+78h] [rbp-F0h]
  __int64 v28; // [rsp+88h] [rbp-E0h]
  __int64 v29; // [rsp+90h] [rbp-D8h]
  __int64 v30; // [rsp+98h] [rbp-D0h]
  char v31; // [rsp+A0h] [rbp-C8h]
  int v32; // [rsp+A4h] [rbp-C4h]
  char v33; // [rsp+A8h] [rbp-C0h]
  __int64 v34; // [rsp+B0h] [rbp-B8h]
  __int64 v35; // [rsp+C0h] [rbp-A8h]
  __int64 v36; // [rsp+D0h] [rbp-98h]
  __int64 v37; // [rsp+E0h] [rbp-88h]
  __int64 v38; // [rsp+E8h] [rbp-80h]
  __int64 v39; // [rsp+F0h] [rbp-78h]
  char v40; // [rsp+F8h] [rbp-70h]
  int v41; // [rsp+FCh] [rbp-6Ch]
  char v42; // [rsp+100h] [rbp-68h]
  __int64 v43; // [rsp+108h] [rbp-60h]
  __int64 v44; // [rsp+110h] [rbp-58h]
  __int64 v45; // [rsp+118h] [rbp-50h]
  __int128 v46; // [rsp+120h] [rbp-48h] BYREF
  __int64 v47; // [rsp+130h] [rbp-38h]

  v6 = a1;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 8LL;
  v20 = 0LL;
  if ( unicode_width::str_width(a2, a3, 0LL) >= a4 )
  {
    v24 = a1;
    *(_QWORD *)&v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = a3;
    v30 = 0LL;
    v31 = 2;
    v32 = 268566529;
    v33 = 16;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = a3;
    v38 = a3;
    v39 = 0LL;
    v40 = 2;
    v41 = 268566529;
    v42 = 16;
    v43 = a2;
    v18 = a3;
    v44 = a3;
    v45 = a2;
    v17 = 0LL;
    v23 = &off_163AE8;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v25);
      v10 = v8;
      if ( !v8 )
        break;
      v11 = v45;
      v12 = unicode_width::str_width(v8, v9, 0LL);
      v7 += v12;
      if ( v7 > a4 )
      {
        v13 = v10 - v11;
        v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v17,
                v13,
                a2,
                v18);
        if ( !v14 )
          goto LABEL_13;
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v21, v14);
        v47 = v22;
        v46 = v21;
        alloc::vec::Vec<T,A>::push(&v19, &v46);
        v17 = v13;
        v7 = v12;
      }
    }
    v13 = v18;
    v6 = v24;
    if ( v17 != v18 )
    {
      v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v17,
              a2,
              v18);
      if ( !v15 )
      {
        v23 = &off_163AD0;
LABEL_13:
        core::str::slice_error_fail(a2, v18, v17, v13, v23);
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, v15);
      v22 = v26;
      v21 = v25;
      alloc::vec::Vec<T,A>::push(&v19, &v21);
    }
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, a2);
    v22 = v26;
    v21 = v25;
    alloc::vec::Vec<T,A>::push(&v19, &v21);
  }
  result = v20;
  *(_QWORD *)(v6 + 16) = v20;
  *(_OWORD *)v6 = v19;
  return result;
}
