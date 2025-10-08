__int64 __fastcall just::justfile::Justfile::suggest_recipe(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD v14[9]; // [rsp+8h] [rbp-140h] BYREF
  _QWORD v15[9]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v16[176]; // [rsp+98h] [rbp-B0h] BYREF

  v7 = a2[87];
  v8 = a2[88];
  v9 = v7;
  if ( v7 )
    v9 = a2[89];
  v14[0] = v7 != 0;
  v14[1] = 0LL;
  v14[2] = v7;
  v14[3] = v8;
  v14[4] = v14[0];
  v14[5] = 0LL;
  v14[6] = v7;
  v14[7] = v8;
  v14[8] = v9;
  v10 = a2[77];
  v11 = a2[78];
  v12 = v10;
  if ( v10 )
    v12 = a2[79];
  v15[0] = v10 != 0;
  v15[1] = 0LL;
  v15[2] = v10;
  v15[3] = v11;
  v15[4] = v15[0];
  v15[5] = 0LL;
  v15[6] = v10;
  v15[7] = v11;
  v15[8] = v12;
  core::iter::traits::iterator::Iterator::chain(v16, v14, v15);
  return just::justfile::Justfile::find_suggestion(a1, a3, a4, (__int64)v16);
}