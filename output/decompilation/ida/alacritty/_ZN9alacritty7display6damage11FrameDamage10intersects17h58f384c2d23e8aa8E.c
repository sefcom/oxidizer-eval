__int64 __fastcall alacritty::display::damage::FrameDamage::intersects(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // al
  __int128 v16; // [rsp+0h] [rbp-48h] BYREF
  char v17; // [rsp+10h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( a2 >= v6 )
    core::panicking::panic_bounds_check(a2, v6, &off_882378);
  if ( a4 >= v6 )
    core::panicking::panic_bounds_check(a4, v6, &off_882390);
  LOBYTE(v5) = 1;
  if ( !*(_BYTE *)(a1 + 48) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v16 = *(_OWORD *)(v9 + 24 * a2 + 8);
    v17 = 0;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int128 *, __int64))core::ops::range::RangeBounds::contains)(
                             &v16,
                             a3) )
    {
      v16 = *(_OWORD *)(v9 + 24 * a4 + 8);
      v17 = 0;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64))core::ops::range::RangeBounds::contains)(
                               &v16,
                               a5,
                               v10,
                               v11,
                               v12,
                               v13) )
      {
        *(_QWORD *)&v16 = a2 + 1;
        *((_QWORD *)&v16 + 1) = a4;
        v14 = core::iter::traits::iterator::Iterator::try_fold(&v16, a1);
        return (unsigned int)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14, 1LL);
      }
    }
  }
  return v5;
}