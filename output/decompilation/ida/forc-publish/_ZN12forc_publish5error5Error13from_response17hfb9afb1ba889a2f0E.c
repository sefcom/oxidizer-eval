void *__fastcall forc_publish::error::Error::from_response(_BYTE *a1, const void *a2)
{
  void *result; // rax

  result = memcpy(a1, a2, 0x88uLL);
  a1[842] = 0;
  return result;
}