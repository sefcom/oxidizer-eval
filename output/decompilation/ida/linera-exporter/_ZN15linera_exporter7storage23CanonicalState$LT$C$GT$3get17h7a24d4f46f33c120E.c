void __fastcall linera_exporter::storage::CanonicalState<C>::get(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  *(_BYTE *)(a1 + 82) = 0;
}