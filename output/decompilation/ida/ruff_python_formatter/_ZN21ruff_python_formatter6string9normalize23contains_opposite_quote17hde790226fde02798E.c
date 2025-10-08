__int64 __fastcall ruff_python_formatter::string::normalize::contains_opposite_quote(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rbx
  char v20; // al
  __int64 v21; // rdx
  const char *v22; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+8h] [rbp-40h]
  char v35; // [rsp+10h] [rbp-38h]

  v4 = a2;
  v5 = a1;
  if ( (a3 & 2) != 0 )
  {
    if ( (a3 & 1) != 0 )
      v22 = asc_8B632;
    else
      v22 = asc_8B635;
    return <&str as core::str::pattern::Pattern>::is_contained_in(v22, v5, a2);
  }
  else
  {
    if ( a3 > 0x3Fu )
    {
      v3 = core::str::<impl str>::find(a1, a2, 5 * (a3 & 1u) + 34);
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        if ( (core::str::<impl str>::find(a1, a2, 39LL) & 1) != 0 )
        {
          v7 = v24;
          while ( 1 )
          {
            v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                    v7,
                    v5,
                    v4);
            if ( !v25 )
              break;
            v33 = v25;
            v34 = v25 + v26;
            v35 = 0;
            v27 = ((__int64 (__fastcall *)(__int64 *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(&v33);
            LOBYTE(v3) = (v27 & 1) == 0;
            if ( (v27 & 1) != 0 )
            {
              v14 = v7 + 1;
              v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                      v14,
                      v5,
                      v4);
              v17 = v4;
              if ( !v28 )
LABEL_26:
                core::str::slice_error_fail(v5, v17, v14, v17, &off_57F838);
              v30 = v28;
              v4 = v29;
              v31 = core::str::<impl str>::find(v28, v29, 39LL);
              v7 = v32;
              v5 = v30;
              if ( (v31 & 1) != 0 )
                continue;
            }
            goto LABEL_24;
          }
LABEL_25:
          core::str::slice_error_fail(v5, v4, 0LL, v7, &off_57F820);
        }
      }
      else if ( (core::str::<impl str>::find(a1, a2, 34LL) & 1) != 0 )
      {
        v7 = v6;
        while ( 1 )
        {
          v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                 v7,
                 v5,
                 v4);
          if ( !v8 )
            goto LABEL_25;
          v33 = v8;
          v34 = v8 + v9;
          v35 = 0;
          v13 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64, __int64))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(
                  &v33,
                  v5,
                  v8 + v9,
                  v10,
                  v11,
                  v12);
          LOBYTE(v3) = (v13 & 1) == 0;
          if ( (v13 & 1) == 0 )
            goto LABEL_24;
          v14 = v7 + 1;
          v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                  v14,
                  v5,
                  v4);
          v17 = v4;
          if ( !v15 )
            goto LABEL_26;
          v18 = v15;
          v19 = v16;
          v20 = core::str::<impl str>::find(v15, v16, 34LL);
          v7 = v21;
          v5 = v18;
          v4 = v19;
          if ( (v20 & 1) == 0 )
            goto LABEL_24;
        }
      }
      v3 = 0;
    }
LABEL_24:
    LOBYTE(v3) = v3 & 1;
    return v3;
  }
}