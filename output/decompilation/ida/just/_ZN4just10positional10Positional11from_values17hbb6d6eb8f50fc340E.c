__int64 __fastcall just::positional::Positional::from_values(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-138h] BYREF
  __int64 v12; // [rsp+10h] [rbp-128h]
  __int128 v13; // [rsp+20h] [rbp-118h] BYREF
  __int64 v14; // [rsp+30h] [rbp-108h]
  __int64 v15; // [rsp+38h] [rbp-100h]
  __int128 v16; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h]
  __int64 v18; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-D0h]
  __int64 v20; // [rsp+70h] [rbp-C8h]
  __int64 v21; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-B8h]
  __int64 v23; // [rsp+88h] [rbp-B0h]
  __int64 v24; // [rsp+90h] [rbp-A8h]
  _QWORD v25[6]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v26[112]; // [rsp+C8h] [rbp-70h] BYREF

  v21 = 0LL;
  v22 = 8LL;
  v23 = 0LL;
  *(_QWORD *)&v16 = 0x8000000000000000LL;
  v18 = 0LL;
  v19 = 8LL;
  v20 = 0LL;
  if ( *a2 )
  {
    v24 = a1;
    <I as core::iter::traits::collect::IntoIterator>::into_iter(v26);
    while ( 1 )
    {
      v2 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(v26);
      v4 = v2;
      if ( !v2 )
        break;
      v5 = v3;
      if ( (_QWORD)v16 == 0x8000000000000000LL && !v20 )
      {
        just::positional::Positional::override_from_value(v25, v2, v3);
        if ( v25[0] == 0x8000000000000000LL )
        {
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, asc_6C110, 1LL)
            || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, asc_6C10E, 2LL) )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v4);
            v12 = v14;
            v11 = v13;
            core::ptr::drop_in_place<regex::error::Error>(&v16);
            v17 = v12;
            v16 = v11;
          }
          else if ( (core::str::<impl str>::rfind(v4, v5) & 1) != 0 )
          {
            v7 = v6 + 1;
            core::str::<impl str>::split_at_checked(&v13, v4, v5, v6 + 1);
            if ( !(_QWORD)v13 )
              core::str::slice_error_fail(v4, v5, 0LL, v7, &off_430A50);
            v8 = v14;
            v9 = v15;
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v13);
            v12 = v14;
            v11 = v13;
            core::ptr::drop_in_place<regex::error::Error>(&v16);
            v17 = v12;
            v16 = v11;
            if ( v9 )
            {
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v8);
              v12 = v14;
              v11 = v13;
              alloc::vec::Vec<T,A>::push(&v18, &v11, &off_430A68);
            }
          }
          else
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v4);
            v12 = v14;
            v11 = v13;
            alloc::vec::Vec<T,A>::push(&v18, &v11, &off_430A80);
          }
        }
        else
        {
          alloc::vec::Vec<T,A>::push(&v21, v25);
        }
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v2);
        v12 = v14;
        v11 = v13;
        alloc::vec::Vec<T,A>::push(&v18, &v11, &off_430A98);
      }
    }
    a1 = v24;
  }
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 24) = v21;
  *(_QWORD *)(a1 + 32) = v22;
  *(_QWORD *)(a1 + 40) = v23;
  *(_OWORD *)(a1 + 48) = v16;
  result = v17;
  *(_QWORD *)(a1 + 64) = v17;
  return result;
}