__int64 __fastcall alacritty_terminal::term::search::LazyDfa::new(
        _QWORD *dest,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned __int8 a8)
{
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  __m128i v24; // [rsp+10h] [rbp-B68h] BYREF
  __m128i v25; // [rsp+20h] [rbp-B58h]
  __m128i v26; // [rsp+30h] [rbp-B48h]
  __m128i v27; // [rsp+40h] [rbp-B38h]
  __m128i v28; // [rsp+50h] [rbp-B28h]
  __m128i v29; // [rsp+60h] [rbp-B18h]
  __m128i v30; // [rsp+70h] [rbp-B08h]
  __m128i v31; // [rsp+80h] [rbp-AF8h]
  __m128i v32[67]; // [rsp+90h] [rbp-AE8h] BYREF
  _OWORD desta[45]; // [rsp+4C0h] [rbp-6B8h] BYREF
  _BYTE v34[600]; // [rsp+790h] [rbp-3E8h] BYREF
  _BYTE v35[400]; // [rsp+9E8h] [rbp-190h] BYREF

  *(__int32 *)((char *)&v32[0].m128i_i32[3] + 3) = *(_DWORD *)(a6 + 15);
  v32[0] = *(__m128i *)a6;
  *(__m128i *)a6 = v32[0];
  *(_DWORD *)(a6 + 15) = *(__int32 *)((char *)&v32[0].m128i_i32[3] + 3);
  *(_BYTE *)(a6 + 19) = a7 ^ 1;
  v32[7] = *((__m128i *)a4 + 7);
  v32[6] = *((__m128i *)a4 + 6);
  v32[5] = *((__m128i *)a4 + 5);
  v32[4] = *((__m128i *)a4 + 4);
  v11 = *(__m128i *)a4;
  v12 = *((__m128i *)a4 + 1);
  v13 = *((__m128i *)a4 + 2);
  v32[3] = *((__m128i *)a4 + 3);
  v32[2] = v13;
  v32[1] = v12;
  v32[0] = v11;
  v14 = *(_QWORD *)(a4 + 129);
  *(_QWORD *)((char *)desta + 7) = *((_QWORD *)a4 + 17);
  *(_QWORD *)&desta[0] = v14;
  *((__m128i *)a4 + 7) = v32[7];
  *((__m128i *)a4 + 6) = v32[6];
  *((__m128i *)a4 + 5) = v32[5];
  *((__m128i *)a4 + 4) = v32[4];
  v15 = v32[0];
  v16 = v32[1];
  v17 = v32[2];
  *((__m128i *)a4 + 3) = v32[3];
  *((__m128i *)a4 + 2) = v17;
  *((__m128i *)a4 + 1) = v16;
  *(__m128i *)a4 = v15;
  a4[128] = a8 ^ 1;
  v18 = *(_QWORD *)((char *)desta + 7);
  *(_QWORD *)(a4 + 129) = *(_QWORD *)&desta[0];
  *((_QWORD *)a4 + 17) = v18;
  regex_automata::hybrid::dfa::Builder::new(v34);
  memcpy(desta, a4, 0x90uLL);
  v19 = regex_automata::hybrid::dfa::Builder::configure(v34);
  v20 = regex_automata::hybrid::dfa::Builder::syntax(v19, a5);
  *(_QWORD *)&desta[1] = *(_QWORD *)(a6 + 16);
  desta[0] = *(_OWORD *)a6;
  v21 = regex_automata::hybrid::dfa::Builder::thompson(v20, desta);
  regex_automata::hybrid::dfa::Builder::build(v32, v21, a2, a3);
  v24 = v32[1];
  v25 = v32[2];
  v26 = v32[3];
  v27 = v32[4];
  v28 = v32[5];
  v29 = v32[6];
  v30 = v32[7];
  v31 = v32[8];
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v32), (__m128i)xmmword_E8640)) == 0xFFFF )
  {
    dest[2] = alloc::boxed::Box<T>::new(&v24);
    dest[1] = 0LL;
    *dest = 2LL;
    return core::ptr::drop_in_place<regex_automata::hybrid::dfa::Builder>(v34);
  }
  else
  {
    memcpy(&desta[9], &v32[9], 0x240uLL);
    desta[1] = v24;
    desta[2] = v25;
    desta[3] = v26;
    desta[4] = v27;
    desta[5] = v28;
    desta[6] = v29;
    desta[7] = v30;
    desta[8] = v31;
    desta[0] = v32[0];
    core::ptr::drop_in_place<regex_automata::hybrid::dfa::Builder>(v34);
    regex_automata::hybrid::dfa::DFA::create_cache(v35, desta);
    memcpy(v32, desta, 0x2D0uLL);
    memcpy(&v32[45], v35, 0x160uLL);
    memcpy(dest, v32, 0x430uLL);
    *((_BYTE *)dest + 1072) = a7;
    result = a8;
    *((_BYTE *)dest + 1073) = a8;
  }
  return result;
}