__int64 __fastcall uu_env::apply_removal_of_all_env_vars(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v7; // [rsp+10h] [rbp-98h]
  _QWORD v8[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v10[5]; // [rsp+58h] [rbp-50h] BYREF

  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
  {
    std::env::vars_os(v10);
    v7 = v10[1];
    v6 = v10[0];
    while ( 1 )
    {
      ((void (__fastcall *)(_QWORD *, __int128 *))<std::env::VarsOs as core::iter::traits::iterator::Iterator>::next)(
        v8,
        &v6);
      if ( v8[0] == 0x8000000000000000LL )
        break;
      std::env::remove_var(v8, &v6, v1, v2, v3, v4, v6, *((_QWORD *)&v6 + 1), v7, *((_QWORD *)&v7 + 1));
      if ( v8[0] != 0x8000000000000000LL )
      {
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v8);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v9);
      }
    }
    return <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v6);
  }
  return result;
}
