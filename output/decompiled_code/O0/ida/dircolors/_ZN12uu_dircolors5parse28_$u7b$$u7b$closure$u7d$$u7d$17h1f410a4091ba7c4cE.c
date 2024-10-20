__int64 __fastcall uu_dircolors::parse::{{closure}}(_QWORD *a1, _QWORD **a2)
{
  __int64 v2; // rax
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = (*a2)[1];
  v4[0] = **a2;
  v4[1] = v2;
  return core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v4, *a1) & 1;
}
