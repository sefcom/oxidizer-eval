__int64 __fastcall uu_env::split_iterator::SplitIterator::substitute_variable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // kr00_16
  __int64 v4; // r15
  int v5; // ecx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // [rsp+8h] [rbp-70h] BYREF
  __int128 v9; // [rsp+10h] [rbp-68h]
  __int128 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]

  v11 = a2 + 24;
  uu_env::variable_parser::VariableParser::parse_variable(&v8, &v11);
  result = (unsigned int)v8;
  if ( (_DWORD)v8 == 12 )
  {
    v3 = v10;
    v13 = v9;
    v12 = 0x8000000000000000LL;
    std::env::var_os(&v8, &v12);
    v4 = v8;
    if ( __OFSUB__(-v8, 1LL) )
    {
      if ( (_QWORD)v3 )
        uu_env::string_expander::StringExpander::put_native_string(a2, v3, *((_QWORD *)&v3 + 1));
    }
    else
    {
      uu_env::string_expander::StringExpander::put_string(a2, &v8);
    }
    *(_DWORD *)a1 = 12;
    return core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(v4, v9);
  }
  else
  {
    v5 = HIDWORD(v8);
    v6 = v9;
    v7 = v10;
    *(_DWORD *)a1 = v8;
    *(_DWORD *)(a1 + 4) = v5;
    *(_OWORD *)(a1 + 8) = v6;
    *(_OWORD *)(a1 + 24) = v7;
  }
  return result;
}