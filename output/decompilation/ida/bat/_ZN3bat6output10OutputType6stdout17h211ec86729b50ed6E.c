__int64 __fastcall bat::output::OutputType::stdout(_QWORD *a1)
{
  __int64 result; // rax

  result = std::io::stdio::stdout();
  a1[1] = result;
  *a1 = 5LL;
  return result;
}