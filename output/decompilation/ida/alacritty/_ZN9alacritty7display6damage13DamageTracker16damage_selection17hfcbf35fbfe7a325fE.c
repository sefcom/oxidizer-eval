__int64 __fastcall alacritty::display::damage::DamageTracker::damage_selection(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // [rsp+8h] [rbp-E0h]
  int v16; // [rsp+Ch] [rbp-DCh]
  int v17; // [rsp+10h] [rbp-D8h]
  _BYTE v18[8]; // [rsp+18h] [rbp-D0h] BYREF
  int v19; // [rsp+20h] [rbp-C8h]
  int v20; // [rsp+30h] [rbp-B8h]
  char v21; // [rsp+38h] [rbp-B0h]
  _QWORD v22[2]; // [rsp+40h] [rbp-A8h] BYREF
  char i; // [rsp+50h] [rbp-98h]
  _BYTE v24[40]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v25[88]; // [rsp+90h] [rbp-58h] BYREF

  v4 = a1 + 136;
  result = core::intrinsics::typed_swap_nonoverlapping(a1 + 136);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    result = *(unsigned __int8 *)(a1 + 168);
    if ( *(_BYTE *)(a2 + 32) == 2 )
    {
      if ( (_BYTE)result == 2 )
        return result;
    }
    else if ( (_BYTE)result != 2 )
    {
      result = <alacritty_terminal::selection::SelectionRange as core::cmp::PartialEq>::eq(a2, v4);
      if ( (_BYTE)result )
        return result;
    }
    core::iter::traits::iterator::Iterator::chain(v24, v4, a2);
    core::iter::adapters::chain::and_then_or_clear(v22, v24);
    result = core::option::Option<T>::or_else(v18, v22, v25);
    if ( v21 != 2 )
    {
      v15 = *(_DWORD *)(a1 + 176) - 1;
      v16 = a3 - v15;
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(_QWORD *)(a1 + 40);
      v8 = *(_QWORD *)(a1 + 184) - 1LL;
      v17 = a3;
      do
      {
        v9 = -v19;
        if ( v19 > 0 )
          v9 = v19;
        v10 = a3 + v20;
        if ( a3 + v20 >= 0 && v9 >= v16 )
        {
          v11 = (int)core::cmp::Ord::max((unsigned int)(a3 + v19), 0LL);
          v12 = core::cmp::Ord::clamp(v10, v15);
          v22[0] = v11;
          v22[1] = v12;
          for ( i = 0;
                (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v22) & 1) != 0;
                *(_QWORD *)(v6 + 8 * v14 + 16) = core::cmp::Ord::max(*(_QWORD *)(v6 + 8 * v14 + 16), v8) )
          {
            if ( v13 >= v7 )
              core::panicking::panic_bounds_check(v13, v7, &off_882318);
            v14 = 3 * v13;
            *(_QWORD *)(v6 + 8 * v14 + 8) = core::cmp::Ord::min(*(_QWORD *)(v6 + 24 * v13 + 8), 0LL);
          }
          a3 = v17;
        }
        core::iter::adapters::chain::and_then_or_clear(v22, v24);
        result = core::option::Option<T>::or_else(v18, v22, v25);
      }
      while ( v21 != 2 );
    }
  }
  return result;
}