        unsigned __int64 a5)
{
  _BOOL8 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  char v8; // bl
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  int code_point; // eax
  unsigned int v13; // edx
  __int64 v14; // r14
  char **v15; // rdx
  _QWORD v16[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17; // [rsp+18h] [rbp-30h] BYREF
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]

  if ( !a2 )
  {
    if ( a5 < a4 )
    {
      v9 = *(unsigned __int8 *)(a3 + a5);
      result = 1LL;
      if ( v9 == 8 )
      {
        v8 = 0;
      }
      else if ( v9 == 9 )
      {
        v8 = 2;
      }
      else
      {
        v8 = 3;
        if ( v9 == 32 )
          v8 = 1;
      }
      goto LABEL_14;
    }
    v15 = &off_11D140;
LABEL_32:
    core::panicking::panic_bounds_check(a5, a4, v15);
  }
  if ( a5 >= a4 )
  {
    v15 = &off_11D158;
    goto LABEL_32;
  }
  v5 = *(char *)(a3 + a5) < 0;
  v6 = v5 + a5 + 1;
  if ( v6 > a4 )
  {
    result = 1LL;
    v8 = 3;
LABEL_14:
    v11 = 1LL;
    goto LABEL_15;
  }
  v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a5, v6, a3, a4, &off_11D170);
  core::str::converts::from_utf8(&v17, v10);
  if ( v17 )
  {
    result = 1LL;
    v8 = 3;
    v11 = 1LL;
  }
  else
  {
    v16[0] = v18;
    v16[1] = v18 + v19;
    code_point = core::str::validations::next_code_point(v16);
    v11 = 1LL;
    v8 = 3;
    if ( code_point )
    {
      switch ( v13 )
      {
        case 8u:
          v8 = 0;
          result = 0LL;
          break;
        case 9u:
          v8 = 2;
          result = 0LL;
          break;
        case 0x20u:
          v8 = 1;
          result = 0LL;
          break;
        default:
          v14 = v5 + 1;
          if ( v13 >= 0x7F )
          {
            if ( v13 <= 0x9F )
              result = 0LL;
            else
              result = unicode_width::tables::charwidth::lookup_width(v13);
            v11 = v14;
          }
          else
          {
            result = v13 >= 0x20;
            v11 = v14;
          }
          break;
      }
    }
    else
    {
      result = 1LL;
    }
  }
LABEL_15:
  *(_BYTE *)(a1 + 8) = v8;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
