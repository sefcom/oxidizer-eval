_BOOL8 __fastcall uu_head::take::TakeAllBuffer::write_all(__int64 a1, __int64 a2)
{
  __int64 v2; // r15

  v2 = uu_head::take::TakeAllBuffer::remaining_bytes();
  return uu_head::take::TakeAllBuffer::write_bytes_exact(a1, a2, v2) != 0;
}