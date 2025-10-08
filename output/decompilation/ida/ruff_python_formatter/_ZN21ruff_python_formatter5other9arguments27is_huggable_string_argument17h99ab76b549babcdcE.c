char __fastcall ruff_python_formatter::other::arguments::is_huggable_string_argument(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  char result; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+8h] [rbp-50h]
  _QWORD v23[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  v21 = a1;
  v22 = a2;
  switch ( a1 )
  {
    case 0LL:
      result = 0;
      if ( __OFSUB__(0LL, *a2) )
        goto LABEL_9;
      return result;
    case 1LL:
      if ( !*a2 )
        return 0;
      goto LABEL_9;
    case 2LL:
      if ( *a2 == 0x8000000000000001LL )
        return 0;
      goto LABEL_9;
    case 3LL:
      result = 0;
      if ( __OFSUB__(0LL, *a2) )
        return result;
LABEL_9:
      if ( !(unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                               &v21,
                               a4) )
        return 0;
      ruff_python_ast::expression::StringLike::parts(v24, &v21);
      v8 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(v24);
      if ( v8 == 4 )
        return 0;
      v23[0] = v8;
      v23[1] = v9;
      if ( (ruff_python_ast::expression::StringLikePart::flags(v23) & 2) == 0 )
        return 0;
      v10 = (unsigned int)(*(_DWORD *)(a3 + 32) + 1);
      v11 = *(unsigned int *)((char *)v22 + qword_88F20[a1]);
      if ( (unsigned int)v10 > (unsigned int)v11 )
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57DFE0);
      v12 = *a4;
      v13 = a4[1];
      v14 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
              v10,
              v11);
      v16 = v15;
      v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v14,
              v15,
              v12,
              v13);
      if ( !v17 )
        core::str::slice_error_fail(v12, v13, v14, v16, &off_57DFF8);
      v19 = <str as ruff_python_trivia::whitespace::PythonWhitespace>::trim_whitespace_end(v17, v18);
      return core::str::pattern::Pattern::is_suffix_of(v19, v20) ^ 1;
  }
}