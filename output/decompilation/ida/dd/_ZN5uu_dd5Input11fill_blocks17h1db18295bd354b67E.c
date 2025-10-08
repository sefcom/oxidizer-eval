__int64 __fastcall uu_dd::Input::fill_blocks(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-D8h]
  unsigned int v18; // [rsp+Ch] [rbp-CCh]
  __int64 v19; // [rsp+10h] [rbp-C8h]
  __int64 v20; // [rsp+18h] [rbp-C0h]
  __int64 v21; // [rsp+20h] [rbp-B8h]
  char v22[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v24[120]; // [rsp+60h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  if ( !v5 )
  {
    v17 = 0LL;
    v15 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
LABEL_13:
    *(_QWORD *)(a3 + 16) = v7;
    goto LABEL_14;
  }
  v19 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
  v17 = 0LL;
  v18 = a4;
  v20 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v21 = v8;
    v9 = core::cmp::Ord::min(v7 + v6, v5);
    v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
            v7,
            v9,
            *(_QWORD *)(a3 + 8),
            v5);
    v11 = <uu_dd::Input as std::io::Read>::read(a2, v10);
    v13 = v12;
    if ( (v11 & 1) != 0 )
    {
      a1 = v19;
      *(_QWORD *)(v19 + 8) = v12;
      result = 1LL;
      goto LABEL_15;
    }
    if ( !v12 )
      break;
    v14 = v9 - v7 - v12;
    if ( v9 - v7 > v13 )
    {
      ++v20;
      <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v22, v18, v14, &off_13DDB0);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v23);
      alloc::vec::Vec<T,A>::splice(v24, a3, v7 + v13, v9, v23);
      core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<u8>>>(v24);
    }
    else
    {
      ++v17;
    }
    v8 = v13 + v21;
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
    v7 += v6;
    v5 = *(_QWORD *)(a3 + 16);
    if ( v7 >= v5 )
      goto LABEL_12;
  }
  v5 = *(_QWORD *)(a3 + 16);
  v8 = v21;
LABEL_12:
  a1 = v19;
  v15 = v20;
  if ( v7 <= v5 )
    goto LABEL_13;
LABEL_14:
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 24) = v8;
  *(_DWORD *)(a1 + 32) = 0;
  result = 0LL;
LABEL_15:
  *(_QWORD *)a1 = result;
  return result;
}