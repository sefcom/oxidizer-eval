_BYTE *__fastcall bat::input::read_utf16_line(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *result; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+1Ch] [rbp-3Ch]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v18 = a6;
  v19 = a1;
  v17 = a5;
  v8 = (unsigned __int8)a5;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = 1LL;
    v16 = 0LL;
    if ( (std::io::impls::<impl std::io::BufRead for alloc::boxed::Box<B>>::read_until(a2, a3, v8, &v14) & 1) != 0 )
    {
      v12 = (_BYTE *)v19;
      *(_QWORD *)(v19 + 8) = v9;
      *v12 = 1;
      return (_BYTE *)core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
    }
    if ( !v9 )
      break;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      a4,
      v15,
      v15 + v16);
    v10 = *(_QWORD *)(a4 + 16);
    if ( v10 >= 2 )
    {
      v11 = *(_QWORD *)(a4 + 8);
      if ( *(_BYTE *)(v11 + v10 - 2) == (_BYTE)v18 && *(_BYTE *)(v11 + v10 - 1) == (_BYTE)v17 )
        goto LABEL_11;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
  }
  v10 = *(_QWORD *)(a4 + 16);
LABEL_11:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
  result = (_BYTE *)v19;
  *(_BYTE *)(v19 + 1) = v10 != 0;
  *result = 0;
  return result;
}