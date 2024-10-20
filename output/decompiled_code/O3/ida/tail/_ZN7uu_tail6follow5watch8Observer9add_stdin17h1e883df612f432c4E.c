        char a6)
{
  char v8; // al
  char v11; // al
  __int64 v12; // r12
  _OWORD *result; // rax
  _OWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v8 = *(_BYTE *)(a1 + 142);
  if ( v8 == 2 || (v8 & 1) != 0 )
  {
    if ( a4 )
    {
      if ( *(_QWORD *)a5 )
        (*(void (__fastcall **)(__int64))a5)(a4);
      v15 = *(_QWORD *)(a5 + 8);
      if ( v15 )
        _rust_dealloc(a4, v15, *(_QWORD *)(a5 + 16));
    }
    return 0LL;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(
      &v17,
      anon_0aa2dd8ef29f0dcd97eae16e4e959aa3_33_llvm_17052569310818674444,
      10LL);
    v16 = v17;
    v11 = a6;
    v12 = v18;
    result = uu_tail::follow::watch::Observer::add_path(a1, v18, v19, a2, a3, a4, a5, v11);
    if ( v16 )
    {
      v14 = result;
      _rust_dealloc(v12, v16, 1LL);
      return v14;
    }
  }
  return result;
}
