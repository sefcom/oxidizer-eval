        char a5)
{
  char result; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r13
  unsigned int v18; // ebp
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD v27[9]; // [rsp+0h] [rbp-48h] BYREF

  result = core::slice::<impl [T]>::starts_with(a3, a4, a1, a2);
  if ( !result && !a5 )
  {
    v27[0] = a3;
    v27[1] = a3 + a4;
    v27[2] = 0LL;
    v15 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v27, a4, v11, v12, v13, v14);
    if ( v16 == 1114112 )
    {
      return 0;
    }
    else
    {
      v17 = v15;
      v18 = v16;
      while ( 1 )
      {
        v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v17,
                a3,
                a4);
        if ( !v20 )
          core::str::slice_error_fail(a3, a4, v17, a4, &off_127910);
        v22 = v21;
        if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v20, v21, a1, a2) )
          break;
        if ( v18 - 9 < 5
          || v18 == 32
          || v18 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v18) )
        {
          v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(
                  v27,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26);
          v18 = v19;
          if ( v19 != 1114112 )
            continue;
        }
        return 0;
      }
      return 1;
    }
  }
  return result;
}
