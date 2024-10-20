__int64 __fastcall uu_test::parser::Parser::literal(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  const char *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _BYTE v30[24]; // [rsp+0h] [rbp-198h] BYREF
  __int64 v31; // [rsp+18h] [rbp-180h]
  __int64 v32; // [rsp+20h] [rbp-178h]
  _QWORD v33[2]; // [rsp+30h] [rbp-168h] BYREF
  __int128 v34; // [rsp+40h] [rbp-158h]
  __int128 v35; // [rsp+50h] [rbp-148h]
  __int64 v36; // [rsp+60h] [rbp-138h]
  __m256i v37; // [rsp+68h] [rbp-130h]
  __int64 v38; // [rsp+88h] [rbp-110h]
  _OWORD v39[2]; // [rsp+90h] [rbp-108h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-E8h]
  __m256i v41; // [rsp+B8h] [rbp-E0h]
  __int64 v42; // [rsp+D8h] [rbp-C0h]
  __int128 v43; // [rsp+E0h] [rbp-B8h]
  __int128 v44; // [rsp+F0h] [rbp-A8h]
  __int64 v45; // [rsp+100h] [rbp-98h]
  _OWORD v46[2]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v47; // [rsp+130h] [rbp-68h]
  _QWORD v48[5]; // [rsp+138h] [rbp-60h] BYREF
  __int128 v49; // [rsp+160h] [rbp-38h] BYREF
  __int64 v50; // [rsp+170h] [rbp-28h]

  switch ( *a3 )
  {
    case 0LL:
      v5 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
      goto LABEL_7;
    case 1LL:
      v5 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_7:
      std::sys::os_str::bytes::Slice::to_owned(v30, v5, 1LL);
      goto LABEL_8;
    case 2LL:
    case 3LL:
      v4 = 1LL;
      goto LABEL_4;
    case 4LL:
    case 5LL:
      v4 = 2LL;
LABEL_4:
      *(_QWORD *)&v30[16] = a3[v4 + 2];
      *(_OWORD *)v30 = *(_OWORD *)&a3[v4];
LABEL_8:
      v37.m256i_i64[3] = *(_QWORD *)&v30[16];
      *(_OWORD *)&v37.m256i_u64[1] = *(_OWORD *)v30;
      v37.m256i_i64[0] = 3LL;
      v6 = *(_QWORD *)(a2 + 16);
      if ( v6 == *(_QWORD *)a2 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      v7 = *(_QWORD *)(a2 + 8);
      v8 = 5 * v6;
      v9 = *(_OWORD *)v37.m256i_i8;
      v10 = *(_OWORD *)&v37.m256i_u64[2];
      *(_QWORD *)(v7 + 8 * v8 + 32) = v38;
      *(_OWORD *)(v7 + 8 * v8 + 16) = v10;
      *(_OWORD *)(v7 + 8 * v8) = v9;
      *(_QWORD *)(a2 + 16) = v6 + 1;
      uu_test::parser::Parser::peek((__int64)v48, a2);
      if ( v48[0] != 4LL )
        goto LABEL_32;
      v11 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
      if ( v11 == 0x8000000000000001LL )
      {
        v12 = *(_QWORD *)(a2 + 56);
        if ( v12 != *(_QWORD *)(a2 + 72) )
        {
          *(_QWORD *)(a2 + 56) = v12 + 24;
          *(_QWORD *)&v30[16] = *(_QWORD *)(v12 + 16);
          *(_OWORD *)v30 = *(_OWORD *)v12;
          goto LABEL_17;
        }
        v11 = 0x8000000000000000LL;
      }
      else
      {
        *(_OWORD *)&v30[8] = *(_OWORD *)(a2 + 32);
      }
      *(_QWORD *)v30 = v11;
LABEL_17:
      uu_test::parser::Symbol::new((__int64)v46, v30);
      v13 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
      if ( v13 == 0x8000000000000001LL )
      {
        v14 = *(_QWORD *)(a2 + 56);
        if ( v14 == *(_QWORD *)(a2 + 72) )
        {
          *(_QWORD *)v30 = 0x8000000000000000LL;
        }
        else
        {
          *(_QWORD *)(a2 + 56) = v14 + 24;
          *(_QWORD *)&v30[16] = *(_QWORD *)(v14 + 16);
          *(_OWORD *)v30 = *(_OWORD *)v14;
        }
      }
      else
      {
        *(_OWORD *)&v30[8] = *(_OWORD *)(a2 + 32);
        *(_QWORD *)v30 = v13;
      }
      uu_test::parser::Symbol::new((__int64)v39, v30);
      if ( *(_QWORD *)&v39[0] == 6LL )
      {
        v33[0] = v46;
        v33[1] = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
        *(_QWORD *)v30 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        *(_QWORD *)&v30[8] = 1LL;
        *(_QWORD *)&v30[16] = v33;
        v31 = 1LL;
        v32 = 0LL;
        ((void (__fastcall *)(__int128 *, _BYTE *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
          &v49,
          v30,
          v15,
          v16,
          v17,
          v18);
        *(_QWORD *)a1 = 3LL;
        *(_OWORD *)(a1 + 8) = v49;
        *(_QWORD *)(a1 + 24) = v50;
        core::ptr::drop_in_place<uu_test::parser::Symbol>(v39);
        core::ptr::drop_in_place<uu_test::parser::Symbol>(v46);
        core::ptr::drop_in_place<uu_test::parser::Symbol>(v48);
      }
      else
      {
        v45 = v40;
        v44 = v39[1];
        v43 = v39[0];
        switch ( *(_QWORD *)&v39[0] )
        {
          case 0LL:
            v19 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
            break;
          case 1LL:
            v19 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
            break;
          case 2LL:
          case 3LL:
            JUMPOUT(0x936CELL);
          case 4LL:
          case 5LL:
            JUMPOUT(0x936C9LL);
          case 6LL:
            uu_test::parser::Symbol::into_literal::panic_cold_explicit();
        }
        std::sys::os_str::bytes::Slice::to_owned(v30, v19, 1LL);
        v41.m256i_i64[3] = *(_QWORD *)&v30[16];
        *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)v30;
        v41.m256i_i64[0] = 3LL;
        v20 = *(_QWORD *)(a2 + 16);
        if ( v20 == *(_QWORD *)a2 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a2);
        v21 = *(_QWORD *)(a2 + 8);
        v22 = 5 * v20;
        v23 = *(_OWORD *)v41.m256i_i8;
        v24 = *(_OWORD *)&v41.m256i_u64[2];
        *(_QWORD *)(v21 + 8 * v22 + 32) = v42;
        *(_OWORD *)(v21 + 8 * v22 + 16) = v24;
        *(_OWORD *)(v21 + 8 * v22) = v23;
        *(_QWORD *)(a2 + 16) = v20 + 1;
        v36 = v47;
        v35 = v46[1];
        v34 = v46[0];
        if ( v20 + 1 == *(_QWORD *)a2 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a2);
        v25 = *(_QWORD *)(a2 + 8);
        v26 = 5 * (v20 + 1);
        v27 = v34;
        v28 = v35;
        *(_QWORD *)(v25 + 8 * v26 + 32) = v36;
        *(_OWORD *)(v25 + 8 * v26 + 16) = v28;
        *(_OWORD *)(v25 + 8 * v26) = v27;
        *(_QWORD *)(a2 + 16) = v20 + 2;
LABEL_32:
        core::ptr::drop_in_place<uu_test::parser::Symbol>(v48);
        *(_QWORD *)a1 = 7LL;
      }
      return a1;
    case 6LL:
      uu_test::parser::Symbol::into_literal::panic_cold_explicit();
  }
}
