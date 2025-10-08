__int64 __fastcall bat::controller::Controller::print_file_ranges(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(_BYTE *, __int64, __int64),
        void (__fastcall *a5)(_BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbx
  char v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  char v29; // [rsp+6h] [rbp-112h]
  char v30; // [rsp+7h] [rbp-111h]
  __int64 v31; // [rsp+8h] [rbp-110h]
  int v32; // [rsp+14h] [rbp-104h]
  __int64 v33; // [rsp+20h] [rbp-F8h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  __int128 v35; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-D0h]
  __int64 v38; // [rsp+50h] [rbp-C8h]
  __int64 v39; // [rsp+58h] [rbp-C0h]
  _BYTE v40[80]; // [rsp+60h] [rbp-B8h] BYREF
  void (__fastcall *v41)(_BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // [rsp+B0h] [rbp-68h]
  __int64 v42; // [rsp+B8h] [rbp-60h]
  _QWORD v43[2]; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-48h]
  void (__fastcall *v45)(_BYTE *, __int64, __int64); // [rsp+E0h] [rbp-38h]

  v38 = a6;
  v41 = a5;
  v45 = a4;
  v37 = a3;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 1LL;
  v36 = 0LL;
  v9 = *(_QWORD *)(a8 + 40) + 1LL;
  v44 = 0LL;
  v43[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v9, 8LL, 32LL, &off_6CE3A8);
  v43[1] = v10;
  v11 = bat::style::StyleComponents::snip(a2 + 192);
  v29 = v11;
  v30 = v11 ^ 1;
  LOBYTE(v11) = 1;
  v32 = v11;
  v34 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 1LL;
  while ( 1 )
  {
    do
    {
      if ( (v13 & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_32;
LABEL_8:
        if ( v12 >= v9 )
          break;
        continue;
      }
      bat::input::InputReader::read_line(v40, a7, &v35);
      if ( v40[0] == 1 )
      {
        v21 = *(_QWORD *)&v40[8];
        *(_BYTE *)a1 = 0;
        *(_QWORD *)(a1 + 8) = v21;
        goto LABEL_33;
      }
      if ( v40[1] == 1 )
      {
        *(_QWORD *)&v40[16] = v36;
        *(_OWORD *)v40 = v35;
        *(_QWORD *)&v35 = 0LL;
        *((_QWORD *)&v35 + 1) = 1LL;
        v36 = 0LL;
        *(_QWORD *)&v40[24] = v14;
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(v43, v40);
        ++v14;
        v12 = *((_QWORD *)&v44 + 1);
        goto LABEL_8;
      }
      v13 = 1;
      if ( v12 >= v9 )
        break;
    }
    while ( (v13 & 1) == 0 );
    alloc::collections::vec_deque::VecDeque<T,A>::pop_front(v40, v43);
    v31 = *(_QWORD *)&v40[8];
    v33 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<(alloc::vec::Vec<u8>,usize)>>(
        0x8000000000000000LL,
        *(_QWORD *)&v40[8]);
LABEL_32:
      *(_BYTE *)a1 = 13;
      goto LABEL_33;
    }
    v39 = *(_QWORD *)&v40[24];
    v42 = *(_QWORD *)&v40[16];
    v12 = *((_QWORD *)&v44 + 1);
    v15 = alloc::collections::vec_deque::VecDeque<T,A>::get(v43, *((_QWORD *)&v44 + 1) - 1LL);
    if ( v15 )
    {
      v16 = v13 & 1;
      v8 = *(_QWORD *)(v15 + 24);
    }
    else
    {
      v16 = 2LL;
    }
    if ( v16 == 2 )
    {
      v8 = v39;
      v16 = 1LL;
    }
    v17 = bat::line_range::LineRanges::check(a8, v39, v16, v8);
    if ( !v17 )
      break;
    if ( v17 != 1 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v31);
      goto LABEL_32;
    }
    v41(v40, v37, 1LL, v38, v39, v31, v42, v16, v8);
    if ( v40[0] != 13 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v40[64];
      v26 = *(_OWORD *)v40;
      v27 = *(_OWORD *)&v40[16];
      v28 = *(_OWORD *)&v40[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v40[48];
      *(_OWORD *)(a1 + 32) = v28;
      *(_OWORD *)(a1 + 16) = v27;
      *(_OWORD *)a1 = v26;
      goto LABEL_35;
    }
    v34 = 0LL;
LABEL_27:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v31);
  }
  v18 = v32;
  v19 = v34;
  if ( (((unsigned __int8)v34 | (unsigned __int8)(v32 | v30)) & 1) != 0 )
  {
    LOBYTE(v19) = v32 & v29 | v34;
    v34 = v19;
    LOBYTE(v18) = v30 & v32;
    v32 = v18;
  }
  else
  {
    v45(v40, v37, v38);
    v20 = v40[0];
    if ( v40[0] != 13 )
      goto LABEL_30;
    LOBYTE(v20) = 1;
    v34 = v20;
    v32 = 0;
  }
  v41(v40, v37, 0LL, v38, v39, v31, v42, v16, v8);
  LOBYTE(v20) = v40[0];
  if ( v40[0] == 13 )
    goto LABEL_27;
LABEL_30:
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v40[64];
  v22 = *(_OWORD *)&v40[1];
  v23 = *(_OWORD *)&v40[17];
  v24 = *(_OWORD *)&v40[33];
  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v40[49];
  *(_OWORD *)(a1 + 33) = v24;
  *(_OWORD *)(a1 + 17) = v23;
  *(_OWORD *)(a1 + 1) = v22;
  *(_BYTE *)a1 = v20;
LABEL_35:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v31);
LABEL_33:
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<(alloc::vec::Vec<u8>,usize)>>(v43);
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v35, *((_QWORD *)&v35 + 1));
}