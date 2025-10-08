__int64 __fastcall uu_base32::base_common::fast_decode::write_to_output(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, _QWORD))
{
  __int64 result; // rax

  result = a3(a2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( !result )
    *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}