__int64 __fastcall bat::input::InputKind::description(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _BYTE v4[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = 0LL;
  if ( *a2 < (signed __int64)0x8000000000000002LL )
    v2 = *a2 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v2 )
  {
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
  }
  else
  {
    alloc::string::String::from_utf8_lossy(v4, a2[1], a2[2]);
    result = <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(a1, v4);
  }
  a1[3] = 0x8000000000000000LL;
  a1[6] = 0x8000000000000000LL;
  a1[9] = 0x8000000000000000LL;
  return result;
}