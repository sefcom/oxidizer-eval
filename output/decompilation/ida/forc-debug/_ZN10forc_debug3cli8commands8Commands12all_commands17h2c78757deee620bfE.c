_QWORD *__fastcall forc_debug::cli::commands::Commands::all_commands(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 72LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 72LL);
  *v2 = a2;
  v2[1] = a2 + 48;
  v2[2] = a2 + 96;
  v2[3] = a2 + 144;
  v2[4] = a2 + 192;
  v2[5] = a2 + 240;
  v2[6] = a2 + 288;
  v2[7] = a2 + 336;
  v2[8] = a2 + 384;
  *a1 = 9LL;
  a1[1] = v2;
  a1[2] = 9LL;
  return a1;
}