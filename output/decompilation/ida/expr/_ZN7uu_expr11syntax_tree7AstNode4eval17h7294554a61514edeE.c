__int64 __fastcall uu_expr::syntax_tree::AstNode::eval(__int64 a1, _QWORD *a2)
{
  __int64 **v2; // rax
  __int64 **v3; // rbp
  __int64 *v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebp
  __int8 v11; // bl
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rax
  char **v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  __int64 v25; // rdx
  _OWORD *v26; // rcx
  __int128 v27; // xmm0
  __int64 v28; // rdi
  __int64 **v29; // rsi
  __int64 v30; // rdx
  __int128 v31; // xmm0
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rax
  _BYTE *v35; // rdi
  __int128 v36; // xmm0
  __int64 v37; // rax
  __m256i v39; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-298h]
  __int64 v41; // [rsp+28h] [rbp-290h]
  __int64 v42; // [rsp+30h] [rbp-288h] BYREF
  __int64 **v43; // [rsp+38h] [rbp-280h]
  __int64 v44; // [rsp+40h] [rbp-278h]
  _QWORD v45[3]; // [rsp+48h] [rbp-270h] BYREF
  _BYTE v46[40]; // [rsp+60h] [rbp-258h] BYREF
  __m256i v47; // [rsp+88h] [rbp-230h]
  __int64 v48; // [rsp+A8h] [rbp-210h]
  __m256i v49; // [rsp+B0h] [rbp-208h]
  __int64 v50; // [rsp+D0h] [rbp-1E8h]
  __m256i v51; // [rsp+E0h] [rbp-1D8h] BYREF
  __int64 v52; // [rsp+100h] [rbp-1B8h]
  _BYTE v53[40]; // [rsp+110h] [rbp-1A8h] BYREF
  _QWORD *v54; // [rsp+140h] [rbp-178h]
  _OWORD v55[2]; // [rsp+148h] [rbp-170h] BYREF
  __int64 v56; // [rsp+168h] [rbp-150h]
  _BYTE v57[40]; // [rsp+170h] [rbp-148h] BYREF
  __int128 v58; // [rsp+1A0h] [rbp-118h] BYREF
  __int128 v59; // [rsp+1B0h] [rbp-108h]
  __int128 v60; // [rsp+1C0h] [rbp-F8h] BYREF
  __int128 v61; // [rsp+1D0h] [rbp-E8h]
  __int128 v62; // [rsp+1E8h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+1F8h] [rbp-C0h]
  _OWORD v64[2]; // [rsp+200h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+220h] [rbp-98h]
  __m256i v66; // [rsp+230h] [rbp-88h] BYREF
  __int64 v67; // [rsp+250h] [rbp-68h]
  _BYTE v68[88]; // [rsp+260h] [rbp-58h] BYREF

  v41 = a1;
  v2 = (__int64 **)alloc::alloc::Global::alloc_impl(8LL, 8LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v54 = a2;
  *v2 = a2;
  v42 = 1LL;
  v43 = v2;
  v45[0] = 0LL;
  v45[2] = 0LL;
  v44 = 0LL;
  v3 = v2;
  v4 = *v2;
  v5 = **v2;
  v6 = 0LL;
  if ( (unsigned __int64)(v5 + 0x7FFFFFFFFFFFFFFFLL) < 4 )
    v6 = v5 ^ 0x8000000000000000LL;
  v7 = v42;
  switch ( v6 )
  {
    case 0uLL:
LABEL_10:
      v10 = *((_DWORD *)v4 + 8);
      if ( v5 == 0x8000000000000000LL )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v39, v4 + 1);
        *(_OWORD *)v51.m256i_i8 = *(_OWORD *)v39.m256i_i8;
        v11 = v39.m256i_i8[16];
        LODWORD(v55[0]) = *(__int32 *)((char *)&v39.m256i_i32[4] + 1);
        *(_DWORD *)((char *)v55 + 3) = v39.m256i_i32[5];
        v12 = 0x8000000000000000LL;
      }
      else
      {
        v11 = *((_BYTE *)v4 + 24);
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v39, v4[1], v4[2]);
        v12 = v39.m256i_i64[0];
        *(_OWORD *)v51.m256i_i8 = *(_OWORD *)&v39.m256i_u64[1];
      }
      *(_QWORD *)&v46[8] = v12;
      *(_OWORD *)&v46[16] = *(_OWORD *)v51.m256i_i8;
      v46[32] = v11;
      *(_DWORD *)&v46[36] = *(_DWORD *)((char *)v55 + 3);
      *(_DWORD *)&v46[33] = v55[0];
      *(_QWORD *)v46 = 0LL;
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, v45, v10, v46);
      goto LABEL_37;
    case 1uLL:
