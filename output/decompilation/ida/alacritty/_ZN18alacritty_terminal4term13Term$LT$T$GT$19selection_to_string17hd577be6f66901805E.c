unsigned __int64 __fastcall alacritty_terminal::term::Term<T>::selection_to_string(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // r13d
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+8h] [rbp-A0h]
  __int128 v14; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-88h]
  __int128 v16; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-70h]
  int v18; // [rsp+40h] [rbp-68h]
  char v19; // [rsp+48h] [rbp-60h]
  unsigned int v20; // [rsp+54h] [rbp-54h]
  _QWORD *v21; // [rsp+58h] [rbp-50h]
  __int128 v22; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-38h]

  v2 = a1;
  if ( *(_BYTE *)(a2 + 640) == 2 || (alacritty_terminal::selection::Selection::to_range(&v16, a2 + 600, a2), v19 == 2) )
  {
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  v4 = v16;
  v5 = DWORD2(v16);
  v13 = v17;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  v6 = *(unsigned __int8 *)(a2 + 648);
  if ( v6 == 3 )
  {
    alacritty_terminal::term::Term<T>::bounds_to_string((__int64)&v16, a2, v16, SDWORD2(v16), v17, v18);
    <alloc::string::String as core::ops::arith::Add<&str>>::add(&v22, &v16, asc_F7843);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    v15 = v23;
    v10 = v22;
  }
  else
  {
    if ( v6 == 1 )
    {
      v21 = a1;
      v20 = v18;
      v7 = v18;
      if ( SDWORD2(v16) > v18 )
        v7 = DWORD2(v16);
      while ( v7 != v5 )
      {
        alacritty_terminal::term::Term<T>::line_to_string((__int64)&v16, a2, v5, v4, v13, v4 != 0);
        v8 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v16 + 1), v17);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v14,
          v8,
          v8 + v9);
        core::ptr::drop_in_place<alloc::string::String>(&v16);
        ++v5;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v14,
          asc_F7843,
          &unk_F7844);
      }
      alacritty_terminal::term::Term<T>::line_to_string((__int64)&v16, a2, v20, v4, v13, 1);
      v2 = v21;
      v11 = core::str::<impl str>::trim_end_matches(*((_QWORD *)&v16 + 1), v17);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v14,
        v11,
        v11 + v12);
      core::ptr::drop_in_place<alloc::string::String>(&v16);
      goto LABEL_14;
    }
    alacritty_terminal::term::Term<T>::bounds_to_string((__int64)&v16, a2, v16, SDWORD2(v16), v17, v18);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    v15 = v17;
    v10 = v16;
  }
  v14 = v10;
LABEL_14:
  result = v15;
  v2[2] = v15;
  *(_OWORD *)v2 = v14;
  return result;
}