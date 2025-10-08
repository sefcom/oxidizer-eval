_OWORD *__fastcall bat::controller::Controller::print_file(
        _OWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        _QWORD *a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  unsigned __int64 v17; // r12
  unsigned int *i; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  bool v21; // cf
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v31; // [rsp+0h] [rbp-108h] BYREF
  __int64 v32; // [rsp+8h] [rbp-100h]
  __int64 v33; // [rsp+10h] [rbp-F8h]
  __int128 v34; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v35; // [rsp+28h] [rbp-E0h]
  __int128 v36; // [rsp+38h] [rbp-D0h]
  __int128 v37; // [rsp+48h] [rbp-C0h]
  __int128 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h]
  __int128 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+B0h] [rbp-58h]
  _QWORD v47[10]; // [rsp+B8h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a6 + 56) || (unsigned __int8)bat::style::StyleComponents::header(*a2 + 192) )
  {
    (*(void (__fastcall **)(__int128 *, __int64, __int64, __int64, _QWORD))(a4 + 24))(&v34, a3, a5, a6, a7);
    if ( (_BYTE)v34 != 13 )
      goto LABEL_18;
  }
  if ( *(_QWORD *)(a6 + 56) )
  {
    v16 = *a2;
    if ( __OFSUB__(0LL, *(_QWORD *)(*a2 + 144)) )
    {
      v42 = *a2;
      v17 = *(_QWORD *)(v16 + 152);
      v31 = 0LL;
      v32 = 8LL;
      v33 = 0LL;
      if ( *a8 )
      {
        v39 = a3;
        v40 = a5;
        v41 = a4;
        hashbrown::map::HashMap<K,V,S,A>::iter(&v34, a8, v12, v13, v14, v15, v31, v32, v33);
        for ( i = (unsigned int *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v34);
              i;
              i = (unsigned int *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v34) )
        {
          v19 = *i;
          v20 = v17 + v19;
          v21 = v19 < v17;
          v22 = v19 - v17;
          if ( v21 )
            v22 = 0LL;
          v47[0] = 0LL;
          v47[1] = v22;
          v47[2] = 0LL;
          v47[3] = v20;
          alloc::vec::Vec<T,A>::push(&v31, v47, &off_6CE390);
        }
        a4 = v41;
        a5 = v40;
        a3 = v39;
      }
      bat::line_range::LineRanges::from(&v43, &v31, v12, v13);
      LODWORD(v16) = v42;
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v43, *(_QWORD *)(v16 + 152), *(_QWORD *)(v16 + 160));
      v23 = *(_QWORD *)(v16 + 184);
      v45 = *(_OWORD *)(v16 + 168);
      v46 = v23;
    }
    bat::controller::Controller::print_file_ranges(
      (unsigned int)&v34,
      v16,
      a3,
      *(_QWORD *)(a4 + 40),
      *(_QWORD *)(a4 + 48),
      a5,
      a6 + 40,
      (__int64)&v43);
    if ( (_BYTE)v34 != 13 )
    {
      a1[4] = v38;
      v27 = v34;
      v28 = v35;
      v29 = v36;
      a1[3] = v37;
      a1[2] = v29;
      a1[1] = v28;
      *a1 = v27;
      core::ptr::drop_in_place<bat::line_range::LineRanges>(v43, v44);
      return a1;
    }
    core::ptr::drop_in_place<bat::line_range::LineRanges>(v43, v44);
  }
  (*(void (__fastcall **)(__int128 *, __int64, __int64, __int64))(a4 + 32))(&v34, a3, a5, a6);
  if ( (_BYTE)v34 != 13 )
  {
LABEL_18:
    a1[4] = v38;
    v24 = v34;
    v25 = v35;
    v26 = v36;
    a1[3] = v37;
    a1[2] = v26;
    a1[1] = v25;
    *a1 = v24;
  }
  else
  {
    *(_BYTE *)a1 = 13;
  }
  return a1;
}