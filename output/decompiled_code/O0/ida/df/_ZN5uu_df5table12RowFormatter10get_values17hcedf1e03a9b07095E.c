_OWORD *__fastcall uu_df::table::RowFormatter::get_values(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r15
  __int64 v4; // r12
  _BYTE *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rsi
  __int64 *v11; // rcx
  double *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // r13
  _QWORD *v23; // r12
  _BYTE *v24; // rbx
  _BYTE *v25; // r12
  __int64 v26; // rbx
  _OWORD *result; // rax
  __int64 v28; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+8h] [rbp-C0h]
  _BYTE *v30; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-A0h]
  _BYTE *v33; // [rsp+30h] [rbp-98h]
  __int128 v34; // [rsp+38h] [rbp-90h] BYREF
  __int64 v35; // [rsp+48h] [rbp-80h]
  __int128 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  _QWORD *v38; // [rsp+70h] [rbp-58h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  _QWORD v40[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v41[7]; // [rsp+90h] [rbp-38h] BYREF

  v39 = a1;
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = 8LL;
  v35 = 0LL;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE **)(v2 + 8);
  if ( !v3 || (v4 = *(_QWORD *)(v2 + 16), v4 < 0) )
LABEL_39:
    core::panicking::panic_nounwind(
      "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and the to"
      "tal size of the slice not to exceed `isize::MAX`Error message contains invalid UTF-8",
      162LL);
  if ( v4 )
  {
    v6 = &v3[v4];
    v38 = &v30;
    v33 = v6;
    do
    {
      switch ( *v3 )
      {
        case 0:
          v10 = 80LL;
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
            goto LABEL_33;
          goto LABEL_24;
        case 1:
          v13 = 176LL;
          goto LABEL_17;
        case 2:
          v13 = 184LL;
          goto LABEL_17;
        case 3:
          v13 = 192LL;
LABEL_17:
          uu_df::table::RowFormatter::scaled_bytes((__int64)&v31, a2, *(_QWORD *)(*(_QWORD *)a2 + v13));
          goto LABEL_35;
        case 4:
          v11 = *(__int64 **)a2;
          v12 = (double *)(*(_QWORD *)a2 + 8LL);
          goto LABEL_12;
        case 5:
          v10 = 128LL;
          if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
            goto LABEL_24;
          v15 = *(_QWORD *)(a2 + 8);
          v16 = *(_QWORD *)(v15 + 8);
          if ( !v16 )
            goto LABEL_39;
          v17 = *(_QWORD *)(v15 + 16);
          if ( v17 < 0 )
            goto LABEL_39;
          v18 = 0LL;
          break;
        case 6:
          v14 = 32LL;
          goto LABEL_32;
        case 7:
          v14 = 48LL;
          goto LABEL_32;
        case 8:
          v14 = 64LL;
LABEL_32:
          uu_df::table::RowFormatter::scaled_inodes(
            (__int64)&v31,
            a2,
            *(_QWORD *)(*(_QWORD *)a2 + v14),
            *(_QWORD *)(*(_QWORD *)a2 + v14 + 8));
          goto LABEL_35;
        case 9:
          v11 = (__int64 *)(*(_QWORD *)a2 + 16LL);
          v12 = (double *)(*(_QWORD *)a2 + 24LL);
LABEL_12:
          uu_df::table::RowFormatter::percentage((__int64)&v31, *v11, *v12);
          goto LABEL_35;
        case 0xA:
          v20 = *(__int64 **)a2;
          v21 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, 1LL, 0LL);
          v22 = v29;
          if ( v28 )
            goto LABEL_38;
          v23 = v20 + 19;
          v24 = v30;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_21F8E, v30, 1LL, 1LL, 1LL);
          *v24 = 45;
          v40[0] = v22;
          v40[1] = v24;
          v41[0] = 1LL;
          if ( v21 == 0x8000000000000000LL )
            v23 = v40;
          <alloc::string::String as core::clone::Clone>::clone(&v31, v23);
          alloc::raw_vec::RawVec<T,A>::current_memory(&v28, v40);
          v6 = v33;
          if ( v29 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v41, v28, v29, v30);
          goto LABEL_35;
        case 0xB:
          v10 = 104LL;
          goto LABEL_24;
      }
      while ( v17 != v18 )
      {
        if ( *(_BYTE *)(v16 + v18++) == 0 )
        {
LABEL_24:
          <alloc::string::String as core::clone::Clone>::clone(&v31, *(_QWORD *)a2 + v10);
          goto LABEL_35;
        }
      }
LABEL_33:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, 5LL, 0LL);
      v22 = v29;
      if ( v28 )
LABEL_38:
        alloc::raw_vec::handle_error(v22, *v38);
      v25 = v30;
      core::intrinsics::copy_nonoverlapping::precondition_check(aTotal, v30, 1LL, 1LL, 5LL);
      v25[4] = 108;
      *(_DWORD *)v25 = 1635020660;
      *(_QWORD *)&v31 = v22;
      *((_QWORD *)&v31 + 1) = v25;
      v32 = 5LL;
      v6 = v33;
LABEL_35:
      v37 = v32;
      v36 = v31;
      v26 = v35;
      if ( v35 == (_QWORD)v34 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
      ++v3;
      v7 = *((_QWORD *)&v34 + 1);
      v8 = 3 * v26;
      v9 = v36;
      *(_QWORD *)(*((_QWORD *)&v34 + 1) + 8 * v8 + 16) = v37;
      *(_OWORD *)(v7 + 8 * v8) = v9;
      v35 = v26 + 1;
    }
    while ( v3 != v6 );
  }
  result = (_OWORD *)v39;
  *(_QWORD *)(v39 + 16) = v35;
  *result = v34;
  return result;
}
