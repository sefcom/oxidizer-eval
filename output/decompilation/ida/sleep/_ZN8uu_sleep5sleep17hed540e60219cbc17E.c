__int64 __fastcall uu_sleep::sleep(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  char v5; // [rsp+Fh] [rbp-29h] BYREF
  _BYTE v6[24]; // [rsp+10h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a1, a1 + 16 * a2, &v5);
  if ( v5 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6);
    v7 = 1;
    return alloc::boxed::Box<T>::new(v6);
  }
  else
  {
    std::thread::sleep(v2, v3);
    return 0LL;
  }
}