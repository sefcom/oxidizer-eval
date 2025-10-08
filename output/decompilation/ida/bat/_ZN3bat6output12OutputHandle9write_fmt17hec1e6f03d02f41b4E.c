__int64 __fastcall bat::output::OutputHandle::write_fmt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(v5 + 40))(v4, a3) )
    {
      *(_BYTE *)a1 = 1;
      return a1;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 72))(v4, a3);
    if ( v7 )
    {
      *(_BYTE *)a1 = 0;
      *(_QWORD *)(a1 + 8) = v7;
      return a1;
    }
  }
  *(_BYTE *)a1 = 13;
  return a1;
}