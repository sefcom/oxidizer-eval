void __fastcall linera_exporter::common::get_address(__int64 a1, __int16 a2)
{
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 6) = a2;
  *(_WORD *)a1 = 0;
}