__int64 __fastcall alacritty::clipboard::Clipboard::store(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  <T as core::convert::Into<U>>::into(v5, a3);
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(a2 + 32))(a1, v5);
  if ( result )
    return alacritty::clipboard::Clipboard::store::{{closure}}(result, v4);
  return result;
}