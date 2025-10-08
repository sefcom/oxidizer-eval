unsigned __int64 __fastcall alacritty_terminal::event_loop::Writing::remaining_bytes(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[3];
  if ( a1[2] < v1 )
    core::slice::index::slice_start_index_len_fail(v1, a1[2], &off_877290);
  return a1[1] + v1;
}