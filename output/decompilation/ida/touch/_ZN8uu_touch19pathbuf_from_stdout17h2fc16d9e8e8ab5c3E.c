unsigned __int64 __fastcall uu_touch::pathbuf_from_stdout(_QWORD *a1)
{
  unsigned __int64 result; // rax

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, aDevStdout, 11LL);
  result = 0x8000000000000004LL;
  *a1 = 0x8000000000000004LL;
  return result;
}