LABEL_36:
      v24 = *((_DWORD *)v4 + 8);
      <alloc::string::String as core::clone::Clone>::clone(&v39, v4 + 1);
      *(_QWORD *)&v46[32] = v39.m256i_i64[2];
      *(_OWORD *)&v46[16] = *(_OWORD *)v39.m256i_i8;
      *(_QWORD *)&v46[8] = 0x8000000000000000LL;
      *(_QWORD *)v46 = 0LL;
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, v45, v24, v46);
      goto LABEL_37;
    case 2uLL:
LABEL_38:
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&v51, v45, *(unsigned int *)(v4[2] + 32));
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&v39, v45, *(unsigned int *)(v4[1] + 32));
      v13 = v4 + 1;
      *(_QWORD *)&v46[32] = v52;
      *(__m256i *)v46 = v51;
      v48 = v40;
      v47 = v39;
      if ( v51.m256i_i32[0] != 2 && v47.m256i_i64[0] != 2 )
      {
        v65 = *(_QWORD *)&v46[32];
        v64[1] = *(_OWORD *)&v46[16];
        v64[0] = *(_OWORD *)v46;
        v66 = v47;
        v67 = v48;
        uu_expr::syntax_tree::BinOp::eval(
          (__int64)v68,
          *((_DWORD *)v4 + 6),
          *((_BYTE *)v4 + 25),
          (__int64)&v66,
          (__int64)v64);
        alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v46, v45, *((unsigned int *)v4 + 8), v68);
        core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(v46);
        goto LABEL_6;
      }
      core::ptr::drop_in_place<(core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>,core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>)>(v46);
      alloc::vec::Vec<T,A>::push(&v42, v4, &off_14A8A0);
      v17 = &off_14A8D0;
      alloc::vec::Vec<T,A>::push(&v42, v4[2], &off_14A8B8);
      goto LABEL_42;
    case 3uLL:
      while ( 2 )
      {
        alloc::collections::btree::map::BTreeMap<K,V,A>::remove(v55, v45, *(unsigned int *)(v4[1] + 32));
        alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&v51, v45, *(unsigned int *)(v4[2] + 32));
        alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&v39, v45, *(unsigned int *)(v4[3] + 32));
        v13 = v4 + 3;
        *(_QWORD *)&v46[32] = v56;
        *(_OWORD *)&v46[16] = v55[1];
        *(_OWORD *)v46 = v55[0];
        v48 = v52;
        v47 = v51;
        v50 = v40;
        v49 = v39;
        if ( *(_QWORD *)&v55[0] == 2LL || v47.m256i_i64[0] == 2 || v49.m256i_i64[0] == 2 )
        {
          core::ptr::drop_in_place<(core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>,core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>,core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>)>(v46);
          alloc::vec::Vec<T,A>::push(&v42, v4, &off_14A8E8);
          alloc::vec::Vec<T,A>::push(&v42, v4[1], &off_14A900);
          v17 = &off_14A930;
          alloc::vec::Vec<T,A>::push(&v42, v4[2], &off_14A918);
LABEL_42:
          alloc::vec::Vec<T,A>::push(&v42, *v13, v17);
          goto LABEL_6;
        }
        v59 = *(_OWORD *)&v46[24];
        v58 = *(_OWORD *)&v46[8];
        *(__m256i *)v57 = v47;
        *(_QWORD *)&v57[32] = v48;
        *(__m256i *)v53 = v49;
        *(_QWORD *)&v53[32] = v50;
        if ( (v46[0] & 1) != 0 )
        {
          v33 = v58;
          v34 = v41;
          *(_OWORD *)(v41 + 24) = v59;
          *(_OWORD *)(v34 + 8) = v33;
          *(_QWORD *)v34 = 1LL;
          core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(v53);
          v35 = v57;
        }
        else
        {
          uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v51, &v58);
          if ( (v57[0] & 1) == 0 )
          {
            uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v46, &v57[8]);
            if ( *(_DWORD *)v46 == 1 )
            {
              core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(v46);
              v14 = 0LL;
              if ( (v53[0] & 1) != 0 )
              {
LABEL_21:
                v15 = *(_OWORD *)&v53[8];
                v16 = v41;
                *(_OWORD *)(v41 + 24) = *(_OWORD *)&v53[24];
                *(_OWORD *)(v16 + 8) = v15;
                *(_QWORD *)v16 = 1LL;
                core::ptr::drop_in_place<alloc::string::String>(&v51);
                goto LABEL_54;
              }
            }
            else
            {
              v18 = *(_QWORD *)&v46[8];
              *(_OWORD *)v39.m256i_i8 = *(_OWORD *)&v46[16];
              v39.m256i_i64[2] = *(_QWORD *)&v46[32];
              if ( *(_QWORD *)&v46[8] == 0x8000000000000000LL )
              {
                v14 = 0LL;
                if ( (v53[0] & 1) != 0 )
                  goto LABEL_21;
              }
              else
              {
                *(_QWORD *)&v46[24] = v39.m256i_i64[2];
                *(_OWORD *)&v46[8] = *(_OWORD *)v39.m256i_i8;
                *(_QWORD *)v46 = v18;
                v14 = 0LL;
                if ( (uu_expr::syntax_tree::AstNode::eval::{{closure}}(v46) & 1) != 0 )
                  v14 = v25;
                if ( (v53[0] & 1) != 0 )
                  goto LABEL_21;
              }
            }
            uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v46, &v53[8]);
            if ( *(_DWORD *)v46 == 1 )
            {
              core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(v46);
            }
            else
            {
              v19 = *(_QWORD *)&v46[8];
              *(_OWORD *)v39.m256i_i8 = *(_OWORD *)&v46[16];
              v39.m256i_i64[2] = *(_QWORD *)&v46[32];
              if ( *(_QWORD *)&v46[8] != 0x8000000000000000LL )
              {
                *(_QWORD *)&v46[24] = v39.m256i_i64[2];
                *(_OWORD *)&v46[8] = *(_OWORD *)v39.m256i_i8;
                *(_QWORD *)v46 = v19;
                if ( (uu_expr::syntax_tree::AstNode::eval::{{closure}}(v46) & 1) != 0 && v20 != 0 && v14 != 0 )
                {
                  *(_QWORD *)v46 = v51.m256i_i64[1];
                  *(_QWORD *)&v46[8] = v51.m256i_i64[1] + v51.m256i_i64[2];
                  *(_QWORD *)&v46[16] = v14 - 1;
                  *(_QWORD *)&v46[24] = v20;
                  core::iter::traits::iterator::Iterator::collect(&v62, v46);
                  v30 = *((unsigned int *)v4 + 8);
                  *(_QWORD *)&v46[32] = v63;
                  *(_OWORD *)&v46[16] = v62;
                  *(_QWORD *)&v46[8] = 0x8000000000000000LL;
                  *(_QWORD *)v46 = 0LL;
                  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, v45, v30, v46);
                  goto LABEL_31;
                }
              }
            }
            v21 = *((unsigned int *)v4 + 8);
            *(_QWORD *)&v46[8] = 0x8000000000000000LL;
            *(_QWORD *)&v46[16] = 0LL;
            *(_QWORD *)&v46[24] = 1LL;
            *(_QWORD *)&v46[32] = 0LL;
            *(_QWORD *)v46 = 0LL;
            alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, v45, v21, v46);
