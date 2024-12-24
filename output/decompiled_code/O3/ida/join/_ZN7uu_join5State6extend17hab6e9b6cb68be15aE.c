unsigned __int64 __fastcall uu_join::State::extend(unsigned __int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  const void *current_key; // rbx
  size_t v6; // rdx
  size_t v7; // r12
  const void *field; // rax
  size_t v9; // rdx
  __int64 v10; // r9
  unsigned __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  char v14; // [rsp+14h] [rbp-F4h]
  __m256i v15; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C8h]
  __int128 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __m256i v19; // [rsp+70h] [rbp-98h] BYREF
  __int128 v20; // [rsp+90h] [rbp-78h]
  __m256i v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h]

  uu_join::State::next_line((__int64)&v15, a2, a3);
  v4 = v15.m256i_i64[0];
  if ( v15.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_6:
    v18 = v15.m256i_i64[3];
    v17 = *(_OWORD *)&v15.m256i_u64[1];
    v15.m256i_i64[2] = v15.m256i_i64[3];
    *(_OWORD *)v15.m256i_i8 = v17;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v15);
    *(_QWORD *)(a1 + 16) = &off_133258;
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v14 = *a3;
    while ( 1 )
    {
      v18 = v15.m256i_i64[3];
      v17 = *(_OWORD *)&v15.m256i_u64[1];
      v22 = v16;
      v21.m256i_i64[3] = v15.m256i_i64[3];
      *(_OWORD *)&v21.m256i_u64[1] = *(_OWORD *)&v15.m256i_u64[1];
      v21.m256i_i64[0] = v4;
      if ( v4 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v21);
        result = a1;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return result;
      }
      v20 = v22;
      v19 = v21;
      current_key = (const void *)uu_join::State::get_current_key(a2);
      v7 = v6;
      field = (const void *)uu_join::Line::get_field(&v19, *(_QWORD *)(a2 + 64));
      if ( (unsigned __int8)uu_join::Input<Sep>::compare(v14, current_key, v7, field, v9, v10) )
        break;
      v16 = v20;
      v15 = v19;
      alloc::vec::Vec<T,A>::push(a2, &v15);
      uu_join::State::next_line((__int64)&v15, a2, a3);
      v4 = v15.m256i_i64[0];
      if ( v15.m256i_i64[0] == 0x8000000000000001LL )
        goto LABEL_6;
    }
    v12 = *(_OWORD *)v19.m256i_i8;
    v13 = *(_OWORD *)&v19.m256i_u64[2];
    result = a1;
    *(_OWORD *)(a1 + 32) = v20;
    *(_OWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
  }
  return result;
}
