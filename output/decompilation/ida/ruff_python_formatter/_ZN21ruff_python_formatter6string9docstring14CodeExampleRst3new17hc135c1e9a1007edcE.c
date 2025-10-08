__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // kr00_16
  __int128 v5; // kr10_16
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // [rsp+8h] [rbp-80h] BYREF
  __int128 v13; // [rsp+18h] [rbp-70h]
  __int128 v14; // [rsp+28h] [rbp-60h]
  __int128 v15; // [rsp+38h] [rbp-50h]
  __int128 v16; // [rsp+48h] [rbp-40h]

  ruff_python_formatter::string::docstring::indent_with_suffix(&v12);
  v4 = v12;
  v5 = v13;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v13, *((_QWORD *)&v13 + 1), asc_8B696, 3LL) )
  {
    ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block(&v12, a2, a3);
    result = 0LL;
    if ( __OFSUB__(0LL, (_QWORD)v12) )
    {
      result = core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
                 0x8000000000000000LL,
                 *((_QWORD *)&v12 + 1));
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_OWORD *)(a1 + 64) = v16;
      v9 = v12;
      v10 = v13;
      v11 = v14;
      *(_OWORD *)(a1 + 48) = v15;
      *(_OWORD *)(a1 + 32) = v11;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
    }
  }
  else
  {
    v7 = core::str::<impl str>::trim_end_matches(v5, *((_QWORD *)&v5 + 1));
    if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v7, v8, &unk_8B699, 2LL) )
    {
      ruff_python_formatter::string::docstring::Indentation::from_str(&v12, v4, *((_QWORD *)&v4 + 1));
      result = v13;
      *(_QWORD *)(a1 + 40) = v13;
      *(_OWORD *)(a1 + 24) = v12;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 8LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 48) = 5;
      *(_BYTE *)(a1 + 72) = 0;
    }
    else
    {
      result = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
  }
  return result;
}