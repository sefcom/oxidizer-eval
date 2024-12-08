unsigned __int64 __fastcall uu_touch::pathbuf_from_stdout(_QWORD *a1)
{
  unsigned __int64 result; // rax

  std::sys::os_str::bytes::Slice::to_owned(a1 + 1, aDevStdout, 11LL);
  result = 0x8000000000000004LL;
  *a1 = 0x8000000000000004LL;
  return result;
}
