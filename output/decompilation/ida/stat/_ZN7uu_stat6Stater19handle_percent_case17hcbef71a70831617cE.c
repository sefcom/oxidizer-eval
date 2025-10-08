unsigned __int64 __fastcall uu_stat::Stater::handle_percent_case(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdi
  unsigned __int64 *v26; // rdx
  int v27; // eax
  unsigned __int64 *v28; // r14
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r8
  char **v32; // r8
  int v33; // [rsp+8h] [rbp-110h] BYREF
  __int16 v34; // [rsp+Ch] [rbp-10Ch]
  __int64 v35; // [rsp+10h] [rbp-108h]
  unsigned __int64 v36; // [rsp+18h] [rbp-100h]
  __int128 v37; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 *v38; // [rsp+30h] [rbp-E8h]
  __int64 v39; // [rsp+38h] [rbp-E0h]
  __int64 v40; // [rsp+40h] [rbp-D8h]
  __int64 v41; // [rsp+58h] [rbp-C0h]
  __int64 v42; // [rsp+60h] [rbp-B8h]
  unsigned __int64 *v43; // [rsp+68h] [rbp-B0h]
  char v44[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+88h] [rbp-90h] BYREF
  __int128 v47; // [rsp+90h] [rbp-88h]
  __int64 (__fastcall *v48)(); // [rsp+A0h] [rbp-78h]
  int v49; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-68h]
  __int64 v51; // [rsp+B8h] [rbp-60h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 *v54; // [rsp+E0h] [rbp-38h]

  v7 = *a4;
  result = *a4 + 1;
  *a4 = result;
  if ( result >= a5 )
    goto LABEL_5;
  if ( result >= a3 )
    core::panicking::panic_bounds_check(result, a3, &off_119D60);
  if ( *(_DWORD *)(a2 + 4 * v7 + 4) == 37 )
  {
    *a4 = v7 + 2;
LABEL_5:
    *(_QWORD *)a1 = 3LL;
    *(_DWORD *)(a1 + 8) = 37;
    return result;
  }
  v35 = a1;
  v34 = 0;
  v33 = 0;
  v36 = a3;
  uu_stat::Stater::process_flags(a2, a3, a4, a5, &v33);
  v43 = a4;
  v13 = *a4;
  v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v13,
          a6,
          a7);
  if ( !v14 )
  {
    v32 = &off_119D78;
    goto LABEL_39;
  }
  <str as uu_stat::ScanUtil>::scan_num(&v49, v14);
  if ( (v49 & 1) != 0 )
  {
    v13 += v51;
    if ( v13 >= a5 )
      goto LABEL_11;
    if ( v13 >= v36 )
      core::panicking::panic_bounds_check(v13, v36, &off_119D90);
    if ( *(_DWORD *)(a2 + 4 * v13) == 37 )
    {
LABEL_11:
      v15 = core::cmp::Ord::min(v13, a5 - 1);
      *(_QWORD *)&v37 = v7;
      *((_QWORD *)&v37 + 1) = v15;
      LOBYTE(v38) = 0;
      v16 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v37, a2, v36);
      core::iter::traits::iterator::Iterator::collect(v44, v16, v16 + 4 * v17);
      v46 = 0LL;
      v47 = v45;
      LOBYTE(v48) = 1;
      v52[0] = &v46;
      v52[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &unk_1199E0;
      *((_QWORD *)&v37 + 1) = 2LL;
      v40 = 0LL;
      v38 = v52;
      v39 = 1LL;
      core::option::Option<T>::map_or_else(&v53, &v37);
      LODWORD(v39) = 1;
      v37 = v53;
      v38 = v54;
      v18 = alloc::boxed::Box<T>::new(&v37);
      v19 = (_QWORD *)v35;
      *(_QWORD *)(v35 + 8) = v18;
      v19[2] = &off_119A38;
      *v19 = 5LL;
      return core::ptr::drop_in_place<alloc::string::String>(v44);
    }
    v41 = v50;
  }
  else
  {
    v41 = 0LL;
  }
  v20 = uu_stat::check_bound(a6, a7, a5, v7, v13);
  if ( v20 )
    goto LABEL_15;
  v22 = v36;
  if ( v13 >= v36 )
    core::panicking::panic_bounds_check(v13, v36, &off_119DC0);
  if ( *(_DWORD *)(a2 + 4 * v13) != 46 )
  {
    v25 = a2;
    v24 = 0LL;
    v21 = v35;
    v26 = v43;
    goto LABEL_25;
  }
  v20 = uu_stat::check_bound(a6, a7, a5, v7, ++v13);
  if ( v20 )
  {
LABEL_15:
    v21 = v35;
LABEL_16:
    *(_QWORD *)(v21 + 8) = v20;
    result = (unsigned __int64)&off_119A38;
    *(_QWORD *)(v21 + 16) = &off_119A38;
    *(_QWORD *)v21 = 5LL;
    return result;
  }
  v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v13,
          a6,
          a7);
  if ( !v23 )
  {
    v32 = &off_119DD8;
LABEL_39:
    core::str::slice_error_fail(a6, a7, v13, a7, v32);
  }
  <str as uu_stat::ScanUtil>::scan_num(&v37, v23);
  if ( (v37 & 1) != 0 )
  {
    v42 = DWORD2(v37);
    v24 = ((unsigned int)~DWORD2(v37) >> 30) & 0xFFFFFFFE;
    v13 += (unsigned __int64)v38;
  }
  else
  {
    v24 = 1LL;
  }
  v20 = uu_stat::check_bound(a6, a7, a5, v7, v13);
  v21 = v35;
  v22 = v36;
  v26 = v43;
  v25 = a2;
  if ( v20 )
    goto LABEL_16;
