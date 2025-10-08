__m128i *__fastcall alacritty_terminal::term::search::RegexSearch::new(__m128i *dest, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rbp
  char v5; // bp
  __int64 v6; // r15
  __m128i v8; // kr00_16
  __m128i v9; // [rsp+8h] [rbp-16F0h] BYREF
  __m128i v10; // [rsp+18h] [rbp-16E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-16D0h]
  __m128i v12; // [rsp+30h] [rbp-16C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-16B8h]
  __int64 v14; // [rsp+48h] [rbp-16B0h]
  __m128i v15; // [rsp+50h] [rbp-16A8h]
  _OWORD v16[9]; // [rsp+60h] [rbp-1698h] BYREF
  _OWORD v17[9]; // [rsp+F0h] [rbp-1608h] BYREF
  __m128i v18[136]; // [rsp+180h] [rbp-1578h] BYREF
  _OWORD v19[68]; // [rsp+A00h] [rbp-CF8h] BYREF
  _OWORD v20[68]; // [rsp+E40h] [rbp-8B8h] BYREF
  _OWORD v21[71]; // [rsp+1280h] [rbp-478h] BYREF

  v18[84].m128i_i64[1] = 0LL;
  v18[0].m128i_i64[0] = a2;
  v18[0].m128i_i64[1] = a2 + a3;
  v3 = core::iter::traits::iterator::Iterator::try_fold(v18);
  v9.m128i_i32[0] = 250;
  v9.m128i_i8[4] = 10;
  v9.m128i_i8[5] = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v3) ^ 1;
  *(__int32 *)((char *)&v9.m128i_i32[1] + 2) = 0;
  v9.m128i_i8[10] = 0;
  *(__int16 *)((char *)&v9.m128i_i16[5] + 1) = 257;
  v9.m128i_i8[13] = 0;
  v16[0] = 0LL;
  *(_QWORD *)&v16[3] = 0LL;
  *(_QWORD *)&v16[4] = 1LL;
  *((_QWORD *)&v16[4] + 1) = 3LL;
  *(_QWORD *)&v16[5] = 1LL;
  *((_QWORD *)&v16[5] + 1) = 10LL;
  BYTE8(v16[7]) = 3;
  LODWORD(v16[8]) = 33686018;
  WORD2(v16[8]) = 514;
  v10.m128i_i64[0] = 1LL;
  v10.m128i_i64[1] = (__int64)&unk_200000;
  LOBYTE(v11) = 0;
  *(_DWORD *)((char *)&v11 + 2) = 50463234;
  <regex_automata::hybrid::dfa::Config as core::clone::Clone>::clone(v19, v16);
  <regex_automata::nfa::thompson::compiler::Config as core::clone::Clone>::clone(v21, &v10);
  v17[0] = _mm_loadu_si128(&v9);
  alacritty_terminal::term::search::LazyDfa::new(v18, 1, 1);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v18), (__m128i)xmmword_E8640)) == 0xFFFF )
  {
    dest[1].m128i_i64[0] = v18[1].m128i_i64[0];
    dest->m128i_i64[1] = 0LL;
    dest->m128i_i64[0] = 2LL;
LABEL_11:
    core::ptr::drop_in_place<regex_automata::hybrid::dfa::Config>(v16, a2);
    return dest;
  }
  memcpy((char *)&v20[1] + 8, &v18[1].m128i_u64[1], 0x428uLL);
  v20[0] = v18[0];
  *(_QWORD *)&v20[1] = v18[1].m128i_i64[0];
  v4 = *(unsigned __int8 *)(*(_QWORD *)&v20[43] + 386LL);
  <regex_automata::hybrid::dfa::Config as core::clone::Clone>::clone(v19, v16);
  <regex_automata::nfa::thompson::compiler::Config as core::clone::Clone>::clone(v17, &v10);
  v12 = _mm_loadu_si128(&v9);
  alacritty_terminal::term::search::LazyDfa::new(v18, 0, v4);
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v18), (__m128i)xmmword_E8640)) == 0xFFFF )
  {
    dest[1].m128i_i64[0] = v18[1].m128i_i64[0];
    dest->m128i_i64[1] = 0LL;
    dest->m128i_i64[0] = 2LL;
    v5 = 1;
  }
  else
  {
    v14 = v4;
    memcpy((char *)&v21[1] + 8, &v18[1].m128i_u64[1], 0x428uLL);
    v21[0] = v18[0];
    *(_QWORD *)&v21[1] = v18[1].m128i_i64[0];
    <regex_automata::hybrid::dfa::Config as core::clone::Clone>::clone(v17, v16);
    <regex_automata::nfa::thompson::compiler::Config as core::clone::Clone>::clone(&v12, &v10);
    v15 = _mm_loadu_si128(&v9);
    alacritty_terminal::term::search::LazyDfa::new(v18, 1, v14);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v18), (__m128i)xmmword_E8640)) == 0xFFFF )
    {
      dest[1].m128i_i64[0] = v18[1].m128i_i64[0];
      dest->m128i_i64[1] = 0LL;
      dest->m128i_i64[0] = 2LL;
      v5 = 1;
    }
    else
    {
      memcpy((char *)&v19[1] + 8, &v18[1].m128i_u64[1], 0x428uLL);
      v19[0] = v18[0];
      *(_QWORD *)&v19[1] = v18[1].m128i_i64[0];
      memcpy(v17, v16, sizeof(v17));
      v13 = v11;
      v12 = _mm_loadu_si128(&v10);
      alacritty_terminal::term::search::LazyDfa::new(v18, 0, 1);
      v6 = v18[1].m128i_i64[0];
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v18), (__m128i)xmmword_E8640)) != 0xFFFF )
      {
        v8 = v18[0];
        memcpy(&dest[137].m128i_u64[1], &v18[1].m128i_u64[1], 0x428uLL);
        memcpy(v18, v21, 0x440uLL);
        memcpy(&v18[68], v20, 0x440uLL);
        memcpy(&dest[204], v19, 0x440uLL);
        memcpy(dest, v18, 0x880uLL);
        dest[136] = v8;
        dest[137].m128i_i64[0] = v6;
        return dest;
      }
      dest[1].m128i_i64[0] = v18[1].m128i_i64[0];
      dest->m128i_i64[1] = 0LL;
      dest->m128i_i64[0] = 2LL;
      core::ptr::drop_in_place<alacritty_terminal::term::search::LazyDfa>(v19, a2);
      v5 = 0;
    }
    core::ptr::drop_in_place<alacritty_terminal::term::search::LazyDfa>(v21, a2);
  }
  core::ptr::drop_in_place<alacritty_terminal::term::search::LazyDfa>(v20, a2);
  if ( v5 )
    goto LABEL_11;
  return dest;
}