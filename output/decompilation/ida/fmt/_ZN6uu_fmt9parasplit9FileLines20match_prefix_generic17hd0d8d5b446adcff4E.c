__int64 __fastcall uu_fmt::parasplit::FileLines::match_prefix_generic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = core::slice::<impl [T]>::starts_with(a3, a4, a1);
  if ( (unsigned __int8)v8 | a5 )
  {
    return v8;
  }
  else
  {
    v18[0] = a3;
    v18[1] = a3 + a4;
    v18[2] = 0LL;
    v10 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
    if ( v11 == 1114112 )
    {
      return 0;
    }
    else
    {
      v13 = v10;
      v14 = v11;
      do
      {
        v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v13,
                a3,
                a4);
        if ( !v16 )
          core::str::slice_error_fail(a3, a4, v13, a4, &off_F04A8);
        v9 = core::slice::<impl [T]>::starts_with(v16, v17, a1);
        if ( (_BYTE)v9
          || v14 - 9 >= 5
          && v14 != 32
          && (v14 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v14)) )
        {
          break;
        }
        v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v18);
        v14 = v15;
      }
      while ( v15 != 1114112 );
    }
  }
  return v9;
}