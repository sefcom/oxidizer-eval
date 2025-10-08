void __fastcall turbo_trace::import_finder::ImportFinder::new(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 24) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 8LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}