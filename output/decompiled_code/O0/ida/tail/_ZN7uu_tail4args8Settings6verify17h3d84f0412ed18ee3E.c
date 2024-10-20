char __fastcall uu_tail::args::Settings::verify(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  bool v4; // zf
  char v5; // cl
  char result; // al

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 || (v1 & 7) != 0 || (v2 = *(_QWORD *)(a1 + 40), v2 >= 0x2AAAAAAAAAAAAABLL) )
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  v3 = 48 * v2;
  while ( v3 )
  {
    v3 -= 48LL;
    v4 = *(_QWORD *)(v1 + 24) == 0x8000000000000000LL;
    v1 += 48LL;
    if ( v4 )
    {
      v5 = *(_BYTE *)(a1 + 76);
      result = 1;
      if ( (v5 & 1) != 0 )
        return result;
      if ( v5 == 2 )
        return 2 * (*(_QWORD *)(a1 + 8LL * (*(_QWORD *)a1 == 4LL)) == 3LL);
      return 0;
    }
  }
  if ( *(_BYTE *)(a1 + 76) == 2 )
    return 2 * (*(_QWORD *)(a1 + 8LL * (*(_QWORD *)a1 == 4LL)) == 3LL);
  return 0;
}
