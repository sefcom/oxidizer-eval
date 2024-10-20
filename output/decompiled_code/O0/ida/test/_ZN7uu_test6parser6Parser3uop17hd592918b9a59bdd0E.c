__int64 __fastcall uu_test::parser::Parser::uop(__int64 a1, __int128 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 result; // rax
  const char *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _BYTE v25[24]; // [rsp+0h] [rbp-138h] BYREF
  __int128 v26; // [rsp+20h] [rbp-118h]
  __int128 v27; // [rsp+30h] [rbp-108h]
  __int64 v28; // [rsp+40h] [rbp-F8h]
  _OWORD v29[2]; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-D0h]
  __m256i v31; // [rsp+70h] [rbp-C8h]
  __int64 v32; // [rsp+90h] [rbp-A8h]
  __m256i v33; // [rsp+98h] [rbp-A0h]
  __int64 v34; // [rsp+B8h] [rbp-80h]
  __int128 v35; // [rsp+C0h] [rbp-78h]
  __int128 v36; // [rsp+D0h] [rbp-68h]
  __int64 v37; // [rsp+E0h] [rbp-58h]
  __int128 v38; // [rsp+F0h] [rbp-48h]
  __int128 v39; // [rsp+100h] [rbp-38h]
  __int64 v40; // [rsp+110h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0x8000000000000001LL;
  if ( v3 == 0x8000000000000001LL )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 == *(_QWORD *)(a1 + 72) )
    {
      *(_QWORD *)v25 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4 + 24;
      *(_QWORD *)&v25[16] = *(_QWORD *)(v4 + 16);
      *(_OWORD *)v25 = *(_OWORD *)v4;
    }
  }
  else
  {
    *(_OWORD *)&v25[8] = *(_OWORD *)(a1 + 32);
    *(_QWORD *)v25 = v3;
  }
  uu_test::parser::Symbol::new((__int64)v29, v25);
  if ( *(_QWORD *)&v29[0] == 6LL )
  {
    v37 = *((_QWORD *)a2 + 4);
    v5 = *a2;
    v36 = a2[1];
    v35 = v5;
    switch ( (__int64)v5 )
    {
      case 0LL:
        v8 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
        goto LABEL_17;
      case 1LL:
        v8 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_17:
        std::sys::os_str::bytes::Slice::to_owned(v25, v8, 1LL);
        goto LABEL_18;
      case 2LL:
      case 3LL:
        v6 = 8LL;
        goto LABEL_12;
      case 4LL:
      case 5LL:
        v6 = 16LL;
LABEL_12:
        *(_QWORD *)&v25[16] = *(_QWORD *)((char *)&v36 + v6);
        *(_OWORD *)v25 = *(__int128 *)((char *)&v35 + v6);
LABEL_18:
        v31.m256i_i64[3] = *(_QWORD *)&v25[16];
        *(_OWORD *)&v31.m256i_u64[1] = *(_OWORD *)v25;
        v31.m256i_i64[0] = 3LL;
        v9 = *(_QWORD *)(a1 + 16);
        if ( v9 == *(_QWORD *)a1 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a1);
        v10 = *(_QWORD *)(a1 + 8);
        v11 = 5 * v9;
        v12 = *(_OWORD *)v31.m256i_i8;
        v13 = *(_OWORD *)&v31.m256i_u64[2];
        *(_QWORD *)(v10 + 8 * v11 + 32) = v32;
        *(_OWORD *)(v10 + 8 * v11 + 16) = v13;
        *(_OWORD *)(v10 + 8 * v11) = v12;
        *(_QWORD *)(a1 + 16) = v9 + 1;
        result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v29);
        break;
      case 6LL:
        uu_test::parser::Symbol::into_literal::panic_cold_explicit();
    }
  }
  else
  {
    v40 = v30;
    v39 = v29[1];
    v38 = v29[0];
    switch ( *(_QWORD *)&v29[0] )
    {
      case 0LL:
        v15 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
        goto LABEL_23;
      case 1LL:
        v15 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_23:
        std::sys::os_str::bytes::Slice::to_owned(v25, v15, 1LL);
        goto LABEL_24;
      case 2LL:
      case 3LL:
        v7 = 8LL;
        goto LABEL_14;
      case 4LL:
      case 5LL:
        v7 = 16LL;
LABEL_14:
        *(_QWORD *)&v25[16] = *(_QWORD *)((char *)&v39 + v7);
        *(_OWORD *)v25 = *(__int128 *)((char *)&v38 + v7);
LABEL_24:
        v33.m256i_i64[3] = *(_QWORD *)&v25[16];
        *(_OWORD *)&v33.m256i_u64[1] = *(_OWORD *)v25;
        v33.m256i_i64[0] = 3LL;
        v16 = *(_QWORD *)(a1 + 16);
        if ( v16 == *(_QWORD *)a1 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a1);
        v17 = *(_QWORD *)(a1 + 8);
        v18 = 5 * v16;
        v19 = *(_OWORD *)v33.m256i_i8;
        v20 = *(_OWORD *)&v33.m256i_u64[2];
        *(_QWORD *)(v17 + 8 * v18 + 32) = v34;
        *(_OWORD *)(v17 + 8 * v18 + 16) = v20;
        *(_OWORD *)(v17 + 8 * v18) = v19;
        *(_QWORD *)(a1 + 16) = v16 + 1;
        v28 = *((_QWORD *)a2 + 4);
        v21 = *a2;
        v27 = a2[1];
        v26 = v21;
        if ( v16 + 1 == *(_QWORD *)a1 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a1);
        result = *(_QWORD *)(a1 + 8);
        v22 = 5 * (v16 + 1);
        v23 = v26;
        v24 = v27;
        *(_QWORD *)(result + 8 * v22 + 32) = v28;
        *(_OWORD *)(result + 8 * v22 + 16) = v24;
        *(_OWORD *)(result + 8 * v22) = v23;
        *(_QWORD *)(a1 + 16) = v16 + 2;
        break;
      case 6LL:
        uu_test::parser::Symbol::into_literal::panic_cold_explicit();
    }
  }
  return result;
}
