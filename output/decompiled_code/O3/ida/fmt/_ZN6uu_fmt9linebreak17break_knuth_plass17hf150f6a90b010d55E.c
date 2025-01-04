__int64 __fastcall uu_fmt::linebreak::break_knuth_plass(__int128 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // bp
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int128 v18; // [rsp+0h] [rbp-A8h] BYREF
  void *src[2]; // [rsp+18h] [rbp-90h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int128 *v22; // [rsp+38h] [rbp-70h]
  _BYTE v23[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v24; // [rsp+48h] [rbp-60h]
  __int128 v25; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]
  __int64 v28; // [rsp+70h] [rbp-38h]

  v25 = a1;
  v3 = <core::slice::iter::Iter<T> as core::clone::Clone>::clone();
  uu_fmt::linebreak::find_kp_breakpoints((__int64)v26, v3, v4, a2);
  *(_QWORD *)&v18 = v27;
  *((_QWORD *)&v18 + 1) = v27 + 16 * v28;
  v5 = (char *)(a2 + 48);
  v6 = *(_QWORD *)(a2 + 24);
  *(_OWORD *)src = *(_OWORD *)(a2 + 8);
  n = a2 + 48;
  v21 = v6;
  v22 = &v25;
  core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(v23, &v18, src);
  if ( v23[0] )
  {
    v7 = v24;
    goto LABEL_13;
  }
  v8 = v23[1];
  v9 = v23[2];
  v18 = v25;
  v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
  if ( !v10 )
    goto LABEL_10;
  v11 = v10;
  if ( !v9
    || (v7 = uu_fmt::linebreak::write_newline(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16), *(_QWORD **)(a2 + 24))) == 0 )
  {
    uu_fmt::linebreak::slice_if_fresh(
      (__int64 *)src,
      v9,
      *(_QWORD *)(v11 + 16),
      *(_QWORD *)(v11 + 24),
      *(_QWORD *)(v11 + 32),
      *v5,
      *(_BYTE *)(v11 + 58),
      *(_BYTE *)(v11 + 56),
      v8);
    v12 = *(_BYTE *)(v11 + 57);
    v7 = uu_fmt::linebreak::write_with_spaces(src[1], n, (__int64)src[0], *(_QWORD **)(a2 + 24));
    if ( !v7 )
    {
      while ( 1 )
      {
        v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
        if ( !v13 )
          break;
        v14 = v13;
        uu_fmt::linebreak::slice_if_fresh(
          (__int64 *)src,
          0,
          *(_QWORD *)(v13 + 16),
          *(_QWORD *)(v13 + 24),
          *(_QWORD *)(v13 + 32),
          *v5 != 0,
          *(_BYTE *)(v13 + 58) != 0,
          *(_BYTE *)(v13 + 56) != 0,
          v12 != 0);
        v12 = *(_BYTE *)(v14 + 57);
        v7 = uu_fmt::linebreak::write_with_spaces(src[1], n, (__int64)src[0], *(_QWORD **)(a2 + 24));
        if ( v7 )
          goto LABEL_13;
      }
LABEL_10:
      v15 = *(_QWORD **)(a2 + 24);
      v16 = v15[2];
      if ( (unsigned __int64)(*v15 - v16) <= 1 )
      {
        v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v15, asc_1E186, 1LL);
      }
      else
      {
        *(_BYTE *)(v15[1] + v16) = 10;
        v15[2] = v16 + 1;
        v7 = 0LL;
      }
    }
  }
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(v26);
  return v7;
}
