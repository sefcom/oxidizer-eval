__int64 __fastcall ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4[0] = *(_QWORD *)(a2 + 32);
  v4[1] = a2;
  v4[2] = a2 + 40;
  v4[3] = a2 + 44;
  if ( v2 == 4 )
    return ruff_python_formatter::builders::JoinCommaSeparatedBuilder::finish::{{closure}}(a1, v4);
  *(_DWORD *)a1 = v2;
  *(_OWORD *)(a1 + 4) = *(_OWORD *)(a2 + 12);
  result = *(unsigned int *)(a2 + 28);
  *(_DWORD *)(a1 + 20) = result;
  return result;
}