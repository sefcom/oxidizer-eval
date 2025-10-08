__int64 __fastcall uu_unexpand::tabstops_parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 started; // rax
  __int128 v11; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-A8h]
  _BYTE v13[8]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-98h]
  __int128 v15; // [rsp+28h] [rbp-90h] BYREF
  __int64 v16; // [rsp+38h] [rbp-80h]
  _QWORD v17[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v18[48]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v19; // [rsp+80h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v18);
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 8LL;
  v12 = 0LL;
  v17[0] = 0LL;
  v17[1] = a3;
  v19 = 1;
  while ( 1 )
  {
    v4 = core::str::iter::SplitInternal<P>::next(v17);
    v6 = v4;
    if ( !v4 )
    {
      if ( (unsigned __int8)<usize as core::slice::cmp::SliceContains>::slice_contains(*((_QWORD *)&v11 + 1), v12) )
      {
        v8 = 0x8000000000000000LL;
      }
      else
      {
        if ( (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                *((_QWORD *)&v11 + 1),
                *((_QWORD *)&v11 + 1) + 8 * v12) & 1) != 0 )
        {
          result = a1 + 8;
          *(_QWORD *)(a1 + 24) = v12;
          *(_OWORD *)(a1 + 8) = v11;
          *(_QWORD *)a1 = 0LL;
          return result;
        }
        v8 = 0x8000000000000002LL;
      }
      goto LABEL_13;
    }
    v7 = v5;
    core::num::<impl usize>::from_ascii_radix(v13, v4);
    if ( v13[0] )
      break;
    alloc::vec::Vec<T,A>::push(&v11, v14);
  }
  if ( v13[1] != 2 )
  {
    started = core::str::<impl str>::trim_start_matches(v6, v7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, started);
    *(_QWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    goto LABEL_14;
  }
  v8 = 0x8000000000000001LL;
LABEL_13:
  *(_QWORD *)(a1 + 8) = v8;
LABEL_14:
  *(_QWORD *)a1 = 1LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v11, *((_QWORD *)&v11 + 1));
}