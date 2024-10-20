__int64 __fastcall uu_test::parser::Parser::expect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v5; // [rsp+7h] [rbp-D1h] BYREF
  __int64 v6; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 *v10; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall **v11)(); // [rsp+58h] [rbp-80h]
  __int64 v12; // [rsp+60h] [rbp-78h]
  char v13; // [rsp+68h] [rbp-70h]
  __int128 v14; // [rsp+78h] [rbp-60h] BYREF
  __int64 v15; // [rsp+88h] [rbp-50h]
  __int128 v16; // [rsp+90h] [rbp-48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-28h]
  __int64 v19; // [rsp+C0h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v2 == 0x8000000000000001LL )
  {
    v3 = *(_QWORD *)(a2 + 56);
    if ( v3 == *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)v9 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v3 + 24;
      *(_QWORD *)&v9[16] = *(_QWORD *)(v3 + 16);
      *(_OWORD *)v9 = *(_OWORD *)v3;
    }
  }
  else
  {
    *(_OWORD *)&v9[8] = *(_OWORD *)(a2 + 32);
    *(_QWORD *)v9 = v2;
  }
  uu_test::parser::Symbol::new((__int64)&v6, v9);
  if ( v6 == 3 )
  {
    if ( !*((_QWORD *)&v7 + 1) || v8 < 0 )
      core::panicking::panic_nounwind(
        "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the "
        "total size of the slice not to exceed `isize::MAX`expected valueexpected extra argument missing argument after u"
        "nknown operator : unary operator expected(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
        162LL);
    if ( v8 == 1 && **((_BYTE **)&v7 + 1) == 41 )
    {
      v17 = v8;
      v16 = v7;
      *(_QWORD *)a1 = 7LL;
      alloc::raw_vec::RawVec<T,A>::current_memory(v9, &v16);
      if ( *(_QWORD *)&v9[8] )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
          &v17,
          *(_QWORD *)v9,
          *(_QWORD *)&v9[8],
          *(_QWORD *)&v9[16]);
      if ( v6 == 3 )
        return a1;
LABEL_19:
      core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
      return a1;
    }
  }
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  v12 = 32LL;
  v13 = 3;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[16] = 0LL;
  v10 = &v14;
  v11 = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
  if ( (unsigned __int8)os_display::unix::write(v9, ")description() is deprecated; use Display", 1LL, 1LL) )
    core::result::unwrap_failed(
      anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
      55LL,
      &v5,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
  v18 = v14;
  v19 = v15;
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 24) = v19;
  *(_OWORD *)(a1 + 8) = v18;
  if ( v6 != 3 )
    goto LABEL_19;
  alloc::raw_vec::RawVec<T,A>::current_memory(v9, &v7);
  if ( *(_QWORD *)&v9[8] )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
      &v8,
      *(_QWORD *)v9,
      *(_QWORD *)&v9[8],
      *(_QWORD *)&v9[16]);
  return a1;
}