LABEL_31:
            core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(&v39);
            core::ptr::drop_in_place<alloc::string::String>(&v51);
LABEL_6:
            v8 = v44;
            if ( v44 )
            {
              --v44;
              v7 = v42;
              v3 = v43;
              v4 = v43[v8 - 1];
              v5 = *v4;
              v9 = 0LL;
              if ( (unsigned __int64)(*v4 + 0x7FFFFFFFFFFFFFFFLL) < 4 )
                v9 = *v4 ^ 0x8000000000000000LL;
              switch ( v9 )
              {
                case 0uLL:
                  goto LABEL_10;
                case 1uLL:
                  goto LABEL_36;
                case 2uLL:
                  goto LABEL_38;
                case 3uLL:
                  continue;
                case 4uLL:
                  goto LABEL_32;
              }
            }
            alloc::collections::btree::map::BTreeMap<K,V,A>::remove(v46, v45, *((unsigned int *)v54 + 8));
            if ( *(_DWORD *)v46 == 2 )
              core::option::unwrap_failed(&off_14A978);
            v26 = (_OWORD *)v41;
            *(_QWORD *)(v41 + 32) = *(_QWORD *)&v46[32];
            v27 = *(_OWORD *)v46;
            v26[1] = *(_OWORD *)&v46[16];
            *v26 = v27;
            core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<u32,core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(v45);
            v28 = v42;
            v29 = v43;
            goto LABEL_55;
          }
          v36 = *(_OWORD *)&v57[8];
          v37 = v41;
          *(_OWORD *)(v41 + 24) = *(_OWORD *)&v57[24];
          *(_OWORD *)(v37 + 8) = v36;
          *(_QWORD *)v37 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v51);
          v35 = v53;
        }
        break;
      }
      core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(v35);
