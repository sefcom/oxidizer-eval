__int64 __fastcall ruff_python_formatter::expression::expr_attribute::is_base_ten_number_literal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r15
  _BYTE *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl

  if ( *(_DWORD *)a1 != 21 )
    goto LABEL_4;
  v4 = *(_QWORD *)(a1 + 8);
  LOBYTE(v3) = 1;
  if ( v4 )
  {
    if ( (_DWORD)v4 != 1 )
LABEL_4:
      LODWORD(v3) = 0;
  }
  else
  {
    v7 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
           *(unsigned int *)(a1 + 32),
           *(unsigned int *)(a1 + 36));
    v9 = v8;
    v10 = (_BYTE *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                     v7,
                     v8,
                     a2,
                     a3);
    if ( !v10 )
      core::str::slice_error_fail(a2, a3, v7, v9, &off_57D828);
    if ( v11 > 1 && *v10 == 48 )
    {
      v12 = v10[1] - 66;
      if ( v12 <= 0x36u )
        v3 = 0x3FDFFEFFBFDFFEuLL >> v12;
    }
  }
  LOBYTE(v3) = v3 & 1;
  return (unsigned int)v3;
}