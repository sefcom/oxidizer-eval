__int64 __fastcall uu_cat::write_end_of_line(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax

  result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, a3, a4);
  if ( result || a5 && (result = <std::io::stdio::StdoutLock as std::io::Write>::flush(a2)) != 0 )
  {
    *a1 = 0x8000000000000000LL;
    a1[1] = result;
  }
  else
  {
    *a1 = 0x8000000000000006LL;
  }
  return result;
}
