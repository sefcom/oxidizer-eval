const char *__fastcall alacritty::input::keyboard::SequenceBuilder::try_build_textual(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // r13
  char *v7; // rbp
  char v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  const char *result; // rax
  bool v13; // zf
  int v14; // edx
  void *v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // [rsp+8h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+Ch] [rbp-ACh] BYREF
  void *v20; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A0h]
  int **v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  int *v25; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-70h]
  int *v27; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-60h]
  _QWORD v29[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+70h] [rbp-48h] BYREF
  const char *v31; // [rsp+80h] [rbp-38h]

  winit::keyboard::Key::as_ref(&v20, a3);
  if ( (_BYTE)v20 != 32 || !a2[5] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return (const char *)core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v20);
  }
  v6 = (void *)v21;
  v7 = (char *)v22 + v21;
  core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v20);
  if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v6, v7) == 1 )
  {
    v8 = a2[4];
    v20 = v6;
    v21 = (__int64)v7;
    if ( (core::str::validations::next_code_point(&v20) & 1) == 0 || (v10 = v9, (_DWORD)v9 == (_DWORD)&unk_110000) )
      core::option::unwrap_failed(&off_882CB0);
    if ( (v8 & 1) != 0 )
    {
      core::unicode::unicode_data::conversions::to_lower(&v25, (unsigned int)v9);
      core::char::CaseMappingIter::new(&v20, &v25);
      v11 = <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next(&v20);
      if ( v11 == (_DWORD)&unk_110000 )
        core::option::unwrap_failed(&off_882CC8);
      v19 = v10;
      v18 = v11;
      if ( v10 != v11 )
        goto LABEL_22;
      <winit::keyboard::Key<Str> as core::clone::Clone>::clone(&v20, a3 + 32);
      winit::keyboard::Key::as_ref(&v25, &v20);
      if ( (_BYTE)v25 == 32 )
      {
        v29[0] = v26;
        v29[1] = (char *)v27 + (_QWORD)v26;
        v13 = (core::str::validations::next_code_point(v29) & 1) == 0;
        v15 = &unk_110000;
        if ( !v13 )
          LODWORD(v15) = v14;
        if ( (_DWORD)v15 == (_DWORD)&unk_110000 )
          LODWORD(v15) = v10;
        v16 = (unsigned int)v15;
        v18 = (unsigned int)v15;
        core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v25);
        core::ptr::drop_in_place<winit::keyboard::Key>(&v20);
        v11 = v16;
        goto LABEL_22;
      }
      core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v25);
      core::ptr::drop_in_place<winit::keyboard::Key>(&v20);
    }
    else
    {
      v19 = v9;
      v18 = v9;
    }
    v11 = v10;
LABEL_22:
    if ( (a2[2] & 0x10) == 0 || v10 == v11 )
    {
      v17 = core::fmt::num::imp::<impl u32>::_fmt(v11, &v20, 10LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, v17);
    }
    else
    {
      v25 = (int *)&v18;
      v26 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v27 = (int *)&v19;
      v28 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v20 = &unk_882C90;
      v21 = 2LL;
      v24 = 0LL;
      v22 = &v25;
      v23 = 2LL;
      core::option::Option<T>::map_or_else(&v30, 0LL, v9, &v20);
    }
    result = v31;
    *(_QWORD *)(a1 + 16) = v31;
    *(_OWORD *)a1 = v30;
    goto LABEL_27;
  }
  result = (const char *)0x8000000000000001LL;
  if ( !a4 || !a2[6] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return result;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
  result = a0_2;
  *(_QWORD *)(a1 + 8) = a0_2;
  *(_QWORD *)(a1 + 16) = 1LL;
LABEL_27:
  *(_DWORD *)(a1 + 24) = (_DWORD)&unk_110000;
  return result;
}