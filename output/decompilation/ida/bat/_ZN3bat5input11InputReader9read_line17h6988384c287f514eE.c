__int64 __fastcall bat::input::InputReader::read_line(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( *(_QWORD *)(a2 + 16) )
  {
    result = alloc::vec::Vec<T,A>::append_elements(a3, *(_QWORD *)(a2 + 8));
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)a1 = 256;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a2 + 40);
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_QWORD *)(a2 + 32);
    if ( v6 == 3 )
    {
      return bat::input::read_utf16_line(a1, v7, v8, a3, 0LL, 10LL);
    }
    else if ( v6 == 4 )
    {
      return bat::input::read_utf16_line(a1, v7, v8, a3, 10LL, 0LL);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 112))(v7, 10LL, a3);
      if ( (result & 1) != 0 )
      {
        *(_QWORD *)(a1 + 8) = v9;
        *(_BYTE *)a1 = 1;
      }
      else
      {
        *(_BYTE *)(a1 + 1) = v9 != 0;
        *(_BYTE *)a1 = 0;
      }
    }
  }
  return result;
}