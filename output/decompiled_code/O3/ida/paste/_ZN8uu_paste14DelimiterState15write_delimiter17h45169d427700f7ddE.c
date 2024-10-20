void *__fastcall uu_paste::DelimiterState::write_delimiter(void **a1, _QWORD *a2)
{
  void *result; // rax
  const void *v3; // r14
  size_t v4; // rbx
  __int64 v5; // r15
  size_t *v6; // rax
  size_t *v7; // rcx
  const void *v8; // rbx
  size_t v9; // r14
  __int64 v10; // r15

  result = *a1;
  if ( *a1 )
  {
    if ( (_DWORD)result == 1 )
    {
      v3 = a1[1];
      v4 = (size_t)a1[2];
      v5 = a2[2];
      if ( *a2 - v5 < v4 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v4);
        v5 = a2[2];
      }
      result = memcpy((void *)(v5 + a2[1]), v3, v4);
      a2[2] = v4 + v5;
    }
    else
    {
      v6 = (size_t *)a1[7];
      if ( v6 == a1[8] )
      {
        v6 = (size_t *)a1[5];
        v7 = (size_t *)a1[6];
        a1[7] = v6;
        a1[8] = v7;
        if ( v6 == v7 )
          core::option::unwrap_failed(&off_DD388);
      }
      a1[7] = v6 + 2;
      v8 = (const void *)*v6;
      v9 = v6[1];
      v10 = a2[2];
      if ( *a2 - v10 < v9 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v9);
        v10 = a2[2];
      }
      result = memcpy((void *)(v10 + a2[1]), v8, v9);
      a2[2] = v9 + v10;
      a1[1] = (void *)v8;
      a1[2] = (void *)v9;
    }
  }
  return result;
}
