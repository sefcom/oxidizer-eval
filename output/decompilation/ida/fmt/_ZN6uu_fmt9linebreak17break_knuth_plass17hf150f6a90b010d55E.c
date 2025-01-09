__int64 __fastcall uu_fmt::linebreak::break_knuth_plass(
        double a1,
        __m128 a2,
        double a3,
        __m128 a4,
        __int128 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  char v12; // bp
  unsigned __int8 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  char v16; // bp
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int128 v22; // [rsp+0h] [rbp-A8h] BYREF
  void *src[2]; // [rsp+18h] [rbp-90h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int128 *v26; // [rsp+38h] [rbp-70h]
  _BYTE v27[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v30[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v31; // [rsp+68h] [rbp-40h]
  __int64 v32; // [rsp+70h] [rbp-38h]

  v29 = a5;
  v7 = <core::slice::iter::Iter<T> as core::clone::Clone>::clone(a1, *(double *)a2.m128_u64, a3, *(double *)a4.m128_u64);
  uu_fmt::linebreak::find_kp_breakpoints((__int64)v30, v7, v8, a6, a1, a2, a3, a4);
  *(_QWORD *)&v22 = v31;
  *((_QWORD *)&v22 + 1) = v31 + 16 * v32;
  v9 = (char *)(a6 + 48);
  v10 = *(_QWORD *)(a6 + 24);
  *(_OWORD *)src = *(_OWORD *)(a6 + 8);
  n = a6 + 48;
  v25 = v10;
  v26 = &v29;
  core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(v27, &v22, src);
  if ( v27[0] )
  {
    v11 = v28;
    goto LABEL_13;
  }
  v12 = v27[1];
  v13 = v27[2];
  v22 = v29;
  v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
  if ( !v14 )
    goto LABEL_10;
  v15 = v14;
  if ( !v13
    || (v11 = uu_fmt::linebreak::write_newline(*(void **)(a6 + 8), *(_QWORD *)(a6 + 16), *(_QWORD **)(a6 + 24))) == 0 )
  {
    uu_fmt::linebreak::slice_if_fresh(
      (__int64 *)src,
      v13,
      *(_QWORD *)(v15 + 16),
      *(_QWORD *)(v15 + 24),
      *(_QWORD *)(v15 + 32),
      *v9,
      *(_BYTE *)(v15 + 58),
      *(_BYTE *)(v15 + 56),
      v12);
    v16 = *(_BYTE *)(v15 + 57);
    v11 = uu_fmt::linebreak::write_with_spaces(src[1], n, (__int64)src[0], *(_QWORD **)(a6 + 24));
    if ( !v11 )
    {
      while ( 1 )
      {
        v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
        if ( !v17 )
          break;
        v18 = v17;
        uu_fmt::linebreak::slice_if_fresh(
          (__int64 *)src,
          0,
          *(_QWORD *)(v17 + 16),
          *(_QWORD *)(v17 + 24),
          *(_QWORD *)(v17 + 32),
          *v9 != 0,
          *(_BYTE *)(v17 + 58) != 0,
          *(_BYTE *)(v17 + 56) != 0,
          v16 != 0);
        v16 = *(_BYTE *)(v18 + 57);
        v11 = uu_fmt::linebreak::write_with_spaces(src[1], n, (__int64)src[0], *(_QWORD **)(a6 + 24));
        if ( v11 )
          goto LABEL_13;
      }
LABEL_10:
      v19 = *(_QWORD **)(a6 + 24);
      v20 = v19[2];
      if ( (unsigned __int64)(*v19 - v20) <= 1 )
      {
        v11 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v19, asc_1E186, 1LL);
      }
      else
      {
        *(_BYTE *)(v19[1] + v20) = 10;
        v19[2] = v20 + 1;
        v11 = 0LL;
      }
    }
  }
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(v30);
  return v11;
}
