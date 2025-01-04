        char a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v7 = a3 + 40 * a4;
  v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a3, v7);
  v14[0] = v8;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a3, v7, v14);
  if ( !v8 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_143638);
  if ( (a2 | v8) >> 32 )
    v10 = a2 / v8;
  else
    v10 = (unsigned int)a2 / (unsigned int)v8;
  v11 = v9 * v10;
  uu_od::output_info::OutputInfo::create_spaced_formatter_info(a1, a3, a4, v8);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v14[0];
  *(_BYTE *)(a1 + 48) = a5;
  return a1;
}
