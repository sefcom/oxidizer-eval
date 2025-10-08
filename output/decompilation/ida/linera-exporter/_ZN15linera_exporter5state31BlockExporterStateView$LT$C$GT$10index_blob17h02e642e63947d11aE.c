__int64 __fastcall linera_exporter::state::BlockExporterStateView<C>::index_blob(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 result; // rax
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+20h] [rbp-18h]

  v2 = 0x8000000000000014LL;
  result = linera_views::views::set_view::SetView<C,I>::insert(v5, a2 + 88);
  if ( LOBYTE(v5[0]) == 12 )
  {
    v2 = 0x800000000000001CLL;
  }
  else
  {
    result = v6;
    *(_QWORD *)(a1 + 40) = v6;
    v4 = v5[0];
    *(_OWORD *)(a1 + 24) = v5[1];
    *(_OWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)a1 = v2;
  return result;
}