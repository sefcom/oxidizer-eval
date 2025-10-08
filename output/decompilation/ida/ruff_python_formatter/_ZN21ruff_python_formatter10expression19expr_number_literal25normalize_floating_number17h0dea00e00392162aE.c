__int64 __fastcall ruff_python_formatter::expression::expr_number_literal::normalize_floating_number(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  bool v6; // bl
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // edx
  int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 result; // rax
  _OWORD *v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  char **v32; // r8
  __int128 v33; // [rsp+10h] [rbp-68h] BYREF
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  _QWORD v36[9]; // [rsp+30h] [rbp-48h] BYREF

  v35 = a1;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 1LL;
  v34 = 0LL;
  v36[2] = 0LL;
  v36[0] = a2;
  v36[1] = a2 + a3;
  v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v36);
  v6 = v5 == 46;
  if ( v5 == 46 )
  {
    v7 = v4;
    alloc::string::String::push(&v33, 48LL);
    alloc::string::String::push(&v33, 46LL);
    v8 = a3;
    v9 = v7 + 1;
  }
  else
  {
    v8 = a3;
    v9 = 0LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v36);
      v12 = v11;
      if ( v11 > 68 )
        break;
      v6 = 1;
      if ( v11 != 46 )
        goto LABEL_4;
    }
    v13 = v10;
    if ( v11 == 69 || v11 == 101 )
    {
      if ( !v6 )
      {
        v14 = v8;
        v17 = a2;
        if ( v11 != 69 )
          goto LABEL_23;
LABEL_17:
        v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v9,
                v13,
                v17,
                v14);
        if ( !v20 )
        {
          v32 = &off_57DB48;
          goto LABEL_35;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v33,
          v20,
          v20 + v21);
        alloc::string::String::push(&v33, 101LL);
        v9 = v13 + 1;
        v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v36);
        if ( v23 == 43 )
          goto LABEL_24;
        goto LABEL_19;
      }
      v14 = v8;
      v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v9,
              v10,
              a2,
              v8);
      if ( v18 )
      {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v33,
          v18,
          v18 + v19);
        v17 = a2;
        alloc::string::String::push(&v33, 48LL);
        v9 = v13;
        if ( v12 == 69 )
          goto LABEL_17;
LABEL_23:
        v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v36);
        if ( v28 == 43 )
        {
LABEL_24:
          v13 = v22;
          v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v9,
                  v22,
                  v17,
                  v14);
          if ( v29 )
          {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v33,
              v29,
              v29 + v30);
            v9 = v13 + 1;
            if ( v13 == -1 )
              goto LABEL_26;
LABEL_20:
            v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                    v9,
                    v17,
                    v14);
            if ( v24 )
            {
              <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
                &v33,
                v24,
                v24 + v25);
              result = v34;
              v27 = (_OWORD *)v35;
              *(_QWORD *)(v35 + 16) = v34;
              *v27 = v33;
              return result;
            }
            v32 = &off_57DB78;
            v13 = v14;
          }
          else
          {
            v32 = &off_57DB60;
          }
LABEL_35:
          core::str::slice_error_fail(v17, v14, v9, v13, v32);
        }
LABEL_19:
        if ( !v9 )
          goto LABEL_26;
        goto LABEL_20;
      }
      v32 = &off_57DB30;
LABEL_34:
      v17 = a2;
      goto LABEL_35;
    }
    if ( v11 == (_DWORD)&unk_110000 )
      break;
LABEL_4:
    v6 = 0;
  }
  if ( v6 )
  {
    v14 = v8;
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v9,
            a2,
            v8);
    if ( v15 )
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v33,
        v15,
        v15 + v16);
      v17 = a2;
      alloc::string::String::push(&v33, 48LL);
      v9 = v14;
      goto LABEL_19;
    }
    v32 = &off_57DB18;
    v13 = v8;
    goto LABEL_34;
  }
  v14 = v8;
  v17 = a2;
  if ( v9 )
    goto LABEL_20;
LABEL_26:
  v31 = (_QWORD *)v35;
  *(_QWORD *)(v35 + 8) = v17;
  v31[2] = v14;
  *v31 = 0x8000000000000000LL;
  return core::ptr::drop_in_place<alloc::string::String>(&v33);
}