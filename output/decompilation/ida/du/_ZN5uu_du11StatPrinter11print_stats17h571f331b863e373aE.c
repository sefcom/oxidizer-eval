__int64 __fastcall uu_du::StatPrinter::print_stats(char *a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  char *v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  bool v15; // si
  unsigned __int8 v16; // [rsp+4h] [rbp-1E4h]
  char v17; // [rsp+5h] [rbp-1E3h]
  char v18; // [rsp+6h] [rbp-1E2h]
  char v19; // [rsp+7h] [rbp-1E1h]
  __m128i *v20; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-1D8h]
  char *v22; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v23; // [rsp+20h] [rbp-1C8h]
  __int64 v24; // [rsp+28h] [rbp-1C0h]
  unsigned __int64 v25; // [rsp+30h] [rbp-1B8h]
  __int64 v26; // [rsp+38h] [rbp-1B0h]
  __m128i *p_dest; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+48h] [rbp-1A0h]
  __m128i **v29; // [rsp+50h] [rbp-198h]
  __int64 (__fastcall *v30)(); // [rsp+58h] [rbp-190h]
  void *v31; // [rsp+60h] [rbp-188h] BYREF
  __int64 v32; // [rsp+68h] [rbp-180h]
  __m128i *p_p_dest; // [rsp+70h] [rbp-178h]
  __int64 v34; // [rsp+78h] [rbp-170h]
  __m128i v35; // [rsp+80h] [rbp-168h]
  __m128i v36; // [rsp+90h] [rbp-158h]
  __m128i v37; // [rsp+A0h] [rbp-148h]
  __m128i v38; // [rsp+B0h] [rbp-138h]
  __m128i v39; // [rsp+C0h] [rbp-128h]
  __m128i v40; // [rsp+D0h] [rbp-118h]
  __m128i v41; // [rsp+E0h] [rbp-108h]
  __m128i v42; // [rsp+F0h] [rbp-F8h]
  _QWORD v43[2]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i dest; // [rsp+110h] [rbp-D8h] BYREF
  __m128i *v45; // [rsp+120h] [rbp-C8h]
  __int64 v46; // [rsp+128h] [rbp-C0h]
  __m128i v47[11]; // [rsp+130h] [rbp-B8h] BYREF

  v2 = *a2;
  std::sync::mpmc::Receiver<T>::recv(&dest);
  v22 = a1;
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&dest), (__m128i)xmmword_1D8E0)) != 0xFFFF )
  {
    v8 = dest.m128i_i64[1];
    v7 = dest.m128i_i64[0];
    v19 = a1[73];
    v18 = a1[74];
    v24 = *((_QWORD *)a1 + 2);
    v25 = *((_QWORD *)a1 + 3);
    v16 = *a1;
    v23 = *((_QWORD *)a1 + 1);
    v17 = a1[75];
    v3 = 0LL;
    v26 = v2;
    while ( 1 )
    {
      if ( !(v8 | v7 ^ 2) )
      {
        v20 = v45;
        v21 = v46;
        v9 = (*(__int64 (**)(void))(v46 + 88))();
        uucore::mods::error::set_exit_code(v9);
        v43[0] = uucore::util_name();
        v43[1] = v10;
        p_dest = (__m128i *)v43;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = &v20;
        v30 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v31 = &unk_145DF8;
        v32 = 3LL;
        v35.m128i_i64[0] = 0LL;
        p_p_dest = (__m128i *)&p_dest;
        v34 = 2LL;
        std::io::stdio::_eprint(&v31);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v20, v21);
        goto LABEL_9;
      }
      v31 = (void *)v7;
      v32 = v8;
      p_p_dest = v45;
      v34 = v46;
      v42 = v47[7];
      v41 = v47[6];
      v40 = v47[5];
      v39 = v47[4];
      si128 = _mm_load_si128(v47);
      v38 = v47[3];
      v37 = v47[2];
      v36 = v47[1];
      v35 = si128;
      if ( (v19 & 1) != 0 )
      {
        v12 = v39.m128i_u64[1];
        v13 = v24;
      }
      else
      {
        v13 = v24;
        if ( (v18 & 1) != 0 )
          v12 = v38.m128i_u64[1];
        else
          v12 = v39.m128i_i64[0] << 9;
      }
      v14 = 0LL;
      if ( !v42.m128i_i64[0] )
        v14 = v12;
      if ( v13 == 2 )
      {
        if ( ((v42.m128i_i64[0] > v23) & v16) == 0 )
          goto LABEL_25;
      }
      else
      {
        v15 = v12 < v25;
        if ( (v13 & 1) != 0 )
          v15 = v12 > v25;
        if ( !(v15 | v16 & (v42.m128i_i64[0] > v23)) )
        {
LABEL_25:
          if ( !v42.m128i_i64[0] || (v17 & 1) == 0 )
          {
            v5 = uu_du::StatPrinter::print_stat(v22, &v31, v12);
            if ( v5 )
            {
              core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v31);
              return v5;
            }
          }
        }
      }
      v3 += v14;
      core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v31);
LABEL_9:
      std::sync::mpmc::Receiver<T>::recv(&dest);
      v8 = dest.m128i_i64[1];
      v7 = dest.m128i_i64[0];
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&dest), (__m128i)xmmword_1D8E0)) == 0xFFFF )
        goto LABEL_3;
    }
  }
  v3 = 0LL;
LABEL_3:
  v4 = v22;
  if ( v22[72] )
  {
    uu_du::StatPrinter::convert_size(&dest, v22, v3);
    p_dest = &dest;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    v31 = &unk_145E28;
    v32 = 2LL;
    v35.m128i_i64[0] = 0LL;
    p_p_dest = (__m128i *)&p_dest;
    v34 = 1LL;
    std::io::stdio::_print(&v31);
    core::ptr::drop_in_place<alloc::string::String>(&dest);
    dest.m128i_i64[0] = (__int64)(v4 + 77);
    dest.m128i_i64[1] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v31 = &unk_1D7A0;
    v32 = 1LL;
    v35.m128i_i64[0] = 0LL;
    p_p_dest = &dest;
    v34 = 1LL;
    std::io::stdio::_print(&v31);
  }
  return 0LL;
}