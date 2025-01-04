__int64 __fastcall uu_dd::Input::fill_blocks(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-D8h]
  __int64 v18; // [rsp+8h] [rbp-D0h]
  unsigned int v19; // [rsp+1Ch] [rbp-BCh]
  _BYTE v21[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v23[120]; // [rsp+60h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
    v18 = 0LL;
    v19 = a4;
    v17 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = core::cmp::min_by(v7 + v6, v5);
      v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
              v7,
              v9,
              *(_QWORD *)(a3 + 8),
              v5);
      v11 = <uu_dd::Input as std::io::Read>::read(a2, v10);
      v13 = v12;
      if ( v11 )
        break;
      if ( v12 )
      {
        v14 = v9 - v7 - v12;
        if ( v9 - v7 > v13 )
        {
          ++v17;
          <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v21, v19, v14);
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v22, v21);
          alloc::vec::Vec<T,A>::splice(v23, a3, v7 + v13, v9, v22);
          core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<u8>>>(v23);
        }
        else
        {
          ++v18;
        }
        v8 += v13;
        v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 112LL);
        v7 += v6;
        v5 = *(_QWORD *)(a3 + 16);
        if ( v7 < v5 )
          continue;
      }
      goto LABEL_11;
    }
    v15 = (__int64 *)a1;
    *(_QWORD *)(a1 + 8) = v12;
    result = 1LL;
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
LABEL_11:
    alloc::vec::Vec<T,A>::truncate(a3, v7);
    v15 = (__int64 *)a1;
    *(_QWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 32) = 0;
    result = 0LL;
  }
  *v15 = result;
  return result;
}
