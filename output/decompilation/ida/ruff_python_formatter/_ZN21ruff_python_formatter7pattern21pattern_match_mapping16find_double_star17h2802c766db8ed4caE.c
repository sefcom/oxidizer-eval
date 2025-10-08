void __fastcall ruff_python_formatter::pattern::pattern_match_mapping::find_double_star(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  char v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a2 + 79) == 0xDA
    || ((v5 = *(_QWORD *)(a2 + 40)) == 0 ? (v8 = 0LL) : (v8 = *(_QWORD *)(a2 + 32) + 104 * v5 - 104),
        v9 = core::option::Option<T>::map_or(v8, *(unsigned int *)(a2 + 88)),
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v12, v9, a3, a4),
        core::iter::traits::iterator::Iterator::try_fold(&v10, v12),
        v11 == 90) )
  {
    *(_DWORD *)a1 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 4) = v10;
    *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)a1 = 1;
  }
}