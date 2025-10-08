__int64 __fastcall alacritty_terminal::term::Term<T>::bounds_to_string(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 result; // rax
  _OWORD *v21; // rcx
  __int128 v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  _DWORD v24[2]; // [rsp+24h] [rbp-64h] BYREF
  char v25; // [rsp+2Ch] [rbp-5Ch]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h] BYREF
  __int128 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+50h] [rbp-38h]

  v29 = a5;
  v26 = a1;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 1LL;
  v23 = 0LL;
  v24[0] = a4;
  v24[1] = a6;
  v25 = 0;
  if ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v24) & 1) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 184) - 1LL;
    do
    {
      v11 = 0LL;
      if ( v9 == a4 )
        v11 = a3;
      v12 = v10;
      if ( v9 == a6 )
        v12 = v29;
      alacritty_terminal::term::Term<T>::line_to_string((__int64)&v27, a2, v9, v11, v12, v9 == a6);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v22,
        v28,
        v28 + *((_QWORD *)&v28 + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v27);
    }
    while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(v24) & 1) != 0 );
    v13 = *((_QWORD *)&v22 + 1);
    v14 = v23;
  }
  else
  {
    v13 = 1LL;
    v14 = 0LL;
  }
  LODWORD(v27) = 0;
  v15 = core::char::methods::encode_utf8_raw(10LL, &v27);
  v17 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v15, v16, v13, v14);
  if ( v17 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v27, v17);
    v18 = v27;
    v19 = (_QWORD *)v26;
    *(_OWORD *)(v26 + 8) = v28;
    *v19 = v18;
    return core::ptr::drop_in_place<alloc::string::String>(&v22);
  }
  else
  {
    result = v23;
    v21 = (_OWORD *)v26;
    *(_QWORD *)(v26 + 16) = v23;
    *v21 = v22;
  }
  return result;
}