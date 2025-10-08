__int64 uu_kill::print_signals()
{
  __int64 result; // rax
  __int64 v1; // rdx
  _QWORD v2[2]; // [rsp+8h] [rbp-290h] BYREF
  _QWORD v3[2]; // [rsp+18h] [rbp-280h] BYREF
  _QWORD v4[6]; // [rsp+28h] [rbp-270h] BYREF
  _QWORD v5[2]; // [rsp+58h] [rbp-240h] BYREF
  _BYTE dest[512]; // [rsp+68h] [rbp-230h] BYREF

  memcpy(dest, &uucore::features::signals::ALL_SIGNALS, sizeof(dest));
  v5[0] = 0LL;
  v5[1] = 32LL;
  for ( result = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v5);
        result;
        result = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v5) )
  {
    v2[0] = result;
    v2[1] = v1;
    v3[0] = v2;
    v3[1] = <&T as core::fmt::Display>::fmt;
    v4[0] = &unk_E7650;
    v4[1] = 2LL;
    v4[4] = 0LL;
    v4[2] = v3;
    v4[3] = 1LL;
    std::io::stdio::_print(v4);
  }
  return result;
}