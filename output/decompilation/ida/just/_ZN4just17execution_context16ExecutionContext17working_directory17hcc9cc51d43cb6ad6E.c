__int64 __fastcall just::execution_context::ExecutionContext::working_directory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  bool v5; // of
  __int64 v6; // rsi
  __int64 v7; // rdx

  v4 = a3 + 24;
  if ( *(_BYTE *)(a2 + 560) != 37 )
    v4 = a2 + 120;
  v5 = __OFSUB__(0LL, *(_QWORD *)(a2 + 456));
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  if ( v5 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, v6);
  else
    return std::path::Path::join(a1, v6, v7, a2 + 456);
}