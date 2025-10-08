unsigned __int64 __fastcall uu_head::take::TakeAllBuffer::remaining_buffer(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[3];
  if ( a1[2] < v1 )
    core::slice::index::slice_start_index_len_fail(v1, a1[2], &off_F7B30);
  return a1[1] + v1;
}