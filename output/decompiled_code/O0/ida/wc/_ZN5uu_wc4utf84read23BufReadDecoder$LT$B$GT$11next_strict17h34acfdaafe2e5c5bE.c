_QWORD *__fastcall uu_wc::utf8::read::BufReadDecoder<B>::next_strict(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  void *v5; // rbx
  size_t v6; // r12
  unsigned __int8 v7; // al
  char v8; // dl
  int v9; // eax
  size_t v10; // rcx
  char v11; // bl
  char **v12; // rdx
  _QWORD *result; // rax
  _DWORD *i; // [rsp+10h] [rbp-78h]
  int dest; // [rsp+1Ch] [rbp-6Ch] BYREF
  void *src; // [rsp+20h] [rbp-68h] BYREF
  size_t n; // [rsp+28h] [rbp-60h]
  _DWORD *v18; // [rsp+30h] [rbp-58h] BYREF
  size_t v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  size_t v21; // [rsp+48h] [rbp-40h]
  char v22; // [rsp+50h] [rbp-38h]
  unsigned __int8 v23; // [rsp+51h] [rbp-37h]

  v2 = a2 + 40;
  for ( i = (_DWORD *)(a2 + 56); ; *i = v9 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a2 + 48);
      if ( v3 )
      {
        v4 = *(_QWORD *)(a2 + 16) + v3;
        if ( v4 >= *(_QWORD *)(a2 + 24) )
          v4 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 16) = v4;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      std::io::buffered::bufreader::buffer::Buffer::fill_buf(&src, a2, v2);
      v5 = src;
      if ( !src )
      {
        v10 = n;
LABEL_32:
        result = a1;
        *a1 = 1LL;
        a1[1] = 0LL;
        a1[2] = v10;
        return result;
      }
      v6 = n;
      v7 = *(_BYTE *)(a2 + 60);
      if ( !v7 )
        break;
      if ( !n )
      {
        v11 = 1;
LABEL_19:
        v6 = v7;
        *(_BYTE *)(a2 + 60) = 0;
        if ( v7 >= 5u )
        {
          v12 = &off_118F28;
          goto LABEL_34;
        }
        goto LABEL_27;
      }
      *(_QWORD *)(a2 + 48) = uu_wc::utf8::Incomplete::try_complete_offsets(i, src, n);
      if ( v8 != 2 )
      {
        v11 = v8 & 1;
        v7 = *(_BYTE *)(a2 + 60);
        goto LABEL_19;
      }
    }
    if ( !n )
    {
      result = a1;
      *a1 = 2LL;
      return result;
    }
    core::str::converts::from_utf8(&v20, src, n);
    if ( !v20 )
    {
      v11 = 0;
      goto LABEL_25;
    }
    if ( v21 )
    {
      v11 = 0;
      v6 = v21;
      goto LABEL_25;
    }
    if ( (v22 & 1) != 0 )
      break;
    *(_QWORD *)(a2 + 48) = v6;
    dest = 0;
    if ( v6 >= 5 )
    {
      v12 = &off_118F10;
LABEL_34:
      core::slice::index::slice_end_index_len_fail(v6, 4LL, v12);
    }
    core::intrinsics::copy_nonoverlapping::precondition_check(v5, &dest, 1LL, 1LL, v6);
    memcpy(&dest, v5, v6);
    v9 = dest;
    *(_BYTE *)(a2 + 60) = v6;
  }
  v6 = v23;
  v11 = 1;
LABEL_25:
  *(_QWORD *)(a2 + 48) = v6;
  std::io::buffered::bufreader::buffer::Buffer::fill_buf(&v18, a2, v2);
  i = v18;
  if ( !v18 )
  {
    v10 = v19;
    goto LABEL_32;
  }
  if ( v6 > v19 )
    core::slice::index::slice_end_index_len_fail(v6, v19, &off_118EF8);
LABEL_27:
  result = a1;
  if ( v11 )
    *a1 = 1LL;
  else
    *a1 = 0LL;
  a1[1] = i;
  a1[2] = v6;
  return result;
}
