__int64 __fastcall just::line::Line::is_shebang(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = just::line::Line::first(a1, a2);
  if ( v2 )
    return core::slice::<impl [T]>::starts_with(v2, v3, asc_71382, 2LL);
  else
    return 0LL;
}