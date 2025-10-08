__int64 __fastcall ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_start_tag(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  char v4[8]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+8h] [rbp-20h]
  int v6; // [rsp+Ch] [rbp-1Ch]
  char v7; // [rsp+10h] [rbp-18h]
  char v8; // [rsp+14h] [rbp-14h]

  result = (*(__int64 (**)(void))(a2 + 48))();
  v3 = *(unsigned __int8 *)(result + 32);
  if ( v3 >= 2 )
  {
    if ( v3 == 2 )
    {
      result = *(unsigned int *)(result + 36);
      if ( !(_DWORD)result )
        return result;
      v5 = 8;
      v6 = result;
      v7 = 1;
      v8 = 0;
    }
    else
    {
      v5 = 6;
      v6 = 0;
      v7 = 0;
    }
    v4[0] = 10;
    return (*(__int64 (__fastcall **)(__int64, char *))(a2 + 24))(a1, v4);
  }
  return result;
}