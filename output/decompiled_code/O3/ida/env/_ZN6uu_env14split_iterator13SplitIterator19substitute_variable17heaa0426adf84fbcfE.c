__int64 __fastcall uu_env::split_iterator::SplitIterator::substitute_variable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // kr00_16
  int v4; // ecx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // [rsp+8h] [rbp-70h] BYREF
  __int128 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]

  v10 = a2 + 24;
  uu_env::variable_parser::VariableParser::parse_variable((__int64)&v7, &v10);
  result = (unsigned int)v7;
  if ( (_DWORD)v7 == 8 )
  {
    v3 = v9;
    v12 = v8;
    v11 = 0x8000000000000000LL;
    std::env::var_os(&v7, &v11);
    if ( v7 == 0x8000000000000000LL )
    {
      if ( (_QWORD)v3 )
        uu_env::string_expander::StringExpander::put_native_string(a2, v3, *((__int64 *)&v3 + 1));
    }
    else
    {
      uu_env::string_expander::StringExpander::put_string(a2, (__int64)&v7);
    }
    *(_DWORD *)a1 = 8;
    return core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v7);
  }
  else
  {
    v4 = HIDWORD(v7);
    v5 = v8;
    v6 = v9;
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v4;
    *(_OWORD *)(a1 + 8) = v5;
    *(_OWORD *)(a1 + 24) = v6;
  }
  return result;
}
