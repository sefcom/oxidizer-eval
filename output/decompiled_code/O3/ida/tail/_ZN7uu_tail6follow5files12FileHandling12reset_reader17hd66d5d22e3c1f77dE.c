__int64 __fastcall uu_tail::follow::files::FileHandling::reset_reader(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 *v6; // r12
  __int64 v7; // rsi

  result = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  v4 = result;
  v5 = *(_QWORD *)(result + 200);
  if ( v5 )
  {
    v6 = *(__int64 **)(result + 208);
    result = *v6;
    if ( *v6 )
      result = ((__int64 (__fastcall *)(__int64))result)(v5);
    v7 = v6[1];
    if ( v7 )
      result = _rust_dealloc(v5, v7, v6[2]);
  }
  *(_QWORD *)(v4 + 200) = 0LL;
  return result;
}
