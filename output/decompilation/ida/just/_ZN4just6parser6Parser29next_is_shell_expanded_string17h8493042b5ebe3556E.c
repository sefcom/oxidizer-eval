bool __fastcall just::parser::Parser::next_is_shell_expanded_string(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v11[16]; // [rsp+18h] [rbp-10h] BYREF

  v1 = a1[3] + 72LL * a1[4];
  v2 = a1[11];
  v10[0] = a1[3];
  v10[1] = v1;
  v10[2] = v2;
  v11[0] = 0;
  v3 = ((__int64 (__fastcall *)(_QWORD *, _BYTE *))<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold)(
         v10,
         v11);
  return v3
      && (unsigned __int8)just::parser::Parser::next_is_shell_expanded_string::{{closure}}(v3)
      && (v8 = ((__int64 (__fastcall *)(_QWORD *, _BYTE *, __int64, __int64, __int64, __int64))<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold)(
                 v10,
                 v11,
                 v4,
                 v5,
                 v6,
                 v7)) != 0
      && *(_BYTE *)(v8 + 64) == 33;
}