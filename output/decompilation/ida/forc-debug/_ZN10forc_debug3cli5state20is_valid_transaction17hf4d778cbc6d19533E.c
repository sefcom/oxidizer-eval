__int64 __fastcall forc_debug::cli::state::is_valid_transaction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  unsigned __int8 v4; // al
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)a1 != 5 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v1;
  if ( v1 )
    v3 = *(_QWORD *)(a1 + 24);
  v6[0] = v1 != 0;
  v6[1] = 0LL;
  v6[2] = v1;
  v6[3] = v2;
  v6[4] = v6[0];
  v6[5] = 0LL;
  v6[6] = v1;
  v6[7] = v2;
  v6[8] = v3;
  v4 = ((__int64 (__fastcall *)(_QWORD *))core::iter::traits::iterator::Iterator::try_fold)(v6);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v4, 1LL);
}