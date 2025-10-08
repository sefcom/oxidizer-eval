__int64 uu_kill::table()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v5[4]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v6[12]; // [rsp+48h] [rbp-60h] BYREF

  v4[0] = &uucore::features::signals::ALL_SIGNALS;
  v4[1] = &uucore::features::signals::ALL_SIGNALS + 64;
  v4[2] = 0LL;
  for ( result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v4);
        v1;
        result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v4) )
  {
    v2 = result;
    v3 = v1;
    v5[0] = &v2;
    v5[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v5[2] = &v3;
    v5[3] = <&T as core::fmt::Display>::fmt;
    v6[0] = &unk_E7610;
    v6[1] = 3LL;
    v6[4] = &unk_19078;
    v6[5] = 2LL;
    v6[2] = v5;
    v6[3] = 2LL;
    std::io::stdio::_print(v6);
  }
  return result;
}