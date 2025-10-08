__int64 __fastcall tabby_index_cli::commands::bench::extract_search_fields(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 24) + 96LL * *(_QWORD *)(a2 + 32);
  v4[0] = *(_QWORD *)(a2 + 24);
  v4[1] = v2;
  v4[2] = 0LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))core::iter::traits::iterator::Iterator::collect)(a1, v4);
}