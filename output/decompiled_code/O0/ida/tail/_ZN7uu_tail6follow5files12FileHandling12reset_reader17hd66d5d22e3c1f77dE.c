__int64 __fastcall uu_tail::follow::files::FileHandling::reset_reader(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi

  result = uu_tail::follow::files::FileHandling::get_mut(a1);
  v2 = result;
  if ( *(_QWORD *)(result + 200) )
  {
    result = *(_QWORD *)(result + 208);
    if ( *(_QWORD *)result )
    {
      (*(void (**)(void))result)();
      result = *(_QWORD *)(v2 + 208);
    }
    v3 = *(_QWORD *)(result + 8);
    if ( v3 )
      result = _rust_dealloc(*(_QWORD *)(v2 + 200), v3, *(_QWORD *)(result + 16));
  }
  *(_QWORD *)(v2 + 200) = 0LL;
  return result;
}
