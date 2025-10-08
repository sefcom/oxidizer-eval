__int64 __fastcall forc_debug::debugger::Debugger::create_run_result_response(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+0h] [rbp-48h]
  __int128 v8; // [rsp+10h] [rbp-38h]
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = core::iter::traits::iterator::Iterator::collect(
         &v9,
         *(_QWORD *)(a3 + 56),
         *(_QWORD *)(a3 + 56) + 24LL * *(_QWORD *)(a3 + 64));
  if ( *(_DWORD *)a3 == 1 )
  {
    v8 = *(_OWORD *)(a3 + 24);
    v7 = *(_OWORD *)(a3 + 8);
    v4 = *(_QWORD *)(a3 + 40);
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(a1 + 64) = v10;
  *(_OWORD *)(a1 + 48) = v9;
  *(_QWORD *)a1 = v5;
  *(_OWORD *)(a1 + 8) = v7;
  *(_OWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 40) = v4;
  return a1;
}