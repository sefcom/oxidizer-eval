__int64 __fastcall just::attribute_set::AttributeSet::contains(__int64 *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BOOL8 v5; // rdx
  unsigned __int8 v6; // al
  char v8; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v9[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = a2;
  v2 = *a1;
  v3 = a1[1];
  v4 = *a1;
  v5 = *a1 != 0;
  if ( *a1 )
    v4 = a1[2];
  v9[0] = *a1 != 0;
  v9[1] = 0LL;
  v9[2] = v2;
  v9[3] = v3;
  v9[4] = v5;
  v9[5] = 0LL;
  v9[6] = v2;
  v9[7] = v3;
  v9[8] = v4;
  v6 = core::iter::traits::iterator::Iterator::try_fold(v9, &v8);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v6, 1LL);
}