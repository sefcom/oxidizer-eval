__int64 __fastcall uu_basename::basename(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v14; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  _BYTE v17[96]; // [rsp+48h] [rbp-60h] BYREF

  v8 = a2;
  v9 = core::str::<impl str>::trim_end_matches(a2, a3);
  if ( v10 )
    v8 = v9;
  else
    v10 = a3;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v14, v8, v10);
  v11 = v14;
  v12 = v15;
  std::path::Path::components(&v14, v15, v16);
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v17, &v14);
  core::option::Option<T>::map_or_else(a1, v17, a4, a5);
  core::ptr::drop_in_place<std::path::PathBuf>(v11, v12);
  return a1;
}