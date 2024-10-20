__int64 __fastcall uu_test::parser::Parser::maybe_boolop(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r15
  __int128 *v8; // rax
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  char *v15; // rax
  char *v16; // rcx
  const char *v17; // rsi
  _BYTE v19[48]; // [rsp+0h] [rbp-248h] BYREF
  __int128 v20; // [rsp+30h] [rbp-218h] BYREF
  __int128 v21; // [rsp+40h] [rbp-208h]
  __int64 v22; // [rsp+50h] [rbp-1F8h]
  __int128 v23; // [rsp+58h] [rbp-1F0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-1E0h]
  __int64 v25; // [rsp+78h] [rbp-1D0h]
  __int128 v26; // [rsp+80h] [rbp-1C8h]
  __int128 v27; // [rsp+90h] [rbp-1B8h]
  __int64 v28; // [rsp+A0h] [rbp-1A8h]
  __int64 v29; // [rsp+A8h] [rbp-1A0h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-188h]
  __int128 v32; // [rsp+D0h] [rbp-178h]
  __int128 v33; // [rsp+E0h] [rbp-168h]
  __int64 v34; // [rsp+F0h] [rbp-158h]
  __int128 v35; // [rsp+100h] [rbp-148h] BYREF
  __int64 v36; // [rsp+110h] [rbp-138h]
  _QWORD v37[5]; // [rsp+118h] [rbp-130h] BYREF
  __int64 v38; // [rsp+140h] [rbp-108h] BYREF
  __int128 v39; // [rsp+148h] [rbp-100h]
  __int64 v40; // [rsp+158h] [rbp-F0h]
  __int64 v41; // [rsp+168h] [rbp-E0h] BYREF
  char v42; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+188h] [rbp-C0h] BYREF
  char v44; // [rsp+190h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+1A8h] [rbp-A0h] BYREF
  char v46; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+1C8h] [rbp-80h] BYREF
  char v48; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v49; // [rsp+1E8h] [rbp-60h] BYREF
  char v50; // [rsp+1F0h] [rbp-58h] BYREF
  __int128 v51; // [rsp+210h] [rbp-38h] BYREF
  __int64 v52; // [rsp+220h] [rbp-28h]

  uu_test::parser::Parser::peek((__int64)v19, a2);
  v3 = *(_QWORD *)v19;
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v19);
  if ( v3 != 2 )
  {
    *(_QWORD *)a1 = 7LL;
    return a1;
  }
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v4 == 0x8000000000000001LL )
  {
    v5 = *(_QWORD *)(a2 + 56);
    if ( v5 == *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)v19 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v5 + 24;
      *(_QWORD *)&v19[16] = *(_QWORD *)(v5 + 16);
      *(_OWORD *)v19 = *(_OWORD *)v5;
    }
  }
  else
  {
    *(_OWORD *)&v19[8] = *(_OWORD *)(a2 + 32);
    *(_QWORD *)v19 = v4;
  }
  uu_test::parser::Symbol::new((__int64)&v23, v19);
  uu_test::parser::Parser::peek((__int64)v37, a2);
  if ( v37[0] == 6LL )
  {
    v34 = v25;
    v33 = v24;
    v32 = v23;
    switch ( (__int64)v23 )
    {
      case 0LL:
        v17 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
        goto LABEL_30;
      case 1LL:
        v17 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_30:
        std::sys::os_str::bytes::Slice::to_owned(v19, v17, 1LL);
        goto LABEL_31;
      case 2LL:
      case 3LL:
        v6 = 8LL;
        goto LABEL_23;
      case 4LL:
      case 5LL:
        v6 = 16LL;
LABEL_23:
        *(_QWORD *)&v19[16] = *(_QWORD *)((char *)&v33 + v6);
        *(_OWORD *)v19 = *(__int128 *)((char *)&v32 + v6);
LABEL_31:
        v40 = *(_QWORD *)&v19[16];
        v39 = *(_OWORD *)v19;
        v38 = 3LL;
        uu_test::parser::Parser::literal(&v41, a2, &v38);
        v7 = v41;
        if ( v41 == 7 )
          goto LABEL_32;
        v15 = &v42;
        break;
      case 6LL:
        uu_test::parser::Symbol::into_literal::panic_cold_explicit();
    }
    goto LABEL_34;
  }
  v22 = v25;
  v21 = v24;
  v20 = v23;
  std::sys::os_str::bytes::Slice::to_owned(
    v19,
    "-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
    2LL);
  v31 = *(_QWORD *)&v19[16];
  v30 = *(_OWORD *)v19;
  v29 = 2LL;
  if ( (_QWORD)v20 == 2LL
    && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq>::eq((char *)&v20 + 8, &v30) )
  {
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v29);
    uu_test::parser::Parser::term((__int64)&v45, a2);
    v7 = v45;
    if ( v45 != 7 )
    {
      v8 = (__int128 *)&v46;
LABEL_27:
      v36 = *((_QWORD *)v8 + 2);
      v35 = *v8;
      core::ptr::drop_in_place<uu_test::parser::Symbol>(&v20);
      v15 = (char *)&v35;
      goto LABEL_34;
    }
    goto LABEL_18;
  }
  core::ptr::drop_in_place<uu_test::parser::Symbol>(&v29);
  uu_test::parser::Parser::peek((__int64)v19, a2);
  v9 = *(_QWORD *)v19;
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v19);
  if ( v9 != 2 )
  {
    uu_test::parser::Parser::term((__int64)&v47, a2);
    v7 = v47;
    if ( v47 != 7 )
    {
      v16 = &v48;
      goto LABEL_26;
    }
  }
  uu_test::parser::Parser::maybe_boolop(&v49, a2);
  v7 = v49;
  if ( v49 != 7 )
  {
    v16 = &v50;
LABEL_26:
    v8 = &v51;
    v52 = *((_QWORD *)v16 + 2);
    v51 = *(_OWORD *)v16;
    goto LABEL_27;
  }
LABEL_18:
  v28 = v22;
  v27 = v21;
  v26 = v20;
  v10 = *(_QWORD *)(a2 + 16);
  if ( v10 == *(_QWORD *)a2 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = 5 * v10;
  v13 = v26;
  v14 = v27;
  *(_QWORD *)(v11 + 8 * v12 + 32) = v28;
  *(_OWORD *)(v11 + 8 * v12 + 16) = v14;
  *(_OWORD *)(v11 + 8 * v12) = v13;
  *(_QWORD *)(a2 + 16) = v10 + 1;
  uu_test::parser::Parser::maybe_boolop(&v43, a2);
  v7 = v43;
  if ( v43 != 7 )
  {
    v15 = &v44;
LABEL_34:
    *(_QWORD *)a1 = v7;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v15;
    *(_QWORD *)(a1 + 24) = *((_QWORD *)v15 + 2);
    core::ptr::drop_in_place<uu_test::parser::Symbol>(v37);
    return a1;
  }
LABEL_32:
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v37);
  *(_QWORD *)a1 = 7LL;
  return a1;
}
