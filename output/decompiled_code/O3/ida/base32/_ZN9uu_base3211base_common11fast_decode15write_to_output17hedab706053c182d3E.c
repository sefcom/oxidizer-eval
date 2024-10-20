__int64 __fastcall uu_base32::base_common::fast_decode::write_to_output(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a3 + 56))(a2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( !result )
    *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
