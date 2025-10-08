__int64 __fastcall just::evaluator::Evaluator::evaluate_condition(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int8 v5; // al
  __int8 v6; // r14
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int8 v11; // r14
  __int128 v12; // xmm0
  __int128 v13; // [rsp+0h] [rbp-198h] BYREF
  __int64 v14; // [rsp+10h] [rbp-188h]
  __int128 v15; // [rsp+20h] [rbp-178h] BYREF
  __int64 v16; // [rsp+30h] [rbp-168h]
  __m256i v17; // [rsp+38h] [rbp-160h] BYREF
  __int128 v18; // [rsp+58h] [rbp-140h]
  __int128 v19; // [rsp+68h] [rbp-130h]
  __int128 v20; // [rsp+78h] [rbp-120h]
  __int128 v21; // [rsp+88h] [rbp-110h]
  __int64 v22; // [rsp+98h] [rbp-100h]
  __m256i v23; // [rsp+A0h] [rbp-F8h] BYREF
  __m256i v24; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-B8h]
  _BYTE v26[23]; // [rsp+F2h] [rbp-A6h]
  __int64 v27; // [rsp+109h] [rbp-8Fh]
  __int64 v28; // [rsp+111h] [rbp-87h]
  _BYTE v29[23]; // [rsp+119h] [rbp-7Fh]
  __int64 v30; // [rsp+130h] [rbp-68h]
  __int64 v31; // [rsp+138h] [rbp-60h]
  __m256i v32; // [rsp+140h] [rbp-58h] BYREF
  __m256i v33; // [rsp+160h] [rbp-38h] BYREF

  just::evaluator::Evaluator::evaluate_expression((__int64)&v17, a2, *(__int64 **)a3);
  result = v17.m256i_u8[0];
  if ( v17.m256i_i8[0] == 56 )
  {
    v13 = *(_OWORD *)&v17.m256i_u64[1];
    v14 = v17.m256i_i64[3];
    just::evaluator::Evaluator::evaluate_expression((__int64)&v17, a2, *(__int64 **)(a3 + 8));
    v5 = v17.m256i_i8[0];
    if ( v17.m256i_i8[0] == 56 )
    {
      v15 = *(_OWORD *)&v17.m256i_u64[1];
      v16 = v17.m256i_i64[3];
      switch ( *(_BYTE *)(a3 + 16) )
      {
        case 0:
          v6 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                 *((_QWORD *)&v13 + 1),
                 v14,
                 *((_QWORD *)&v15 + 1),
                 v16);
          goto LABEL_13;
        case 1:
          v11 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                  *((_QWORD *)&v13 + 1),
                  v14,
                  *((_QWORD *)&v15 + 1),
                  v16);
          goto LABEL_12;
        case 2:
          regex::regex::string::Regex::new(&v32, *((_QWORD *)&v15 + 1), v16);
          if ( v32.m256i_i64[0] )
          {
            v23 = v32;
            v17.m256i_i32[0] = 0;
            v17.m256i_i64[1] = *((_QWORD *)&v13 + 1);
            *(_OWORD *)&v17.m256i_u64[2] = (unsigned __int64)v14;
            *(_QWORD *)&v18 = v14;
            BYTE8(v18) = 1;
            regex_automata::util::search::Input::set_span(&v17);
            v25 = v18;
            v24 = v17;
            regex_automata::meta::regex::Regex::search_half(&v17, v23.m256i_i64[0], v23.m256i_i64[1], &v24);
            v6 = v17.m256i_i8[0];
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v23);
            goto LABEL_13;
          }
          v27 = v32.m256i_i64[3];
          *(_OWORD *)&v26[7] = *(_OWORD *)&v32.m256i_u64[1];
          *(_QWORD *)(a1 + 32) = v28;
          *(_DWORD *)(a1 + 17) = *(_DWORD *)&v26[16];
          *(_WORD *)(a1 + 21) = *(_WORD *)&v26[20];
          *(_BYTE *)(a1 + 23) = v26[22];
          *(_QWORD *)(a1 + 24) = v27;
          *(_BYTE *)(a1 + 32) = v28;
          v12 = *(_OWORD *)v26;
          goto LABEL_18;
        case 3:
          regex::regex::string::Regex::new(&v33, *((_QWORD *)&v15 + 1), v16);
          if ( v33.m256i_i64[0] )
          {
            v23 = v33;
            v17.m256i_i32[0] = 0;
            v17.m256i_i64[1] = *((_QWORD *)&v13 + 1);
            *(_OWORD *)&v17.m256i_u64[2] = (unsigned __int64)v14;
            *(_QWORD *)&v18 = v14;
            BYTE8(v18) = 1;
            regex_automata::util::search::Input::set_span(&v17);
            v25 = v18;
            v24 = v17;
            regex_automata::meta::regex::Regex::search_half(&v17, v23.m256i_i64[0], v23.m256i_i64[1], &v24);
            v11 = v17.m256i_i8[0];
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v23);
LABEL_12:
            v6 = v11 ^ 1;
LABEL_13:
            *(_BYTE *)(a1 + 1) = v6;
            *(_BYTE *)a1 = 56;
          }
          else
          {
            v30 = v33.m256i_i64[3];
            *(_OWORD *)&v29[7] = *(_OWORD *)&v33.m256i_u64[1];
            *(_QWORD *)(a1 + 32) = v31;
            *(_DWORD *)(a1 + 17) = *(_DWORD *)&v29[16];
            *(_WORD *)(a1 + 21) = *(_WORD *)&v29[20];
            *(_BYTE *)(a1 + 23) = v29[22];
            *(_QWORD *)(a1 + 24) = v30;
            *(_BYTE *)(a1 + 32) = v31;
            v12 = *(_OWORD *)v29;
LABEL_18:
            *(_OWORD *)(a1 + 1) = v12;
            *(_BYTE *)a1 = 39;
          }
          core::ptr::drop_in_place<alloc::string::String>(&v15);
          break;
      }
    }
    else
    {
      v9 = v18;
      v10 = v19;
      *(_OWORD *)((char *)&v24.m256i_u64[1] + 7) = *(_OWORD *)&v17.m256i_u64[2];
      *(_OWORD *)v24.m256i_i8 = *(_OWORD *)&v17.m256i_i8[1];
      *(_QWORD *)(a1 + 96) = v22;
      *(_OWORD *)(a1 + 80) = v21;
      *(_OWORD *)(a1 + 64) = v20;
      *(_OWORD *)(a1 + 48) = v10;
      *(_OWORD *)(a1 + 32) = v9;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v24.m256i_u64[1] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v24.m256i_i8;
      *(_BYTE *)a1 = v5;
    }
    return core::ptr::drop_in_place<alloc::string::String>(&v13);
  }
  else
  {
    v7 = v18;
    v8 = v19;
    *(_OWORD *)((char *)&v24.m256i_u64[1] + 7) = *(_OWORD *)&v17.m256i_u64[2];
    *(_OWORD *)v24.m256i_i8 = *(_OWORD *)&v17.m256i_i8[1];
    *(_QWORD *)(a1 + 96) = v22;
    *(_OWORD *)(a1 + 80) = v21;
    *(_OWORD *)(a1 + 64) = v20;
    *(_OWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v24.m256i_u64[1] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v24.m256i_i8;
    *(_BYTE *)a1 = result;
  }
  return result;
}