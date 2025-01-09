__int64 __fastcall uu_unexpand::tabstops_parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 result; // rax
  __int64 started; // rax
  _QWORD *v13; // rcx
  __int128 v14; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A8h]
  _BYTE v16[8]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-98h]
  __int128 v18; // [rsp+38h] [rbp-90h] BYREF
  __int64 v19; // [rsp+48h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  char v22[48]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v23; // [rsp+90h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v22);
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 8LL;
  v15 = 0LL;
  v20 = 0LL;
  v21 = a3;
  v23 = 1;
  while ( 1 )
  {
    v4 = core::str::iter::SplitInternal<P>::next(&v20);
    v6 = v4;
    if ( !v4 )
    {
      v8 = *((_QWORD *)&v14 + 1);
      v9 = *((_QWORD *)&v14 + 1) + 8 * v15;
      v20 = *((_QWORD *)&v14 + 1);
      v21 = v9;
      if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v20) )
      {
        v10 = 0x8000000000000000LL;
      }
      else
      {
        if ( (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v8, v9) & 1) != 0 )
        {
          result = a1 + 8;
          *(_QWORD *)(a1 + 24) = v15;
          *(_OWORD *)(a1 + 8) = v14;
          *(_QWORD *)a1 = 0LL;
          return result;
        }
        v10 = 0x8000000000000002LL;
      }
      goto LABEL_13;
    }
    v7 = v5;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v16, v4);
    if ( v16[0] )
      break;
    alloc::vec::Vec<T,A>::push(&v14, v17);
  }
  if ( v16[1] != 2 )
  {
    started = core::str::<impl str>::trim_start_matches(v6, v7);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v18, started);
    v13 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    goto LABEL_14;
  }
  v10 = 0x8000000000000001LL;
LABEL_13:
  v13 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v10;
LABEL_14:
  *v13 = 1LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v14);
}
