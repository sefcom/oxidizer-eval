__int64 __fastcall uu_test::parser::parse(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // r14
  __int64 *v6; // r14
  __int64 v7; // rax
  signed __int64 v8; // rcx
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  char v14; // al
  __int128 v15; // [rsp+8h] [rbp-120h] BYREF
  __int64 v16; // [rsp+18h] [rbp-110h]
  signed __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  char v18; // [rsp+28h] [rbp-100h] BYREF
  char v19[8]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-F0h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-E8h]
  __int64 v22; // [rsp+48h] [rbp-E0h]
  _QWORD *v23; // [rsp+50h] [rbp-D8h]
  __int64 v24; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-C8h]
  __int64 v26; // [rsp+68h] [rbp-C0h]
  __int128 *v27; // [rsp+78h] [rbp-B0h]
  __int64 (__fastcall **v28)(); // [rsp+80h] [rbp-A8h]
  __int64 v29; // [rsp+88h] [rbp-A0h]
  char v30; // [rsp+90h] [rbp-98h]
  signed __int64 v31; // [rsp+98h] [rbp-90h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-68h]
  __int128 v35; // [rsp+D0h] [rbp-58h]
  __int64 v36; // [rsp+E0h] [rbp-48h]
  __int64 v37; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-30h]
  __int64 v39; // [rsp+100h] [rbp-28h]

  v2 = *a2;
  v3 = (_QWORD *)a2[1];
  v4 = &v3[3 * a2[2]];
  v17 = 0x8000000000000001LL;
  v20 = v3;
  v21 = v3;
  v22 = v2;
  v23 = v4;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 8LL;
  v16 = 0LL;
  uu_test::parser::Parser::peek((__int64)&v24, (__int64)&v15);
  v5 = v24;
  core::ptr::drop_in_place<uu_test::parser::Symbol>(&v24);
  if ( v5 != 2
    && (v6 = (__int64 *)&v33, uu_test::parser::Parser::term((__int64)&v33, (__int64)&v15), v7 = v33, (_QWORD)v33 != 7LL)
    || (v6 = &v37, uu_test::parser::Parser::maybe_boolop((__int64)&v37, (__int64)&v15), v7 = v37, v37 != 7) )
  {
    v36 = v6[3];
    v35 = *(_OWORD *)(v6 + 1);
    goto LABEL_8;
  }
  v8 = v17;
  v17 = 0x8000000000000001LL;
  if ( v8 != 0x8000000000000001LL )
  {
    v10 = (__int128 *)&v18;
    goto LABEL_11;
  }
  v9 = v21;
  if ( v21 != v23 )
  {
    v21 += 3;
    v8 = *v9;
    v10 = (__int128 *)(v9 + 1);
LABEL_11:
    if ( v8 == 0x8000000000000000LL )
      goto LABEL_12;
    v31 = v8;
    v32 = *v10;
    v12 = v32;
    if ( !(_QWORD)v32 || (v13 = *((_QWORD *)&v32 + 1), v32 < 0) )
      core::panicking::panic_nounwind(
        "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the "
        "total size of the slice not to exceed `isize::MAX`expected valueexpected extra argument missing argument after u"
        "nknown operator : unary operator expected(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
        162LL);
    *(_QWORD *)&v33 = 0LL;
    *((_QWORD *)&v33 + 1) = 1LL;
    v34 = 0LL;
    v29 = 32LL;
    v30 = 3;
    v24 = 0LL;
    v26 = 0LL;
    v27 = &v33;
    v28 = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
    std::sys::os_str::bytes::Slice::to_str(&v37);
    if ( v37 || !v38 )
      v14 = os_display::unix::write_escaped(&v24, v12, v13);
    else
      v14 = os_display::unix::write(&v24, v38, v39, 1LL);
    if ( v14 )
      core::result::unwrap_failed(
        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
        55LL,
        &v37,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
    v35 = v33;
    v36 = v34;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v24, &v31);
    if ( v25 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate((char *)&v32 + 8, v24, v25, v26);
    v7 = 2LL;
LABEL_8:
    *(_QWORD *)a1 = v7;
    *(_OWORD *)(a1 + 8) = v35;
    *(_QWORD *)(a1 + 24) = v36;
    core::ptr::drop_in_place<uu_test::parser::Parser>(&v15);
    return a1;
  }
LABEL_12:
  *(_QWORD *)(a1 + 24) = v16;
  *(_OWORD *)(a1 + 8) = v15;
  *(_QWORD *)a1 = 7LL;
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v20);
  if ( v17 >= (__int64)0x8000000000000002LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v24, &v17);
    if ( v25 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v19, v24, v25, v26);
  }
  return a1;
}
