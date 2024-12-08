__m128i *__fastcall uu_uname::UNameOutput::new(__m128i *dest, char *a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // bp
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  unsigned __int8 v6; // cl
  __m128i v8; // [rsp+0h] [rbp-558h]
  __int64 v9; // [rsp+10h] [rbp-548h]
  __m128i v10; // [rsp+20h] [rbp-538h]
  __int64 v11; // [rsp+30h] [rbp-528h]
  __m128i v12; // [rsp+40h] [rbp-518h]
  __int64 v13; // [rsp+50h] [rbp-508h]
  __m128i v14; // [rsp+60h] [rbp-4F8h]
  __int64 v15; // [rsp+70h] [rbp-4E8h]
  __m128i v16; // [rsp+80h] [rbp-4D8h]
  __int64 v17; // [rsp+90h] [rbp-4C8h]
  __m128i v18; // [rsp+A0h] [rbp-4B8h]
  __int64 v19; // [rsp+B0h] [rbp-4A8h]
  __m128i v20; // [rsp+C0h] [rbp-498h]
  __int64 v21; // [rsp+D0h] [rbp-488h]
  __m128i v22; // [rsp+E0h] [rbp-478h]
  __m128i v23[34]; // [rsp+F0h] [rbp-468h] BYREF
  __m128i v24; // [rsp+310h] [rbp-248h] BYREF
  __int64 v25; // [rsp+320h] [rbp-238h]
  _QWORD desta[64]; // [rsp+328h] [rbp-230h] BYREF

  v2 = 0x8000000000000000LL;
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(v23);
  if ( v23[0].m128i_i64[0] != 0x8000000000000000LL )
  {
    memcpy(desta, &v23[1].m128i_u64[1], sizeof(desta));
    v24 = v23[0];
    v25 = v23[1].m128i_i64[0];
    v3 = *a2;
    if ( !*(_WORD *)a2
      && (v4 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 2)),
          v5 = _mm_unpacklo_epi8(v4, v4),
          v6 = _mm_movemask_ps((__m128)_mm_cmpeq_epi8((__m128i)0LL, _mm_unpacklo_epi16(v5, v5))),
          (v6 & 1) != 0)
      && (unsigned __int8)(v6 & 4) >> 2
      && (unsigned __int8)(v6 & 2) >> 1
      && v6 >> 3
      && !a2[8]
      && !a2[6] )
    {
      if ( a2[7] )
        goto LABEL_13;
    }
    else if ( !*(_WORD *)a2 )
    {
LABEL_13:
      v8.m128i_i64[0] = 0x8000000000000000LL;
LABEL_14:
      if ( v3 | (unsigned __int8)a2[2] )
      {
        uu_uname::UNameOutput::new::{{closure}}(v23, desta[1], desta[2]);
        v11 = v23[1].m128i_i64[0];
        v10 = _mm_loadu_si128(v23);
      }
      else
      {
        v10.m128i_i64[0] = 0x8000000000000000LL;
      }
      if ( v3 | (unsigned __int8)a2[4] )
      {
        uu_uname::UNameOutput::new::{{closure}}(v23, desta[4], desta[5]);
        v13 = v23[1].m128i_i64[0];
        v12 = _mm_loadu_si128(v23);
      }
      else
      {
        v12.m128i_i64[0] = 0x8000000000000000LL;
      }
      if ( v3 | (unsigned __int8)a2[3] )
      {
        uu_uname::UNameOutput::new::{{closure}}(v23, desta[7], desta[8]);
        v15 = v23[1].m128i_i64[0];
        v14 = _mm_loadu_si128(v23);
      }
      else
      {
        v14.m128i_i64[0] = 0x8000000000000000LL;
      }
      if ( v3 | (unsigned __int8)a2[5] )
      {
        uu_uname::UNameOutput::new::{{closure}}(v23, desta[10], desta[11]);
        v17 = v23[1].m128i_i64[0];
        v16 = _mm_loadu_si128(v23);
        if ( (unsigned __int8)a2[8] | v3 )
          goto LABEL_25;
      }
      else
      {
        v16.m128i_i64[0] = 0x8000000000000000LL;
        if ( (unsigned __int8)a2[8] | v3 )
        {
LABEL_25:
          uu_uname::UNameOutput::new::{{closure}}(v23, desta[13], desta[14]);
          v19 = v23[1].m128i_i64[0];
          v18 = _mm_loadu_si128(v23);
          if ( a2[6] )
            goto LABEL_26;
          goto LABEL_30;
        }
      }
      v18.m128i_i64[0] = 0x8000000000000000LL;
      if ( a2[6] )
      {
LABEL_26:
        <T as alloc::slice::hack::ConvertVec>::to_vec(v23, aUnknown_0, 7LL);
        v21 = v23[1].m128i_i64[0];
        v20 = _mm_loadu_si128(v23);
        if ( !a2[7] )
          goto LABEL_32;
        goto LABEL_31;
      }
LABEL_30:
      v20.m128i_i64[0] = 0x8000000000000000LL;
      if ( !a2[7] )
      {
LABEL_32:
        v23[1].m128i_i64[0] = v9;
        v23[0] = v8;
        *(__m128i *)((char *)&v23[1] + 8) = v10;
        v23[2].m128i_i64[1] = v11;
        v23[3] = v12;
        v23[4].m128i_i64[0] = v13;
        *(__m128i *)((char *)&v23[4] + 8) = v14;
        v23[5].m128i_i64[1] = v15;
        v23[7].m128i_i64[0] = v17;
        v23[6] = v16;
        v23[8].m128i_i64[1] = v19;
        *(__m128i *)((char *)&v23[7] + 8) = v18;
        v23[10].m128i_i64[0] = v21;
        v23[9] = v20;
        memcpy(dest, v23, 0xA8uLL);
        dest[10].m128i_i64[1] = v2;
        dest[11] = v22;
        core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v24);
        return dest;
      }
LABEL_31:
      <T as alloc::slice::hack::ConvertVec>::to_vec(v23, aUnknown_0, 7LL);
      v2 = v23[0].m128i_i64[0];
      v22 = _mm_loadu_si128((const __m128i *)&v23[0].m128i_u64[1]);
      goto LABEL_32;
    }
    uu_uname::UNameOutput::new::{{closure}}(v23, v23[0].m128i_i64[1], v23[1].m128i_i64[0]);
    v9 = v23[1].m128i_i64[0];
    v8 = _mm_loadu_si128(v23);
    goto LABEL_14;
  }
  dest->m128i_i64[1] = uu_uname::UNameOutput::new::{{closure}}(v23[0].m128i_i64[1], v23[1].m128i_i64[0]);
  dest[1].m128i_i64[0] = (__int64)&off_10B9B0;
  dest->m128i_i64[0] = 0x8000000000000001LL;
  return dest;
}
