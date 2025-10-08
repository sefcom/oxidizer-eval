__int64 __fastcall uu_fmt::linebreak::break_knuth_plass(__int128 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int8 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r13
  char v9; // r13
  unsigned __int8 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  char v13; // r12
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  __int64 v17; // rax
  char v19; // [rsp+Fh] [rbp-A9h]
  __int128 v20; // [rsp+10h] [rbp-A8h] BYREF
  void *src[2]; // [rsp+28h] [rbp-90h] BYREF
  size_t n; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  __int128 *v24; // [rsp+48h] [rbp-70h]
  _BYTE v25[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h] BYREF
  __int64 v29; // [rsp+78h] [rbp-40h]
  __int64 v30; // [rsp+80h] [rbp-38h]

  v27 = a1;
  v3 = <core::slice::iter::Iter<T> as core::clone::Clone>::clone();
  uu_fmt::linebreak::find_kp_breakpoints(&v28, v3, v4, a2);
  v5 = v29;
  *(_QWORD *)&v20 = v29;
  *((_QWORD *)&v20 + 1) = v29 + 16 * v30;
  v6 = (unsigned __int8 *)(a2 + 48);
  v7 = *(_QWORD *)(a2 + 24);
  *(_OWORD *)src = *(_OWORD *)(a2 + 8);
  n = a2 + 48;
  v23 = v7;
  v24 = &v27;
  core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(v25, &v20, src);
  if ( v25[0] == 1 )
  {
    v8 = v26;
    goto LABEL_12;
  }
  v9 = v25[1];
  v10 = v25[2];
  v20 = v27;
  v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
  if ( !v11 )
    goto LABEL_10;
  v12 = v11;
  v19 = v9;
  if ( !v10 || (v8 = uu_fmt::linebreak::write_newline(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16))) == 0 )
  {
    uu_fmt::linebreak::slice_if_fresh(
      (unsigned int)src,
      v10,
      *(_QWORD *)(v12 + 16),
      *(_QWORD *)(v12 + 24),
      *(_QWORD *)(v12 + 32),
      *v6,
      *(_BYTE *)(v12 + 58),
      *(_BYTE *)(v12 + 56),
      v19);
    v13 = *(_BYTE *)(v12 + 57);
    v8 = uu_fmt::linebreak::write_with_spaces(src[1], n);
    if ( !v8 )
    {
      while ( 1 )
      {
        v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
        if ( !v14 )
          break;
        v15 = v14;
        uu_fmt::linebreak::slice_if_fresh(
          (unsigned int)src,
          0,
          *(_QWORD *)(v15 + 16),
          *(_QWORD *)(v15 + 24),
          *(_QWORD *)(v15 + 32),
          *v6,
          *(_BYTE *)(v14 + 58),
          *(_BYTE *)(v14 + 56),
          v13);
        v13 = *(_BYTE *)(v15 + 57);
        v8 = uu_fmt::linebreak::write_with_spaces(src[1], n);
        if ( v8 )
          goto LABEL_12;
      }
LABEL_10:
      v16 = *(_QWORD **)(a2 + 24);
      v17 = v16[2];
      if ( (unsigned __int64)(*v16 - v17) <= 1 )
      {
        v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v16, asc_19C48, 1LL);
      }
      else
      {
        *(_BYTE *)(v16[1] + v17) = 10;
        v16[2] = v17 + 1;
        v8 = 0LL;
      }
    }
  }
LABEL_12:
  core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v28, v5);
  return v8;
}