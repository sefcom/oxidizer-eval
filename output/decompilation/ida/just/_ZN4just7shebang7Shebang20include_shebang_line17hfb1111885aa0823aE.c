char __fastcall just::shebang::Shebang::include_shebang_line(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r14

  v2 = just::shebang::Shebang::interpreter_filename(a1, a2);
  v4 = v3;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aCmd, 3LL) )
    return 0;
  else
    return <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v4, aCmdExe, 7LL) ^ 1;
}