LABEL_54:
      core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<u32,core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(v45);
      v28 = v7;
      v29 = v3;
LABEL_55:
      core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v28, v29);
      return v41;
    case 4uLL:
LABEL_32:
      alloc::collections::btree::map::BTreeMap<K,V,A>::remove(v46, v45, *(unsigned int *)(v4[1] + 32));
      if ( *(_QWORD *)v46 == 2LL )
      {
        core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(v46);
        alloc::vec::Vec<T,A>::push(&v42, v4, &off_14A948);
        v17 = &off_14A960;
        v13 = v4 + 1;
        goto LABEL_42;
      }
      v61 = *(_OWORD *)&v46[24];
      v60 = *(_OWORD *)&v46[8];
      if ( (v46[0] & 1) != 0 )
      {
        v31 = v60;
        v32 = v41;
        *(_OWORD *)(v41 + 24) = v61;
        *(_OWORD *)(v32 + 8) = v31;
        *(_QWORD *)v32 = 1LL;
        goto LABEL_54;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v46, &v60);
      v22 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
              *(_QWORD *)&v46[8],
              *(_QWORD *)&v46[8] + *(_QWORD *)&v46[16]);
      core::ptr::drop_in_place<alloc::string::String>(v46);
      v23 = *((_DWORD *)v4 + 8);
      <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v39, v22);
      *(__m256i *)&v46[8] = v39;
      *(_QWORD *)v46 = 0LL;
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v39, v45, v23, v46);
LABEL_37:
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>>(&v39);
      goto LABEL_6;
  }
}