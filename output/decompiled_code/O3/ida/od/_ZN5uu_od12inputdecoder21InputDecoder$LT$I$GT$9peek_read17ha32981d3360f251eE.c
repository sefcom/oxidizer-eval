_QWORD *__fastcall uu_od::inputdecoder::InputDecoder<I>::peek_read(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  _QWORD *v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // rbx
  _QWORD *result; // rax
  char v10; // cl
  size_t v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+0h] [rbp-A8h]
  size_t v14; // [rsp+0h] [rbp-A8h]
  __int64 v15; // [rsp+18h] [rbp-90h] BYREF
  __int64 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  _QWORD v18[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[88]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v13 = *(_QWORD *)(a2 + 32);
  if ( v2 < v13 )
    core::panicking::panic(aAssertionFaile, 40LL, &off_1004C0);
  v3 = *(_QWORD **)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v3[11];
  if ( v5 >= v2 )
    v5 = *(_QWORD *)(a2 + 16);
  core::slice::<impl [T]>::copy_from_slice(*(_QWORD *)(a2 + 8), v5, v3[10], v5, &off_1004A8);
  alloc::vec::Vec<T,A>::drain(v19, v3 + 9, v5);
  <alloc::vec::drain::Drain<T,A> as core::ops::drop::Drop>::drop(v19);
  v6 = <uu_od::partialreader::PartialReader<R> as std::io::Read>::read(v3, v4 + v5, v2 - v5);
  v8 = v7 + v5;
  if ( v6 )
  {
    result = a1;
    *a1 = v7;
    v10 = 3;
  }
  else
  {
    v11 = v13 - (v2 - v8);
    if ( v13 <= v2 - v8 )
    {
      v11 = 0LL;
    }
    else
    {
      v14 = v2 - v13;
      if ( v8 < v11 )
        core::slice::index::slice_index_order_fail(v14, v8, &off_1004D8);
      if ( v2 < v8 )
        core::slice::index::slice_end_index_len_fail(v8, v2, &off_1004D8);
      alloc::vec::Vec<T,A>::drain(v19, v3 + 9);
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15, v19);
      v12 = v3[11];
      if ( v3[9] - v12 >= v11 )
      {
        v8 = v14;
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v3 + 9, v3[11], v11);
        v8 = v14;
        v12 = v3[11];
      }
      memcpy((void *)(v3[10] + v12), (const void *)(v8 + v4), v11);
      v3[11] += v11;
      v18[0] = v16;
      v18[2] = v15;
      v18[1] = v16;
      v18[3] = v16 + v17;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
        v3 + 9,
        v18);
    }
    result = a1;
    *(_QWORD *)(a2 + 40) = v8;
    *(_QWORD *)(a2 + 48) = v11;
    v10 = *(_BYTE *)(a2 + 56);
    *a1 = a2;
    a1[1] = v8;
    a1[2] = v11;
  }
  *((_BYTE *)result + 24) = v10;
  return result;
}
