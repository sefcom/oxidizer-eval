__int64 __fastcall ruff_python_formatter::string::normalize::UnicodeEscape::normalize(
        _QWORD *a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  int v7; // edx
  unsigned int v8; // r15d
  int v9; // edx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  _QWORD *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int128 v24; // [rsp+8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h]
  _QWORD *v26; // [rsp+20h] [rbp-68h]
  char **v27; // [rsp+28h] [rbp-60h]
  unsigned __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h]
  __int64 v31; // [rsp+48h] [rbp-40h]
  unsigned __int64 v32; // [rsp+50h] [rbp-38h]

  v5 = a5;
  *(_QWORD *)&v24 = 0LL;
  *((_QWORD *)&v24 + 1) = 1LL;
  v25 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    v10 = a3;
    if ( a5 < a3 )
    {
      *a1 = 0x8000000000000001LL;
      return core::ptr::drop_in_place<alloc::string::String>(&v24);
    }
    v26 = a1;
    v28 = a5;
    v29 = a4;
    v30 = a4 + a5;
    v31 = 0LL;
    if ( !a3 )
    {
LABEL_34:
      v5 = v28;
      result = v25;
      v21 = v26;
      if ( !v25 )
        goto LABEL_42;
      goto LABEL_35;
    }
    v27 = &off_57F7C0;
    v13 = a3;
    while ( 1 )
    {
      v32 = v13 - 1;
      v15 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v29);
      if ( v16 == (_DWORD)&unk_110000 )
        goto LABEL_34;
      v17 = v15;
      v14 = v16;
      if ( v16 - 48 < 0xA || v16 - 97 < 6 )
      {
        if ( !v25 )
          goto LABEL_25;
      }
      else
      {
        if ( v16 - 65 >= 6 )
          goto LABEL_39;
        if ( !v25 )
        {
          alloc::vec::Vec<T,A>::reserve(&v24, v10);
          v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                  v17,
                  a4,
                  v28);
          if ( !v18 )
          {
            v10 = v17;
            v5 = v28;
            goto LABEL_46;
          }
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v24,
            v18,
            v18 + v19);
        }
        v14 |= 0x20u;
      }
      alloc::string::String::push(&v24, v14);
LABEL_25:
      v13 = v32;
      if ( !v32 )
        goto LABEL_34;
    }
  }
  v26 = a1;
  v31 = 0LL;
  v29 = a4;
  v30 = a4 + a5;
  <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v29);
  if ( v7 != 123 )
    goto LABEL_39;
  v27 = &off_57F7F0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v29);
      v8 = v9;
      if ( v9 > 44 )
        break;
      if ( v9 != 32 )
        goto LABEL_12;
LABEL_13:
      if ( v25 )
        goto LABEL_5;
    }
    if ( v9 == 45 )
      goto LABEL_13;
    if ( v9 == 125 )
      break;
    if ( v9 == (_DWORD)&unk_110000 )
      goto LABEL_39;
LABEL_12:
    if ( (unsigned int)(v9 - 48) < 0xA || (unsigned int)(v9 - 65) < 0x1A )
      goto LABEL_13;
    if ( (unsigned int)(v9 - 97) > 0x19 )
      goto LABEL_39;
    if ( !v25 )
    {
      alloc::vec::Vec<T,A>::reserve(&v24, 2LL);
      v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
              v10,
              a4,
              v5);
      if ( !v11 )
        goto LABEL_46;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v24,
        v11,
        v11 + v12);
    }
    v8 &= 0x5Fu;
LABEL_5:
    alloc::string::String::push(&v24, v8);
  }
  if ( v25 )
    alloc::string::String::push(&v24, 125LL);
  if ( v10 < 3 )
  {
LABEL_39:
    *v26 = 0x8000000000000001LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v24);
  }
  ++v10;
  result = v25;
  v21 = v26;
  if ( v25 )
  {
LABEL_35:
    *(_OWORD *)v21 = v24;
    v21[2] = result;
    return result;
  }
LABEL_42:
  v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v10,
          a4,
          v5);
  if ( !v22 )
  {
    v27 = &off_57F7D8;
LABEL_46:
    core::str::slice_error_fail(a4, v5, 0LL, v10, v27);
  }
  *v21 = 0x8000000000000000LL;
  v21[1] = v22;
  v21[2] = v23;
  return core::ptr::drop_in_place<alloc::string::String>(&v24);
}