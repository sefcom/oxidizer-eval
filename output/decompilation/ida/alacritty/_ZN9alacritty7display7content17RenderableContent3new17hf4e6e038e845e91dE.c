__int64 __fastcall alacritty::display::content::RenderableContent::new(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5)
{
  unsigned __int64 v8; // r13
  char v9; // r15
  unsigned int v10; // r15d
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  const __m128i *v13; // rbp
  const __m128i *v14; // r15
  __int64 result; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  char v19; // [rsp+6h] [rbp-152h]
  __int8 v20; // [rsp+7h] [rbp-151h]
  __int64 v21; // [rsp+8h] [rbp-150h]
  __int64 v22; // [rsp+18h] [rbp-140h]
  __int64 v23; // [rsp+20h] [rbp-138h]
  __int64 v24; // [rsp+28h] [rbp-130h]
  __int64 v25; // [rsp+30h] [rbp-128h]
  __int64 v26; // [rsp+38h] [rbp-120h]
  unsigned __int64 v27; // [rsp+40h] [rbp-118h]
  _QWORD v28[3]; // [rsp+48h] [rbp-110h] BYREF
  _OWORD v29[3]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+90h] [rbp-C8h]
  __int128 v31; // [rsp+A0h] [rbp-B8h]
  __int128 v32; // [rsp+B0h] [rbp-A8h]
  __int128 v33; // [rsp+C0h] [rbp-98h]
  __int128 v34; // [rsp+D0h] [rbp-88h]
  _BYTE v35[120]; // [rsp+E0h] [rbp-78h] BYREF

  v8 = 0x8000000000000001LL;
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(a5), (__m128i)xmmword_E8640)) != 0xFFFF )
  {
    alacritty::display::hint::visible_regex_match_iter(v35, a4, a5);
    core::iter::traits::iterator::Iterator::collect(v28, v35);
    v8 = v28[0];
    v21 = v28[1];
    v22 = v28[2];
  }
  v20 = a5[278].m128i_i8[0];
  alacritty_terminal::term::RenderableContent::new((__int64)v29, a4);
  v9 = BYTE8(v31);
  v19 = 4;
  if ( BYTE8(v31) != 4
    && !*(_BYTE *)(a3 + 2102)
    && !alacritty::event::SearchState::regex(a5)
    && *(_QWORD *)(a3 + 720) == 2LL )
  {
    if ( *(_BYTE *)(a4 + 1762) || (v19 = 3, !*(_BYTE *)(a2 + 985)) )
      v19 = v9;
  }
  v10 = LODWORD(v29[0]) + v31;
  if ( LODWORD(v29[0]) + (int)v31 < 0 )
    core::option::unwrap_failed(&off_8820F0);
  v26 = *((_QWORD *)&v30 + 1);
  v27 = v8;
  if ( *(_QWORD *)(a3 + 1144) )
  {
    alacritty::display::hint::HintState::update_matches(a3 + 1048, a4);
    v24 = *(_QWORD *)(a3 + 1080);
    v25 = *(_QWORD *)(a3 + 1088);
    v23 = a3 + 1096;
    v11 = 0x8000000000000000LL;
  }
  else
  {
    v11 = 0x8000000000000001LL;
  }
  v12 = v10;
  v13 = a5 + 276;
  v14 = 0LL;
  if ( v20 != 2 )
    v14 = v13;
  alacritty::display::content::RenderableCursor::new_hidden(a1 + 200);
  result = a3 + 1944;
  *(_OWORD *)(a1 + 184) = v34;
  *(_OWORD *)(a1 + 168) = v33;
  *(_OWORD *)(a1 + 152) = v32;
  *(_OWORD *)(a1 + 136) = v31;
  v16 = v29[0];
  v17 = v29[1];
  v18 = v29[2];
  *(_OWORD *)(a1 + 120) = v30;
  *(_OWORD *)(a1 + 104) = v18;
  *(_OWORD *)(a1 + 88) = v17;
  *(_OWORD *)(a1 + 72) = v16;
  *(_BYTE *)(a1 + 280) = v19;
  *(_QWORD *)(a1 + 256) = v12;
  *(_QWORD *)(a1 + 264) = v26;
  *(_QWORD *)a1 = v27;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = v22;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v24;
  *(_QWORD *)(a1 + 48) = v25;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 232) = a2;
  *(_QWORD *)(a1 + 240) = a3 + 2104;
  *(_QWORD *)(a1 + 272) = v14;
  *(_QWORD *)(a1 + 248) = a3 + 1944;
  return result;
}