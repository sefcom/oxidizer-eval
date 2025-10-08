__int64 __fastcall ruff_python_formatter::string::docstring::Indentation::trim_start_str(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned int v6; // edx
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  char code_point; // al
  unsigned int v13; // edx
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = a2;
  v5 = ruff_python_formatter::string::docstring::Indentation::columns(a1);
  v15[0] = a2;
  v15[1] = a2 + a3;
  if ( (core::str::validations::next_code_point(v15) & 1) != 0 )
  {
    v7 = v6;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= v5 )
        return v4;
      if ( v7 == 32 )
        goto LABEL_3;
      if ( v7 != 9 )
        break;
      v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              1LL,
              v4,
              a3);
      if ( !v10 )
        core::str::slice_error_fail(v4, a3, 1LL, a3, &off_57F578);
      v8 = (v8 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_5:
      a3 = v11;
      v4 = v10;
      code_point = core::str::validations::next_code_point(v15);
      v7 = v13;
      if ( (code_point & 1) == 0 )
        return v4;
    }
    if ( v7 - 9 < 5 )
    {
LABEL_3:
      ++v8;
      v9 = 1LL;
    }
    else
    {
      if ( v7 < 0x80 || !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
        return v4;
      if ( v7 >= 0x800 )
      {
        v9 = 4LL - (v7 < 0x10000);
        v8 += v9;
      }
      else
      {
        v8 += 2LL;
        v9 = 2LL;
      }
    }
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v9,
            v4,
            a3);
    if ( !v10 )
      core::str::slice_error_fail(v4, a3, v9, a3, &off_57F590);
    goto LABEL_5;
  }
  return v4;
}