__int64 __fastcall uu_du::StatPrinter::print_stats(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 *v3; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // [rsp+Dh] [rbp-1EBh]
  char v17; // [rsp+Eh] [rbp-1EAh]
  char v18; // [rsp+Fh] [rbp-1E9h]
  __m128i *v19; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-1E0h]
  __int64 *v21; // [rsp+20h] [rbp-1D8h]
  __int64 v22; // [rsp+28h] [rbp-1D0h]
  __int64 v23; // [rsp+30h] [rbp-1C8h]
  __int64 v24; // [rsp+38h] [rbp-1C0h]
  __int64 v25; // [rsp+40h] [rbp-1B8h]
  __int64 v26; // [rsp+48h] [rbp-1B0h]
  __m128i *p_dest; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-1A0h]
  __m128i **v29; // [rsp+60h] [rbp-198h]
  __int64 (__fastcall *v30)(); // [rsp+68h] [rbp-190h]
  __int128 *v31; // [rsp+70h] [rbp-188h] BYREF
  __int64 v32; // [rsp+78h] [rbp-180h]
  __m128i *p_p_dest; // [rsp+80h] [rbp-178h]
  __int64 v34; // [rsp+88h] [rbp-170h]
  __m128i v35; // [rsp+90h] [rbp-168h]
  __m128i v36; // [rsp+A0h] [rbp-158h]
  __m128i v37; // [rsp+B0h] [rbp-148h]
  __m128i v38; // [rsp+C0h] [rbp-138h]
  __m128i v39; // [rsp+D0h] [rbp-128h]
  __m128i v40; // [rsp+E0h] [rbp-118h]
  __m128i v41; // [rsp+F0h] [rbp-108h]
  __m128i v42; // [rsp+100h] [rbp-F8h]
  _QWORD v43[2]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i dest; // [rsp+120h] [rbp-D8h] BYREF
  __m128i *v45; // [rsp+130h] [rbp-C8h]
  __int64 v46; // [rsp+138h] [rbp-C0h]
  __m128i v47[11]; // [rsp+140h] [rbp-B8h] BYREF

  std::sync::mpmc::Receiver<T>::recv(&dest);
  v21 = a1;
  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&dest), (__m128i)xmmword_F110)) != 0xFFFF )
  {
    v6 = dest.m128i_i64[1];
    v5 = dest.m128i_i64[0];
    v18 = *((_BYTE *)a1 + 73);
    v16 = *((_BYTE *)a1 + 74);
    v26 = a1[2];
    v25 = a1[3];
    v23 = *a1;
    v22 = a1[1];
    v17 = *((_BYTE *)a1 + 75);
    v2 = 0LL;
    v24 = a2;
    while ( 1 )
    {
      if ( v6 | v5 ^ 2 )
      {
        v31 = (__int128 *)v5;
        v32 = v6;
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
        if ( v18 )
        {
          v10 = v2;
          v11 = v39.m128i_u64[1];
        }
        else
        {
          v10 = v2;
          if ( v16 )
            v11 = v38.m128i_u64[1];
          else
            v11 = v39.m128i_i64[0] << 9;
        }
        v12 = v42.m128i_i64[0];
        v13 = 0LL;
        if ( !v42.m128i_i64[0] )
          v13 = v11;
        if ( !(unsigned __int8)core::option::Option<T>::map_or(v26, v25, v11) )
        {
          if ( (unsigned __int8)core::option::Option<T>::map_or(v23, v22, v12) )
          {
            if ( v12 == 0 || v17 == 0 )
            {
              v14 = uu_du::StatPrinter::print_stat((__int64)v21, &v31, v11);
              if ( v14 )
              {
                v15 = v14;
                core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v31);
                return v15;
              }
            }
          }
        }
        v2 = v13 + v10;
        core::ptr::drop_in_place<uu_du::StatPrintInfo>(&v31);
      }
      else
      {
        v19 = v45;
        v20 = v46;
        v7 = (*(unsigned int (**)(void))(v46 + 96))();
        uucore::mods::error::set_exit_code(v7);
        v43[0] = uucore::util_name(v7, 0LL);
        v43[1] = v8;
        p_dest = (__m128i *)v43;
        v28 = <&T as core::fmt::Display>::fmt;
        v29 = &v19;
        v30 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v31 = (__int128 *)&unk_1845C8;
        v32 = 3LL;
        v35.m128i_i64[0] = 0LL;
        p_p_dest = (__m128i *)&p_dest;
        v34 = 2LL;
        std::io::stdio::_eprint(&v31);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v19, v20);
      }
      std::sync::mpmc::Receiver<T>::recv(&dest);
      v6 = dest.m128i_i64[1];
      v5 = dest.m128i_i64[0];
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&dest), (__m128i)xmmword_F110)) == 0xFFFF )
        goto LABEL_3;
    }
  }
  v2 = 0LL;
LABEL_3:
  v3 = v21;
  if ( *((_BYTE *)v21 + 72) )
  {
    uu_du::StatPrinter::convert_size((__int64)&dest, (__int64)v21, v2);
    p_dest = &dest;
    v28 = <alloc::string::String as core::fmt::Display>::fmt;
    v31 = (__int128 *)&unk_1845F8;
    v32 = 2LL;
    v35.m128i_i64[0] = 0LL;
    p_p_dest = (__m128i *)&p_dest;
    v34 = 1LL;
    std::io::stdio::_print(&v31);
    core::ptr::drop_in_place<alloc::string::String>(&dest);
    dest.m128i_i64[0] = (__int64)v3 + 77;
    dest.m128i_i64[1] = (__int64)<uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v31 = &xmmword_F000;
    v32 = 1LL;
    v35.m128i_i64[0] = 0LL;
    p_p_dest = &dest;
    v34 = 1LL;
    std::io::stdio::_print(&v31);
  }
  return 0LL;
}
