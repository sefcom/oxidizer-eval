__int64 __fastcall bat::preprocessor::expand_tabs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rbx
  __int128 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 result; // rax
  _OWORD *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  char **v31; // r8
  __int64 v32; // [rsp+0h] [rbp-F8h]
  __int128 v33; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+18h] [rbp-E0h]
  __int64 v35; // [rsp+20h] [rbp-D8h]
  __int64 v36; // [rsp+28h] [rbp-D0h]
  __int128 v37; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-B8h]
  __int64 v39; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-A8h]
  __int64 v41; // [rsp+58h] [rbp-A0h]
  __int64 v42; // [rsp+60h] [rbp-98h]
  __int64 v43; // [rsp+68h] [rbp-90h]
  __int64 v44; // [rsp+70h] [rbp-88h]
  _QWORD v45[6]; // [rsp+78h] [rbp-80h] BYREF
  int v46; // [rsp+A8h] [rbp-50h]
  __int128 v47; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-38h]

  v8 = a2;
  v35 = a1;
  *(_QWORD *)&v9 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(2 * a3, 1LL, 1LL, &off_6CD180);
  v33 = v9;
  v34 = 0LL;
  v45[0] = a2;
  v32 = a3;
  v45[1] = a3;
  v45[2] = a2;
  v45[3] = a2 + a3;
  v45[4] = 0LL;
  v46 = 1114113;
  v36 = a2;
  while ( 1 )
  {
    <bat::vscreen::EscapeSequenceOffsetsIterator as core::iter::traits::iterator::Iterator>::next(&v39, v45);
    if ( v39 == 5 )
      break;
    v11 = v40;
    v12 = v41;
    switch ( v39 )
    {
      case 0LL:
        v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v40,
                v41,
                v8,
                v32);
        if ( !v13 )
        {
          v31 = &off_6CE8F8;
          v29 = v32;
LABEL_24:
          core::str::slice_error_fail(v8, v29, v11, v12, v31);
        }
        v15 = v14;
        while ( 1 )
        {
          v16 = v13;
          v18 = v15;
          if ( (core::str::<impl str>::find(v13, v15) & 1) == 0 )
            break;
          v12 = v17;
          v19 = *a5;
          if ( v17 )
          {
            *a5 = v17 + v19;
            v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    0LL,
                    v17,
                    v16,
                    v15);
            if ( !v20 )
            {
              v29 = v15;
              v8 = v16;
              v11 = 0LL;
              v31 = &off_6CE910;
              goto LABEL_24;
            }
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v33,
              v20,
              v20 + v21);
            v19 = *a5;
          }
          if ( (a4 | v19) >> 32 )
            v22 = v19 % a4;
          else
            v22 = (unsigned int)v19 % (unsigned int)a4;
          *a5 = a4 - v22 + v19;
          alloc::slice::<impl [T]>::repeat(&v47, asc_9FF9F, 1LL, a4 - v22);
          v38 = v48;
          v37 = v47;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v33,
            *((_QWORD *)&v47 + 1),
            *((_QWORD *)&v47 + 1) + v48);
          core::ptr::drop_in_place<alloc::string::String>(&v37);
          v23 = v12 + 1;
          v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v23,
                  v15,
                  v16,
                  v15);
          v15 = v24;
          if ( !v13 )
          {
            v29 = v18;
            v30 = v23;
            v12 = v18;
            v8 = v16;
            v11 = v30;
            v31 = &off_6CE928;
            goto LABEL_24;
          }
        }
        *a5 += v15;
        v10 = v16 + v15;
        v8 = v36;
        break;
      case 1LL:
        goto LABEL_20;
      case 2LL:
        v12 = v42;
        goto LABEL_20;
      case 3LL:
        v12 = v43;
        goto LABEL_20;
      case 4LL:
        v12 = v44;
LABEL_20:
        v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v40,
                v12,
                v8,
                v32);
        if ( !v25 )
        {
          v29 = v32;
          v31 = &off_6CE940;
          goto LABEL_24;
        }
        v16 = v25;
        v10 = v25 + v26;
        break;
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v33,
      v16,
      v10);
  }
  result = v34;
  v28 = (_OWORD *)v35;
  *(_QWORD *)(v35 + 16) = v34;
  *v28 = v33;
  return result;
}