char __fastcall ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int *v4; // r13
  __int64 v5; // r12
  unsigned int *v6; // rax
  unsigned int *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int *v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // cl
  char result; // al
  _QWORD *v35; // r14
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  __int64 v39; // r8
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  int v45; // [rsp+Ch] [rbp-BCh] BYREF
  __int64 v46; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  __int64 v48; // [rsp+20h] [rbp-A8h]
  __int64 v49; // [rsp+28h] [rbp-A0h]
  _BYTE v50[56]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v51[96]; // [rsp+68h] [rbp-60h] BYREF

  v47 = a3;
  v46 = a2;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = (unsigned int *)(a1 + 28);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (unsigned int *)(a1 + 28);
  if ( v5 )
  {
    v7 = *(unsigned int **)(a1 + 8);
    v8 = 3LL;
    if ( (*(_QWORD *)v7 ^ 0x8000000000000000LL) < 8 )
      v8 = *(_QWORD *)v7 ^ 0x8000000000000000LL;
    switch ( v8 )
    {
      case 0uLL:
        v6 = v7 + 4;
        break;
      case 1uLL:
      case 5uLL:
      case 6uLL:
        v6 = v7 + 2;
        break;
      case 2uLL:
      case 7uLL:
        v6 = v7 + 8;
        break;
      case 3uLL:
        v6 = v7 + 22;
        break;
      case 4uLL:
        v6 = v7 + 20;
        break;
    }
  }
  v9 = *v6;
  if ( v3 > (unsigned int)v9 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E718);
  v10 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
          v3,
          v9);
  v12 = v11;
  v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v10,
          v11,
          v46,
          v47);
  v48 = v14;
  v49 = v13;
  if ( !v13 )
    core::str::slice_error_fail(v46, v47, v10, v12, &off_57E730);
  if ( v5 )
  {
    v15 = *(unsigned int **)(a1 + 8);
    v16 = 3LL;
    if ( (*(_QWORD *)v15 ^ 0x8000000000000000LL) < 8 )
      v16 = *(_QWORD *)v15 ^ 0x8000000000000000LL;
    switch ( v16 )
    {
      case 0uLL:
        v4 = v15 + 5;
        break;
      case 1uLL:
      case 5uLL:
      case 6uLL:
        v4 = v15 + 3;
        break;
      case 2uLL:
      case 7uLL:
        v4 = v15 + 9;
        break;
      case 3uLL:
        v4 = v15 + 23;
        break;
      case 4uLL:
        v4 = v15 + 21;
        break;
    }
  }
  v17 = *v4;
  if ( v3 > (unsigned int)v17 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E748);
  v18 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
          v3,
          v17);
  v20 = v19;
  v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v18,
          v19,
          v46,
          v47);
  if ( !v21 )
    core::str::slice_error_fail(v46, v47, v18, v20, &off_57E760);
  v23 = v21;
  v24 = v22;
  v45 = 0;
  v25 = core::char::methods::encode_utf8_raw(91LL, &v45);
  v26 = v49;
  v27 = v48;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v49, v48, v25, v28) )
  {
    v45 = 0;
    v29 = core::char::methods::encode_utf8_raw(44LL, &v45);
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(v23, v24, v29, v30) )
      return 0;
  }
  v45 = 0;
  v31 = core::char::methods::encode_utf8_raw(40LL, &v45);
  v33 = core::slice::<impl [T]>::starts_with(v26, v27, v31, v32);
  result = 2;
  if ( v33 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      v35 = *(_QWORD **)(a1 + 8);
      v36 = *(unsigned int *)(a1 + 24);
      v37 = *v35 ^ 0x8000000000000000LL;
      v38 = 3LL;
      if ( v37 >= 8 )
        v37 = 3LL;
      v39 = *(unsigned int *)((char *)v35 + qword_8D5D0[v37]);
      if ( (unsigned int)v36 > (unsigned int)v39 )
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E778);
      v40 = v46;
      v41 = v47;
      ruff_python_trivia::tokenizer::SimpleTokenizer::new(v51, v46, v47, v36, v39);
      v42 = core::iter::traits::iterator::Iterator::fold(v51);
      if ( (*v35 ^ 0x8000000000000000LL) < 8 )
        v38 = *v35 ^ 0x8000000000000000LL;
      v43 = v42;
      v44 = *(unsigned int *)((char *)v35 + qword_8D590[v38]);
      ruff_python_trivia::tokenizer::SimpleTokenizer::new(v50, v40, v41, v44, (unsigned int)v44);
      v50[48] = 0;
      return 2
           - (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(v50) < v43);
    }
    else
    {
      return 1;
    }
  }
  return result;
}