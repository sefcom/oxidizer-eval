__int64 __fastcall just::string_kind::StringKind::from_token_start(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v4[0] = &unk_7187D;
  v4[1] = asc_71889;
  v2 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v4, a1, a2);
  if ( v2 )
    return *v2;
  else
    return 2LL;
}