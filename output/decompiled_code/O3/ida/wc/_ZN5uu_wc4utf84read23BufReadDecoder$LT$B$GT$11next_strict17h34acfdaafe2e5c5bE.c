_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 *a2)
{
  _DWORD *v2; // r14
  size_t v3; // r15
  __int64 *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  size_t v8; // rax
  __int64 v9; // rax
  const void *v10; // rbx
  size_t v11; // rdi
  char v12; // dl
  int v13; // eax
  _QWORD *result; // rax
  bool v15; // bl
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  size_t v19; // rax
  unsigned __int64 v20; // rax
  char **v21; // rdx
  int dest; // [rsp+14h] [rbp-54h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  size_t v25; // [rsp+20h] [rbp-48h]
  __int128 v26; // [rsp+28h] [rbp-40h]

  v2 = a2 + 7;
  v3 = a2[6];
  v4 = a2 + 5;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a2[2];
      v6 = a2[3];
      if ( v3 )
      {
        v5 += v3;
        if ( v5 >= v6 )
          v5 = a2[3];
        a2[2] = v5;
        a2[6] = 0LL;
      }
      v7 = *a2;
      if ( v5 >= v6 )
      {
        v8 = a2[1];
        v24 = *a2;
        v25 = v8;
        *(_QWORD *)&v26 = 0LL;
        *((_QWORD *)&v26 + 1) = a2[4];
        v9 = <std::fs::File as std::io::Read>::read_buf(v4, &v24, 0LL);
        if ( v9 )
        {
          v3 = v9;
LABEL_26:
          result = a1;
          *a1 = 1LL;
          a1[1] = 0LL;
          a1[2] = v3;
          return result;
        }
        a2[2] = 0LL;
        v6 = v26;
        *(_OWORD *)(a2 + 3) = v26;
        v5 = 0LL;
      }
      v3 = v6 - v5;
      if ( !v7 )
        goto LABEL_26;
      v10 = (const void *)(v5 + v7);
      v11 = *((unsigned __int8 *)a2 + 60);
      if ( !*((_BYTE *)a2 + 60) )
        break;
      if ( !v3 )
      {
        *((_BYTE *)a2 + 60) = 0;
        if ( (unsigned __int8)v11 >= 5u )
          core::slice::index::slice_end_index_len_fail(v11, 4LL, &off_F36E8);
        v3 = v11;
        goto LABEL_38;
      }
      v3 = uu_wc::utf8::Incomplete::try_complete_offsets(v2, v10, v6 - v5);
      a2[6] = v3;
      if ( v12 != 2 )
      {
        v3 = *((unsigned __int8 *)a2 + 60);
        *((_BYTE *)a2 + 60) = 0;
        if ( v3 >= 5 )
        {
          v21 = &off_F36E8;
LABEL_42:
          core::slice::index::slice_end_index_len_fail(v3, 4LL, v21);
        }
        if ( (v12 & 1) == 0 )
        {
LABEL_24:
          result = a1;
          *a1 = 0LL;
LABEL_39:
          result[1] = v2;
          result[2] = v3;
          return result;
        }
LABEL_38:
        result = a1;
        *a1 = 1LL;
        goto LABEL_39;
      }
    }
    if ( !v3 )
    {
      result = a1;
      *a1 = 2LL;
      return result;
    }
    core::str::converts::from_utf8(&v24, v10, v6 - v5);
    if ( !v24 )
    {
      v15 = 0;
      goto LABEL_32;
    }
    if ( v25 )
      break;
    if ( (_BYTE)v26 )
    {
      v3 = BYTE1(v26);
      goto LABEL_31;
    }
    a2[6] = v3;
    dest = 0;
    if ( v3 >= 5 )
    {
      v21 = &off_F36D0;
      goto LABEL_42;
    }
    memcpy(&dest, v10, v3);
    v13 = dest;
    *((_BYTE *)a2 + 60) = v3;
    *v2 = v13;
  }
  v3 = v25;
LABEL_31:
  v15 = v25 == 0;
LABEL_32:
  a2[6] = v3;
  v16 = *a2;
  v17 = a2[2];
  v18 = a2[3];
  if ( v17 < v18 )
  {
LABEL_35:
    v20 = v18 - v17;
    if ( !v16 )
      goto LABEL_40;
    if ( v3 > v20 )
      core::slice::index::slice_end_index_len_fail(v3, v20, &off_F36B8);
    v2 = (_DWORD *)(v17 + v16);
    if ( !v15 )
      goto LABEL_24;
    goto LABEL_38;
  }
  v19 = a2[1];
  v24 = *a2;
  v25 = v19;
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = a2[4];
  v20 = <std::fs::File as std::io::Read>::read_buf(v4, &v24, 0LL);
  if ( !v20 )
  {
    a2[2] = 0LL;
    v18 = v26;
    *(_OWORD *)(a2 + 3) = v26;
    v17 = 0LL;
    goto LABEL_35;
  }
LABEL_40:
  *a1 = 1LL;
  a1[1] = 0LL;
  a1[2] = v20;
  return a1;
}
