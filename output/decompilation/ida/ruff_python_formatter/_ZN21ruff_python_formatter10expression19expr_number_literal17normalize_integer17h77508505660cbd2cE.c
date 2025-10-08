__int64 __fastcall ruff_python_formatter::expression::expr_number_literal::normalize_integer(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r13
  int v5; // edx
  int v6; // edx
  __int64 v7; // r12
  int v8; // ebx
  char v9; // bp
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rbp
  int v19; // r13d
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  char **v23; // r8
  __int128 v24; // [rsp+8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int128 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  _QWORD *v28; // [rsp+38h] [rbp-50h]
  __int128 v29; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-38h]

  v4 = a1;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 1LL;
  v25 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v26 = a2;
  *((_QWORD *)&v26 + 1) = a2 + a3;
  <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v26);
  if ( v5 != 48 )
    goto LABEL_18;
  v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v26);
  v8 = v6;
  if ( v6 == 88 )
    goto LABEL_5;
  if ( v6 == (_DWORD)&unk_110000 )
    goto LABEL_18;
  if ( v6 == 120 )
  {
LABEL_5:
    v9 = 1;
    v10 = v6 - 66;
    if ( (unsigned int)(v6 - 66) > 0x16 )
      goto LABEL_12;
  }
  else
  {
    v9 = 0;
    v10 = v6 - 66;
    if ( (unsigned int)(v6 - 66) > 0x16 )
    {
LABEL_12:
      if ( !v9 )
        goto LABEL_18;
      v12 = 0LL;
      goto LABEL_14;
    }
  }
  v11 = 4202497;
  if ( !_bittest(&v11, v10) )
    goto LABEL_12;
  alloc::string::String::push(&v24, 48LL);
  alloc::string::String::push(&v24, v8 | 0x20u);
  v12 = v7 + 1;
  if ( v9 )
  {
LABEL_14:
    v28 = a1;
    v30 = v27;
    v29 = v26;
    v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v29);
    if ( v14 != (_DWORD)&unk_110000 )
    {
      v18 = v13;
      v19 = v14;
      do
      {
        if ( (unsigned int)(v19 - 97) < 6 )
        {
          v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v12,
                  v18,
                  a2,
                  a3);
          if ( !v21 )
          {
            v23 = &off_57DB00;
            goto LABEL_25;
          }
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v24,
            v21,
            v21 + v22);
          alloc::string::String::push(&v24, v19 & 0x47);
          v12 = v18 + 1;
        }
        v18 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v29);
        v19 = v20;
      }
      while ( v20 != (_DWORD)&unk_110000 );
    }
    v4 = v28;
    if ( v12 )
      goto LABEL_16;
LABEL_18:
    v4[1] = a2;
    v4[2] = a3;
    *v4 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v24);
  }
  if ( !v12 )
    goto LABEL_18;
LABEL_16:
  v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v12,
          a2,
          a3);
  if ( !v15 )
  {
    v23 = &off_57DAE8;
    v18 = a3;
LABEL_25:
    core::str::slice_error_fail(a2, a3, v12, v18, v23);
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v24,
    v15,
    v15 + v16);
  result = v25;
  v4[2] = v25;
  *(_OWORD *)v4 = v24;
  return result;
}