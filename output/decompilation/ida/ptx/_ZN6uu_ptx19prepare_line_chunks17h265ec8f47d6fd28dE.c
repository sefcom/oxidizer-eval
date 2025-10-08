__int64 __fastcall uu_ptx::prepare_line_chunks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // r12
  __int64 started; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  __int64 result; // rax
  __int64 v37; // [rsp+8h] [rbp-D0h]
  __int64 v38; // [rsp+18h] [rbp-C0h]
  __int64 v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+28h] [rbp-B0h]
  __int128 v41; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-98h]
  __int128 v43; // [rsp+48h] [rbp-90h] BYREF
  __int64 v44; // [rsp+58h] [rbp-80h]
  __int128 v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+70h] [rbp-68h]
  __int128 v47; // [rsp+78h] [rbp-60h]
  __int64 v48; // [rsp+88h] [rbp-50h]
  __int128 v49; // [rsp+90h] [rbp-48h]
  __int64 v50; // [rsp+A0h] [rbp-38h]

  v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          a3,
          a5,
          a6);
  if ( !v13 )
    core::str::slice_error_fail(a5, a6, 0LL, a3, &off_251C50);
  v15 = v13;
  v38 = v14;
  v16 = v14 + v13;
  v40 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v13, v14 + v13);
  v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          a3,
          a4,
          a5,
          a6);
  if ( !v17 )
    core::str::slice_error_fail(a5, a6, a3, a4, &off_251C68);
  v39 = v18;
  v37 = v17;
  v19 = v40 + <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v17, v18 + v17);
  if ( *(_BYTE *)(a2 + 90) )
  {
    v20 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v15, v16);
    started = core::str::<impl str>::trim_start_matches(v15, v38, a9, a10);
    v23 = core::str::<impl str>::trim_start_matches(started, v22);
    v25 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v23, v24 + v23);
    v26 = a7;
    v27 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
            v20 - v25,
            v20,
            a7,
            a8,
            &off_251C98);
  }
  else
  {
    v27 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v40, a7, a8, &off_251C80);
    v26 = a7;
  }
  v30 = v27;
  v31 = v28;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v41, v37, v39, v29);
  v34 = a8 - v19;
  if ( a8 < v19 )
    core::slice::index::slice_start_index_len_fail(v19, a8, &off_251CB0, v32, v33, v34);
  uu_ptx::get_output_chunks((__int64)&v43, v30, v31, v42, v26 + 4 * v19, v34, (_QWORD *)a2);
  *(_QWORD *)(a1 + 16) = v44;
  *(_OWORD *)a1 = v43;
  *(_QWORD *)(a1 + 40) = v46;
  *(_OWORD *)(a1 + 24) = v45;
  *(_QWORD *)(a1 + 88) = v48;
  *(_OWORD *)(a1 + 72) = v47;
  *(_QWORD *)(a1 + 112) = v50;
  *(_OWORD *)(a1 + 96) = v49;
  result = v42;
  *(_QWORD *)(a1 + 64) = v42;
  *(_OWORD *)(a1 + 48) = v41;
  return result;
}