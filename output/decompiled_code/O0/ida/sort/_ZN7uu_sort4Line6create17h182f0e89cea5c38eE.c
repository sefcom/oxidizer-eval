        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // r8
  char v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  char v23; // al
  _QWORD *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r13
  _QWORD *v31; // [rsp+0h] [rbp-A8h]
  __int64 v33; // [rsp+10h] [rbp-98h]
  _QWORD *v34; // [rsp+18h] [rbp-90h]
  _QWORD *v35; // [rsp+20h] [rbp-88h]
  _QWORD *v36; // [rsp+28h] [rbp-80h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  _QWORD *v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h] BYREF
  __int64 v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+68h] [rbp-40h]
  char v45; // [rsp+70h] [rbp-38h]

  v7 = *(_QWORD *)(a6 + 8);
  if ( !v7 || (v7 & 7) != 0 || (v8 = a6, *(_QWORD *)(a6 + 16) > 0x7FFFFFFFFFFFFFFuLL) )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
  *(_QWORD *)(a6 + 16) = 0LL;
  v31 = a5;
  if ( (*(_BYTE *)(a7 + 96) & 1) != 0 )
  {
    v11 = *(unsigned int *)(a7 + 120);
    if ( (_DWORD)v11 == 1114112 )
      uu_sort::tokenize_default(a2, a3, a6);
    else
      uu_sort::tokenize_with_separator(a2, a3, v11, a6);
    a5 = v31;
  }
  v38 = a4;
  v12 = *(_QWORD *)(a7 + 8);
  if ( !v12 || (v12 & 7) != 0 || (v13 = *(_QWORD *)(a7 + 16), v13 >= 0x24924924924924ALL) )
LABEL_37:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  v14 = a2;
  if ( v13 )
  {
    v35 = a5 + 2;
    v39 = a5 + 3;
    v34 = a5 + 6;
    v36 = a5 + 8;
    v15 = 56 * v13;
    v33 = a3;
    v41 = v8;
    do
    {
      v19 = *(_QWORD *)(v8 + 8);
      if ( !v19 || (v19 & 7) != 0 || *(_QWORD *)(v8 + 16) > 0x7FFFFFFFFFFFFFFuLL )
        goto LABEL_37;
      uu_sort::FieldSelector::get_selection(&v42, v12, v14, a3);
      v20 = v45;
      if ( v45 == 5 )
        break;
      v21 = v42;
      v22 = v43;
      v23 = v45 - 2;
      if ( (unsigned __int8)(v45 - 2) >= 3u )
        v23 = 1;
      if ( v23 )
      {
        v24 = v31;
        if ( v23 == 1 )
        {
          v25 = v44;
          v26 = v31[5];
          if ( v26 == v31[3] )
          {
            v40 = v43;
            alloc::raw_vec::RawVec<T,A>::grow_one(v39);
            v22 = v40;
            v24 = v31;
          }
          v27 = v24[4];
          v28 = 16 * v26;
          *(_QWORD *)(v27 + v28) = v25;
          *(_BYTE *)(v27 + v28 + 8) = v20 & 1;
          v24[5] = v26 + 1;
          v29 = v24[2];
          if ( v29 == *v24 )
          {
            alloc::raw_vec::RawVec<T,A>::grow_one(v24);
            v24 = v31;
          }
          v16 = (_QWORD *)(v24[1] + 16 * v29);
          *v16 = v21;
          v17 = v35;
          a3 = v33;
          v14 = a2;
        }
        else
        {
          if ( (*(_BYTE *)(v12 + 55) & 1) == 0 )
            goto LABEL_16;
          v29 = v31[2];
          if ( v29 == *v31 )
          {
            alloc::raw_vec::RawVec<T,A>::grow_one(v31);
            a3 = v33;
            v24 = v31;
          }
          v16 = (_QWORD *)(v24[1] + 16 * v29);
          *v16 = v21;
          v17 = v35;
        }
      }
      else
      {
        v29 = *v36;
        if ( *v36 == *v34 )
        {
          alloc::raw_vec::RawVec<T,A>::grow_one(v34);
          v14 = a2;
        }
        v16 = (_QWORD *)(v31[7] + 16 * v29);
        *v16 = v21;
        v17 = v36;
      }
      v16[1] = v22;
      *v17 = v29 + 1;
LABEL_16:
      v12 += 56LL;
      v18 = v15 == 56;
      v15 -= 56LL;
      v8 = v41;
    }
    while ( !v18 );
  }
  *a1 = v14;
  a1[1] = a3;
  a1[2] = v38;
  return a1;
}
