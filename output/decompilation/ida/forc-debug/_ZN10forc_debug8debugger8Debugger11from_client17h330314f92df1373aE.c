void *__fastcall forc_debug::debugger::Debugger::from_client(_BYTE *a1, const void *a2)
{
  void *result; // rax

  result = memcpy(a1, a2, 0x88uLL);
  a1[376] = 0;
  return result;
}