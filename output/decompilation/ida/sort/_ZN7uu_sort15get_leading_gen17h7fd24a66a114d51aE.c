__int64 __fastcall uu_sort::get_leading_gen(__int64 a1, __int64 a2)
{
  __int64 started; // r15
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  char v16; // bl
  char v17; // r13
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-90h]
  _QWORD v23[8]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF

  started = core::str::<impl str>::trim_start_matches();
  v4 = v3;
  v22 = a2 - v3;
  v23[0] = 0LL;
  v23[1] = 3LL;
  v23[2] = aInf_0;
  v23[3] = 3LL;
  v23[4] = aInf;
  v23[5] = 4LL;
  v23[6] = aNan;
  v23[7] = 3LL;
  v5 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v23);
  if ( v5 )
  {
    v7 = v5;
    v8 = v6;
    do
    {
      if ( v8 )
      {
        if ( v8 >= v4 )
        {
          if ( v8 != v4 )
            goto LABEL_3;
        }
        else if ( *(char *)(started + v8) <= -65 )
        {
          goto LABEL_3;
        }
      }
      v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
              v8,
              started,
              v4);
      if ( !v10 )
        core::str::slice_error_fail(started, v4, 0LL, v8, &off_18D3A8);
      if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v11, v7, v8) )
        return v22;
LABEL_3:
      v7 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v23);
      v8 = v9;
    }
    while ( v7 );
  }
  v24[2] = 0LL;
  v24[0] = started;
  v24[1] = v4 + started;
  itertools::peek_nth::peek_nth(v23, v24);
  v13 = itertools::peek_nth::PeekNth<I>::peek_nth(v23, 0LL);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 8);
    if ( v14 == 45 || v14 == 43 )
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v23);
  }
  <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v23);
  v12 = v22;
  if ( v15 != 1114112 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      if ( (unsigned int)(v15 - 48) >= 0xA )
      {
        if ( v15 == 46 )
        {
          if ( (v16 & 1) != 0 )
            break;
          v16 = 1;
          if ( (v17 & 1) != 0 )
            break;
        }
        else
        {
          if ( (v15 & 0xFFFFFFDF) != 0x45 )
            break;
          if ( (v17 & 1) != 0 )
            break;
          v18 = itertools::peek_nth::PeekNth<I>::peek_nth(v23, 0LL);
          if ( !v18 )
            break;
          v19 = *(_DWORD *)(v18 + 8);
          if ( v19 == 45 || v19 == 43 )
          {
            v20 = itertools::peek_nth::PeekNth<I>::peek_nth(v23, 2LL);
            if ( !v20 || (unsigned int)(*(_DWORD *)(v20 + 8) - 48) > 9 )
              break;
            <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v23);
            v17 = 1;
          }
          else
          {
            v17 = 1;
            if ( (unsigned int)(v19 - 48) >= 0xA )
              break;
          }
        }
      }
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(v23);
    }
    while ( v15 != 1114112 );
  }
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(v23);
  return v12;
}