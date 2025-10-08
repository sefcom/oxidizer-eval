__int64 __fastcall forc_crypto::keys::vanity::validate_hex_string(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // al
  _QWORD *v6; // rdi
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[0] = a2;
  v8[1] = a2 + a3;
  v5 = core::iter::traits::iterator::Iterator::try_fold(v8);
  v6 = a1 + 1;
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v5) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, a2, a3);
    result = 0LL;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, aPatternMustCon, 51LL);
    result = 1LL;
  }
  *a1 = result;
  return result;
}