__int64 __fastcall uu_paste::DelimiterState::reset_to_first_delimiter(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  _OWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)a1 == 2 )
  {
    result = core::iter::adapters::cycle::Cycle<I>::new(
               v3,
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32));
    v2 = v3[0];
    *(_OWORD *)(a1 + 56) = v3[1];
    *(_OWORD *)(a1 + 40) = v2;
  }
  return result;
}
