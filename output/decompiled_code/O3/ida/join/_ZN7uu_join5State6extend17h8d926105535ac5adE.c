unsigned __int64 __fastcall uu_join::State::extend(unsigned __int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  const void *current_key; // rbx
  size_t v6; // rdx
  size_t v7; // r12
  const void *field; // rax
  size_t v9; // rdx
  unsigned __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  char v13; // [rsp+14h] [rbp-F4h]
  __m256i v14; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C8h]
  __int128 v16; // [rsp+50h] [rbp-B8h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __m256i v18; // [rsp+70h] [rbp-98h] BYREF
  __int128 v19; // [rsp+90h] [rbp-78h]
  __m256i v20; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v21; // [rsp+C8h] [rbp-40h]

  uu_join::State::next_line(&v14);
  v4 = v14.m256i_i64[0];
  if ( v14.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_6:
    v17 = v14.m256i_i64[3];
    v16 = *(_OWORD *)&v14.m256i_u64[1];
    v14.m256i_i64[2] = v14.m256i_i64[3];
    *(_OWORD *)v14.m256i_i8 = v16;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v14);
    *(_QWORD *)(a1 + 16) = &off_133258;
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v13 = *a3;
    while ( 1 )
    {
      v17 = v14.m256i_i64[3];
      v16 = *(_OWORD *)&v14.m256i_u64[1];
      v21 = v15;
      v20.m256i_i64[3] = v14.m256i_i64[3];
      *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)&v14.m256i_u64[1];
      v20.m256i_i64[0] = v4;
      if ( v4 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v20);
        result = a1;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return result;
      }
      v19 = v21;
      v18 = v20;
      current_key = (const void *)uu_join::State::get_current_key(a2);
      v7 = v6;
      field = (const void *)uu_join::Line::get_field(&v18, *(_QWORD *)(a2 + 64));
      if ( (unsigned __int8)uu_join::Input<Sep>::compare(v13, current_key, v7, field, v9) )
        break;
      v15 = v19;
      v14 = v18;
      alloc::vec::Vec<T,A>::push(a2, &v14);
      uu_join::State::next_line(&v14);
      v4 = v14.m256i_i64[0];
      if ( v14.m256i_i64[0] == 0x8000000000000001LL )
        goto LABEL_6;
    }
    v11 = *(_OWORD *)v18.m256i_i8;
    v12 = *(_OWORD *)&v18.m256i_u64[2];
    result = a1;
    *(_OWORD *)(a1 + 32) = v19;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
  }
  return result;
}
