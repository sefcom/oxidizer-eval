__int64 __fastcall tabby_index_cli::timer::TimerTree::total_time(__int64 a1, __int64 a2)
{
  if ( !a2 )
    core::option::unwrap_failed(&off_584E60);
  return *(_QWORD *)(a1 + 32 * a2 - 16);
}