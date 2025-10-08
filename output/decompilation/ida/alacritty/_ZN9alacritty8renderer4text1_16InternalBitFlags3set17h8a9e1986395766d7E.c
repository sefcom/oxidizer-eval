__int64 __fastcall alacritty::renderer::text::_::InternalBitFlags::set(_BYTE *a1, char a2, int a3)
{
  __int64 result; // rax
  char v4; // cl

  result = (unsigned __int8)(a2 | *a1);
  v4 = *a1 & ~a2;
  if ( a3 )
    v4 = a2 | *a1;
  *a1 = v4;
  return result;
}