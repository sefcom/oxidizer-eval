unsigned __int64 __fastcall alacritty::display::hint::HintState::keyboard_input(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int128 v16; // xmm1
  unsigned int v17; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-68h]
  _QWORD v19[3]; // [rsp+18h] [rbp-60h] BYREF
  _OWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v17 = a4;
  switch ( a4 )
  {
    case 3u:
    case 0x1Bu:
      alacritty::display::hint::HintState::stop(a2);
      break;
    case 8u:
    case 0x1Fu:
      v7 = a2[11];
      if ( v7 )
        a2[11] = v7 - 1;
      break;
    default:
      break;
  }
  result = alacritty::display::hint::HintState::update_matches(a2, a3);
  if ( !a2[12] )
    goto LABEL_12;
  v9 = a2[7] + 24LL * a2[8];
  v19[0] = a2[7];
  v19[1] = v9;
  v19[2] = 0LL;
  result = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::try_rfold(
             v19,
             &v17);
  if ( !v10 )
    goto LABEL_12;
  if ( *(_QWORD *)(v10 + 16) != 1LL )
  {
    result = alloc::vec::Vec<T,A>::push(a2 + 9, a4, &off_8821E0);
LABEL_12:
    *(_BYTE *)(a1 + 48) = 2;
    return result;
  }
  v11 = a2[5];
  if ( result >= v11 )
    core::panicking::panic_bounds_check(result, v11, &off_8821B0);
  <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v20, a2[4] + 40 * result);
  alloc::rc::RcInnerPtr::inc_strong(a2[12]);
  v12 = a2[12];
  v18 = v12;
  if ( *(_BYTE *)(v12 + 233) )
    a2[11] = 0LL;
  else
    alacritty::display::hint::HintState::stop(a2);
  v13 = *(_QWORD *)&v20[0];
  v14 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
          a3 + 40,
          DWORD2(v20[0]),
          &off_8821C8);
  v15 = *(_QWORD *)(v14 + 16);
  if ( v13 >= v15 )
    core::panicking::panic_bounds_check(v13, v15, &off_8821C8);
  result = alacritty_terminal::term::cell::Cell::hyperlink(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 24 * v13));
  v16 = v20[1];
  *(_OWORD *)(a1 + 16) = v20[0];
  *(_OWORD *)(a1 + 32) = v16;
  *(_QWORD *)(a1 + 48) = v21;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v12;
  return result;
}