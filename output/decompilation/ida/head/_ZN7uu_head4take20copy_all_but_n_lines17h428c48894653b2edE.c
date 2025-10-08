__int64 __fastcall uu_head::take::copy_all_but_n_lines(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  _QWORD *mut; // rax
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r13
  bool is_empty; // al
  char **v25; // rax
  char **v26; // rdi
  __int64 v27; // [rsp+4h] [rbp-F4h] BYREF
  int v28; // [rsp+Ch] [rbp-ECh]
  __int64 v29; // [rsp+10h] [rbp-E8h]
  __int64 v30; // [rsp+18h] [rbp-E0h]
  __int128 v31; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+30h] [rbp-C8h]
  __int128 v33; // [rsp+40h] [rbp-B8h]
  _QWORD v34[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+60h] [rbp-98h]
  _BYTE v36[48]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-50h]
  __int64 v38; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+B8h] [rbp-40h]
  __int64 v40; // [rsp+C0h] [rbp-38h]

  v4 = a3;
  v40 = a2;
  v5 = a1;
  v34[0] = 0LL;
  v35 = 0LL;
  v34[1] = 8LL;
  v28 = 0;
  v29 = 8LL;
  v30 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  v27 = a4;
  v37 = 0LL;
  v8 = 0LL;
  v39 = a3;
  v38 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = alloc::collections::vec_deque::VecDeque<T,A>::get(v34, 0LL);
      if ( v9 )
      {
        if ( v8 > v4 + *(_QWORD *)(v9 + 32) )
          break;
      }
      if ( v7 )
      {
        --v7;
        v10 = *(_QWORD *)(v6 + 48 * v7);
        v11 = *(_OWORD *)(v6 + 48 * v7 + 8);
        v12 = *(_OWORD *)(v6 + 48 * v7 + 24);
        *(_QWORD *)&v33 = *(_QWORD *)(v6 + 48 * v7 + 40);
        v32 = v12;
        v31 = v11;
        if ( v10 != 0x8000000000000000LL )
        {
          *(_QWORD *)&v36[40] = v33;
          *(_OWORD *)&v36[24] = v32;
          *(_OWORD *)&v36[8] = v31;
          *(_QWORD *)v36 = v10;
          goto LABEL_9;
        }
      }
      else
      {
        v7 = 0LL;
      }
      *(_QWORD *)v36 = 0LL;
      *(_QWORD *)&v36[8] = 1LL;
      memset(&v36[16], 0, 25);
LABEL_9:
      uu_head::take::TakeAllLinesBuffer::fill_buffer((__int64 *)&v31, (__int64)v36, v5, v27);
      if ( (_DWORD)v31 == 1 )
      {
        v30 = v7;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(*(_QWORD *)v36, *(_QWORD *)&v36[8]);
        goto LABEL_24;
      }
      if ( !*((_QWORD *)&v31 + 1) )
      {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(*(_QWORD *)v36, *(_QWORD *)&v36[8]);
        break;
      }
      v13 = v32;
      v33 = *(_OWORD *)&v36[32];
      v32 = *(_OWORD *)&v36[16];
      v31 = *(_OWORD *)v36;
      alloc::collections::vec_deque::VecDeque<T,A>::push_back(v34, &v31);
      v8 += v13;
    }
    if ( v8 < v4 )
      goto LABEL_25;
    v14 = *((_QWORD *)&v35 + 1) - 1LL;
    v15 = v8 - v4;
    if ( v8 == v4 )
    {
      v16 = alloc::collections::vec_deque::VecDeque<T,A>::get(v34, *((_QWORD *)&v35 + 1) - 1LL);
      if ( !v16 )
      {
        v25 = &off_F7C10;
        goto LABEL_30;
      }
      if ( !*(_BYTE *)(v16 + 40) )
      {
LABEL_25:
        v30 = v7;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>((char *)&v27 + 4);
        core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(v34);
        return 0LL;
      }
    }
    v17 = alloc::collections::vec_deque::VecDeque<T,A>::get(v34, v14);
    if ( !v17 )
    {
      v25 = &off_F7C28;
LABEL_30:
      v30 = v7;
      v26 = v25;
      goto LABEL_31;
    }
    v18 = v17;
    mut = (_QWORD *)alloc::collections::vec_deque::VecDeque<T,A>::get_mut(v34);
    if ( !mut )
    {
      v25 = &off_F7C40;
      goto LABEL_30;
    }
    v20 = mut;
    uu_head::take::TakeAllLinesBuffer::write_lines((__int64 *)&v31, mut, v40, *(unsigned __int8 *)(v18 + 40) + v15, v27);
    v21 = *((_QWORD *)&v31 + 1);
    if ( (v31 & 1) != 0 )
      break;
    v22 = v32;
    is_empty = uu_head::take::TakeAllLinesBuffer::is_empty(v20[2], v20[3]);
    v37 += v21;
    v8 -= v22;
    v4 = v39;
    v5 = v38;
    if ( is_empty )
    {
      v30 = v7;
      alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v31);
      if ( (_QWORD)v31 == 0x8000000000000000LL )
      {
        v26 = &off_F7C58;
LABEL_31:
        core::option::unwrap_failed(v26);
      }
      *(_OWORD *)&v36[32] = v33;
      *(_OWORD *)&v36[16] = v32;
      *(_OWORD *)v36 = v31;
      alloc::vec::Vec<T,A>::push((char *)&v27 + 4, v36);
      v6 = v29;
      v7 = v30;
    }
  }
  v30 = v7;
LABEL_24:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_head::take::TakeAllLinesBuffer>>((char *)&v27 + 4);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<uu_head::take::TakeAllLinesBuffer>>(v34);
  return 1LL;
}