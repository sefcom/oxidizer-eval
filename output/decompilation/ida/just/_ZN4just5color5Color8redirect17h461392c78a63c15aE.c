__int64 __fastcall just::color::Color::redirect(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)a1 = <std::io::stdio::Stderr as std::io::stdio::IsTerminal>::is_terminal(a1);
  *(_OWORD *)(a1 + 1) = *(_OWORD *)(a2 + 1);
  result = *(unsigned __int8 *)(a2 + 17);
  *(_BYTE *)(a1 + 17) = result;
  return result;
}