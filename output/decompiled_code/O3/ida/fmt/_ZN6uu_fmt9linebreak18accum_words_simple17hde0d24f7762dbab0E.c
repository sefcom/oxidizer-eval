char __fastcall uu_fmt::linebreak::accum_words_simple(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // r12
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rbp
  void *v18; // rax
  size_t v19; // rdx
  char result; // al
  __int64 *v21; // rcx
  __int64 v22; // [rsp+10h] [rbp-38h]

  v22 = *(_QWORD *)(a5 + 40);
  v8 = *(_QWORD *)a2;
  v9 = 0LL;
  v10 = uu_fmt::linebreak::BreakArgs::compute_width(*(_QWORD *)a2, (_QWORD *)a5, a3, 0);
  v11 = *(_BYTE *)(a5 + 58);
  if ( v11 | *(_BYTE *)(a2 + 48) )
    v9 = ((*(_BYTE *)(a5 + 56) != 0) | (unsigned __int8)(a4 & (v11 != 0))) + 1LL;
  v12 = v9 + v10 + v22 + a3;
  v13 = *(_QWORD **)(a2 + 24);
  if ( v12 <= *(_QWORD *)(v8 + 48) )
  {
    v14 = uu_fmt::linebreak::write_with_spaces(*(void **)(a5 + 16), *(_QWORD *)(a5 + 24), v9, *(_QWORD **)(a2 + 24));
    if ( !v14 )
    {
      result = *(_BYTE *)(a5 + 57);
      v21 = a1;
      *a1 = v12;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v14 = uu_fmt::linebreak::write_newline(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD **)(a2 + 24));
  if ( v14 )
    goto LABEL_9;
  v15 = *(_QWORD *)(a5 + 16);
  v16 = *(_QWORD *)(a5 + 24);
  v17 = *(_QWORD *)(a5 + 32);
  v18 = (void *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                  v17,
                  v15,
                  v16);
  if ( !v18 )
    core::str::slice_error_fail(v15, v16, v17, v16, &off_127B18);
  v14 = uu_fmt::linebreak::write_with_spaces(v18, v19, 0LL, v13);
  if ( v14 )
  {
LABEL_9:
    v21 = a1;
    *a1 = v14;
    result = 2;
    goto LABEL_11;
  }
  result = *(_BYTE *)(a5 + 57);
  v21 = a1;
  *a1 = *(_QWORD *)(a2 + 40) + v22;
LABEL_11:
  *((_BYTE *)v21 + 8) = result;
  return result;
}