LABEL_25:
  *v26 = v13;
  if ( v13 + 1 < v22 && v13 + 1 < a5 )
  {
    v27 = *(_DWORD *)(v25 + 4 * v13 + 4);
    v49 = v27;
    if ( v13 >= v22 )
      core::panicking::panic_bounds_check(v13, v22, &off_119DF0);
    if ( (*(_DWORD *)(v25 + 4 * v13) | 4) == 0x4C && (v27 == 114 || v27 == 100) )
    {
      v46 = v25 + 4 * v13;
      *(_QWORD *)&v47 = <char as core::fmt::Display>::fmt;
      *((_QWORD *)&v47 + 1) = &v49;
      v48 = <char as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &unk_1CFD0;
      *((_QWORD *)&v37 + 1) = 2LL;
      v40 = 0LL;
      v38 = &v46;
      v39 = 2LL;
      v28 = v26;
      core::option::Option<T>::map_or_else(v44, &v37);
      *v28 = v13 + 1;
      *(_QWORD *)&v37 = v45;
      *((_QWORD *)&v37 + 1) = v45 + *((_QWORD *)&v45 + 1);
      if ( (core::str::validations::next_code_point(&v37) & 1) == 0 || v29 == (_DWORD)&loc_110000 )
        core::option::unwrap_failed(&off_119E08);
      v30 = v35;
      *(_WORD *)(v35 + 32) = v34;
      *(_DWORD *)(v30 + 28) = v33;
      *(_QWORD *)v30 = v24;
      *(_QWORD *)(v30 + 8) = v42;
      *(_QWORD *)(v30 + 16) = v41;
      *(_DWORD *)(v30 + 24) = v29;
      return core::ptr::drop_in_place<alloc::string::String>(v44);
    }
  }
  v31 = v42;
  if ( v13 >= v22 )
    core::panicking::panic_bounds_check(v13, v22, &off_119E20);
  result = *(unsigned int *)(v25 + 4 * v13);
  *(_WORD *)(v21 + 32) = v34;
  *(_DWORD *)(v21 + 28) = v33;
  *(_QWORD *)v21 = v24;
  *(_QWORD *)(v21 + 8) = v31;
  *(_QWORD *)(v21 + 16) = v41;
  *(_DWORD *)(v21 + 24) = result;
  return result;
}