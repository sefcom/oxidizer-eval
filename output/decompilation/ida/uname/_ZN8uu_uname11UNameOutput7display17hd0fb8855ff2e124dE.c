__int64 __fastcall uu_uname::UNameOutput::display(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // r9
  _QWORD *v6; // r10
  _QWORD *v7; // r11
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 slice; // rax
  __int128 v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-98h]
  _QWORD v15[18]; // [rsp+18h] [rbp-90h] BYREF

  v2 = a2;
  if ( *a2 == 0x8000000000000000LL )
    v2 = 0LL;
  v3 = a2 + 3;
  if ( a2[3] == 0x8000000000000000LL )
    v3 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  v4 = a2 + 6;
  if ( a2[6] == 0x8000000000000000LL )
    v4 = 0LL;
  v5 = a2 + 9;
  if ( a2[9] == 0x8000000000000000LL )
    v5 = 0LL;
  v6 = a2 + 12;
  if ( a2[12] == 0x8000000000000000LL )
    v6 = 0LL;
  *((_QWORD *)&v13 + 1) = 1LL;
  v7 = a2 + 15;
  if ( a2[15] == 0x8000000000000000LL )
    v7 = 0LL;
  v8 = a2 + 18;
  if ( a2[18] == 0x8000000000000000LL )
    v8 = 0LL;
  v9 = a2 + 21;
  if ( a2[21] == 0x8000000000000000LL )
    v9 = 0LL;
  v14 = 0LL;
  v15[0] = 1LL;
  v15[1] = v2;
  v15[2] = v3;
  v15[3] = v4;
  v15[4] = v5;
  v15[5] = v6;
  v15[6] = v7;
  v15[7] = v8;
  v15[8] = v9;
  v15[9] = 0LL;
  v15[10] = 8LL;
  v15[11] = 0LL;
  v15[13] = 0LL;
  while ( 1 )
  {
    v10 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v15);
    if ( !v10 )
      break;
    slice = core::slice::iter::Iter<T>::make_slice(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 8) + *(_QWORD *)(v10 + 16));
    alloc::vec::Vec<T,A>::append_elements(&v13, slice);
    alloc::string::String::push(&v13);
  }
  core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<core::array::iter::IntoIter<core::option::Option<&alloc::string::String>,8_usize>>>(v15);
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  return a1;
}
