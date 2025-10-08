__int64 __fastcall just::justfile::Justfile::suggest_variable(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a2[80];
  v5 = a2[81];
  v6 = v4;
  if ( v4 )
    v6 = a2[82];
  v8[0] = v4 != 0;
  v8[1] = 0LL;
  v8[2] = v4;
  v8[3] = v5;
  v8[4] = v8[0];
  v8[5] = 0LL;
  v8[6] = v4;
  v8[7] = v5;
  v8[8] = v6;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))just::justfile::Justfile::find_suggestion)(
           a1,
           a3,
           a4,
           v8);
}