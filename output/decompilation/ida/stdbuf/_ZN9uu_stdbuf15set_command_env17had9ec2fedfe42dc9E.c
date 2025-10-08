__int64 __fastcall uu_stdbuf::set_command_env(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v8[20]; // [rsp+0h] [rbp-4Ch] BYREF
  _BYTE v9[56]; // [rsp+14h] [rbp-38h] BYREF

  result = *a4;
  if ( *a4 )
  {
    if ( (_DWORD)result == 1 )
    {
      return std::process::Command::env();
    }
    else
    {
      v6 = core::fmt::num::imp::<impl usize>::_fmt(a4[1], v8, 20LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, v6, v7);
      return std::process::Command::env(a1, a2, a3, v9);
    }
  }
  return result;
}