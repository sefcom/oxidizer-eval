unsigned __int64 __fastcall uu_join::State::extend(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rax
  const void *current_key; // r13
  size_t v6; // rdx
  size_t v7; // r12
  const void *field; // rax
  size_t v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // [rsp+0h] [rbp-108h]
  unsigned __int64 v17; // [rsp+8h] [rbp-100h]
  __int64 v18; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v19; // [rsp+18h] [rbp-F0h]
  __int128 v20; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h]
  __m256i v22; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A8h]
  __m256i v24; // [rsp+70h] [rbp-98h] BYREF
  __int128 v25; // [rsp+90h] [rbp-78h]
  __m256i v26; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-40h]

  v17 = a1;
  uu_join::State::next_line(&v24);
  v4 = v24.m256i_i64[0];
  if ( v24.m256i_i64[0] == 0x8000000000000001LL )
  {
LABEL_6:
    v21 = v24.m256i_i64[3];
    v20 = *(_OWORD *)&v24.m256i_u64[1];
    *(_QWORD *)(v17 + 8) = alloc::boxed::Box<T>::new(&v20);
    *(_QWORD *)(v17 + 16) = &off_FD398;
    result = 0x8000000000000001LL;
    *(_QWORD *)v17 = 0x8000000000000001LL;
  }
  else
  {
    v19 = 0x8000000000000000LL;
    HIDWORD(v18) = *a3;
    while ( 1 )
    {
      v21 = v24.m256i_i64[3];
      v20 = *(_OWORD *)&v24.m256i_u64[1];
      v27 = v25;
      v26.m256i_i64[3] = v24.m256i_i64[3];
      *(_OWORD *)&v26.m256i_u64[1] = *(_OWORD *)&v24.m256i_u64[1];
      v26.m256i_i64[0] = v4;
      if ( v4 == v19 )
      {
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&v26);
        result = v17;
        *(_QWORD *)v17 = v19;
        return result;
      }
      v23 = v27;
      v22 = v26;
      current_key = (const void *)uu_join::State::get_current_key(a2);
      v7 = v6;
      field = (const void *)uu_join::Line::get_field(&v22, *(_QWORD *)(a2 + 64));
      if ( uu_join::Input<Sep>::compare(SBYTE4(v18), current_key, v7, field, v9) )
        break;
      v25 = v23;
      v24 = v22;
      alloc::vec::Vec<T,A>::push(a2, &v24, &off_FD360, v10, v11, v12, v16, v17, v18, v19, v20, *((_QWORD *)&v20 + 1));
      uu_join::State::next_line(&v24);
      v4 = v24.m256i_i64[0];
      if ( v24.m256i_i64[0] == 0x8000000000000001LL )
        goto LABEL_6;
    }
    v14 = *(_OWORD *)v22.m256i_i8;
    v15 = *(_OWORD *)&v22.m256i_u64[2];
    result = v17;
    *(_OWORD *)(v17 + 32) = v23;
    *(_OWORD *)(v17 + 16) = v15;
    *(_OWORD *)v17 = v14;
  }
  return result;
}