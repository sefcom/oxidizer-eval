__int64 __fastcall fd::fmt::FormatTemplate::parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  char **v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 result; // rax
  __int64 v29; // rdx
  __int128 v30; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __int128 v33; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-90h]
  unsigned int v35; // [rsp+44h] [rbp-84h]
  __int64 v36; // [rsp+48h] [rbp-80h]
  __int128 v37; // [rsp+50h] [rbp-78h] BYREF
  __int64 v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  int v40; // [rsp+78h] [rbp-50h] BYREF
  __int64 v41; // [rsp+80h] [rbp-48h]
  __int64 v42; // [rsp+88h] [rbp-40h]
  unsigned int v43; // [rsp+90h] [rbp-38h]

  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 8LL;
  v34 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  *((_QWORD *)&v30 + 1) = 1LL;
  v31 = 0LL;
  v5 = std::sync::once_lock::OnceLock<T>::get_or_try_init();
  v39 = a1;
  v6 = &off_402398;
  while ( 1 )
  {
    aho_corasick::ahocorasick::AhoCorasick::try_find(&v37, v5, a2, a3);
    core::result::Result<T,E>::expect(&v40, &v37);
    if ( v40 != 1 )
      break;
    v7 = v41;
    v8 = v42;
    if ( v43 >= 2 )
    {
      v35 = v43;
      v32 = v42;
      v36 = a2;
      v13 = a3;
      v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v42,
              a2,
              a3);
      if ( !v14 )
      {
        v29 = v32;
        v7 = a3;
        v6 = &off_4023C8;
        a2 = v36;
        goto LABEL_29;
      }
      v16 = v14;
      v17 = v15;
      LODWORD(v37) = 0;
      v18 = core::char::methods::encode_utf8_raw(125LL, &v37);
      v20 = core::slice::<impl [T]>::starts_with(v16, v17, v18, v19);
      a2 = v36;
      a3 = v13;
      if ( v20 )
      {
        v7 = v32;
        v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                v32,
                v36,
                v13);
        if ( !v21 )
        {
          v6 = &off_402440;
          goto LABEL_28;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          v21,
          v21 + v22);
        v23 = v32 + 1;
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v32 + 1,
                a2,
                a3);
        if ( !v11 )
        {
          v29 = v23;
          v7 = a3;
          v6 = &off_402458;
          goto LABEL_29;
        }
      }
      else
      {
        v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                v7,
                v36,
                v13);
        if ( !v24 )
        {
          v6 = &off_4023E0;
LABEL_28:
          v29 = 0LL;
LABEL_29:
          core::str::slice_error_fail(a2, a3, v29, v7, v6);
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          v24,
          v24 + v25);
        if ( v31 )
        {
          v38 = v31;
          v37 = v30;
          *(_QWORD *)&v30 = 0LL;
          *((_QWORD *)&v30 + 1) = 1LL;
          v31 = 0LL;
          alloc::vec::Vec<T,A>::push(&v33, &v37, &off_4023F8);
        }
        fd::fmt::token_from_pattern_id(&v37, v35);
        alloc::vec::Vec<T,A>::push(&v33, &v37, &off_402410);
        v26 = v32;
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v32,
                a2,
                a3);
        if ( !v11 )
        {
          v29 = v26;
          v7 = a3;
          v6 = &off_402428;
          goto LABEL_29;
        }
      }
    }
    else
    {
      v7 = v41 + 1;
      v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
             v41 + 1,
             a2,
             a3);
      if ( !v9 )
        goto LABEL_28;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        v9,
        v9 + v10);
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v8,
              a2,
              a3);
      if ( !v11 )
      {
        v29 = v8;
        v7 = a3;
        v6 = &off_4023B0;
        goto LABEL_29;
      }
    }
    a3 = v12;
    a2 = v11;
  }
  v27 = v39;
  if ( a3 )
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v30,
      a2,
      a2 + a3);
  if ( v34 )
  {
    if ( v31 )
    {
      alloc::vec::Vec<T,A>::push(&v33, &v30, &off_402470);
      result = v34;
      *(_QWORD *)(v27 + 24) = v34;
      *(_OWORD *)(v27 + 8) = v33;
      *(_QWORD *)v27 = 0LL;
    }
    else
    {
      *(_QWORD *)(v27 + 24) = v34;
      *(_OWORD *)(v27 + 8) = v33;
      *(_QWORD *)v27 = 0LL;
      return core::ptr::drop_in_place<alloc::string::String>(&v30);
    }
  }
  else
  {
    *(_QWORD *)(v27 + 24) = v31;
    *(_OWORD *)(v27 + 8) = v30;
    *(_QWORD *)v27 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<fd::fmt::Token>>(&v33);
  }
  return result;
}