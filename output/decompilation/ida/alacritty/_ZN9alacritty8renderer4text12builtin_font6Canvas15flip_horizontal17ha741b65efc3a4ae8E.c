unsigned __int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::flip_horizontal(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // [rsp+0h] [rbp-78h]
  __int64 v11; // [rsp+8h] [rbp-70h]
  unsigned __int64 v12; // [rsp+10h] [rbp-68h]
  unsigned __int64 v13; // [rsp+18h] [rbp-60h]
  unsigned __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  result = a1[4];
  v13 = result;
  if ( result )
  {
    result = a1[3];
    v10 = result;
    if ( result >= 2 )
    {
      v12 = result >> 1;
      v4 = a1[1];
      v5 = a1[2];
      v6 = result - 1;
      v11 = 3 * result;
      v7 = v4 + 3 * result - 3;
      v8 = 0LL;
      result = 0LL;
      do
      {
        v14 = result + 1;
        v9 = v12;
        v18 = v4;
        v15 = v8;
        v16 = v7;
        v17 = v6;
        do
        {
          if ( v8 >= v5 )
            core::panicking::panic_bounds_check(v8, v5, &off_883D70);
          if ( v6 >= v5 )
            core::panicking::panic_bounds_check(v6, v5, &off_883D70);
          core::ptr::swap(v4, v7, a3);
          --v6;
          v7 -= 3LL;
          ++v8;
          v4 += 3LL;
          --v9;
        }
        while ( v9 );
        v6 = v10 + v17;
        v7 = v11 + v16;
        v8 = v10 + v15;
        v4 = v11 + v18;
        result = v14;
      }
      while ( v14 != v13 );
    }
  }
  return result;
}