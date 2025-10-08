__int64 __fastcall just::recipe::Recipe<D>::max_arguments(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = a1 + 208 * a2;
  v2 = (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v4) == 0;
  result = -2LL;
  if ( v2 )
    return a2;
  return result;
}