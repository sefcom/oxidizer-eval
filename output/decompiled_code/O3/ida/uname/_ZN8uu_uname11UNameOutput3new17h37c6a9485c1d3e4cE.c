__m128i *__fastcall uu_uname::UNameOutput::new(__m128i *dest, char *a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // bp
  char v4; // al
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  unsigned __int8 v7; // cl
  __m128i v9; // [rsp+0h] [rbp-558h]
  __int64 v10; // [rsp+10h] [rbp-548h]
  __m128i v11; // [rsp+20h] [rbp-538h]
  __int64 v12; // [rsp+30h] [rbp-528h]
  __m128i v13; // [rsp+40h] [rbp-518h]
  __int64 v14; // [rsp+50h] [rbp-508h]
  __m128i v15; // [rsp+60h] [rbp-4F8h]
  __int64 v16; // [rsp+70h] [rbp-4E8h]
  __m128i v17; // [rsp+80h] [rbp-4D8h]
  __int64 v18; // [rsp+90h] [rbp-4C8h]
  __m128i v19; // [rsp+A0h] [rbp-4B8h]
  __int64 v20; // [rsp+B0h] [rbp-4A8h]
  __m128i v21; // [rsp+C0h] [rbp-498h]
  __int64 v22; // [rsp+D0h] [rbp-488h]
  __m128i v23; // [rsp+E0h] [rbp-478h]
  __m128i v24[34]; // [rsp+F0h] [rbp-468h] BYREF
  __m128i v25; // [rsp+310h] [rbp-248h] BYREF
  __int64 v26; // [rsp+320h] [rbp-238h]
  _QWORD desta[64]; // [rsp+328h] [rbp-230h] BYREF

  v2 = 0x8000000000000000LL;
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(v24);
  if ( v24[0].m128i_i64[0] != 0x8000000000000000LL )
  {
    memcpy(desta, &v24[1].m128i_u64[1], sizeof(desta));
    v25 = v24[0];
    v26 = v24[1].m128i_i64[0];
    v3 = *a2;
    v4 = a2[1];
    if ( *a2
      || v4
      || (v5 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 2)),
          v6 = _mm_unpacklo_epi8(v5, v5),
          v7 = _mm_movemask_ps((__m128)_mm_cmpeq_epi8((__m128i)0LL, _mm_unpacklo_epi16(v6, v6))),
          (v7 & 1) == 0)
      || !((unsigned __int8)(v7 & 4) >> 2)
      || !((unsigned __int8)(v7 & 2) >> 1)
      || !(v7 >> 3)
      || a2[8]
      || a2[6] )
    {
      if ( !(v3 | (unsigned __int8)v4) )
      {
LABEL_14:
        v9.m128i_i64[0] = 0x8000000000000000LL;
LABEL_15:
        if ( v3 | (unsigned __int8)a2[2] )
        {
          uu_uname::UNameOutput::new::{{closure}}(v24, desta[1], desta[2]);
          v12 = v24[1].m128i_i64[0];
          v11 = _mm_loadu_si128(v24);
        }
        else
        {
          v11.m128i_i64[0] = 0x8000000000000000LL;
        }
        if ( v3 | (unsigned __int8)a2[4] )
        {
          uu_uname::UNameOutput::new::{{closure}}(v24, desta[4], desta[5]);
          v14 = v24[1].m128i_i64[0];
          v13 = _mm_loadu_si128(v24);
        }
        else
        {
          v13.m128i_i64[0] = 0x8000000000000000LL;
        }
        if ( v3 | (unsigned __int8)a2[3] )
        {
          uu_uname::UNameOutput::new::{{closure}}(v24, desta[7], desta[8]);
          v16 = v24[1].m128i_i64[0];
          v15 = _mm_loadu_si128(v24);
        }
        else
        {
          v15.m128i_i64[0] = 0x8000000000000000LL;
        }
        if ( v3 | (unsigned __int8)a2[5] )
        {
          uu_uname::UNameOutput::new::{{closure}}(v24, desta[10], desta[11]);
          v18 = v24[1].m128i_i64[0];
          v17 = _mm_loadu_si128(v24);
          if ( (unsigned __int8)a2[8] | v3 )
            goto LABEL_26;
        }
        else
        {
          v17.m128i_i64[0] = 0x8000000000000000LL;
          if ( (unsigned __int8)a2[8] | v3 )
          {
LABEL_26:
            uu_uname::UNameOutput::new::{{closure}}(v24, desta[13], desta[14]);
            v20 = v24[1].m128i_i64[0];
            v19 = _mm_loadu_si128(v24);
            if ( a2[6] )
              goto LABEL_27;
            goto LABEL_31;
          }
        }
        v19.m128i_i64[0] = 0x8000000000000000LL;
        if ( a2[6] )
        {
LABEL_27:
          <T as alloc::slice::hack::ConvertVec>::to_vec(v24, aUnknown_0, 7LL);
          v22 = v24[1].m128i_i64[0];
          v21 = _mm_loadu_si128(v24);
          if ( !a2[7] )
            goto LABEL_33;
          goto LABEL_32;
        }
LABEL_31:
        v21.m128i_i64[0] = 0x8000000000000000LL;
        if ( !a2[7] )
        {
LABEL_33:
          v24[1].m128i_i64[0] = v10;
          v24[0] = v9;
          *(__m128i *)((char *)&v24[1] + 8) = v11;
          v24[2].m128i_i64[1] = v12;
          v24[3] = v13;
          v24[4].m128i_i64[0] = v14;
          *(__m128i *)((char *)&v24[4] + 8) = v15;
          v24[5].m128i_i64[1] = v16;
          v24[7].m128i_i64[0] = v18;
          v24[6] = v17;
          v24[8].m128i_i64[1] = v20;
          *(__m128i *)((char *)&v24[7] + 8) = v19;
          v24[10].m128i_i64[0] = v22;
          v24[9] = v21;
          memcpy(dest, v24, 0xA8uLL);
          dest[10].m128i_i64[1] = v2;
          dest[11] = v23;
          core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v25);
          return dest;
        }
LABEL_32:
        <T as alloc::slice::hack::ConvertVec>::to_vec(v24, aUnknown_0, 7LL);
        v2 = v24[0].m128i_i64[0];
        v23 = _mm_loadu_si128((const __m128i *)&v24[0].m128i_u64[1]);
        goto LABEL_33;
      }
    }
    else if ( a2[7] )
    {
      goto LABEL_14;
    }
    uu_uname::UNameOutput::new::{{closure}}(v24, v24[0].m128i_i64[1], v24[1].m128i_i64[0]);
    v10 = v24[1].m128i_i64[0];
    v9 = _mm_loadu_si128(v24);
    goto LABEL_15;
  }
  dest->m128i_i64[1] = uu_uname::UNameOutput::new::{{closure}}(v24[0].m128i_i64[1], v24[1].m128i_i64[0]);
  dest[1].m128i_i64[0] = (__int64)&off_10B9B0;
  dest->m128i_i64[0] = 0x8000000000000001LL;
  return dest;
}
