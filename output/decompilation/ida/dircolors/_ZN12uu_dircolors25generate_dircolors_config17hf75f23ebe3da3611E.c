_OWORD *__fastcall uu_dircolors::generate_dircolors_config(__int64 a1)
{
  __int64 i; // rax
  __int64 slice; // rax
  __int64 v3; // rax
  __int64 j; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 k; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _OWORD *result; // rax
  char **v12; // [rsp+0h] [rbp-108h] BYREF
  char **v13; // [rsp+8h] [rbp-100h]
  __int64 v14; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-E0h]
  __int128 v17; // [rsp+30h] [rbp-D8h] BYREF
  __int64 **v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-98h]
  __int64 *v24; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall *v25)(); // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-78h] BYREF
  __int64 **v28; // [rsp+A0h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 **v30; // [rsp+B8h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-48h] BYREF
  __int64 **v32; // [rsp+D0h] [rbp-38h]

  v26 = a1;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 1LL;
  v16 = 0LL;
  alloc::vec::Vec<T,A>::append_elements(&v15, aConfigurationF);
  alloc::vec::Vec<T,A>::append_elements(&v15, aColorterm_0);
  v12 = &anon_84df56382e2e566cd8a063a5d0153d3b_47_llvm_4004663911042702431;
  v13 = &anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12) )
  {
    v14 = i;
    v22 = &v14;
    v23 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_127238;
    *((_QWORD *)&v17 + 1) = 2LL;
    v20 = 0LL;
    v18 = &v22;
    v19 = 1LL;
    core::option::Option<T>::map_or_else(&v27, &v17);
    v17 = v27;
    v18 = v28;
    slice = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v27 + 1), (char *)v28 + *((_QWORD *)&v27 + 1));
    alloc::vec::Vec<T,A>::append_elements(&v15, slice);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  v3 = core::slice::iter::Iter<T>::make_slice(&unk_23720, aTerm_1);
  alloc::vec::Vec<T,A>::append_elements(&v15, v3);
  v12 = &anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431;
  v13 = &anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431;
  for ( j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        j;
        j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12) )
  {
    v21 = j;
    v14 = j + 32;
    v22 = &v21;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v14;
    v25 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &unk_127258;
    *((_QWORD *)&v17 + 1) = 3LL;
    v20 = 0LL;
    v18 = &v22;
    v19 = 2LL;
    core::option::Option<T>::map_or_else(&v29, &v17);
    v17 = v29;
    v18 = v30;
    v5 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v29 + 1), (char *)v30 + *((_QWORD *)&v29 + 1));
    alloc::vec::Vec<T,A>::append_elements(&v15, v5);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  v6 = core::slice::iter::Iter<T>::make_slice(&unk_23993, asc_239DA);
  alloc::vec::Vec<T,A>::append_elements(&v15, v6);
  v7 = core::slice::iter::Iter<T>::make_slice(&unk_239DB, aSubsequentTerm);
  alloc::vec::Vec<T,A>::append_elements(&v15, v7);
  v12 = &anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431;
  v13 = &off_1291B8;
  for ( k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
        k;
        k = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12) )
  {
    v21 = k;
    v14 = k + 16;
    v22 = &v21;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v14;
    v25 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &unk_127258;
    *((_QWORD *)&v17 + 1) = 3LL;
    v20 = 0LL;
    v18 = &v22;
    v19 = 2LL;
    core::option::Option<T>::map_or_else(&v31, &v17);
    v17 = v31;
    v18 = v32;
    v9 = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v31 + 1), (char *)v32 + *((_QWORD *)&v31 + 1));
    alloc::vec::Vec<T,A>::append_elements(&v15, v9);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  alloc::vec::Vec<T,A>::append_elements(&v15, aSubsequentTerm);
  v10 = core::slice::iter::Iter<T>::make_slice(&unk_23A6A, jpt_BEA49);
  alloc::vec::Vec<T,A>::append_elements(&v15, v10);
  result = (_OWORD *)v26;
  *(_QWORD *)(v26 + 16) = v16;
  *result = v15;
  return result;
}
