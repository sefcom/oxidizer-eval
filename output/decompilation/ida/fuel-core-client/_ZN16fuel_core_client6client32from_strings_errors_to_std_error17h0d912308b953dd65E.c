__int64 __fastcall fuel_core_client::client::from_strings_errors_to_std_error(__int64 a1, double a2, double a3)
{
  double v3; // xmm0_8
  __int128 v5; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h]
  _BYTE v9[32]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v10[32]; // [rsp+58h] [rbp-20h] BYREF

  v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v9, a1);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, aResponseErrors, 15LL, v3, a3);
  v6 = v8;
  v5 = v7;
  ((void (__fastcall *)(_BYTE *, _BYTE *, __int128 *))<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold)(
    v10,
    v9,
    &v5);
  return std::io::error::Error::new(40LL, v10);
}