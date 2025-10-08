__int64 __fastcall uu_seq::split_short_args_with_value(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r15
  __int128 v9; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-C0h]
  __int128 v11; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-A8h]
  __int64 v13; // [rsp+40h] [rbp-98h]
  _QWORD v14[3]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v16; // [rsp+70h] [rbp-68h] BYREF
  __int64 v17; // [rsp+78h] [rbp-60h]
  unsigned __int64 v18; // [rsp+80h] [rbp-58h]
  _QWORD v19[10]; // [rsp+88h] [rbp-50h] BYREF

  v13 = a1;
  v14[0] = 0LL;
  v14[1] = 8LL;
  v14[2] = 0LL;
  v15[0] = a2;
  v15[1] = a3;
  while ( 1 )
  {
    <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16, v15);
    v3 = v16;
    if ( __OFSUB__(-v16, 1LL) )
      break;
    v4 = v17;
    v5 = v18;
    if ( v18 > 2
      && ((unsigned __int8)core::slice::<impl [T]>::starts_with(v17, &unk_1ADFA)
       || (unsigned __int8)core::slice::<impl [T]>::starts_with(v4, &unk_1ADFC)
       || (unsigned __int8)core::slice::<impl [T]>::starts_with(v4, &unk_1ADFE)) )
    {
      core::slice::<impl [T]>::split_at_unchecked(v19, v4, v5);
      v6 = v19[2];
      v7 = v19[3];
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v19[0], v19[1]);
      v12 = v10;
      v11 = v9;
      alloc::vec::Vec<T,A>::push(v14, &v11, &off_11A448);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v6, v7);
      v12 = v10;
      v11 = v9;
      alloc::vec::Vec<T,A>::push(v14, &v11, &off_11A460);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v3, v4);
    }
    else
    {
      *(_QWORD *)&v9 = v3;
      *((_QWORD *)&v9 + 1) = v4;
      v10 = v5;
      alloc::vec::Vec<T,A>::push(v14, &v9, &off_11A430);
    }
  }
  return <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v13, v14);
}