_QWORD *__fastcall forc_tx::Command::try_parse_from_args::push_input(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  char **v3; // rax

  v3 = &off_1D1330;
  if ( *a2 )
    v3 = &off_1D1348;
  alloc::vec::Vec<T,A>::push(a2 + 144, a3, v3);
  *a1 = 0x8000000000000005LL;
  return a1;
}