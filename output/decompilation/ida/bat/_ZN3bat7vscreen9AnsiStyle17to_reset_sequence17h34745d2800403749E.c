__int64 __fastcall bat::vscreen::AnsiStyle::to_reset_sequence(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !__OFSUB__(-a2, 1LL) )
    return bat::vscreen::Attributes::to_reset_sequence(a1, a3);
  *a1 = 0LL;
  a1[1] = 1LL;
  a1[2] = 0LL;
  return result;
}