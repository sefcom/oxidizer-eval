void __fastcall uu_unexpand::next_char_info(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  _BOOL8 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  char code_point; // al
  unsigned int v13; // edx
  __int64 v14; // r15
  _QWORD v15[2]; // [rsp+0h] [rbp-48h] BYREF
  int v16; // [rsp+10h] [rbp-38h] BYREF
  __int64 v17; // [rsp+18h] [rbp-30h]
  __int64 v18; // [rsp+20h] [rbp-28h]

  if ( !a2 )
  {
    if ( a5 >= a4 )
      core::panicking::panic_bounds_check(a5, a4, &off_E8310);
    v11 = *(unsigned __int8 *)(a3 + a5);
    v7 = 1LL;
    if ( v11 == 8 )
    {
      v8 = 0;
    }
    else if ( v11 == 9 )
    {
      v8 = 2;
    }
    else
    {
      v8 = 3;
      if ( v11 == 32 )
        v8 = 1;
    }
    goto LABEL_18;
  }
  if ( a5 >= a4 )
    core::panicking::panic_bounds_check(a5, a4, &off_E8328);
  v5 = *(char *)(a3 + a5) < 0;
  v6 = v5 + a5 + 1;
  v7 = 1LL;
  v8 = 3;
  if ( v6 > a4 )
  {
LABEL_18:
    v10 = 1LL;
    goto LABEL_19;
  }
  v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a5, v6, a3, a4, &off_E8340);
  core::str::converts::from_utf8(&v16, v9);
  if ( v16 == 1 )
  {
    v10 = 1LL;
  }
  else
  {
    v15[0] = v17;
    v15[1] = v17 + v18;
    code_point = core::str::validations::next_code_point(v15);
    v10 = 1LL;
    v8 = 3;
    if ( (code_point & 1) != 0 )
    {
      switch ( v13 )
      {
        case 8u:
          v8 = 0;
          v7 = 0LL;
          break;
        case 9u:
          v8 = 2;
          v7 = 0LL;
          break;
        case 0x20u:
          v8 = 1;
          v7 = 0LL;
          break;
        default:
          v14 = v5 + 1;
          if ( v13 >= 0x7F )
          {
            if ( v13 <= 0x9F )
              v7 = 0LL;
            else
              v7 = (unsigned __int8)unicode_width::tables::lookup_width(v13);
            v10 = v14;
          }
          else
          {
            v7 = v13 >= 0x20;
            v10 = v14;
          }
          break;
      }
    }
    else
    {
      v7 = 1LL;
    }
  }
LABEL_19:
  *(_BYTE *)(a1 + 8) = v8;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 16) = v10;
}