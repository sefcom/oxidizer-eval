__int64 __fastcall uu_uname::UNameOutput::display(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // r10
  _QWORD *v9; // r11
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int128 v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-98h]
  _QWORD v15[18]; // [rsp+18h] [rbp-90h] BYREF

  v3 = a2;
  if ( __OFSUB__(0LL, *a2) )
    v3 = 0LL;
  v4 = a2 + 3;
  if ( __OFSUB__(0LL, a2[3]) )
    v4 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  v5 = a2 + 6;
  if ( __OFSUB__(0LL, a2[6]) )
    v5 = 0LL;
  v6 = a2 + 9;
  if ( __OFSUB__(0LL, a2[9]) )
    v6 = 0LL;
  v7 = a2 + 12;
  if ( __OFSUB__(0LL, a2[12]) )
    v7 = 0LL;
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = a2 + 15;
  if ( __OFSUB__(0LL, a2[15]) )
    v8 = 0LL;
  v9 = a2 + 18;
  if ( __OFSUB__(0LL, a2[18]) )
    v9 = 0LL;
  v10 = a2 + 21;
  if ( __OFSUB__(0LL, a2[21]) )
    v10 = 0LL;
  v14 = 0LL;
  v15[0] = 1LL;
  v15[1] = 0LL;
  v15[2] = 8LL;
  v15[3] = v3;
  v15[4] = v4;
  v15[5] = v5;
  v15[6] = v6;
  v15[7] = v7;
  v15[8] = v8;
  v15[9] = v9;
  v15[10] = v10;
  v15[11] = 0LL;
  v15[13] = 0LL;
  while ( 1 )
  {
    v11 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v15);
    if ( !v11 )
      break;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v13,
      *(_QWORD *)(v11 + 8),
      *(_QWORD *)(v11 + 8) + *(_QWORD *)(v11 + 16));
    alloc::string::String::push(&v13);
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  return a1;
}