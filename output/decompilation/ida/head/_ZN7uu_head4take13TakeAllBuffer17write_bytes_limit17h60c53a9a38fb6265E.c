_BOOL8 __fastcall uu_head::take::TakeAllBuffer::write_bytes_limit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  v4 = uu_head::take::TakeAllBuffer::remaining_bytes();
  v5 = core::cmp::Ord::min(v4, a3);
  return uu_head::take::TakeAllBuffer::write_bytes_exact(a1, a2, v5) != 0;
}