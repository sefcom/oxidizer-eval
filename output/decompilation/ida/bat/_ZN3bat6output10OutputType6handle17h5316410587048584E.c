__int64 __fastcall bat::output::OutputType::handle(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall **v3)(); // rcx

  v2 = 1LL;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 3LL) < 3 )
    v2 = *(_QWORD *)a2 - 3LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = &off_6CD888;
LABEL_10:
      *(_QWORD *)(a1 + 8) = v2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_QWORD *)(a1 + 24) = v3;
      *(_BYTE *)a1 = 13;
      return a1;
    }
    a2 += 8LL;
    v3 = (__int64 (__fastcall **)())&unk_6CE890;
LABEL_9:
    v2 = 0LL;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 24) != -1 )
  {
    a2 += 24LL;
    v3 = &off_6CE840;
    goto LABEL_9;
  }
  <bat::error::Error as core::convert::From<&str>>::from(a1, aCouldNotOpenSt, 30LL);
  return a1;
}