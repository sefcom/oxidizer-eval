__int64 __fastcall just::color::Color::stdout(__int64 a1, __int64 a2)
{
  std::io::stdio::stdout(a1);
  return just::color::Color::redirect(a1, a2);
}