__int64 __fastcall ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_end_tag(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  char v4[8]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+8h] [rbp-20h]

  result = (*(__int64 (**)(void))(a2 + 48))();
  v3 = *(unsigned __int8 *)(result + 32);
  if ( v3 >= 2 )
  {
    if ( v3 == 2 )
    {
      if ( !*(_DWORD *)(result + 36) )
        return result;
      v5 = 9;
    }
    else
    {
      v5 = 7;
    }
    v4[0] = 10;
    return (*(__int64 (__fastcall **)(__int64, char *))(a2 + 24))(a1, v4);
  }
  return result;
}