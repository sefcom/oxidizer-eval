__int64 __fastcall sniffnet::gui::styles::text::TextType::appearance(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h] BYREF

  if ( a2 )
  {
    sniffnet::gui::styles::text::highlight(&v4, a3, a2);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  *(_DWORD *)a1 = result;
  *(_OWORD *)(a1 + 4) = v4;
  return result;
}