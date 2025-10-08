__int64 __fastcall forc_debug::names::register_name(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  if ( a2 >= 0x10 )
  {
    v5[0] = &v4;
    v5[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v6[0] = &off_1F8CE08;
    v6[1] = 1LL;
    v6[4] = 0LL;
    v6[2] = v5;
    v6[3] = 1LL;
    core::option::Option<T>::map_or_else(a1, 0LL, a3, v6);
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, *(&off_1F8CA70 + 2 * a2));
  }
  return a1;
}