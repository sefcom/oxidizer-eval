_QWORD *__fastcall alacritty::display::damage::DamageTracker::shape_frame_damage(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v5[4]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v6[24]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+38h] [rbp-70h]
  _BYTE v8[104]; // [rsp+40h] [rbp-68h] BYREF

  if ( *(_BYTE *)(a2 + 72) )
  {
    result = (_QWORD *)alloc::alloc::Global::alloc_impl(4LL, 16LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(4LL, 16LL);
    *result = 0LL;
    result[1] = *(_QWORD *)(a3 + 16);
    *a1 = 1LL;
    a1[1] = result;
    a1[2] = 1LL;
  }
  else
  {
    alacritty_terminal::term::TermDamageIterator::new(v6, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
    v5[0] = 2LL;
    v7 = a3;
    core::iter::traits::iterator::Iterator::chain(
      v8,
      v5,
      *(_QWORD *)(a2 + 56),
      *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)(a2 + 64));
    return (_QWORD *)core::iter::traits::iterator::Iterator::collect(a1, v8);
  }
  return result;
}