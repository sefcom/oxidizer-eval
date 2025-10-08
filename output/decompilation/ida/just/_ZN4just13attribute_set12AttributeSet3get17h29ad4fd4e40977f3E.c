__int64 __fastcall just::attribute_set::AttributeSet::get(__int64 *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  _BOOL8 v5; // rdx
  char v7; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a2;
  v2 = *a1;
  v3 = a1[1];
  v4 = *a1;
  v5 = *a1 != 0;
  if ( *a1 )
    v4 = a1[2];
  v8[0] = *a1 != 0;
  v8[1] = 0LL;
  v8[2] = v2;
  v8[3] = v3;
  v8[4] = v5;
  v8[5] = 0LL;
  v8[6] = v2;
  v8[7] = v3;
  v8[8] = v4;
  return core::iter::traits::iterator::Iterator::try_fold(v8, &v7);
}