void __fastcall forc_debug::error::Error::JsonError(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)a1 = 58;
}