char *__fastcall just::attribute::<impl core::convert::From<&just::attribute::Attribute> for &str>::from(__int64 a1)
{
  __int64 v1; // rcx

  v1 = 16LL;
  if ( (unsigned __int64)(a1 + 0x7FFFFFFFFFFFFFFFLL) < 0x14 )
    v1 = a1 + 0x7FFFFFFFFFFFFFFFLL;
  return (char *)dword_9FD38 + dword_9FD38[v1];
}